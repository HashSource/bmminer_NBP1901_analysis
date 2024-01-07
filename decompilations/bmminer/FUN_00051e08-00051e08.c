
undefined4 FUN_00051e08(undefined4 *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0;
    *param_1 = 0;
    *(undefined *)(param_1 + 1) = 0;
    *(undefined *)((int)param_1 + 1) = 5;
    *(undefined *)param_1 = 0x53;
    bVar1 = FUN_00051f28(param_1,0x20);
    *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) & 0xe0 | bVar1 & 0x1f;
  }
  return uVar2;
}

