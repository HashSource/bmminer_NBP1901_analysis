
char * FUN_00028d9c(undefined4 param_1,int *param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)FUN_0003d4f0();
  if (pcVar1 != (char *)0x0) {
    return pcVar1;
  }
  pcVar1 = (char *)0x0;
  if (0xfffe < *param_2 - 1U) {
    pcVar1 = "Value out of range";
  }
  return pcVar1;
}

