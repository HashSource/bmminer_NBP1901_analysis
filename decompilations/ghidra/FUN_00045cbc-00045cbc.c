
undefined4 FUN_00045cbc(int param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_00044540(param_2);
  FUN_00040314(0xf);
  uVar2 = 0;
  if (param_1 == 0) {
    uVar2 = uVar1 & 0x3f;
  }
  else if (param_1 == 1) {
    uVar2 = (uVar1 & 0x3f) << 8;
  }
  else if (param_1 == 2) {
    uVar2 = (uVar1 & 0x3f) << 0x10;
  }
  else if (param_1 == 3) {
    uVar2 = (uVar1 & 0x3f) << 0x18;
  }
  FUN_00040390(0xf,uVar2);
  return 0;
}

