
int FUN_0001e7bc(uint param_1)

{
  int iVar1;
  
  if (((uint)(DAT_0058dfbc <= (int)param_1) | param_1 >> 0x1f) != 0) {
    return -0x7ffffbff;
  }
  if ((DAT_0058e010 == 0) && (iVar1 = FUN_0001b398(), iVar1 < 0)) {
    return iVar1;
  }
  return *(int *)(DAT_0058e018 + param_1 * 0x210 + 4);
}

