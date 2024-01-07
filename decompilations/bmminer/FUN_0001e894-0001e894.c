
int FUN_0001e894(uint param_1,char *param_2)

{
  int iVar1;
  
  if (((int)param_1 < DAT_0058dfbc) && (((uint)(param_2 == (char *)0x0) | param_1 >> 0x1f) == 0)) {
    iVar1 = 0;
    if ((DAT_0058e010 == 0) && (iVar1 = FUN_0001b398(), iVar1 < 0)) {
      return iVar1;
    }
    snprintf(param_2,0x200,"%s",DAT_0058e018 + param_1 * 0x210 + 0x10);
  }
  else {
    iVar1 = -0x7ffffbff;
  }
  return iVar1;
}

