
void FUN_0002dc24(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
                 )

{
  int iVar1;
  char acStack_818 [2052];
  
  if (*param_2 != *param_1) {
    snprintf(acStack_818,0x800,"List %s can\'t %s() a %s item - from %s %s() line %d in %s %s():%d",
             *param_1,DAT_0002dd6c,*param_2,param_3,param_4,param_5,"klist.c",DAT_0002dd6c,0xec);
    FUN_0002e584(3,acStack_818,1);
    FUN_0002a574(1);
  }
  if (*(char *)(param_1 + 0xb) == '\0') {
    snprintf(acStack_818,0x800,
             "List %s can\'t %s() - do_tail is false - from %s %s() line %d in %s %s():%d",*param_1,
             DAT_0002dd6c,param_3,param_4,param_5,"klist.c",DAT_0002dd6c,0xf1);
    FUN_0002e584(3,acStack_818,1);
    FUN_0002a574(1);
  }
  iVar1 = param_1[4];
  param_2[2] = 0;
  param_2[1] = iVar1;
  if (param_1[4] != 0) {
    *(int **)(param_1[4] + 8) = param_2;
  }
  param_1[4] = (int)param_2;
  if (param_1[3] == 0) {
    param_1[3] = (int)param_2;
  }
  param_1[7] = param_1[7] + 1;
  param_1[8] = param_1[8] + 1;
  return;
}

