
int FUN_0001e4c0(undefined4 param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = param_3 >> 0x1f;
  if (DAT_0058dfbc <= (int)param_3) {
    uVar2 = 1;
  }
  if (uVar2 == 0) {
    if (DAT_0058e010 == 0) {
      iVar1 = FUN_0001b398(param_3);
      if (iVar1 < 0) {
        return iVar1;
      }
    }
    else {
      iVar1 = 0;
    }
    iVar3 = DAT_0058e018 + param_3 * 0x210;
    *(undefined4 *)(iVar3 + 8) = param_1;
    *(undefined4 *)(iVar3 + 0xc) = param_2;
    return iVar1;
  }
  return -0x7ffffbff;
}

