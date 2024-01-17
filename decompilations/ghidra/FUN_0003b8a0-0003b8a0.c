
undefined4 FUN_0003b8a0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  char acStack_810 [2052];
  
  iVar1 = FUN_0001e0f0();
  if (iVar1 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = 0;
    iVar4 = 0;
    piVar3 = (int *)(param_2 + param_1 * 0x400 + -4);
    do {
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 1;
      iVar5 = iVar5 + *piVar3;
    } while (iVar1 != iVar4);
  }
  uVar2 = FUN_0001e0f0();
  uVar2 = FUN_0005f880(iVar5,uVar2);
  if (4 < DAT_0007eb9c) {
    snprintf(acStack_810,0x800,"chain = %d, freq_avg = %d\n",param_1,uVar2);
    FUN_0002e584(4,acStack_810,0);
  }
  return uVar2;
}

