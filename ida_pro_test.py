import idautils
import idaapi
import idc
import ida_name
import ida_hexrays


def find_strings_in_function(func_ea):
    func = idaapi.get_func(func_ea)
    if not func:
        print(f"Function at {hex(func_ea)} is not found.")
        return

    function_strings = []

    dism_addr = func.start_ea
    while dism_addr <= func.end_ea:
        # Check if the address contains a data reference to a string
        data_ref = idaapi.get_first_dref_from(dism_addr)
        if data_ref != idaapi.BADADDR:
            string = idc.get_strlit_contents(data_ref)
            if string:
                string_decoded = string.decode()

                # Check if the string has already been found in this function
                if string_decoded in function_strings:
                    continue
                else:
                    function_strings.append(string_decoded)

                print(
                    f"String found in {idaapi.get_func_name(func_ea)} at {hex(dism_addr)}: {string_decoded}"
                )

        # Move to the next disassembly line
        dism_addr = idc.next_head(dism_addr, func.end_ea)


def rename_function(func_ea, new_name):
    idc.set_name(func_ea, new_name, idc.SN_NOWARN)

    # Update Decompiler View
    if ida_hexrays.init_hexrays_plugin():
        vdui = ida_hexrays.open_pseudocode(func_ea, 0)
        if vdui:
            vdui.refresh_view(True)


# Iterate over all functions in the binary
for func_ea in idautils.Functions():
    func_name = idc.get_func_name(func_ea)

    if func_name != "checkFrontFanStatus":
        continue

    cfunc = ida_hexrays.decompile(func_ea)

    # Iterate through local variables
    for lvar in cfunc.get_lvars():
        print(lvar)
        print(f"Local Variable: {lvar.name}: {len(lvar.name)}")
        # print(f"Type: {lvar.type}")
        # print(f"Size: {lvar.size}")
        # print(f"Offset: {lvar.offset}")

    # rename_function(func_ea, "checkFrontFanStatusTEST")

    # find_strings_in_function(func_ea)
