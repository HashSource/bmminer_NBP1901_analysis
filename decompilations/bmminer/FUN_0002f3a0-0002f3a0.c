
void FUN_0002f3a0(int param_1,undefined param_2)

{
  int iVar1;
  
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0xc));
  if (iVar1 != 0) {
    FUN_0002f33c("tq_freezethaw",0x454);
  }
  *(undefined *)(param_1 + 8) = param_2;
  pthread_cond_signal((pthread_cond_t *)(param_1 + 0x28));
  FUN_0002f2c0((pthread_mutex_t *)(param_1 + 0xc),"tq_freezethaw",0x457);
  (*DAT_0007ecc4)();
  return;
}

