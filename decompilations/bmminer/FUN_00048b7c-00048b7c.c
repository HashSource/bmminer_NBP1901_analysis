
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00048b7c(void)

{
  uint uVar1;
  int iVar2;
  undefined4 local_820;
  undefined2 local_81c;
  undefined4 local_818;
  uint local_814;
  undefined4 local_810;
  undefined4 uStack_80c;
  undefined4 uStack_808;
  undefined4 uStack_804;
  undefined4 local_800;
  undefined4 uStack_7fc;
  undefined2 local_7f8;
  undefined local_7f6;
  
  if ((DAT_00505180 == 0) && (uVar1 = FUN_00048abc(), (int)uVar1 < 0)) {
    snprintf((char *)&local_810,0x800,"%s: auto exec bitmain_power_open, but open power failed\n",
             DAT_00048cb4);
    FUN_0002e584(0,&local_810,0);
  }
  else {
    local_814 = 0;
    local_818 = 0;
    local_820 = 0xa04aa55;
    local_81c = 0xe;
    iVar2 = FUN_00048520(DAT_0050517c,&local_820,6,&local_818,8);
    if (iVar2 != 0) {
      local_810._0_1_ = s_get_power_status_failed_0006a2ec[0];
      local_810._1_1_ = s_get_power_status_failed_0006a2ec[1];
      local_810._2_1_ = s_get_power_status_failed_0006a2ec[2];
      local_810._3_1_ = s_get_power_status_failed_0006a2ec[3];
      uStack_80c._0_1_ = s_get_power_status_failed_0006a2ec[4];
      uStack_80c._1_1_ = s_get_power_status_failed_0006a2ec[5];
      uStack_80c._2_1_ = s_get_power_status_failed_0006a2ec[6];
      uStack_80c._3_1_ = s_get_power_status_failed_0006a2ec[7];
      uStack_808._0_1_ = s_get_power_status_failed_0006a2ec[8];
      uStack_808._1_1_ = s_get_power_status_failed_0006a2ec[9];
      uStack_808._2_1_ = s_get_power_status_failed_0006a2ec[10];
      uStack_808._3_1_ = s_get_power_status_failed_0006a2ec[11];
      uStack_804._0_1_ = s_get_power_status_failed_0006a2ec[12];
      uStack_804._1_1_ = s_get_power_status_failed_0006a2ec[13];
      uStack_804._2_1_ = s_get_power_status_failed_0006a2ec[14];
      uStack_804._3_1_ = s_get_power_status_failed_0006a2ec[15];
      local_800._0_1_ = s_get_power_status_failed_0006a2ec[16];
      local_800._1_1_ = s_get_power_status_failed_0006a2ec[17];
      local_800._2_1_ = s_get_power_status_failed_0006a2ec[18];
      local_800._3_1_ = s_get_power_status_failed_0006a2ec[19];
      uStack_7fc._0_1_ = s_get_power_status_failed_0006a2ec[20];
      uStack_7fc._1_1_ = s_get_power_status_failed_0006a2ec[21];
      uStack_7fc._2_1_ = s_get_power_status_failed_0006a2ec[22];
      uStack_7fc._3_1_ = s_get_power_status_failed_0006a2ec[23];
      local_7f8 = CONCAT11(local_7f8._1_1_,(char)ram0x0006a304);
      FUN_0002e584(0,&local_810,0);
      local_810._0_1_ = s_can_nont_get_power_status_0006a308[0];
      local_810._1_1_ = s_can_nont_get_power_status_0006a308[1];
      local_810._2_1_ = s_can_nont_get_power_status_0006a308[2];
      local_810._3_1_ = s_can_nont_get_power_status_0006a308[3];
      uStack_80c._0_1_ = s_can_nont_get_power_status_0006a308[4];
      uStack_80c._1_1_ = s_can_nont_get_power_status_0006a308[5];
      uStack_80c._2_1_ = s_can_nont_get_power_status_0006a308[6];
      uStack_80c._3_1_ = s_can_nont_get_power_status_0006a308[7];
      uStack_808._0_1_ = s_can_nont_get_power_status_0006a308[8];
      uStack_808._1_1_ = s_can_nont_get_power_status_0006a308[9];
      uStack_808._2_1_ = s_can_nont_get_power_status_0006a308[10];
      uStack_808._3_1_ = s_can_nont_get_power_status_0006a308[11];
      uStack_804._0_1_ = s_can_nont_get_power_status_0006a308[12];
      uStack_804._1_1_ = s_can_nont_get_power_status_0006a308[13];
      uStack_804._2_1_ = s_can_nont_get_power_status_0006a308[14];
      uStack_804._3_1_ = s_can_nont_get_power_status_0006a308[15];
      local_800._0_1_ = s_can_nont_get_power_status_0006a308[16];
      local_800._1_1_ = s_can_nont_get_power_status_0006a308[17];
      local_800._2_1_ = s_can_nont_get_power_status_0006a308[18];
      local_800._3_1_ = s_can_nont_get_power_status_0006a308[19];
      uStack_7fc._0_1_ = s_can_nont_get_power_status_0006a308[20];
      uStack_7fc._1_1_ = s_can_nont_get_power_status_0006a308[21];
      uStack_7fc._2_1_ = s_can_nont_get_power_status_0006a308[22];
      uStack_7fc._3_1_ = s_can_nont_get_power_status_0006a308[23];
      local_7f8 = (undefined2)ram0x0006a320;
      local_7f6 = (undefined)((uint)ram0x0006a320 >> 0x10);
      FUN_0002e584(0,&local_810,0);
      return 0x80000300;
    }
    uVar1 = local_814 & 0xffff;
  }
  return uVar1;
}

