
double FUN_0001e52c(uint param_1)

{
  int iVar1;
  
  if (((uint)(DAT_0058dfbc <= (int)param_1) | param_1 >> 0x1f) != 0) {
    return DAT_0001e598;
  }
  if ((DAT_0058e010 == 0) && (iVar1 = FUN_0001b398(), iVar1 < 0)) {
    return (double)(longlong)iVar1;
  }
  return *(double *)(DAT_0058e018 + param_1 * 0x210 + 8);
}

