
void FUN_000457e0(undefined4 *param_1,int param_2)

{
  pthread_mutex_t *__mutex;
  uint local_14;
  
  __mutex = DAT_00045878;
  pthread_mutex_lock(DAT_00045878);
  FUN_00040390(0x1c,*param_1);
  FUN_00040390(0x1d,param_1[1]);
  FUN_00040390(0x1e,param_1[2]);
  FUN_00040314(0x1c,&local_14);
  FUN_00040314(0x1d,&local_14);
  FUN_00040314(0x1e,&local_14);
  FUN_00040314(0x1b,&local_14);
  FUN_000445e0(local_14 & 0xfff0ffff | 0x80800000 | param_2 << 0x10);
  pthread_mutex_unlock(__mutex);
  return;
}

