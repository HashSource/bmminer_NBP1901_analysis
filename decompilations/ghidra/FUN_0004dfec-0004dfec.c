
undefined4 FUN_0004dfec(int param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  
  if (param_2 != 0) {
    uVar3 = 0;
    uVar2 = param_2;
    do {
      uVar1 = FUN_0004de1c(*(undefined *)(param_1 + uVar3),uVar2);
      if (uVar1 == 0) {
        return 0;
      }
      uVar2 = uVar1;
      if (1 < uVar1) {
        if (param_2 - uVar3 < uVar1) {
          return 0;
        }
        uVar4 = FUN_0004de88(param_1 + uVar3,uVar1,0);
        uVar2 = (uint)((ulonglong)uVar4 >> 0x20);
        uVar3 = (uVar1 + uVar3) - 1;
        if ((int)uVar4 == 0) {
          return 0;
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < param_2);
  }
  return 1;
}

