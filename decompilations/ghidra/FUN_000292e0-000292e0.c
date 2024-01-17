
char * FUN_000292e0(undefined4 param_1,int *param_2,int param_3,int param_4)

{
  char *pcVar1;
  
  pcVar1 = (char *)FUN_0003d4f0();
  if (pcVar1 == (char *)0x0) {
    pcVar1 = (char *)0x0;
    if (param_4 < *param_2 || *param_2 < param_3) {
      pcVar1 = "Value out of range";
    }
    return pcVar1;
  }
  return pcVar1;
}

