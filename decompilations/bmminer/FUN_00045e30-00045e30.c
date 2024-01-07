
undefined4 FUN_00045e30(void)

{
  uint uVar1;
  
  uVar1 = FUN_00044540();
  FUN_00040314(0xf);
  uVar1 = uVar1 & 0x3f;
  FUN_00040390(0xf,uVar1 | uVar1 << 8 | uVar1 << 0x10 | uVar1 << 0x18);
  return 0;
}

