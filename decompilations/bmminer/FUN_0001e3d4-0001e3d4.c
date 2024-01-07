
int FUN_0001e3d4(uint param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = param_1 >> 0x1f;
  if (DAT_0058e004 <= (int)param_1) {
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
    *(undefined4 *)(DAT_0058e020 + param_1 * 8 + 4) = param_2;
    return iVar1;
  }
  return -0x7ffffbff;
}

