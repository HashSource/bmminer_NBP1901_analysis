
undefined4 FUN_0002cdfc(uint param_1,uint param_2,undefined4 param_3,uint param_4)

{
  undefined4 uVar1;
  bool bVar2;
  bool bVar3;
  
  bVar3 = 0xfe < param_2;
  bVar2 = param_2 == 0xff;
  if (param_2 < 0x100) {
    bVar3 = 2 < param_1;
    bVar2 = param_1 == 3;
  }
  if (!bVar3 || bVar2) {
    param_2 = param_2 + param_1 * 0x100;
  }
  if (!bVar3 || bVar2) {
    param_4 = 0x1118;
  }
  if (!bVar3 || bVar2) {
    param_4 = param_4 & 0xffff | 0x80000;
  }
  if (!bVar3 || bVar2) {
    param_2 = param_2 + 4;
  }
  if (!bVar3 || bVar2) {
    uVar1 = *(undefined4 *)(param_4 + param_2 * 4);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

