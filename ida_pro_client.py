import idautils
import idaapi
import idc
import ida_name
import ida_hexrays

import http.client
import json
import traceback


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


def SetLvarName(func_ea, lvar, name):
    lsi = ida_hexrays.lvar_saved_info_t()
    lsi.ll = lvar
    lsi.name = name
    ida_hexrays.modify_user_lvar_info(func_ea, ida_hexrays.MLI_NAME, lsi)


print("Requesting Functions")
binary_functions = idautils.Functions()

print("Processing Functions")
for func_ea in binary_functions:
    func_name = idc.get_func_name(func_ea)

    if func_name != "sub_19074":
        continue

    try:
        print(f"Decompiling: {func_name}")
        cfunc = ida_hexrays.decompile(func_ea)
        cfunc_string = str(cfunc)

        ida_hexrays.init_hexrays_plugin()
        vdui = ida_hexrays.open_pseudocode(func_ea, 0)

        print(f"Request: {func_name}")
        mapping = send_refactor_request(cfunc_string)
        if mapping is not None:
            json_map = json.loads(mapping)
            print(json_map)

            # Iterate through function local variables
            for lvar in cfunc.get_lvars():
                if len(lvar.name) > 0:
                    # TODO: Rename Local Variables
                    new_local_variable_name = json_map[lvar.name]
                    # SetLvarName(func_ea, lvar, new_local_variable_name)
                    # lvar.name = new_local_variable_name
                    # vdui.rename_lvar(lvar, new_local_variable_name, True)

            # TODO: Rename Function
            # new_function_name = json_map[func_name]
            # idc.set_name(func_ea, new_function_name, idc.SN_NOWARN)

            # TODO: Notify Decompiler Of Function Modifications
            # cfunc.build_c_tree()
            # cfunc.refresh_func_ctext()

            # TODO: Update Decompiler View
            # if ida_hexrays.init_hexrays_plugin():
            # vdui = ida_hexrays.open_pseudocode(func_ea, 0)
            # if vdui:
            # vdui.refresh_view(True)
            # vdui.refresh_view(False)
            # vdui.refresh_view(False)

    except Exception as error:
        print(f"Error: {error}")
        continue
        # traceback.print_exc()
