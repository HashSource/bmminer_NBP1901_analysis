
ulonglong FUN_0005f880(uint param_1,uint param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  if (param_2 - 1 == 0) {
    return CONCAT44(param_2,param_1);
  }
  if (param_2 == 0) {
    uVar1 = raise(8);
    return (ulonglong)uVar1;
  }
  if (param_1 <= param_2) {
    return CONCAT44(param_2,(uint)(param_1 == param_2));
  }
  if ((param_2 & param_2 - 1) == 0) {
    return CONCAT44(param_2,param_1 >> (0x1fU - LZCOUNT(param_2) & 0xff));
  }
                    /* WARNING: Could not recover jumptable at 0x0005f8b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*(code *)(&UNK_0005f8b8 + (0x1f - (LZCOUNT(param_2) - LZCOUNT(param_1))) * 0x10))
                    (param_1,param_2,0);
  return uVar2;
}

