import idautils
import idaapi
import idc
import ida_hexrays

import http.client
import json
import traceback


def ida_func_string_count(func_ea):
    func = idaapi.get_func(func_ea)
    if not func:
        print(f"Function at {hex(func_ea)} is not found.")
        return None

    function_string_count = 0

    dism_addr = func.start_ea
    while dism_addr <= func.end_ea:
        # Check if the address contains a data reference to a string
        data_ref = idaapi.get_first_dref_from(dism_addr)
        if data_ref != idaapi.BADADDR:
            string = idc.get_strlit_contents(data_ref)
            if string:
                function_string_count += 1

        # Move to the next disassembly line
        dism_addr = idc.next_head(dism_addr, func.end_ea)

    return function_string_count


def send_refactor_request(data):
    connection = http.client.HTTPConnection("localhost", 9090)

    headers = {"Content-Type": "text/plain", "Content-Length": len(data)}
    connection.request("POST", "/", body=data, headers=headers)

    response = connection.getresponse()
    if response.status != 200:
        print(f"Status: {response.status}")
        print(f"Reason: {response.reason}")
        return None

    response_data = response.read()
    return response_data.decode()


print("Requesting Functions")
binary_functions = idautils.Functions()

FUNC_STRINGS_COUNT = []

print("Get The String Count Of All Functions")
for func_ea in binary_functions:
    func_string_count = ida_func_string_count(func_ea)
    if func_string_count is not None:
        func_map = {"func_ea": func_ea, "func_string_count": func_string_count}
        FUNC_STRINGS_COUNT.append(func_map)

# print("Sort Mapping By Functions With Highest String Count")
FUNC_STRINGS_COUNT_SORTED = sorted(
    FUNC_STRINGS_COUNT, key=lambda mapping: mapping["func_string_count"], reverse=True
)

total_functions_to_process = 0
for func_map in FUNC_STRINGS_COUNT_SORTED:
    func_ea = func_map["func_ea"]
    func_name = idc.get_func_name(func_ea)

    if "sub_" in func_name:
        total_functions_to_process += 1
    else:
        continue
print(f"Total Functions To Process {total_functions_to_process}")

print("Processing Functions")
for func_map in FUNC_STRINGS_COUNT_SORTED:
    func_ea = func_map["func_ea"]
    func_name = idc.get_func_name(func_ea)

    # Process Only Useful Functions
    if "sub_" not in func_name:
        continue

    try:
        print(f"Decompiling: {func_name}")
        cfunc = ida_hexrays.decompile(func_ea)
        print(f"Decompiled: {func_name}")
        cfunc_string = str(cfunc)

        func_lvar_count = len(cfunc.get_lvars())
        if func_lvar_count == 0:
            print(f"Skipping Func: {func_name} - No Local Variables")
            continue

        ida_hexrays.init_hexrays_plugin()
        vdui = ida_hexrays.open_pseudocode(func_ea, 0)

        print(f"Request: {func_name}")
        mapping = send_refactor_request(cfunc_string)
        if mapping is not None:
            json_map = json.loads(mapping)
            print(json_map)

            # Rename Function
            new_function_name = json_map[func_name]
            if idc.set_name(func_ea, new_function_name, idc.SN_NOWARN):
                print(f"Renamed Func: {func_name} -> {new_function_name}")

            # The rename function needs the start address of the function
            function_start_addr = idaapi.get_func(func_ea).start_ea

            # Iterate through function local variables
            for lvar in cfunc.get_lvars():
                if len(lvar.name) > 0:
                    # Rename Local Variables
                    old_local_variable_name = lvar.name
                    new_local_variable_name = json_map[lvar.name]

                    if ida_hexrays.rename_lvar(
                        function_start_addr,
                        old_local_variable_name,
                        new_local_variable_name,
                    ):
                        print(
                            f"Renamed Func: {new_function_name}: LVar: {old_local_variable_name} -> {new_local_variable_name}"
                        )

        # Refresh the window to show the new names
        if vdui:
            vdui.refresh_view(True)

    except Exception as error:
        print(f"Error: {error}")
        # traceback.print_exc()
        continue
