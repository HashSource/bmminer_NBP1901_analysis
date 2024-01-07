
void FUN_0004165c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  pthread_mutex_t *__mutex;
  undefined4 local_82c;
  undefined4 local_828;
  undefined4 local_824;
  uint local_820;
  uint local_81c;
  char acStack_818 [2048];
  
  __mutex = (pthread_mutex_t *)(param_1 * 0x18 + 0x504ce8);
  local_82c = 0;
  local_828 = 0;
  local_824 = 0;
  local_820 = 0;
  local_81c = 0;
  pthread_mutex_lock(__mutex);
  iVar2 = FUN_00041250(param_1,&local_81c,&local_82c,&local_828,&local_824);
  uVar1 = DAT_00041790;
  if (iVar2 == 0) {
    iVar2 = 0x15;
    do {
      FUN_00040314(local_82c,&local_820);
      local_820 = local_820 >> (local_81c & 0xff) & 0xff;
      if (local_820 == 0xff) {
        pthread_mutex_unlock(__mutex);
        return;
      }
      printf("%s: waiting fpga uart%d clear send fifo space ...\n",uVar1,param_1);
      FUN_00040390(local_828,local_820 | 0x80000000);
      usleep(3000);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    snprintf(acStack_818,0x800,"%s: uart%d always dose not has enough send fifo space, break\n",
             DAT_00041790,param_1);
  }
  else {
    snprintf(acStack_818,0x800,"get_send_address_info error, chain_id = %d\n",param_1);
  }
  FUN_0002e584(0,acStack_818,0);
  pthread_mutex_unlock(__mutex);
  return;
}

