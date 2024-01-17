
undefined4 FUN_0004a3ec(int param_1,undefined4 param_2)

{
  int iVar1;
  code **__ptr;
  void *__ptr_00;
  undefined4 uVar2;
  undefined4 local_810;
  undefined4 local_80c;
  undefined4 uStack_808;
  undefined4 uStack_804;
  undefined4 local_800;
  
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)&DAT_005051a8);
  if (iVar1 == 0) {
    __ptr = (code **)FUN_00043440(DAT_005051a4);
    iVar1 = (**__ptr)();
    while (iVar1 != 0) {
      if (***(int ***)(__ptr[5] + 0x10) == param_1) {
        __ptr_00 = (void *)(*__ptr[2])();
        local_80c = *(undefined4 *)((int)__ptr_00 + 4);
        local_810 = param_2;
        (*__ptr[1])(__ptr,&local_810,8);
        free(__ptr_00);
        break;
      }
      iVar1 = (**__ptr)(__ptr);
    }
    free(__ptr);
    pthread_mutex_unlock(DAT_0004a4e4);
    uVar2 = 0;
  }
  else {
    local_810._0_1_ = s_failed_to_i2c_lock_0006a3b0[0];
    local_810._1_1_ = s_failed_to_i2c_lock_0006a3b0[1];
    local_810._2_1_ = s_failed_to_i2c_lock_0006a3b0[2];
    local_810._3_1_ = s_failed_to_i2c_lock_0006a3b0[3];
    local_80c._0_1_ = s_failed_to_i2c_lock_0006a3b0[4];
    local_80c._1_1_ = s_failed_to_i2c_lock_0006a3b0[5];
    local_80c._2_1_ = s_failed_to_i2c_lock_0006a3b0[6];
    local_80c._3_1_ = s_failed_to_i2c_lock_0006a3b0[7];
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
    uVar2 = 0xfffffffc;
  }
  return uVar2;
}

