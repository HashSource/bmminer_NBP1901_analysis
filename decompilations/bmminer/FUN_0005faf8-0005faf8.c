
ulonglong FUN_0005faf8(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  if (param_2 == 0) {
    uVar2 = raise(8);
    return (ulonglong)uVar2;
  }
  uVar3 = param_1 ^ param_2;
  uVar2 = param_2;
  if ((int)param_2 < 0) {
    uVar2 = -param_2;
  }
  if (uVar2 - 1 == 0) {
    if ((int)param_2 < 0) {
      param_1 = -param_1;
    }
    return CONCAT44(uVar2,param_1);
  }
  uVar1 = param_1;
  if ((int)param_1 < 0) {
    uVar1 = -param_1;
  }
  if (uVar1 <= uVar2) {
    if (uVar1 < uVar2) {
      param_1 = 0;
    }
    if (uVar1 == uVar2) {
      param_1 = (int)uVar3 >> 0x1f | 1;
    }
    return CONCAT44(uVar2,param_1);
  }
  if ((uVar2 & uVar2 - 1) == 0) {
    uVar1 = uVar1 >> (0x1fU - LZCOUNT(uVar2) & 0xff);
    if ((int)uVar3 < 0) {
      uVar1 = -uVar1;
    }
    return CONCAT44(uVar2,uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0005fb38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (*(code *)(&UNK_0005fb40 + (0x1f - (LZCOUNT(uVar2) - LZCOUNT(uVar1))) * 0x10))(0);
  return uVar4;
}

