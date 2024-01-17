
undefined4 FUN_0004f494(int *param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  if (param_2 != (int *)0x0) {
    if ((param_1 == (int *)0x0) || (*param_1 != 1 || param_2 == param_1)) {
      if (param_2[1] == -1) {
        return 0xffffffff;
      }
      piVar3 = param_2 + 1;
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar3 + -1;
        bVar1 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar1);
      *piVar3 = iVar2;
    }
    else {
      iVar2 = FUN_0004e0b8(param_1,1);
      if (iVar2 != 0) {
        iVar2 = param_1[3];
        *(int **)(param_1[4] + iVar2 * 4) = param_2;
        param_1[3] = iVar2 + 1;
        return 0;
      }
      if (param_2[1] == -1) {
        return 0xffffffff;
      }
      piVar3 = param_2 + 1;
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar3 + -1;
        bVar1 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar1);
      *piVar3 = iVar2;
    }
    if (iVar2 == 0) {
      FUN_0004eb6c(param_2);
      return 0xffffffff;
    }
  }
  return 0xffffffff;
}

