
undefined4 FUN_00036f2c(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  while ((iVar1 = FUN_0001e29c(iVar2), iVar1 == 0 || (iVar1 = FUN_00036e7c(iVar2), iVar1 != 0))) {
    iVar2 = iVar2 + 1;
    if (iVar2 == 4) {
      return 1;
    }
  }
  return 0;
}

