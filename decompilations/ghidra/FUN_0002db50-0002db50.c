
void FUN_0002db50(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
                 )

{
  char acStack_810 [2048];
  
  if (*param_2 != *param_1) {
    snprintf(acStack_810,0x800,"List %s can\'t %s() a %s item - from %s %s() line %d in %s %s():%d",
             *param_1,DAT_0002dc20,*param_2,param_3,param_4,param_5,"klist.c",DAT_0002dc20,0xcd);
    FUN_0002e584(3,acStack_810,1);
    FUN_0002a574(1);
  }
  param_2[1] = 0;
  param_2[2] = param_1[3];
  if (param_1[3] != 0) {
    *(int **)(param_1[3] + 4) = param_2;
  }
  param_1[3] = (int)param_2;
  if ((*(char *)(param_1 + 0xb) != '\0') && (param_1[4] == 0)) {
    param_1[4] = (int)param_2;
  }
  param_1[7] = param_1[7] + 1;
  param_1[8] = param_1[8] + 1;
  return;
}

