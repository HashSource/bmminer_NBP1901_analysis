
void FUN_0002e8a4(void)

{
  int iVar1;
  int *piVar2;
  char acStack_808 [2056];
  
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)&DAT_0059450c);
  if (iVar1 == 0) {
    return;
  }
  piVar2 = __errno_location();
  snprintf(acStack_808,0x800,"WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",*piVar2,"logging.c",
           DAT_0002e928,0x35);
  FUN_0002e584(3,acStack_808,1);
  FUN_0002a574(1);
  return;
}

