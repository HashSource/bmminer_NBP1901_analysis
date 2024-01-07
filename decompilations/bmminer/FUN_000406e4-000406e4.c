
undefined4 FUN_000406e4(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_810;
  undefined4 uStack_80c;
  undefined4 uStack_808;
  undefined4 uStack_804;
  undefined4 local_800;
  
  iVar1 = pthread_mutex_lock(DAT_00040790);
  if (iVar1 == 0) {
    snprintf((char *)&local_810,0x40,"/sys/class/gpio/gpio%d",param_1);
    iVar1 = access((char *)&local_810,0);
    if (iVar1 == 0) {
      pthread_mutex_unlock(DAT_00040790);
      return 1;
    }
    pthread_mutex_unlock(DAT_00040790);
    uVar2 = 0;
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
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

