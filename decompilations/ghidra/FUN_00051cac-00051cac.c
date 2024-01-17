
undefined4
FUN_00051cac(uint param_1,undefined param_2,undefined param_3,undefined4 param_4,undefined4 *param_5
            )

{
  byte bVar1;
  undefined4 uVar2;
  
  if (param_5 == (undefined4 *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0;
    *param_5 = 0;
    if (param_1 != 0) {
      param_1 = 1;
    }
    *(undefined *)((int)param_5 + 3) = param_3;
    *(char *)((int)param_5 + 7) = (char)param_4;
    *(undefined *)((int)param_5 + 2) = param_2;
    *(char *)(param_5 + 1) = (char)((uint)param_4 >> 0x18);
    *(char *)((int)param_5 + 5) = (char)((uint)param_4 >> 0x10);
    *(char *)((int)param_5 + 6) = (char)((uint)param_4 >> 8);
    *(undefined *)(param_5 + 2) = 0;
    *(byte *)param_5 = (byte)((param_1 & 1) << 4) | 0x41;
    *(undefined *)((int)param_5 + 1) = 9;
    bVar1 = FUN_00051f28(param_5,0x40);
    *(byte *)(param_5 + 2) = *(byte *)(param_5 + 2) & 0xe0 | bVar1 & 0x1f;
  }
  return uVar2;
}

