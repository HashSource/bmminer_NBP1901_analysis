
undefined4 FUN_00051d98(uint param_1,undefined param_2,undefined param_3,undefined4 *param_4)

{
  byte bVar1;
  undefined4 uVar2;
  
  if (param_4 == (undefined4 *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0;
    *param_4 = 0;
    if (param_1 != 0) {
      param_1 = 1;
    }
    *(undefined *)((int)param_4 + 3) = param_3;
    *(undefined *)((int)param_4 + 2) = param_2;
    *(undefined *)(param_4 + 1) = 0;
    *(undefined *)((int)param_4 + 1) = 5;
    *(byte *)param_4 = (byte)((param_1 & 1) << 4) | 0x42;
    bVar1 = FUN_00051f28(param_4,0x20);
    *(byte *)(param_4 + 1) = *(byte *)(param_4 + 1) & 0xe0 | bVar1 & 0x1f;
  }
  return uVar2;
}

