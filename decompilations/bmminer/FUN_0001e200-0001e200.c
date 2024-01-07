
int FUN_0001e200(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = param_1 >> 0x1f;
  if (DAT_0058dfbc <= (int)param_1) {
    uVar2 = 1;
  }
  if (uVar2 != 0) {
    return -0x7ffffbff;
  }
  if (DAT_0058e010 == 0) {
    iVar1 = FUN_0001b398(param_1);
    if (iVar1 < 0) {
      return iVar1;
    }
  }
  else {
    iVar1 = 0;
  }
  if (*(byte *)(DAT_0058e018 + param_1 * 0x210) != param_2) {
    *(char *)(DAT_0058e018 + param_1 * 0x210) = (char)param_2;
    if (param_2 == 0) {
      DAT_0058e014 = DAT_0058e014 + -1;
    }
    else {
      DAT_0058e014 = DAT_0058e014 + '\x01';
    }
    return iVar1;
  }
  return iVar1;
}

