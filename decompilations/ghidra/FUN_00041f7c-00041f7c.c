
void FUN_00041f7c(uint param_1)

{
  size_t __size;
  void *__ptr;
  size_t sVar1;
  pthread_mutex_t *__mutex;
  char acStack_818 [2052];
  
  __mutex = (pthread_mutex_t *)(DAT_00042078 + param_1 * 0x18);
  pthread_mutex_lock(__mutex);
  __size = FUN_00041474(param_1 & 0xff);
  if (__size != 0) {
    __ptr = malloc(__size);
    if (__ptr == (void *)0x0) {
      snprintf(acStack_818,0x800,"%s: uart%d malloc buffer error\n",DAT_0004207c,param_1);
      FUN_0002e584(0,acStack_818,0);
      usleep(500000);
      pthread_mutex_unlock(__mutex);
      return;
    }
    sVar1 = FUN_00041794(param_1,__ptr,__size);
    if (__size != sVar1) {
      snprintf(acStack_818,0x800,"%s: uart%d clear rx fifo error. nbytes = %d, len = %d\n",
               DAT_0004207c,param_1,__size,sVar1);
      FUN_0002e584(0,acStack_818);
    }
    free(__ptr);
    usleep(10000);
  }
  pthread_mutex_unlock(__mutex);
  return;
}

