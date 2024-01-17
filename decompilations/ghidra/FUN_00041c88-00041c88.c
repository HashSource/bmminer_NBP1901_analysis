
undefined4 FUN_00041c88(uint param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  undefined4 uVar2;
  pthread_mutex_t *__mutex;
  
  __mutex = (pthread_mutex_t *)(DAT_00041cf8 + param_1 * 0x18);
  pthread_mutex_lock(__mutex);
  uVar1 = FUN_00041474(param_1 & 0xff);
  if (uVar1 < param_3) {
    param_3 = uVar1;
  }
  if (param_3 == 0) {
    pthread_mutex_unlock(__mutex);
    return 0;
  }
  uVar2 = FUN_00041794(param_1,param_2,param_3);
  pthread_mutex_unlock(__mutex);
  return uVar2;
}

