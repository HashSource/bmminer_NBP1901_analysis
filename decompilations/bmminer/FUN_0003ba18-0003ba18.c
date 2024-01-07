
uint FUN_0003ba18(int param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  char acStack_818 [2048];
  
  uVar4 = 0;
  iVar3 = 0;
  do {
    iVar1 = FUN_0001e29c(iVar3);
    if ((iVar1 != 0) && (param_1 == 0xff || param_1 == iVar3)) {
      iVar5 = 0;
      iVar1 = FUN_0001e0f0();
      if (iVar1 != 0) {
        puVar2 = (uint *)(param_2 + -4 + iVar3 * 0x400);
        do {
          puVar2 = puVar2 + 1;
          iVar5 = iVar5 + 1;
          if (uVar4 < *puVar2) {
            uVar4 = *puVar2;
          }
        } while (iVar1 != iVar5);
      }
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 4);
  if (4 < DAT_0007eb9c) {
    snprintf(acStack_818,0x800,"chain = %d, freq_max = %d\n",param_1,uVar4);
    FUN_0002e584(4,acStack_818,0);
  }
  return uVar4;
}

