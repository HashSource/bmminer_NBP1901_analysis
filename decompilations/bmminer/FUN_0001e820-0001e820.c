
int FUN_0001e820(uint param_1,int param_2,undefined param_3)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = param_1 >> 0x1f;
  if (DAT_0058dfbc <= (int)param_1) {
    uVar2 = 1;
  }
  if (uVar2 == 0) {
    if (DAT_0058e010 == 0) {
      iVar1 = FUN_0001b398(param_1);
      if (iVar1 < 0) {
        return iVar1;
      }
    }
    else {
      iVar1 = 0;
    }
    *(undefined *)(DAT_0058e018 + param_1 * 0x210 + param_2 + 0x10) = param_3;
    return iVar1;
  }
  return -0x7ffffbff;
}

