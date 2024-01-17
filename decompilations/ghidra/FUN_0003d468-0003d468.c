
void FUN_0003d468(char *param_1,long *param_2)

{
  int *piVar1;
  long lVar2;
  char *local_14;
  
  piVar1 = __errno_location();
  *piVar1 = 0;
  lVar2 = strtol(param_1,&local_14,0);
  *param_2 = lVar2;
  if ((*local_14 == '\0') && (*param_1 != '\0')) {
    if (*piVar1 != 0) {
      FUN_0003d2b4("\'%s\' is out of range",param_1);
      return;
    }
  }
  else {
    FUN_0003d2b4("\'%s\' is not a number",param_1);
  }
  return;
}

