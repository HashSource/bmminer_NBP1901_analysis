
void FUN_0002f258(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  char acStack_818 [2052];
  
  piVar1 = __errno_location();
  snprintf(acStack_818,0x800,"Failed to sem_post errno=%d cgsem=0x%p in %s %s():%d",*piVar1,param_1,
           param_2,param_3,param_4);
  FUN_0002e584(3,acStack_818,1);
  FUN_0002a574(1);
  return;
}

