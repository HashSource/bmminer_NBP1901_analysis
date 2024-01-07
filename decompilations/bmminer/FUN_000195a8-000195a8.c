
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000195a8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_810;
  undefined4 uStack_80c;
  undefined4 uStack_808;
  undefined4 uStack_804;
  undefined4 local_800;
  undefined4 uStack_7fc;
  undefined2 uStack_7f8;
  undefined local_7f6;
  
  if (3 < DAT_0007eb9c) {
    snprintf((char *)&local_810,0x800,"%s to %d.\n","set_voltage_by_steps",param_1);
    FUN_0002e584(3,&local_810,0);
  }
  iVar1 = FUN_00048f00(SUB84((double)(longlong)param_1 / DAT_00019690,0));
  if (iVar1 < 0) {
    if (3 < DAT_0007eb9c) {
      local_810._0_1_ = s_bitmain_set_voltage_failed_00061398[0];
      local_810._1_1_ = s_bitmain_set_voltage_failed_00061398[1];
      local_810._2_1_ = s_bitmain_set_voltage_failed_00061398[2];
      local_810._3_1_ = s_bitmain_set_voltage_failed_00061398[3];
      uStack_80c._0_1_ = s_bitmain_set_voltage_failed_00061398[4];
      uStack_80c._1_1_ = s_bitmain_set_voltage_failed_00061398[5];
      uStack_80c._2_1_ = s_bitmain_set_voltage_failed_00061398[6];
      uStack_80c._3_1_ = s_bitmain_set_voltage_failed_00061398[7];
      uStack_808._0_1_ = s_bitmain_set_voltage_failed_00061398[8];
      uStack_808._1_1_ = s_bitmain_set_voltage_failed_00061398[9];
      uStack_808._2_1_ = s_bitmain_set_voltage_failed_00061398[10];
      uStack_808._3_1_ = s_bitmain_set_voltage_failed_00061398[11];
      uStack_804._0_1_ = s_bitmain_set_voltage_failed_00061398[12];
      uStack_804._1_1_ = s_bitmain_set_voltage_failed_00061398[13];
      uStack_804._2_1_ = s_bitmain_set_voltage_failed_00061398[14];
      uStack_804._3_1_ = s_bitmain_set_voltage_failed_00061398[15];
      local_800._0_1_ = s_bitmain_set_voltage_failed_00061398[16];
      local_800._1_1_ = s_bitmain_set_voltage_failed_00061398[17];
      local_800._2_1_ = s_bitmain_set_voltage_failed_00061398[18];
      local_800._3_1_ = s_bitmain_set_voltage_failed_00061398[19];
      uStack_7fc._0_1_ = s_bitmain_set_voltage_failed_00061398[20];
      uStack_7fc._1_1_ = s_bitmain_set_voltage_failed_00061398[21];
      uStack_7fc._2_1_ = s_bitmain_set_voltage_failed_00061398[22];
      uStack_7fc._3_1_ = s_bitmain_set_voltage_failed_00061398[23];
      uStack_7f8 = (undefined2)ram0x000613b0;
      local_7f6 = (undefined)((uint)ram0x000613b0 >> 0x10);
      FUN_0002e584(3,&local_810,0);
      return 0xffffffff;
    }
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0;
    DAT_0007f8bc = param_1;
    DAT_0007f8c0 = param_1;
  }
  return uVar2;
}

