
undefined4 FUN_00036680(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  char acStack_838 [2052];
  
  if (4 < DAT_0007eb9c) {
    snprintf(acStack_838,0x800,"[DEBUG] Check if is unbalanche happen, chain = %d\n",param_1);
    FUN_0002e584(4,acStack_838,0);
  }
  iVar1 = FUN_0001e0f0();
  if (iVar1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    iVar3 = 0;
    do {
      while( true ) {
        iVar6 = param_1 * 0x100 + iVar3 + 0x202402;
        uVar5 = *(uint *)(DAT_004fcb34 + iVar6 * 4);
        iVar2 = FUN_0001e130();
        if (uVar5 <= (uint)(iVar2 * 8)) break;
        uVar4 = 1;
        if (DAT_0007eb9c < 4) goto LAB_00036700;
LAB_0003676c:
        iVar2 = iVar3 + 1;
        snprintf(acStack_838,0x800,"Unbalance happened: chain = %d, asic = %d\n",param_1,iVar3);
        uVar4 = 1;
        FUN_0002e584(3,acStack_838,0);
        iVar3 = iVar2;
        if (iVar1 == iVar2) {
          return 1;
        }
      }
      uVar5 = *(uint *)(DAT_004fcb34 + iVar6 * 4);
      iVar2 = FUN_0001e130();
      if (((double)(ulonglong)uVar5 < (double)(longlong)(iVar2 << 3) * 0.75) &&
         (uVar4 = 1, 3 < DAT_0007eb9c)) goto LAB_0003676c;
LAB_00036700:
      iVar3 = iVar3 + 1;
    } while (iVar1 != iVar3);
  }
  return uVar4;
}

