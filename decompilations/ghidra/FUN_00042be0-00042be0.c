
void FUN_00042be0(void)

{
  int iVar1;
  undefined4 local_808;
  undefined4 uStack_804;
  undefined4 uStack_800;
  undefined4 uStack_7fc;
  undefined4 local_7f8;
  
  iVar1 = pthread_mutex_lock(DAT_00042c64);
  if (iVar1 == 0) {
    if (0 < DAT_0007f418) {
      FUN_00042e88();
    }
    pthread_mutex_unlock(DAT_00042c64);
    return;
  }
  local_808._0_1_ = s_failed_to_api_lock_00068ffc[0];
  local_808._1_1_ = s_failed_to_api_lock_00068ffc[1];
  local_808._2_1_ = s_failed_to_api_lock_00068ffc[2];
  local_808._3_1_ = s_failed_to_api_lock_00068ffc[3];
  uStack_804._0_1_ = s_failed_to_api_lock_00068ffc[4];
  uStack_804._1_1_ = s_failed_to_api_lock_00068ffc[5];
  uStack_804._2_1_ = s_failed_to_api_lock_00068ffc[6];
  uStack_804._3_1_ = s_failed_to_api_lock_00068ffc[7];
  uStack_800._0_1_ = s_failed_to_api_lock_00068ffc[8];
  uStack_800._1_1_ = s_failed_to_api_lock_00068ffc[9];
  uStack_800._2_1_ = s_failed_to_api_lock_00068ffc[10];
  uStack_800._3_1_ = s_failed_to_api_lock_00068ffc[11];
  uStack_7fc._0_1_ = s_failed_to_api_lock_00068ffc[12];
  uStack_7fc._1_1_ = s_failed_to_api_lock_00068ffc[13];
  uStack_7fc._2_1_ = s_failed_to_api_lock_00068ffc[14];
  uStack_7fc._3_1_ = s_failed_to_api_lock_00068ffc[15];
  local_7f8._0_1_ = s_failed_to_api_lock_00068ffc[16];
  local_7f8._1_1_ = s_failed_to_api_lock_00068ffc[17];
  local_7f8._2_1_ = s_failed_to_api_lock_00068ffc[18];
  local_7f8._3_1_ = s_failed_to_api_lock_00068ffc[19];
  FUN_0002e584(0,&local_808);
  return;
}

