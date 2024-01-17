
void FUN_00049574(undefined4 param_1)

{
  int iVar1;
  undefined4 local_808;
  undefined4 uStack_804;
  undefined4 uStack_800;
  undefined4 uStack_7fc;
  undefined4 local_7f8;
  
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)&DAT_00505188);
  if (iVar1 == 0) {
    FUN_000499e8(param_1);
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_00505188);
    return;
  }
  local_808._0_1_ = s_failed_to_i2c_lock_0006a3b0[0];
  local_808._1_1_ = s_failed_to_i2c_lock_0006a3b0[1];
  local_808._2_1_ = s_failed_to_i2c_lock_0006a3b0[2];
  local_808._3_1_ = s_failed_to_i2c_lock_0006a3b0[3];
  uStack_804._0_1_ = s_failed_to_i2c_lock_0006a3b0[4];
  uStack_804._1_1_ = s_failed_to_i2c_lock_0006a3b0[5];
  uStack_804._2_1_ = s_failed_to_i2c_lock_0006a3b0[6];
  uStack_804._3_1_ = s_failed_to_i2c_lock_0006a3b0[7];
  uStack_800._0_1_ = s_failed_to_i2c_lock_0006a3b0[8];
  uStack_800._1_1_ = s_failed_to_i2c_lock_0006a3b0[9];
  uStack_800._2_1_ = s_failed_to_i2c_lock_0006a3b0[10];
  uStack_800._3_1_ = s_failed_to_i2c_lock_0006a3b0[11];
  uStack_7fc._0_1_ = s_failed_to_i2c_lock_0006a3b0[12];
  uStack_7fc._1_1_ = s_failed_to_i2c_lock_0006a3b0[13];
  uStack_7fc._2_1_ = s_failed_to_i2c_lock_0006a3b0[14];
  uStack_7fc._3_1_ = s_failed_to_i2c_lock_0006a3b0[15];
  local_7f8._0_1_ = s_failed_to_i2c_lock_0006a3b0[16];
  local_7f8._1_1_ = s_failed_to_i2c_lock_0006a3b0[17];
  local_7f8._2_1_ = s_failed_to_i2c_lock_0006a3b0[18];
  local_7f8._3_1_ = s_failed_to_i2c_lock_0006a3b0[19];
  FUN_0002e584(0,&local_808);
  return;
}

