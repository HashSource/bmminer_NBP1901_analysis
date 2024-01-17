
char * FUN_0003dacc(undefined4 param_1,int *param_2)

{
  char *pcVar1;
  
  pcVar1 = (char *)FUN_0003d754();
  while( true ) {
    if (pcVar1 == (char *)0x0) {
      return (char *)0x0;
    }
    if (*pcVar1 == '-') break;
    pcVar1 = (char *)FUN_0003d83c(pcVar1,param_1,param_2);
  }
  *param_2 = *param_2 + -1;
  return pcVar1 + 1;
}

