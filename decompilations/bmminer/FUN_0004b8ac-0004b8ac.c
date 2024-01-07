
void FUN_0004b8ac(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *(int *)(param_1 + 0x10);
  if (*(int *)(param_1 + 0x10) != param_1 + 0xc) {
    do {
      iVar2 = *(int *)(iVar4 + 0x14);
      iVar5 = *(int *)(iVar4 + 4);
      if ((iVar2 != 0) && (piVar3 = (int *)(iVar2 + 4), *(int *)(iVar2 + 4) != -1)) {
        DataMemoryBarrier(0xb);
        do {
          iVar2 = *piVar3;
          bVar1 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar1);
        *piVar3 = iVar2 + -1;
        if (iVar2 + -1 == 0) {
          FUN_0004eb6c();
        }
      }
      FUN_0004d898(iVar4);
      iVar4 = iVar5;
    } while (iVar5 != param_1 + 0xc);
    return;
  }
  return;
}

