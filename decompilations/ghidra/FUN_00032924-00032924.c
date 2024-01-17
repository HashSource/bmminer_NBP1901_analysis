
void FUN_00032924(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  char acStack_810 [2052];
  
  FUN_0001ed08();
  FUN_000304d4(10);
  uVar1 = FUN_0001e0f0();
  do {
    uVar1 = uVar1 - 1 & 0xff;
    if (uVar1 == 0) {
      return;
    }
    FUN_0001e9b4(param_1,uVar1);
    FUN_0002be40(param_1,0);
    iVar2 = FUN_0001e67c(param_1);
  } while (iVar2 < 1);
  if (DAT_0007eb9c < 4) {
    return;
  }
  snprintf(acStack_810,0x800,"bad asic is %d\n",uVar1);
  FUN_0002e584(3,acStack_810,0);
  return;
}

