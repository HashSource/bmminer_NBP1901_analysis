
undefined4 FUN_00032010(uint param_1)

{
  int iVar1;
  char acStack_808 [2040];
  
  iVar1 = FUN_000191dc(param_1 & 0xff);
  if (iVar1 != 0) {
    FUN_00019214();
    thunk_FUN_00046900(param_1 & 0xff);
    return 0;
  }
  if (3 < DAT_0007eb9c) {
    snprintf(acStack_808,0x800,"Chain %d PIC reset failed.\n",param_1);
    FUN_0002e584(3,acStack_808,0);
  }
  FUN_0001e200(param_1,0);
  FUN_000356c4(4,param_1);
  FUN_00031d58(8,"PIC reset failed.\n");
  return 0xffffffff;
}

