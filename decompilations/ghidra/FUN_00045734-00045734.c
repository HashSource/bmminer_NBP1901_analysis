
void FUN_00045734(uint param_1)

{
  pthread_mutex_t *__mutex;
  uint local_14 [2];
  
  __mutex = DAT_00045784;
  pthread_mutex_lock(DAT_00045784);
  usleep(50000);
  FUN_00040314(0x1b,local_14);
  FUN_000445e0(local_14[0] & 0xffffffc0 | param_1 & 0x3f);
  pthread_mutex_unlock(__mutex);
  return;
}

