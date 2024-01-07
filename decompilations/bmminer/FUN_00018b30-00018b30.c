
char FUN_00018b30(uint param_1)

{
  char cVar1;
  
  if ((DAT_0007f814 != 0) && (param_1 < 5)) {
    cVar1 = *(char *)(DAT_0007f814 + param_1 + 0x10);
    if (cVar1 != '\0') {
      cVar1 = '\x01';
    }
    return cVar1;
  }
  return '\0';
}

