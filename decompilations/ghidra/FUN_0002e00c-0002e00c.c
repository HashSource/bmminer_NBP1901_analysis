
void FUN_0002e00c(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
                 )

{
  int iVar1;
  char acStack_810 [2048];
  
  if (*param_2 != *param_1) {
    snprintf(acStack_810,0x800,"List %s can\'t %s() a %s item - from %s %s() line %d in %s %s():%d",
             *param_1,DAT_0002e0f4,*param_2,param_3,param_4,param_5,"klist.c",DAT_0002e0f4,0x138);
    FUN_0002e584(3,acStack_810,1);
    FUN_0002a574(1);
  }
  iVar1 = param_2[2];
  if (param_2[1] != 0) {
    *(int *)(param_2[1] + 8) = iVar1;
    iVar1 = param_2[2];
  }
  if (iVar1 != 0) {
    *(int *)(iVar1 + 4) = param_2[1];
  }
  if ((int *)param_1[3] == param_2) {
    param_1[3] = param_2[2];
  }
  if ((*(char *)(param_1 + 0xb) != '\0') && ((int *)param_1[4] == param_2)) {
    param_1[4] = param_2[1];
  }
  param_2[2] = 0;
  param_2[1] = 0;
  param_1[7] = param_1[7] + -1;
  return;
}

