
undefined4 FUN_000420c4(uint param_1)

{
  undefined4 uVar1;
  pthread_mutex_t *__mutex;
  
  __mutex = (pthread_mutex_t *)(DAT_000420fc + param_1 * 0x18);
  pthread_mutex_lock(__mutex);
  uVar1 = FUN_00041474(param_1 & 0xff);
  pthread_mutex_unlock(__mutex);
  return uVar1;
}

