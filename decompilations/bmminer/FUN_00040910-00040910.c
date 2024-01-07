
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00040910(undefined4 param_1)

{
  int iVar1;
  size_t __n;
  ssize_t sVar2;
  undefined4 uVar3;
  char acStack_850 [64];
  undefined4 local_810;
  undefined4 uStack_80c;
  undefined4 uStack_808;
  undefined4 uStack_804;
  undefined4 local_800;
  undefined4 uStack_7fc;
  undefined4 uStack_7f8;
  undefined4 uStack_7f4;
  undefined4 uStack_7f0;
  undefined2 local_7ec;
  
  iVar1 = pthread_mutex_lock(DAT_00040ad4);
  if (iVar1 == 0) {
    snprintf(acStack_850,0x40,"/sys/class/gpio/gpio%d",param_1);
    iVar1 = access(acStack_850,0);
    if (iVar1 != 0) {
      snprintf((char *)&local_810,0x800,"port %d already unexported, ret = %d\n",param_1,iVar1);
      FUN_0002e584(1,&local_810,0);
      perror("access error");
      pthread_mutex_unlock(DAT_00040ad4);
      return 0;
    }
    iVar1 = open64("/sys/class/gpio/unexport",1);
    if (iVar1 < 0) {
      local_810._0_1_ = s_Failed_to_open_unexport_for_writ_000690d4[0];
      local_810._1_1_ = s_Failed_to_open_unexport_for_writ_000690d4[1];
      local_810._2_1_ = s_Failed_to_open_unexport_for_writ_000690d4[2];
      local_810._3_1_ = s_Failed_to_open_unexport_for_writ_000690d4[3];
      uStack_80c._0_1_ = s_Failed_to_open_unexport_for_writ_000690d4[4];
      uStack_80c._1_1_ = s_Failed_to_open_unexport_for_writ_000690d4[5];
      uStack_80c._2_1_ = s_Failed_to_open_unexport_for_writ_000690d4[6];
      uStack_80c._3_1_ = s_Failed_to_open_unexport_for_writ_000690d4[7];
      uStack_808._0_1_ = s_Failed_to_open_unexport_for_writ_000690d4[8];
      uStack_808._1_1_ = s_Failed_to_open_unexport_for_writ_000690d4[9];
      uStack_808._2_1_ = s_Failed_to_open_unexport_for_writ_000690d4[10];
      uStack_808._3_1_ = s_Failed_to_open_unexport_for_writ_000690d4[11];
      uStack_804._0_1_ = s_Failed_to_open_unexport_for_writ_000690d4[12];
      uStack_804._1_1_ = s_Failed_to_open_unexport_for_writ_000690d4[13];
      uStack_804._2_1_ = s_Failed_to_open_unexport_for_writ_000690d4[14];
      uStack_804._3_1_ = s_Failed_to_open_unexport_for_writ_000690d4[15];
      local_800._0_1_ = s_Failed_to_open_unexport_for_writ_000690d4[16];
      local_800._1_1_ = s_Failed_to_open_unexport_for_writ_000690d4[17];
      local_800._2_1_ = s_Failed_to_open_unexport_for_writ_000690d4[18];
      local_800._3_1_ = s_Failed_to_open_unexport_for_writ_000690d4[19];
      uStack_7fc._0_1_ = s_Failed_to_open_unexport_for_writ_000690d4[20];
      uStack_7fc._1_1_ = s_Failed_to_open_unexport_for_writ_000690d4[21];
      uStack_7fc._2_1_ = s_Failed_to_open_unexport_for_writ_000690d4[22];
      uStack_7fc._3_1_ = s_Failed_to_open_unexport_for_writ_000690d4[23];
      uStack_7f8._0_1_ = s_Failed_to_open_unexport_for_writ_000690d4[24];
      uStack_7f8._1_1_ = s_Failed_to_open_unexport_for_writ_000690d4[25];
      uStack_7f8._2_1_ = s_Failed_to_open_unexport_for_writ_000690d4[26];
      uStack_7f8._3_1_ = s_Failed_to_open_unexport_for_writ_000690d4[27];
      uStack_7f4._0_1_ = s_Failed_to_open_unexport_for_writ_000690d4[28];
      uStack_7f4._1_1_ = s_Failed_to_open_unexport_for_writ_000690d4[29];
      uStack_7f4._2_1_ = s_Failed_to_open_unexport_for_writ_000690d4[30];
      uStack_7f4._3_1_ = s_Failed_to_open_unexport_for_writ_000690d4[31];
      uStack_7f0._0_1_ = s_Failed_to_open_unexport_for_writ_000690d4[32];
      uStack_7f0._1_1_ = s_Failed_to_open_unexport_for_writ_000690d4[33];
      uStack_7f0._2_1_ = s_Failed_to_open_unexport_for_writ_000690d4[34];
      uStack_7f0._3_1_ = s_Failed_to_open_unexport_for_writ_000690d4[35];
      local_7ec = (undefined2)ram0x000690f8;
      FUN_0002e584(0,&local_810,0);
      uVar3 = 0xfffffffe;
      pthread_mutex_unlock(DAT_00040ad4);
    }
    else {
      __n = snprintf(acStack_850,0x40,"%d",param_1);
      sVar2 = write(iVar1,acStack_850,__n);
      if (sVar2 < 0) {
        snprintf((char *)&local_810,0x800,"Failed to unexport gpio %d!",param_1);
        uVar3 = 0xfffffffe;
        FUN_0002e584(0,&local_810,0);
        close(iVar1);
        pthread_mutex_unlock(DAT_00040ad4);
      }
      else {
        close(iVar1);
        pthread_mutex_unlock(DAT_00040ad4);
        uVar3 = 0;
      }
    }
  }
  else {
    uVar3 = 0xffffffff;
    local_810._0_1_ = s_failed_to_api_lock_00068ffc[0];
    local_810._1_1_ = s_failed_to_api_lock_00068ffc[1];
    local_810._2_1_ = s_failed_to_api_lock_00068ffc[2];
    local_810._3_1_ = s_failed_to_api_lock_00068ffc[3];
    uStack_80c._0_1_ = s_failed_to_api_lock_00068ffc[4];
    uStack_80c._1_1_ = s_failed_to_api_lock_00068ffc[5];
    uStack_80c._2_1_ = s_failed_to_api_lock_00068ffc[6];
    uStack_80c._3_1_ = s_failed_to_api_lock_00068ffc[7];
    uStack_808._0_1_ = s_failed_to_api_lock_00068ffc[8];
    uStack_808._1_1_ = s_failed_to_api_lock_00068ffc[9];
    uStack_808._2_1_ = s_failed_to_api_lock_00068ffc[10];
    uStack_808._3_1_ = s_failed_to_api_lock_00068ffc[11];
    uStack_804._0_1_ = s_failed_to_api_lock_00068ffc[12];
    uStack_804._1_1_ = s_failed_to_api_lock_00068ffc[13];
    uStack_804._2_1_ = s_failed_to_api_lock_00068ffc[14];
    uStack_804._3_1_ = s_failed_to_api_lock_00068ffc[15];
    local_800._0_1_ = s_failed_to_api_lock_00068ffc[16];
    local_800._1_1_ = s_failed_to_api_lock_00068ffc[17];
    local_800._2_1_ = s_failed_to_api_lock_00068ffc[18];
    local_800._3_1_ = s_failed_to_api_lock_00068ffc[19];
    FUN_0002e584(0,&local_810);
  }
  return uVar3;
}

