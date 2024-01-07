
uint FUN_0004c540(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0x14);
  if (uVar1 == 0) {
    uVar1 = FUN_0004c3b8();
  }
  if (1 < uVar1 + 2) {
    FUN_0004dab0(param_1 + 0x28,uVar1 & 0xff);
  }
  return uVar1;
}

