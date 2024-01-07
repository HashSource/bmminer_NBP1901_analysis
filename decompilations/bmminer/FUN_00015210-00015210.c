
int FUN_00015210(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  char acStack_810 [2048];
  
  iVar1 = FUN_0001e170();
  if (iVar1 != 0) {
    iVar1 = 0;
    pthread_mutex_lock((pthread_mutex_t *)&DAT_0007f7c0);
    DAT_0007f7b0 = param_1;
    FUN_00014f20();
    while ((iVar2 = FUN_0001e29c(iVar1), iVar2 == 0 || (iVar2 = FUN_000146c8(iVar1), iVar2 == 0))) {
      iVar1 = iVar1 + 1;
      if (iVar1 == 4) {
        DAT_0007f7bc = 1;
        pthread_mutex_unlock(DAT_000152ec);
        return 0;
      }
    }
    if (3 < DAT_0007eb9c) {
      snprintf(acStack_810,0x800,"calibration sensor on chain %d failed",iVar1);
      FUN_0002e584(3,acStack_810,0);
    }
    DAT_0007f7bc = 1;
    pthread_mutex_unlock(DAT_000152ec);
    iVar1 = -1;
  }
  return iVar1;
}

