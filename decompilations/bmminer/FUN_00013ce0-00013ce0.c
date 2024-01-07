
void FUN_00013ce0(uint param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  char acStack_820 [2048];
  
  uVar3 = 0;
  while( true ) {
    uVar1 = FUN_0001e2fc();
    uVar4 = uVar3 & 0xff;
    if (uVar1 <= uVar3) break;
    uVar1 = FUN_0003ff08(uVar4);
    if (-1 < (int)uVar1) {
      if (4 < DAT_0007eb9c) {
        snprintf(acStack_820,0x800,"fan[%u] speed[%u]\n",uVar4,uVar1);
        FUN_0002e584(4,acStack_820,0);
      }
      FUN_0001e3d4(uVar4,uVar1);
      if ((9999 < (int)uVar1) || (uVar2 = 1, uVar1 < param_1)) {
        uVar2 = 0;
      }
      FUN_0001e350(uVar4,uVar2);
    }
    uVar3 = uVar3 + 1;
  }
  return;
}

