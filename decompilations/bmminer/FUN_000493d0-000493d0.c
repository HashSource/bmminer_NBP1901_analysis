
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_000493d0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_818;
  undefined4 uStack_814;
  undefined4 uStack_810;
  undefined4 uStack_80c;
  undefined4 local_808;
  undefined2 local_804;
  
  iVar1 = pthread_mutex_lock((pthread_mutex_t *)&DAT_00505188);
  if (iVar1 != 0) {
    local_818._0_1_ = s_failed_to_iic_lock_0006a358[0];
    local_818._1_1_ = s_failed_to_iic_lock_0006a358[1];
    local_818._2_1_ = s_failed_to_iic_lock_0006a358[2];
    local_818._3_1_ = s_failed_to_iic_lock_0006a358[3];
    uStack_814._0_1_ = s_failed_to_iic_lock_0006a358[4];
    uStack_814._1_1_ = s_failed_to_iic_lock_0006a358[5];
    uStack_814._2_1_ = s_failed_to_iic_lock_0006a358[6];
    uStack_814._3_1_ = s_failed_to_iic_lock_0006a358[7];
    uStack_810._0_1_ = s_failed_to_iic_lock_0006a358[8];
    uStack_810._1_1_ = s_failed_to_iic_lock_0006a358[9];
    uStack_810._2_1_ = s_failed_to_iic_lock_0006a358[10];
    uStack_810._3_1_ = s_failed_to_iic_lock_0006a358[11];
    uStack_80c._0_1_ = s_failed_to_iic_lock_0006a358[12];
    uStack_80c._1_1_ = s_failed_to_iic_lock_0006a358[13];
    uStack_80c._2_1_ = s_failed_to_iic_lock_0006a358[14];
    uStack_80c._3_1_ = s_failed_to_iic_lock_0006a358[15];
    local_808._0_1_ = s_failed_to_iic_lock_0006a358[16];
    local_808._1_1_ = s_failed_to_iic_lock_0006a358[17];
    local_808._2_1_ = s_failed_to_iic_lock_0006a358[18];
    local_808._3_1_ = s_failed_to_iic_lock_0006a358[19];
    FUN_0002e584(0,&local_818);
    return -4;
  }
  if (param_1 == 0) {
    iVar1 = -3;
    local_818._0_1_ = s_bad_param_00068fa4[0];
    local_818._1_1_ = s_bad_param_00068fa4[1];
    local_818._2_1_ = s_bad_param_00068fa4[2];
    local_818._3_1_ = s_bad_param_00068fa4[3];
    uStack_814._0_1_ = s_bad_param_00068fa4[4];
    uStack_814._1_1_ = s_bad_param_00068fa4[5];
    uStack_814._2_1_ = s_bad_param_00068fa4[6];
    uStack_814._3_1_ = s_bad_param_00068fa4[7];
    uStack_810._0_3_ = (undefined3)ram0x00068fac;
    FUN_0002e584(0,&local_818,0);
  }
  else {
    iVar1 = FUN_00049904();
    if (iVar1 < 0) {
      iVar1 = -1;
      local_818._0_1_ = s_failed_to_i2c_init_0006a36c[0];
      local_818._1_1_ = s_failed_to_i2c_init_0006a36c[1];
      local_818._2_1_ = s_failed_to_i2c_init_0006a36c[2];
      local_818._3_1_ = s_failed_to_i2c_init_0006a36c[3];
      uStack_814._0_1_ = s_failed_to_i2c_init_0006a36c[4];
      uStack_814._1_1_ = s_failed_to_i2c_init_0006a36c[5];
      uStack_814._2_1_ = s_failed_to_i2c_init_0006a36c[6];
      uStack_814._3_1_ = s_failed_to_i2c_init_0006a36c[7];
      uStack_810._0_1_ = s_failed_to_i2c_init_0006a36c[8];
      uStack_810._1_1_ = s_failed_to_i2c_init_0006a36c[9];
      uStack_810._2_1_ = s_failed_to_i2c_init_0006a36c[10];
      uStack_810._3_1_ = s_failed_to_i2c_init_0006a36c[11];
      uStack_80c._0_1_ = s_failed_to_i2c_init_0006a36c[12];
      uStack_80c._1_1_ = s_failed_to_i2c_init_0006a36c[13];
      uStack_80c._2_1_ = s_failed_to_i2c_init_0006a36c[14];
      uStack_80c._3_1_ = s_failed_to_i2c_init_0006a36c[15];
      local_808._0_1_ = s_failed_to_i2c_init_0006a36c[16];
      local_808._1_1_ = s_failed_to_i2c_init_0006a36c[17];
      local_808._2_1_ = s_failed_to_i2c_init_0006a36c[18];
      local_808._3_1_ = s_failed_to_i2c_init_0006a36c[19];
      FUN_0002e584(0,&local_818,0);
    }
    else {
      iVar2 = FUN_0004a3ec(iVar1,*(undefined2 *)(param_1 + 4));
      if (iVar2 == 0) {
        iVar2 = FUN_0004a2d8(iVar1,0x703,
                             (uint)*(byte *)(param_1 + 7) << 1 | (uint)*(byte *)(param_1 + 6) << 4);
        if (iVar2 == 0) goto LAB_00049460;
        local_818._0_1_ = s_failed_to_i2c_ioctl_0006a398[0];
        local_818._1_1_ = s_failed_to_i2c_ioctl_0006a398[1];
        local_818._2_1_ = s_failed_to_i2c_ioctl_0006a398[2];
        local_818._3_1_ = s_failed_to_i2c_ioctl_0006a398[3];
        uStack_814._0_1_ = s_failed_to_i2c_ioctl_0006a398[4];
        uStack_814._1_1_ = s_failed_to_i2c_ioctl_0006a398[5];
        uStack_814._2_1_ = s_failed_to_i2c_ioctl_0006a398[6];
        uStack_814._3_1_ = s_failed_to_i2c_ioctl_0006a398[7];
        uStack_810._0_1_ = s_failed_to_i2c_ioctl_0006a398[8];
        uStack_810._1_1_ = s_failed_to_i2c_ioctl_0006a398[9];
        uStack_810._2_1_ = s_failed_to_i2c_ioctl_0006a398[10];
        uStack_810._3_1_ = s_failed_to_i2c_ioctl_0006a398[11];
        uStack_80c._0_1_ = s_failed_to_i2c_ioctl_0006a398[12];
        uStack_80c._1_1_ = s_failed_to_i2c_ioctl_0006a398[13];
        uStack_80c._2_1_ = s_failed_to_i2c_ioctl_0006a398[14];
        uStack_80c._3_1_ = s_failed_to_i2c_ioctl_0006a398[15];
        local_808._0_1_ = s_failed_to_i2c_ioctl_0006a398[16];
        local_808._1_1_ = s_failed_to_i2c_ioctl_0006a398[17];
        local_808._2_1_ = s_failed_to_i2c_ioctl_0006a398[18];
        local_808._3_1_ = s_failed_to_i2c_ioctl_0006a398[19];
        local_804 = CONCAT11(local_804._1_1_,(char)ram0x0006a3ac);
        FUN_0002e584(0,&local_818,0);
      }
      else {
        local_818._0_1_ = s_failed_to_i2c_select_0006a380[0];
        local_818._1_1_ = s_failed_to_i2c_select_0006a380[1];
        local_818._2_1_ = s_failed_to_i2c_select_0006a380[2];
        local_818._3_1_ = s_failed_to_i2c_select_0006a380[3];
        uStack_814._0_1_ = s_failed_to_i2c_select_0006a380[4];
        uStack_814._1_1_ = s_failed_to_i2c_select_0006a380[5];
        uStack_814._2_1_ = s_failed_to_i2c_select_0006a380[6];
        uStack_814._3_1_ = s_failed_to_i2c_select_0006a380[7];
        uStack_810._0_1_ = s_failed_to_i2c_select_0006a380[8];
        uStack_810._1_1_ = s_failed_to_i2c_select_0006a380[9];
        uStack_810._2_1_ = s_failed_to_i2c_select_0006a380[10];
        uStack_810._3_1_ = s_failed_to_i2c_select_0006a380[11];
        uStack_80c._0_1_ = s_failed_to_i2c_select_0006a380[12];
        uStack_80c._1_1_ = s_failed_to_i2c_select_0006a380[13];
        uStack_80c._2_1_ = s_failed_to_i2c_select_0006a380[14];
        uStack_80c._3_1_ = s_failed_to_i2c_select_0006a380[15];
        local_808._0_1_ = s_failed_to_i2c_select_0006a380[16];
        local_808._1_1_ = s_failed_to_i2c_select_0006a380[17];
        local_808._2_1_ = s_failed_to_i2c_select_0006a380[18];
        local_808._3_1_ = s_failed_to_i2c_select_0006a380[19];
        local_804 = (undefined2)ram0x0006a394;
        FUN_0002e584(0,&local_818,0);
      }
      if (iVar1 == 0) {
        iVar1 = -1;
      }
      else {
        FUN_000499e8(iVar1);
        iVar1 = -1;
      }
    }
  }
LAB_00049460:
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_00505188);
  return iVar1;
}

