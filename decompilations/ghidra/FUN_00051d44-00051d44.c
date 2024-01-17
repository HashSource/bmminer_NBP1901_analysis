
undefined4 FUN_00051d44(undefined param_1,undefined4 *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  
  if (param_2 == (undefined4 *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0;
    *param_2 = 0;
    *(undefined *)(param_2 + 1) = 0;
    *(undefined *)((int)param_2 + 2) = param_1;
    *(undefined *)((int)param_2 + 1) = 5;
    *(undefined *)param_2 = 0x40;
    bVar1 = FUN_00051f28(param_2,0x20);
    *(byte *)(param_2 + 1) = *(byte *)(param_2 + 1) & 0xe0 | bVar1 & 0x1f;
  }
  return uVar2;
}

