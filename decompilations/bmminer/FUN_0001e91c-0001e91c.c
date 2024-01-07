
undefined4 FUN_0001e91c(uint param_1)

{
  ushort *puVar1;
  
  if (DAT_0058e038 < 1) {
    return 0;
  }
  if (*DAT_0058e03c != param_1) {
    puVar1 = DAT_0058e03c;
    do {
      puVar1 = puVar1 + 1;
      if (puVar1 == DAT_0058e03c + DAT_0058e038) {
        return 0;
      }
    } while (*puVar1 != param_1);
  }
  return 1;
}

