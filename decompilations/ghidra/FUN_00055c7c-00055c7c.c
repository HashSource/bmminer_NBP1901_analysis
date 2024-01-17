
undefined4 FUN_00055c7c(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = *(int **)(param_1 + 0x448);
  if (0 < piVar3[1]) {
    iVar4 = 0;
    do {
      iVar1 = iVar4 * 4;
      iVar4 = iVar4 + 1;
      uVar2 = FUN_0005babc(*(undefined4 *)(*piVar3 + iVar1),param_2);
      piVar3 = *(int **)(param_1 + 0x448);
    } while (iVar4 < piVar3[1]);
    return uVar2;
  }
  return 0;
}

