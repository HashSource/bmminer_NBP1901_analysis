
undefined4 FUN_00051a20(int param_1,uint param_2,uint param_3,int param_4,undefined4 *param_5)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 uVar4;
  
  uVar1 = (uint)(param_4 << 0x16) >> 0x18;
  if (param_2 < 4) {
    if (param_3 < 0x100) {
      if (uVar1 < 0x40) {
        pthread_mutex_lock((pthread_mutex_t *)&DAT_005059c8);
        if (param_1 == 0) {
          iVar2 = uVar1 + param_2 * 0x40;
          if (*(int *)(&DAT_005051c8 + iVar2 * 8) == param_4) {
            puVar3 = &DAT_005051c8 + iVar2 * 8;
LAB_00051b00:
            *param_5 = *(undefined4 *)(puVar3 + 4);
            pthread_mutex_unlock((pthread_mutex_t *)&DAT_005059c8);
            return 0;
          }
          uVar4 = 0xfffffffc;
          pthread_mutex_unlock((pthread_mutex_t *)&DAT_005059c8);
        }
        else if (param_1 == 1) {
          iVar2 = uVar1 + (param_3 + param_2 * 0x100) * 0x40;
          if (*(int *)(&DAT_005059e0 + iVar2 * 8) == param_4) {
            puVar3 = &DAT_005059e0 + iVar2 * 8;
            goto LAB_00051b00;
          }
          uVar4 = 0xfffffffb;
          pthread_mutex_unlock((pthread_mutex_t *)&DAT_005059c8);
        }
        else {
          uVar4 = 0xfffffffa;
          pthread_mutex_unlock((pthread_mutex_t *)&DAT_005059c8);
        }
        printf("[%s] level::%d, which_chain::%u, which_asic::%u, register_address::%02x failed.\r\n"
               ,"get_register_cache_value",param_1,param_2,param_3,param_4);
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

