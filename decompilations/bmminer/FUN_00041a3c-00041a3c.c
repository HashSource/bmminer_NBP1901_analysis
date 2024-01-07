
uint FUN_00041a3c(int param_1,void *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *__format;
  pthread_mutex_t *__mutex;
  byte *pbVar5;
  byte *pbVar6;
  undefined4 local_92c;
  undefined4 local_928;
  undefined4 local_924;
  uint local_920;
  uint local_91c;
  byte local_918 [256];
  char acStack_818 [2048];
  
  memset(local_918,0,0x100);
  local_92c = 0;
  __mutex = (pthread_mutex_t *)(param_1 * 0x18 + 0x504ce8);
  local_928 = 0;
  local_924 = 0;
  local_920 = 0;
  local_91c = 0;
  pthread_mutex_lock(__mutex);
  iVar2 = FUN_00041250(param_1,&local_91c,&local_92c,&local_928,&local_924);
  if (iVar2 != 0) {
    snprintf(acStack_818,0x800,"get_send_address_info error, chain_id = %d\n",param_1);
    FUN_0002e584(0,acStack_818,0);
    pthread_mutex_unlock(__mutex);
    return 0;
  }
  iVar2 = 0x15;
  do {
    FUN_00040314(local_92c,&local_920);
    local_920 = local_920 >> (local_91c & 0xff) & 0xff;
    if (param_3 <= local_920) {
      iVar2 = 0x16;
      do {
        FUN_00040314(local_928,&local_920);
        if (-1 < (int)local_920) {
          memcpy(local_918,param_2,param_3);
          if (param_3 >> 2 != 0) {
            pbVar5 = local_918;
            do {
              pbVar6 = pbVar5 + 4;
              FUN_00040390(local_924,
                           (uint)pbVar5[1] << 0x10 | (uint)*pbVar5 << 0x18 | (uint)pbVar5[3] |
                           (uint)pbVar5[2] << 8);
              pbVar5 = pbVar6;
            } while (local_918 + (param_3 & 0xfffffffc) != pbVar6);
          }
          uVar4 = param_3 & 3;
          if (uVar4 != 0) {
            uVar1 = param_3 & 0xfffffffc;
            uVar3 = (uint)local_918[uVar1] << 0x18;
            if (uVar4 == 2) {
              uVar3 = uVar3 | (uint)local_918[uVar1 + 1] << 0x10;
            }
            else if (uVar4 == 3) {
              uVar3 = (uint)local_918[uVar1 + 2] << 8 | (uint)local_918[uVar1 + 1] << 0x10 | uVar3;
            }
            FUN_00040390(local_924,uVar3);
          }
          FUN_00040390(local_928,param_3 | 0x80000000);
          pthread_mutex_unlock(__mutex);
          return param_3;
        }
        usleep(3000);
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      pthread_mutex_unlock(__mutex);
      __format = "%s: uart%d always busy, break\n";
      goto LAB_00041c34;
    }
    usleep(3000);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  pthread_mutex_unlock(__mutex);
  __format = "%s: uart%d always dose not has enough send fifo space, break\n";
LAB_00041c34:
  snprintf(acStack_818,0x800,__format,DAT_00041c84,param_1);
  FUN_0002e584(0,acStack_818,0);
  return 0;
}

