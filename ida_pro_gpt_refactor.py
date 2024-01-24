# IDEA
# Get All Function Names from binary
# Get All Strings from binary
# Find String Count In Each Function
# Order Functions By (String Count)
# Use OpenAI GPT-4 to summarize functions with the most strings
# Send the Refactored function back to IDA Pro Decompiler, With Renamed Function Names, And Function Variables

import idautils

functions = {idaapi.get_func_name(func_ea): func_ea for func_ea in idautils.Functions()}

strings = list(idautils.Strings())

string_count_in_function = {}
for func_name, func_ea in functions.items():
    func = idaapi.get_func(func_ea)
    count = sum(1 for string in strings if func.start_ea <= string.ea < func.end_ea)
    string_count_in_function[func_name] = count

sorted_functions = sorted(string_count_in_function.items(), key=lambda x: x[1], reverse=True)

# for func_name, string_count in sorted_functions:
    # print(f"{func_name}: {string_count}")


for string in strings:
    print(f"{string}: {string.ea}")
