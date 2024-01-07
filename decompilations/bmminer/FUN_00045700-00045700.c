
void FUN_00045700(void)

{
  pthread_mutex_t *__mutex;
  undefined auStack_c [4];
  
  __mutex = DAT_00045730;
  pthread_mutex_lock(DAT_00045730);
  FUN_00040314(0x1b,auStack_c);
  pthread_mutex_unlock(__mutex);
  return;
}

