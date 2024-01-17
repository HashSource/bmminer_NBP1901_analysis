
undefined4 FUN_00039fb4(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  char acStack_808 [2048];
  
  if (4 < DAT_0007eb9c) {
    snprintf(acStack_808,0x800,"[DEBUG] Board init, is_power_off = %d.\n",param_1);
    FUN_0002e584(4,acStack_808,0);
  }
  uVar3 = 0;
  do {
    iVar1 = FUN_0001e29c(uVar3);
    if (iVar1 != 0) {
      thunk_FUN_0005198c(uVar3 & 0xff);
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 != 4);
  FUN_0003345c();
  uVar2 = FUN_00033e34();
  FUN_000304d4(10);
  FUN_000281b8();
  FUN_000304d4(10);
  return uVar2;
}

