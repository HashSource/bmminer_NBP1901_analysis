
void FUN_0002e268(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
                 )

{
  int iVar1;
  char acStack_818 [2048];
  
  if (*param_1 != *param_2) {
    snprintf(acStack_818,0x800,
             "List %s can\'t %s() to a %s list - from %s %s() line %d in %s %s():%d",*param_1,
             DAT_0002e3d0,*param_2,param_3,param_4,param_5,"klist.c",DAT_0002e3d0,0x170);
    FUN_0002e584(3,acStack_818,1);
    FUN_0002a574(1);
  }
  if (*(char *)(param_1 + 0xb) == '\0') {
    snprintf(acStack_818,0x800,
             "List %s can\'t %s() - do_tail is false - from %s %s() line %d in %s %s():%d",*param_1,
             DAT_0002e3d0,param_3,param_4,param_5,"klist.c",DAT_0002e3d0,0x175);
    FUN_0002e584(3,acStack_818,1);
    FUN_0002a574(1);
  }
  iVar1 = param_1[3];
  if (iVar1 != 0) {
    if (param_2[4] == 0) {
      param_2[3] = iVar1;
      iVar1 = 0;
    }
    else {
      *(int *)(param_2[4] + 8) = iVar1;
      iVar1 = param_2[4];
    }
    *(int *)(param_1[3] + 4) = iVar1;
    param_2[4] = param_1[4];
    param_1[4] = 0;
    param_1[3] = 0;
    param_2[7] = param_2[7] + param_1[7];
    param_1[7] = 0;
    param_2[8] = param_2[8] + param_1[8];
    param_1[8] = 0;
  }
  return;
}

