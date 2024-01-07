
void FUN_0002deb8(int *param_1,int *param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  char acStack_818 [2052];
  
  if (*param_2 != *param_1) {
    snprintf(acStack_818,0x800,"List %s can\'t %s() a %s item - from %s %s() line %d in %s %s():%d",
             *param_1,DAT_0002e008,*param_2,param_4,param_5,param_6,"klist.c",DAT_0002e008,0x11e);
    FUN_0002e584(3,acStack_818,1);
    FUN_0002a574(1);
  }
  if (param_3 == 0) {
    snprintf(acStack_818,0x800,
             "%s() (%s) can\'t after a null item - from %s %s() line %d in %s %s():%d",DAT_0002e008,
             *param_1,param_4,param_5,param_6,"klist.c",DAT_0002e008,0x123);
    FUN_0002e584(3,acStack_818,1);
    FUN_0002a574(1);
  }
  param_2[1] = param_3;
  param_2[2] = *(int *)(param_3 + 8);
  if (*(int *)(param_3 + 8) == 0) {
    if (*(char *)(param_1 + 0xb) != '\0') {
      param_1[4] = (int)param_2;
    }
  }
  else {
    *(int **)(*(int *)(param_3 + 8) + 4) = param_2;
  }
  *(int **)(param_3 + 8) = param_2;
  param_1[7] = param_1[7] + 1;
  param_1[8] = param_1[8] + 1;
  return;
}

