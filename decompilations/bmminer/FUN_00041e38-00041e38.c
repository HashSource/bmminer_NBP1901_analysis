
undefined4 FUN_00041e38(int param_1,int param_2,int *param_3)

{
  undefined4 uVar1;
  pthread_mutex_t *__mutex;
  char acStack_810 [2048];
  
  if (param_3 == (int *)0x0) {
    uVar1 = 0xfffffffd;
  }
  else {
    __mutex = (pthread_mutex_t *)(param_1 * 0x18 + 0x504ce8);
    pthread_mutex_lock(__mutex);
    if (param_2 == 0) {
      FUN_00040390(0xf,*param_3 << 0x10);
    }
    else {
      snprintf(acStack_810,0x800,"unknown set config type = %d\n",param_2);
      FUN_0002e584(1,acStack_810,0);
    }
    pthread_mutex_unlock(__mutex);
    uVar1 = 0xfffffffb;
  }
  return uVar1;
}

