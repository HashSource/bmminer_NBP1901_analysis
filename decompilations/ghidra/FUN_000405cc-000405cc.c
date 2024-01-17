
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000405cc(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_814;
  undefined4 local_810;
  undefined4 uStack_80c;
  undefined4 uStack_808;
  undefined4 uStack_804;
  undefined4 local_800;
  undefined4 uStack_7fc;
  undefined4 uStack_7f8;
  undefined4 local_7f4;
  undefined4 local_7f0;
  undefined4 uStack_7ec;
  undefined local_7e8;
  
  local_814 = param_1;
  if (param_2 == 0) {
    local_810 = s_bad_param_00068fa4._0_4_;
    uStack_80c = s_bad_param_00068fa4._4_4_;
    FUN_0002e584(0,&local_810,0);
    uVar2 = 0xffffffff;
  }
  else {
    iVar1 = pthread_mutex_lock((pthread_mutex_t *)&DAT_00504cac);
    if (iVar1 == 0) {
      iVar1 = FUN_00043338(DAT_00504cc4,&local_814);
      if (iVar1 == 1) {
        FUN_00043358(DAT_00504cc4,&local_814);
      }
      else {
        local_810._0_1_ = s_callback_function_not_registered_00068fd0[0];
        local_810._1_1_ = s_callback_function_not_registered_00068fd0[1];
        local_810._2_1_ = s_callback_function_not_registered_00068fd0[2];
        local_810._3_1_ = s_callback_function_not_registered_00068fd0[3];
        uStack_80c._0_1_ = s_callback_function_not_registered_00068fd0[4];
        uStack_80c._1_1_ = s_callback_function_not_registered_00068fd0[5];
        uStack_80c._2_1_ = s_callback_function_not_registered_00068fd0[6];
        uStack_80c._3_1_ = s_callback_function_not_registered_00068fd0[7];
        uStack_808._0_1_ = s_callback_function_not_registered_00068fd0[8];
        uStack_808._1_1_ = s_callback_function_not_registered_00068fd0[9];
        uStack_808._2_1_ = s_callback_function_not_registered_00068fd0[10];
        uStack_808._3_1_ = s_callback_function_not_registered_00068fd0[11];
        uStack_804._0_1_ = s_callback_function_not_registered_00068fd0[12];
        uStack_804._1_1_ = s_callback_function_not_registered_00068fd0[13];
        uStack_804._2_1_ = s_callback_function_not_registered_00068fd0[14];
        uStack_804._3_1_ = s_callback_function_not_registered_00068fd0[15];
        local_800._0_1_ = s_callback_function_not_registered_00068fd0[16];
        local_800._1_1_ = s_callback_function_not_registered_00068fd0[17];
        local_800._2_1_ = s_callback_function_not_registered_00068fd0[18];
        local_800._3_1_ = s_callback_function_not_registered_00068fd0[19];
        uStack_7fc._0_1_ = s_callback_function_not_registered_00068fd0[20];
        uStack_7fc._1_1_ = s_callback_function_not_registered_00068fd0[21];
        uStack_7fc._2_1_ = s_callback_function_not_registered_00068fd0[22];
        uStack_7fc._3_1_ = s_callback_function_not_registered_00068fd0[23];
        uStack_7f8._0_1_ = s_callback_function_not_registered_00068fd0[24];
        uStack_7f8._1_1_ = s_callback_function_not_registered_00068fd0[25];
        uStack_7f8._2_1_ = s_callback_function_not_registered_00068fd0[26];
        uStack_7f8._3_1_ = s_callback_function_not_registered_00068fd0[27];
        local_7f4._0_1_ = s_callback_function_not_registered_00068fd0[28];
        local_7f4._1_1_ = s_callback_function_not_registered_00068fd0[29];
        local_7f4._2_1_ = s_callback_function_not_registered_00068fd0[30];
        local_7f4._3_1_ = s_callback_function_not_registered_00068fd0[31];
        local_7f0._0_1_ = s_callback_function_not_registered_00068fd0[32];
        local_7f0._1_1_ = s_callback_function_not_registered_00068fd0[33];
        local_7f0._2_1_ = s_callback_function_not_registered_00068fd0[34];
        local_7f0._3_1_ = s_callback_function_not_registered_00068fd0[35];
        uStack_7ec._0_1_ = s_callback_function_not_registered_00068fd0[36];
        uStack_7ec._1_1_ = s_callback_function_not_registered_00068fd0[37];
        uStack_7ec._2_1_ = s_callback_function_not_registered_00068fd0[38];
        uStack_7ec._3_1_ = s_callback_function_not_registered_00068fd0[39];
        local_7e8 = (undefined)ram0x00068ff8;
        FUN_0002e584(1,&local_810,0);
      }
      pthread_mutex_unlock(DAT_000406e0);
      uVar2 = 0;
    }
    else {
      local_810._0_1_ = s_fail_to_lock_gpio_ctrl_mutex_00068fb0[0];
      local_810._1_1_ = s_fail_to_lock_gpio_ctrl_mutex_00068fb0[1];
      local_810._2_1_ = s_fail_to_lock_gpio_ctrl_mutex_00068fb0[2];
      local_810._3_1_ = s_fail_to_lock_gpio_ctrl_mutex_00068fb0[3];
      uStack_80c._0_1_ = s_fail_to_lock_gpio_ctrl_mutex_00068fb0[4];
      uStack_80c._1_1_ = s_fail_to_lock_gpio_ctrl_mutex_00068fb0[5];
      uStack_80c._2_1_ = s_fail_to_lock_gpio_ctrl_mutex_00068fb0[6];
      uStack_80c._3_1_ = s_fail_to_lock_gpio_ctrl_mutex_00068fb0[7];
      uStack_808._0_1_ = s_fail_to_lock_gpio_ctrl_mutex_00068fb0[8];
      uStack_808._1_1_ = s_fail_to_lock_gpio_ctrl_mutex_00068fb0[9];
      uStack_808._2_1_ = s_fail_to_lock_gpio_ctrl_mutex_00068fb0[10];
      uStack_808._3_1_ = s_fail_to_lock_gpio_ctrl_mutex_00068fb0[11];
      uStack_804._0_1_ = s_fail_to_lock_gpio_ctrl_mutex_00068fb0[12];
      uStack_804._1_1_ = s_fail_to_lock_gpio_ctrl_mutex_00068fb0[13];
      uStack_804._2_1_ = s_fail_to_lock_gpio_ctrl_mutex_00068fb0[14];
      uStack_804._3_1_ = s_fail_to_lock_gpio_ctrl_mutex_00068fb0[15];
      local_800._0_1_ = s_fail_to_lock_gpio_ctrl_mutex_00068fb0[16];
      local_800._1_1_ = s_fail_to_lock_gpio_ctrl_mutex_00068fb0[17];
      local_800._2_1_ = s_fail_to_lock_gpio_ctrl_mutex_00068fb0[18];
      local_800._3_1_ = s_fail_to_lock_gpio_ctrl_mutex_00068fb0[19];
      uStack_7fc._0_1_ = s_fail_to_lock_gpio_ctrl_mutex_00068fb0[20];
      uStack_7fc._1_1_ = s_fail_to_lock_gpio_ctrl_mutex_00068fb0[21];
      uStack_7fc._2_1_ = s_fail_to_lock_gpio_ctrl_mutex_00068fb0[22];
      uStack_7fc._3_1_ = s_fail_to_lock_gpio_ctrl_mutex_00068fb0[23];
      uStack_7f8._0_1_ = s_fail_to_lock_gpio_ctrl_mutex_00068fb0[24];
      uStack_7f8._1_1_ = s_fail_to_lock_gpio_ctrl_mutex_00068fb0[25];
      uStack_7f8._2_1_ = s_fail_to_lock_gpio_ctrl_mutex_00068fb0[26];
      uStack_7f8._3_1_ = s_fail_to_lock_gpio_ctrl_mutex_00068fb0[27];
      local_7f4 = CONCAT22(local_7f4._2_2_,(short)ram0x00068fcc);
      FUN_0002e584(0,&local_810);
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}

