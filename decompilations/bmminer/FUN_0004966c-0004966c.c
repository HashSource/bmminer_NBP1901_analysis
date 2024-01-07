
undefined4 FUN_0004966c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_810;
  undefined4 uStack_80c;
  undefined4 uStack_808;
  undefined4 uStack_804;
  undefined4 local_800;
  
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)&DAT_00505188);
  if (iVar1 == 0) {
    uVar2 = FUN_00049cfc(param_1,param_2,param_3);
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_00505188);
  }
  else {
    uVar2 = 0xfffffffc;
    local_810._0_1_ = s_failed_to_i2c_lock_0006a3b0[0];
    local_810._1_1_ = s_failed_to_i2c_lock_0006a3b0[1];
    local_810._2_1_ = s_failed_to_i2c_lock_0006a3b0[2];
    local_810._3_1_ = s_failed_to_i2c_lock_0006a3b0[3];
    uStack_80c._0_1_ = s_failed_to_i2c_lock_0006a3b0[4];
    uStack_80c._1_1_ = s_failed_to_i2c_lock_0006a3b0[5];
    uStack_80c._2_1_ = s_failed_to_i2c_lock_0006a3b0[6];
    uStack_80c._3_1_ = s_failed_to_i2c_lock_0006a3b0[7];
    uStack_808._0_1_ = s_failed_to_i2c_lock_0006a3b0[8];
    uStack_808._1_1_ = s_failed_to_i2c_lock_0006a3b0[9];
    uStack_808._2_1_ = s_failed_to_i2c_lock_0006a3b0[10];
    uStack_808._3_1_ = s_failed_to_i2c_lock_0006a3b0[11];
    uStack_804._0_1_ = s_failed_to_i2c_lock_0006a3b0[12];
    uStack_804._1_1_ = s_failed_to_i2c_lock_0006a3b0[13];
    uStack_804._2_1_ = s_failed_to_i2c_lock_0006a3b0[14];
    uStack_804._3_1_ = s_failed_to_i2c_lock_0006a3b0[15];
    local_800._0_1_ = s_failed_to_i2c_lock_0006a3b0[16];
    local_800._1_1_ = s_failed_to_i2c_lock_0006a3b0[17];
    local_800._2_1_ = s_failed_to_i2c_lock_0006a3b0[18];
    local_800._3_1_ = s_failed_to_i2c_lock_0006a3b0[19];
    FUN_0002e584(0,&local_810);
  }
  return uVar2;
}

