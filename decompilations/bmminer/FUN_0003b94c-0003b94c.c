
uint FUN_0003b94c(int param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  char acStack_818 [2048];
  
  uVar5 = 0xffffff;
  iVar3 = 0;
  do {
    iVar1 = FUN_0001e29c(iVar3);
    if ((iVar1 != 0) && (param_1 == 0xff || param_1 == iVar3)) {
      iVar4 = 0;
      iVar1 = FUN_0001e0f0();
      if (iVar1 != 0) {
        puVar2 = (uint *)(param_2 + -4 + iVar3 * 0x400);
        do {
          puVar2 = puVar2 + 1;
          iVar4 = iVar4 + 1;
          if (*puVar2 <= uVar5) {
            uVar5 = *puVar2;
          }
        } while (iVar1 != iVar4);
      }
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 4);
  if (4 < DAT_0007eb9c) {
    snprintf(acStack_818,0x800,"chain = %d, freq_min = %d\n",param_1,uVar5);
    FUN_0002e584(4,acStack_818,0);
  }
  return uVar5;
}

