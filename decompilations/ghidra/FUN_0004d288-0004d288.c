
int FUN_0004d288(int param_1,uint param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  *(undefined4 *)(param_1 + 0x38) = 0;
  FUN_0004c5cc(param_1,param_3);
  if (((param_2 & 4) == 0) && ((*(uint *)(param_1 + 0x3c) & 0xffffffdf) != 0x5b)) {
    FUN_0004c0cc(param_3,param_1,8,"\'[\' or \'{\' expected");
    return 0;
  }
  iVar2 = FUN_0004cde4(param_1,param_2,param_3);
  if (iVar2 != 0) {
    if (((param_2 & 2) != 0) || (FUN_0004c5cc(param_1,param_3), *(int *)(param_1 + 0x3c) == 0)) {
      if (param_3 == 0) {
        return iVar2;
      }
      *(undefined4 *)(param_3 + 8) = *(undefined4 *)(param_1 + 0x24);
      return iVar2;
    }
    FUN_0004c0cc(param_3,param_1,7,"end of file expected");
    if (*(int *)(iVar2 + 4) != -1) {
      piVar4 = (int *)(iVar2 + 4);
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar4;
        bVar1 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar1);
      *piVar4 = iVar3 + -1;
      if (iVar3 + -1 == 0) {
        FUN_0004eb6c(iVar2);
        return 0;
      }
    }
  }
  return 0;
}

