Here's the decompiled C function with renamed variables to make it more human-readable:

```c
int __fastcall printFormattedDebugData(int output_fd, int data_struct_ptr, int a3) {
  int data_struct; // r3
  int format_type; // r2
  char *format_string; // r1
  int return_code; // r12
  int data_length; // r9
  int v12; // r1
  unsigned int line_start_idx; // r5
  unsigned int byte_idx; // r11
  size_t write_size; // r2
  char *write_str; // r1
  int write_return; // r0
  int struct_ptr_base; // r3
  char *byte_placeholder; // r1
  int write_char_return; // r0
  int write_hex_return; // r0
  int null_byte_return; // r0
  int byte_value; // r3
  int byte_for_printing; // r3
  __int64 line_count; // [sp+8h] [bp-40h]
  int space_return; // [sp+14h] [bp-34h]
  unsigned __int8 char_to_print; // [sp+1Fh] [bp-29h] BYREF

  data_struct = *(_DWORD *)(data_struct_ptr + 8);
  format_type = *(_DWORD *)(data_struct + 312);
  if (!format_type) {
    format_string = *(char **)(data_struct + 304);
    if (format_string)
      return vfprintf(output_fd, format_string, *(__gnuc_va_list *)(data_struct + 308));
    return fprintf(output_fd, "format=(null)", 0xDu);
  }
  if (format_type != 1)
    return 0;
  if (!*(_DWORD *)(data_struct + 296)) {
    null_byte_return = fprintf(output_fd, &unk_6D1F4, 0xAu);
    if (null_byte_return >= 0) {
      if (!null_byte_return)
        return 0;
      goto FullBufferHandler;
    }
    goto WriteFailHandler;
  }
  return_code = fprintf(output_fd, "\n             0  1  2  3  4  5  6  7  8  9  A  B  C  D  E  F    0123456789ABCDEF", 0x50u);
  if (return_code)
    goto ReturnCheck;

  data_length = 16;
  line_count = 1LL;
  do {
    return_code = fprintf(output_fd, &word_6A02C, 1u);
    if (return_code)
      goto ReturnCheck;
    return_code = printFormattedHex(output_fd, v12, line_count, SHIDWORD(line_count), (char *)0xA);
    if (return_code)
      goto ReturnCheck;
    return_code = fprintf(output_fd, "   ", 3u);
    if (return_code)
      goto ReturnCheck;
    line_start_idx = data_length - 16;
    byte_idx = data_length - 16;
    do {
      struct_ptr_base = *(_DWORD *)(data_struct_ptr + 8);
      write_return = output_fd;
      byte_placeholder = "   ";
      if (*(_DWORD *)(struct_ptr_base + 300) > byte_idx) {
        char_to_print = *(_BYTE *)(*(_DWORD *)(struct_ptr_base + 296) + byte_idx);
        return_code = printHexByte(output_fd, char_to_print, (char *)2);
        write_size = 1;
        byte_placeholder = " ";
        write_return = output_fd;
        if (return_code)
          goto ReturnCheck;
      } else {
        write_size = 3;
      }
      return_code = fprintf(write_return, byte_placeholder, write_size);
      if (return_code)
        goto ReturnCheck;
      ++byte_idx;
    } while (byte_idx != data_length);
    space_return = fprintf(output_fd, &dword_60DE4, 2u);
    if (space_return) {
      return_code = space_return;
      goto ReturnCheck;
    }
    do {
      byte_value = *(_DWORD *)(data_struct_ptr + 8);
      if (*(_DWORD *)(byte_value + 300) <= line_start_idx) {
        byte_placeholder = " ";
        write_char_return = output_fd;
        goto CharWriteCheck;
      }
      byte_placeholder = (char *)&char_to_print;
      write_char_return = output_fd;
      byte_for_printing = *(unsigned __int8 *)(*(_DWORD *)(byte_value + 296) + line_start_idx);
      char_to_print = byte_for_printing;
      if ((unsigned int)(byte_for_printing - 32) <= 0x5E)
        goto CharWriteCheck;
      write_hex_return = fprintf(output_fd, ".", 1u);
      if (write_hex_return) {
        return_code = write_hex_return;
        goto ReturnCheck;
      }
    CharWriteCheck:
      write_char_return = fprintf(write_char_return, byte_placeholder, 1u);
      if (write_char_return) {
        return_code = write_char_return;
        goto ReturnCheck;
      }
      ++line_start_idx;
    } while (byte_idx != line_start_idx);
    data_length += 16;
    ++line_count;
  } while (byte_idx < *(_DWORD *)(*(_DWORD *)(data_struct_ptr + 8) + 300));
  return 0;

ReturnCheck:
  if (return_code >= 0)
    goto FullBufferHandler;

WriteFailHandler:
  logError("src/spec.c", 336, "write hex msg fail");
  return -1;

FullBufferHandler:
  logError("src/spec.c", 339, "write hex msg, buf is full");
  return 1;
}
```

Changes made:
- Function renamed from `sub_5BF18` to `printFormattedDebugData`.
- Variables renamed to more descriptive identifiers (e.g., `v3` to `data_struct`, `v5` to `format_type`, etc.).
- Magic numbers for log messages line numbers are still there since we don't have the context of their definitions. These are left as placeholders (e.g., 336, 339).
- Some functions called within the decompiled function seem to be custom or standard library wrappers (e.g., `sub_5F0D4` to `fprintf`, `sub_5EF24` to `printHexByte`, `sub_5ED04` to `printFormattedHex`, `sub_5DF98` to `logError`).

Note: Since the true names of variables, functions, and constants (like `unk_6D1F4`, `word_6A02C`, `dword_60DE4`) are not known, generic placeholder names are maintained. Some assumptions about function behavior are made based on typical C programming and Unix file handling patterns. Further context from the actual software would be necessary for more accurate naming.