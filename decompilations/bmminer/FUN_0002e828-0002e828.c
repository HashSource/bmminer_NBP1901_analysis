
void FUN_0002e828(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  char acStack_808 [2048];
  
  iVar1 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_0059450c);
  if (iVar1 == 0) {
    return;
  }
  piVar2 = __errno_location();
  snprintf(acStack_808,0x800,"WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",*piVar2,"logging.c"
           ,DAT_0002e8a0,param_1);
  FUN_0002e584(3,acStack_808,1);
  FUN_0002a574(1);
  return;
}

