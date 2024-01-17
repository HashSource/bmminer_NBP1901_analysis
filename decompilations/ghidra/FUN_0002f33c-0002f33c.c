
void FUN_0002f33c(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  char acStack_810 [2052];
  
  piVar1 = __errno_location();
  snprintf(acStack_810,0x800,"WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",*piVar1,"util.c",
           param_1,param_2);
  FUN_0002e584(3,acStack_810,1);
  FUN_0002a574(1);
  return;
}

