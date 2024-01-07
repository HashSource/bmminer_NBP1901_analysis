
int FUN_0005de60(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 8) == 0) {
    return 0;
  }
  piVar1 = *(int **)(param_1 + 4);
  if (*piVar1 != 0) {
    return *piVar1;
  }
  iVar2 = 0;
  do {
    iVar2 = iVar2 + 1;
    if (iVar2 == *(int *)(param_1 + 8)) {
      return 0;
    }
    piVar1 = piVar1 + 1;
  } while (*piVar1 == 0);
  return *piVar1;
}

