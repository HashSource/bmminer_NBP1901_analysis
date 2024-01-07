
undefined4 FUN_00014ed0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = FUN_00014434();
    if (iVar1 <= iVar2) {
      return 0;
    }
    iVar1 = iVar2 * 4;
    iVar2 = iVar2 + 1;
  } while ((*(int *)(DAT_0007f7b4 + iVar1) != param_1) || (iVar1 = FUN_0001e170(), iVar1 == 0));
  return 1;
}

