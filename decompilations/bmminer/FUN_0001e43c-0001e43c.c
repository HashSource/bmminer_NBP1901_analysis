
int FUN_0001e43c(uint param_1)

{
  int iVar1;
  
  if (((uint)(DAT_0058e004 <= (int)param_1) | param_1 >> 0x1f) != 0) {
    return -0x7ffffbff;
  }
  if ((DAT_0058e010 == 0) && (iVar1 = FUN_0001b398(), iVar1 < 0)) {
    return iVar1;
  }
  return *(int *)(DAT_0058e020 + param_1 * 8 + 4);
}

