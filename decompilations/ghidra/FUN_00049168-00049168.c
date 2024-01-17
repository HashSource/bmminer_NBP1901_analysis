
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_00049168(void)

{
  int iVar1;
  double dVar2;
  undefined4 local_820;
  undefined2 local_81c;
  undefined4 local_818;
  uint local_814;
  undefined4 local_810;
  undefined4 uStack_80c;
  undefined4 uStack_808;
  undefined4 uStack_804;
  undefined4 uStack_800;
  undefined4 local_7fc;
  undefined4 uStack_7f8;
  
  if ((DAT_00505180 == 0) && (iVar1 = FUN_00048abc(), iVar1 < 0)) {
    snprintf((char *)&local_810,0x800,"%s: auto exec bitmain_power_open, but open power failed\n",
             DAT_000492a0);
    FUN_0002e584(0,&local_810,0);
    dVar2 = (double)(longlong)iVar1;
  }
  else {
    local_814 = 0;
    local_818 = 0;
    local_820 = 0x304aa55;
    local_81c = 7;
    iVar1 = FUN_00048520(DAT_0050517c,&local_820,6,&local_818,8);
    if (iVar1 != 0) {
      local_810._0_1_ = s_get_AD_conversion_N_failed_0006a324[0];
      local_810._1_1_ = s_get_AD_conversion_N_failed_0006a324[1];
      local_810._2_1_ = s_get_AD_conversion_N_failed_0006a324[2];
      local_810._3_1_ = s_get_AD_conversion_N_failed_0006a324[3];
      uStack_80c._0_1_ = s_get_AD_conversion_N_failed_0006a324[4];
      uStack_80c._1_1_ = s_get_AD_conversion_N_failed_0006a324[5];
      uStack_80c._2_1_ = s_get_AD_conversion_N_failed_0006a324[6];
      uStack_80c._3_1_ = s_get_AD_conversion_N_failed_0006a324[7];
      uStack_808._0_1_ = s_get_AD_conversion_N_failed_0006a324[8];
      uStack_808._1_1_ = s_get_AD_conversion_N_failed_0006a324[9];
      uStack_808._2_1_ = s_get_AD_conversion_N_failed_0006a324[10];
      uStack_808._3_1_ = s_get_AD_conversion_N_failed_0006a324[11];
      uStack_804._0_1_ = s_get_AD_conversion_N_failed_0006a324[12];
      uStack_804._1_1_ = s_get_AD_conversion_N_failed_0006a324[13];
      uStack_804._2_1_ = s_get_AD_conversion_N_failed_0006a324[14];
      uStack_804._3_1_ = s_get_AD_conversion_N_failed_0006a324[15];
      uStack_800._0_1_ = s_get_AD_conversion_N_failed_0006a324[16];
      uStack_800._1_1_ = s_get_AD_conversion_N_failed_0006a324[17];
      uStack_800._2_1_ = s_get_AD_conversion_N_failed_0006a324[18];
      uStack_800._3_1_ = s_get_AD_conversion_N_failed_0006a324[19];
      local_7fc._0_1_ = s_get_AD_conversion_N_failed_0006a324[20];
      local_7fc._1_1_ = s_get_AD_conversion_N_failed_0006a324[21];
      local_7fc._2_1_ = s_get_AD_conversion_N_failed_0006a324[22];
      local_7fc._3_1_ = s_get_AD_conversion_N_failed_0006a324[23];
      uStack_7f8._0_1_ = s_get_AD_conversion_N_failed_0006a324[24];
      uStack_7f8._1_1_ = s_get_AD_conversion_N_failed_0006a324[25];
      uStack_7f8._2_1_ = s_get_AD_conversion_N_failed_0006a324[26];
      uStack_7f8._3_1_ = s_get_AD_conversion_N_failed_0006a324[27];
      FUN_0002e584(0,&local_810,0);
      local_810._0_1_ = s_can_nont_get_voltage_0006a340[0];
      local_810._1_1_ = s_can_nont_get_voltage_0006a340[1];
      local_810._2_1_ = s_can_nont_get_voltage_0006a340[2];
      local_810._3_1_ = s_can_nont_get_voltage_0006a340[3];
      uStack_80c._0_1_ = s_can_nont_get_voltage_0006a340[4];
      uStack_80c._1_1_ = s_can_nont_get_voltage_0006a340[5];
      uStack_80c._2_1_ = s_can_nont_get_voltage_0006a340[6];
      uStack_80c._3_1_ = s_can_nont_get_voltage_0006a340[7];
      uStack_808._0_1_ = s_can_nont_get_voltage_0006a340[8];
      uStack_808._1_1_ = s_can_nont_get_voltage_0006a340[9];
      uStack_808._2_1_ = s_can_nont_get_voltage_0006a340[10];
      uStack_808._3_1_ = s_can_nont_get_voltage_0006a340[11];
      uStack_804._0_1_ = s_can_nont_get_voltage_0006a340[12];
      uStack_804._1_1_ = s_can_nont_get_voltage_0006a340[13];
      uStack_804._2_1_ = s_can_nont_get_voltage_0006a340[14];
      uStack_804._3_1_ = s_can_nont_get_voltage_0006a340[15];
      uStack_800._0_1_ = s_can_nont_get_voltage_0006a340[16];
      uStack_800._1_1_ = s_can_nont_get_voltage_0006a340[17];
      uStack_800._2_1_ = s_can_nont_get_voltage_0006a340[18];
      uStack_800._3_1_ = s_can_nont_get_voltage_0006a340[19];
      local_7fc = CONCAT22(local_7fc._2_2_,(short)ram0x0006a354);
      FUN_0002e584(0,&local_810,0);
      return DAT_00049298;
    }
    dVar2 = (double)FUN_00048f9c(local_814 & 0xffff);
  }
  return dVar2;
}

