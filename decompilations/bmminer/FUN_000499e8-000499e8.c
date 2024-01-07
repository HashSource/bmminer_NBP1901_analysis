
void FUN_000499e8(undefined4 param_1)

{
  int iVar1;
  code **__ptr;
  undefined4 local_814;
  undefined4 local_810;
  undefined4 uStack_80c;
  undefined4 uStack_808;
  undefined4 uStack_804;
  undefined4 local_800;
  
  local_814 = param_1;
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)&DAT_005051a8);
  if (iVar1 != 0) {
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
    return;
  }
  iVar1 = FUN_00043338(DAT_005051a4,&local_814);
  if (iVar1 == 1) {
    FUN_00043358(DAT_005051a4,&local_814);
  }
  else {
    snprintf((char *)&local_810,0x800,"ctx(%d) is not inited\n",local_814);
    FUN_0002e584(1,&local_810,0);
  }
  __ptr = (code **)FUN_00043440(DAT_005051a4);
  iVar1 = (**__ptr)();
  if (iVar1 != 0) {
    do {
      iVar1 = (**__ptr)(__ptr);
    } while (iVar1 != 0);
    free(__ptr);
    pthread_mutex_unlock(DAT_00049b0c);
    return;
  }
  free(__ptr);
  pthread_mutex_unlock(DAT_00049b0c);
  DAT_005051a0 = iVar1;
  FUN_00043414(DAT_005051a4);
  DAT_005051a4 = iVar1;
  return;
}

