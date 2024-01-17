
undefined4 FUN_00051b44(int param_1,uint param_2,uint param_3,uint param_4,undefined4 param_5)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  
  if (param_2 < 4) {
    if (param_3 < 0x100) {
      uVar2 = param_4 >> 2;
      if (uVar2 < 0x41) {
        pthread_mutex_lock((pthread_mutex_t *)&DAT_005059c8);
        if (param_1 == 0) {
          iVar5 = uVar2 + param_2 * 0x40;
          if (*(uint *)(&DAT_005051c8 + iVar5 * 8) == param_4) {
            iVar1 = (uVar2 + param_2 * 0x4000) * 8;
            *(undefined4 *)(&DAT_005051cc + iVar5 * 8) = param_5;
            puVar3 = &DAT_005059e0 + iVar1;
            do {
              *(undefined4 *)(puVar3 + 4) = param_5;
              puVar3 = puVar3 + 0x200;
            } while (puVar3 != (undefined *)(iVar1 + 0x5259e0));
            pthread_mutex_unlock(DAT_00051ca8);
            return 0;
          }
          uVar4 = 0xfffffffc;
          pthread_mutex_unlock((pthread_mutex_t *)&DAT_005059c8);
        }
        else if (param_1 == 1) {
          iVar5 = uVar2 + (param_3 + param_2 * 0x100) * 0x40;
          if (*(uint *)(&DAT_005059e0 + iVar5 * 8) == param_4) {
            *(undefined4 *)(&DAT_005059e4 + iVar5 * 8) = param_5;
            pthread_mutex_unlock((pthread_mutex_t *)&DAT_005059c8);
            return 0;
          }
          uVar4 = 0xfffffffb;
          pthread_mutex_unlock((pthread_mutex_t *)&DAT_005059c8);
        }
        else {
          uVar4 = 0xfffffffa;
          pthread_mutex_unlock((pthread_mutex_t *)&DAT_005059c8);
        }
        printf("[%s] level::%d, which_chain::%u, which_asic::%u, register_address::%02x failed.\r\n"
               ,DAT_00051ca4,param_1,param_2,param_3,param_4);
      }
      else {
        uVar4 = 0xfffffffd;
      }
    }
    else {
      uVar4 = 0xfffffffe;
    }
  }
  else {
    uVar4 = 0xffffffff;
  }
  return uVar4;
}

