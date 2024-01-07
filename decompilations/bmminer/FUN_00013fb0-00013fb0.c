
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00013fb0(int param_1)

{
  undefined4 local_810;
  undefined4 uStack_80c;
  undefined4 uStack_808;
  undefined4 uStack_804;
  undefined4 uStack_800;
  undefined2 uStack_7fc;
  undefined local_7fa;
  
  if (DAT_0007f7a8 == 0) {
    DAT_0007f7a8 = FUN_0004101c(0,100000);
  }
  if (DAT_0007f7a8 < 0) {
    if (((DAT_00590404 != '\0') || (DAT_00482a5c != '\0')) || (2 < DAT_0007eba0)) {
      local_810._0_1_ = s_pwm_for_fan_init_error_000603dc[0];
      local_810._1_1_ = s_pwm_for_fan_init_error_000603dc[1];
      local_810._2_1_ = s_pwm_for_fan_init_error_000603dc[2];
      local_810._3_1_ = s_pwm_for_fan_init_error_000603dc[3];
      uStack_80c._0_1_ = s_pwm_for_fan_init_error_000603dc[4];
      uStack_80c._1_1_ = s_pwm_for_fan_init_error_000603dc[5];
      uStack_80c._2_1_ = s_pwm_for_fan_init_error_000603dc[6];
      uStack_80c._3_1_ = s_pwm_for_fan_init_error_000603dc[7];
      uStack_808._0_1_ = s_pwm_for_fan_init_error_000603dc[8];
      uStack_808._1_1_ = s_pwm_for_fan_init_error_000603dc[9];
      uStack_808._2_1_ = s_pwm_for_fan_init_error_000603dc[10];
      uStack_808._3_1_ = s_pwm_for_fan_init_error_000603dc[11];
      uStack_804._0_1_ = s_pwm_for_fan_init_error_000603dc[12];
      uStack_804._1_1_ = s_pwm_for_fan_init_error_000603dc[13];
      uStack_804._2_1_ = s_pwm_for_fan_init_error_000603dc[14];
      uStack_804._3_1_ = s_pwm_for_fan_init_error_000603dc[15];
      uStack_800._0_1_ = s_pwm_for_fan_init_error_000603dc[16];
      uStack_800._1_1_ = s_pwm_for_fan_init_error_000603dc[17];
      uStack_800._2_1_ = s_pwm_for_fan_init_error_000603dc[18];
      uStack_800._3_1_ = s_pwm_for_fan_init_error_000603dc[19];
      uStack_7fc = (undefined2)ram0x000603f0;
      local_7fa = (undefined)((uint)ram0x000603f0 >> 0x10);
      FUN_0002e584(3,&local_810,0);
      return;
    }
  }
  else if (param_1 != DAT_0007f7ac) {
    if (4 < DAT_0007eb9c) {
      snprintf((char *)&local_810,0x800,"set pwm = %d",param_1);
      FUN_0002e584(4,&local_810,0);
    }
    FUN_0004110c(DAT_0007f7a8,param_1);
    FUN_0001e49c(param_1);
    DAT_0007f7ac = param_1;
  }
  return;
}

