
void FUN_0001ec84(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 extraout_r1;
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  
  uVar2 = 0;
  uVar1 = param_2;
  do {
    uVar3 = FUN_0001e29c(uVar2,uVar1);
    uVar1 = (int)((ulonglong)uVar3 >> 0x20);
    if (((int)uVar3 != 0) && (uVar1 = param_2, param_1 == uVar2 || param_1 == 0xff)) {
      FUN_0004fef0(uVar2 & 0xff,param_2,param_3,param_4);
      uVar1 = extraout_r1;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 != 4);
  return;
}

