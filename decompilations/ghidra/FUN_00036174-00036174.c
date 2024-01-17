
undefined4 * FUN_00036174(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  char acStack_808 [2048];
  
  FUN_000356c4(0xf,0xff);
  if (3 < DAT_0007eb9c) {
    snprintf(acStack_808,0x800,"Unknown miner type(%d).\n",2);
    FUN_0002e584(3,acStack_808,0);
  }
  uVar2 = DAT_00067380;
  uVar1 = DAT_0006737c;
  *param_1 = DAT_00067378;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  return param_1;
}

