
undefined4 FUN_00040794(undefined4 param_1)

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
  undefined4 local_7f0;
  
  iVar1 = pthread_mutex_lock(DAT_0004090c);
  if (iVar1 == 0) {
    snprintf(acStack_850,0x40,"/sys/class/gpio/gpio%d",param_1);
    iVar1 = access(acStack_850,0);
    if (iVar1 == 0) {
      pthread_mutex_unlock(DAT_0004090c);
      return 0;
    }
    iVar1 = open64("/sys/class/gpio/export",1);
    if (iVar1 < 0) {
      local_810._0_1_ = s_Failed_to_open_export_for_writin_00069040[0];
      local_810._1_1_ = s_Failed_to_open_export_for_writin_00069040[1];
      local_810._2_1_ = s_Failed_to_open_export_for_writin_00069040[2];
      local_810._3_1_ = s_Failed_to_open_export_for_writin_00069040[3];
      uStack_80c._0_1_ = s_Failed_to_open_export_for_writin_00069040[4];
      uStack_80c._1_1_ = s_Failed_to_open_export_for_writin_00069040[5];
      uStack_80c._2_1_ = s_Failed_to_open_export_for_writin_00069040[6];
      uStack_80c._3_1_ = s_Failed_to_open_export_for_writin_00069040[7];
      uStack_808._0_1_ = s_Failed_to_open_export_for_writin_00069040[8];
      uStack_808._1_1_ = s_Failed_to_open_export_for_writin_00069040[9];
      uStack_808._2_1_ = s_Failed_to_open_export_for_writin_00069040[10];
      uStack_808._3_1_ = s_Failed_to_open_export_for_writin_00069040[11];
      uStack_804._0_1_ = s_Failed_to_open_export_for_writin_00069040[12];
      uStack_804._1_1_ = s_Failed_to_open_export_for_writin_00069040[13];
      uStack_804._2_1_ = s_Failed_to_open_export_for_writin_00069040[14];
      uStack_804._3_1_ = s_Failed_to_open_export_for_writin_00069040[15];
      local_800._0_1_ = s_Failed_to_open_export_for_writin_00069040[16];
      local_800._1_1_ = s_Failed_to_open_export_for_writin_00069040[17];
      local_800._2_1_ = s_Failed_to_open_export_for_writin_00069040[18];
      local_800._3_1_ = s_Failed_to_open_export_for_writin_00069040[19];
      uStack_7fc._0_1_ = s_Failed_to_open_export_for_writin_00069040[20];
      uStack_7fc._1_1_ = s_Failed_to_open_export_for_writin_00069040[21];
      uStack_7fc._2_1_ = s_Failed_to_open_export_for_writin_00069040[22];
      uStack_7fc._3_1_ = s_Failed_to_open_export_for_writin_00069040[23];
      uStack_7f8._0_1_ = s_Failed_to_open_export_for_writin_00069040[24];
      uStack_7f8._1_1_ = s_Failed_to_open_export_for_writin_00069040[25];
      uStack_7f8._2_1_ = s_Failed_to_open_export_for_writin_00069040[26];
      uStack_7f8._3_1_ = s_Failed_to_open_export_for_writin_00069040[27];
      uStack_7f4._0_1_ = s_Failed_to_open_export_for_writin_00069040[28];
      uStack_7f4._1_1_ = s_Failed_to_open_export_for_writin_00069040[29];
      uStack_7f4._2_1_ = s_Failed_to_open_export_for_writin_00069040[30];
      uStack_7f4._3_1_ = s_Failed_to_open_export_for_writin_00069040[31];
      local_7f0._0_1_ = s_Failed_to_open_export_for_writin_00069040[32];
      local_7f0._1_1_ = s_Failed_to_open_export_for_writin_00069040[33];
      local_7f0._2_1_ = s_Failed_to_open_export_for_writin_00069040[34];
      local_7f0._3_1_ = s_Failed_to_open_export_for_writin_00069040[35];
      FUN_0002e584(0,&local_810,0);
      pthread_mutex_unlock(DAT_0004090c);
      uVar3 = 0xfffffffe;
    }
    else {
      __n = snprintf(acStack_850,0x40,"%d",param_1);
      sVar2 = write(iVar1,acStack_850,__n);
      if (sVar2 < 0) {
        snprintf((char *)&local_810,0x800,"Failed to export gpio %d!",param_1);
        FUN_0002e584(0,&local_810,0);
        close(iVar1);
        pthread_mutex_unlock(DAT_0004090c);
        uVar3 = 0xfffffffd;
      }
      else {
        close(iVar1);
        pthread_mutex_unlock(DAT_0004090c);
        uVar3 = 0;
      }
    }
  }
  else {
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
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

