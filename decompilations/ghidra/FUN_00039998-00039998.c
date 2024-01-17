
undefined4 FUN_00039998(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  while ((iVar1 = FUN_0001e29c(iVar2), iVar1 == 0 || (iVar1 = FUN_000397a0(iVar2), iVar1 != 1))) {
    iVar2 = iVar2 + 1;
    if (iVar2 == 4) {
      return 0;
    }
  }
  return 1;
}

