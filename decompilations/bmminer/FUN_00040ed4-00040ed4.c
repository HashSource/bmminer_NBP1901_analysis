
undefined4 FUN_00040ed4(undefined4 param_1,int param_2)

{
  int iVar1;
  ssize_t sVar2;
  undefined4 uVar3;
  void *__buf;
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
  undefined4 uStack_7ec;
  
  iVar1 = pthread_mutex_lock(DAT_00041014);
  if (iVar1 == 0) {
    snprintf(acStack_850,0x40,"/sys/class/gpio/gpio%d/value",param_1);
    iVar1 = open64(acStack_850,1);
    if (iVar1 < 0) {
      local_810._0_1_ = s_Failed_to_open_gpio_value_for_wr_000691f8[0];
      local_810._1_1_ = s_Failed_to_open_gpio_value_for_wr_000691f8[1];
      local_810._2_1_ = s_Failed_to_open_gpio_value_for_wr_000691f8[2];
      local_810._3_1_ = s_Failed_to_open_gpio_value_for_wr_000691f8[3];
      uStack_80c._0_1_ = s_Failed_to_open_gpio_value_for_wr_000691f8[4];
      uStack_80c._1_1_ = s_Failed_to_open_gpio_value_for_wr_000691f8[5];
      uStack_80c._2_1_ = s_Failed_to_open_gpio_value_for_wr_000691f8[6];
      uStack_80c._3_1_ = s_Failed_to_open_gpio_value_for_wr_000691f8[7];
      uStack_808._0_1_ = s_Failed_to_open_gpio_value_for_wr_000691f8[8];
      uStack_808._1_1_ = s_Failed_to_open_gpio_value_for_wr_000691f8[9];
      uStack_808._2_1_ = s_Failed_to_open_gpio_value_for_wr_000691f8[10];
      uStack_808._3_1_ = s_Failed_to_open_gpio_value_for_wr_000691f8[11];
      uStack_804._0_1_ = s_Failed_to_open_gpio_value_for_wr_000691f8[12];
      uStack_804._1_1_ = s_Failed_to_open_gpio_value_for_wr_000691f8[13];
      uStack_804._2_1_ = s_Failed_to_open_gpio_value_for_wr_000691f8[14];
      uStack_804._3_1_ = s_Failed_to_open_gpio_value_for_wr_000691f8[15];
      local_800._0_1_ = s_Failed_to_open_gpio_value_for_wr_000691f8[16];
      local_800._1_1_ = s_Failed_to_open_gpio_value_for_wr_000691f8[17];
      local_800._2_1_ = s_Failed_to_open_gpio_value_for_wr_000691f8[18];
      local_800._3_1_ = s_Failed_to_open_gpio_value_for_wr_000691f8[19];
      uStack_7fc._0_1_ = s_Failed_to_open_gpio_value_for_wr_000691f8[20];
      uStack_7fc._1_1_ = s_Failed_to_open_gpio_value_for_wr_000691f8[21];
      uStack_7fc._2_1_ = s_Failed_to_open_gpio_value_for_wr_000691f8[22];
      uStack_7fc._3_1_ = s_Failed_to_open_gpio_value_for_wr_000691f8[23];
      uStack_7f8._0_1_ = s_Failed_to_open_gpio_value_for_wr_000691f8[24];
      uStack_7f8._1_1_ = s_Failed_to_open_gpio_value_for_wr_000691f8[25];
      uStack_7f8._2_1_ = s_Failed_to_open_gpio_value_for_wr_000691f8[26];
      uStack_7f8._3_1_ = s_Failed_to_open_gpio_value_for_wr_000691f8[27];
      uStack_7f4._0_1_ = s_Failed_to_open_gpio_value_for_wr_000691f8[28];
      uStack_7f4._1_1_ = s_Failed_to_open_gpio_value_for_wr_000691f8[29];
      uStack_7f4._2_1_ = s_Failed_to_open_gpio_value_for_wr_000691f8[30];
      uStack_7f4._3_1_ = s_Failed_to_open_gpio_value_for_wr_000691f8[31];
      uStack_7f0._0_1_ = s_Failed_to_open_gpio_value_for_wr_000691f8[32];
      uStack_7f0._1_1_ = s_Failed_to_open_gpio_value_for_wr_000691f8[33];
      uStack_7f0._2_1_ = s_Failed_to_open_gpio_value_for_wr_000691f8[34];
      uStack_7f0._3_1_ = s_Failed_to_open_gpio_value_for_wr_000691f8[35];
      uStack_7ec._0_1_ = s_Failed_to_open_gpio_value_for_wr_000691f8[36];
      uStack_7ec._1_1_ = s_Failed_to_open_gpio_value_for_wr_000691f8[37];
      uStack_7ec._2_1_ = s_Failed_to_open_gpio_value_for_wr_000691f8[38];
      uStack_7ec._3_1_ = s_Failed_to_open_gpio_value_for_wr_000691f8[39];
      FUN_0002e584(0,&local_810,0);
      pthread_mutex_unlock(DAT_00041014);
      uVar3 = 0xfffffffe;
    }
    else {
      __buf = DAT_00041018;
      if (param_2 != 0) {
        __buf = (void *)((int)DAT_00041018 + 1);
      }
      sVar2 = write(iVar1,__buf,1);
      if (sVar2 < 0) {
        local_810._0_1_ = s_Failed_to_write_value__00069220[0];
        local_810._1_1_ = s_Failed_to_write_value__00069220[1];
        local_810._2_1_ = s_Failed_to_write_value__00069220[2];
        local_810._3_1_ = s_Failed_to_write_value__00069220[3];
        uStack_80c._0_1_ = s_Failed_to_write_value__00069220[4];
        uStack_80c._1_1_ = s_Failed_to_write_value__00069220[5];
        uStack_80c._2_1_ = s_Failed_to_write_value__00069220[6];
        uStack_80c._3_1_ = s_Failed_to_write_value__00069220[7];
        uStack_808._0_1_ = s_Failed_to_write_value__00069220[8];
        uStack_808._1_1_ = s_Failed_to_write_value__00069220[9];
        uStack_808._2_1_ = s_Failed_to_write_value__00069220[10];
        uStack_808._3_1_ = s_Failed_to_write_value__00069220[11];
        uStack_804._0_1_ = s_Failed_to_write_value__00069220[12];
        uStack_804._1_1_ = s_Failed_to_write_value__00069220[13];
        uStack_804._2_1_ = s_Failed_to_write_value__00069220[14];
        uStack_804._3_1_ = s_Failed_to_write_value__00069220[15];
        local_800._0_1_ = s_Failed_to_write_value__00069220[16];
        local_800._1_1_ = s_Failed_to_write_value__00069220[17];
        local_800._2_1_ = s_Failed_to_write_value__00069220[18];
        local_800._3_1_ = s_Failed_to_write_value__00069220[19];
        uStack_7fc._0_1_ = s_Failed_to_write_value__00069220[20];
        uStack_7fc._1_1_ = s_Failed_to_write_value__00069220[21];
        uStack_7fc._2_1_ = s_Failed_to_write_value__00069220[22];
        uStack_7fc._3_1_ = s_Failed_to_write_value__00069220[23];
        FUN_0002e584(0,&local_810,0);
        close(iVar1);
        pthread_mutex_unlock(DAT_00041014);
        uVar3 = 0xfffffffd;
      }
      else {
        close(iVar1);
        pthread_mutex_unlock(DAT_00041014);
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

