
void FUN_0004bec0(int param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = *(int *)(param_1 + 0xc);
  if ((iVar2 != 0) && (*(int *)(iVar2 + 4) != -1)) {
    piVar3 = (int *)(iVar2 + 4);
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar2 + -1;
    if (iVar2 + -1 == 0) {
      FUN_0004eb6c();
      *(undefined4 *)(param_1 + 0xc) = param_2;
      return;
    }
  }
  *(undefined4 *)(param_1 + 0xc) = param_2;
  return;
}

