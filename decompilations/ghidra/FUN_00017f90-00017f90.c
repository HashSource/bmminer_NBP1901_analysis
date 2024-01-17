
undefined4 FUN_00017f90(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  while ((iVar1 = FUN_0001e29c(iVar2), iVar1 == 0 ||
         (*(char *)(DAT_0007f814 + iVar2 + 0x14) != '\0'))) {
    iVar2 = iVar2 + 1;
    if (iVar2 == 4) {
      return 1;
    }
  }
  return 0;
}

