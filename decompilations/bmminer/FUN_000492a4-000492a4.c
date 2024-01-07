
int FUN_000492a4(int param_1,int param_2,int param_3)

{
  undefined *puVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 local_82c;
  undefined local_828;
  undefined local_827;
  undefined local_826;
  undefined local_825;
  undefined4 local_824;
  undefined4 local_820;
  undefined4 local_81c;
  undefined4 local_818;
  undefined4 uStack_814;
  undefined4 uStack_810;
  undefined4 uStack_80c;
  undefined4 uStack_808;
  undefined4 uStack_804;
  undefined4 uStack_800;
  
  iVar2 = param_3 + 0xc + param_1;
  iVar4 = 0;
  local_828 = (undefined)param_1;
  local_827 = (undefined)param_3;
  local_826 = (undefined)iVar2;
  local_825 = (undefined)((uint)iVar2 >> 8);
  local_820 = 0;
  local_81c = 0;
  local_824 = 0;
  local_82c = 0x606aa55;
  if ((DAT_00505180 == 0) && (iVar4 = FUN_00048abc(), iVar4 < 0)) {
    snprintf((char *)&local_818,0x800,"%s: auto exec bitmain_power_open, but open power failed\n",
             DAT_000493cc);
    FUN_0002e584(0,&local_818,0);
  }
  else {
    iVar2 = FUN_00048520(DAT_0050517c,&local_82c,8,&local_824,param_3 + 7);
    if (iVar2 == 0) {
      if (param_3 != 0) {
        puVar3 = (undefined *)(param_2 + -1);
        puVar1 = (undefined *)((int)&local_820 + 1);
        do {
          puVar3 = puVar3 + 1;
          *puVar3 = *puVar1;
          puVar1 = puVar1 + 1;
        } while (puVar3 != (undefined *)(param_2 + (param_3 - 1U & 0xff)));
      }
    }
    else {
      iVar4 = -0x7ffffd00;
      local_818._0_1_ = s_set_DA_conversion_N_failed_0006a260[0];
      local_818._1_1_ = s_set_DA_conversion_N_failed_0006a260[1];
      local_818._2_1_ = s_set_DA_conversion_N_failed_0006a260[2];
      local_818._3_1_ = s_set_DA_conversion_N_failed_0006a260[3];
      uStack_814._0_1_ = s_set_DA_conversion_N_failed_0006a260[4];
      uStack_814._1_1_ = s_set_DA_conversion_N_failed_0006a260[5];
      uStack_814._2_1_ = s_set_DA_conversion_N_failed_0006a260[6];
      uStack_814._3_1_ = s_set_DA_conversion_N_failed_0006a260[7];
      uStack_810._0_1_ = s_set_DA_conversion_N_failed_0006a260[8];
      uStack_810._1_1_ = s_set_DA_conversion_N_failed_0006a260[9];
      uStack_810._2_1_ = s_set_DA_conversion_N_failed_0006a260[10];
      uStack_810._3_1_ = s_set_DA_conversion_N_failed_0006a260[11];
      uStack_80c._0_1_ = s_set_DA_conversion_N_failed_0006a260[12];
      uStack_80c._1_1_ = s_set_DA_conversion_N_failed_0006a260[13];
      uStack_80c._2_1_ = s_set_DA_conversion_N_failed_0006a260[14];
      uStack_80c._3_1_ = s_set_DA_conversion_N_failed_0006a260[15];
      uStack_808._0_1_ = s_set_DA_conversion_N_failed_0006a260[16];
      uStack_808._1_1_ = s_set_DA_conversion_N_failed_0006a260[17];
      uStack_808._2_1_ = s_set_DA_conversion_N_failed_0006a260[18];
      uStack_808._3_1_ = s_set_DA_conversion_N_failed_0006a260[19];
      uStack_804._0_1_ = s_set_DA_conversion_N_failed_0006a260[20];
      uStack_804._1_1_ = s_set_DA_conversion_N_failed_0006a260[21];
      uStack_804._2_1_ = s_set_DA_conversion_N_failed_0006a260[22];
      uStack_804._3_1_ = s_set_DA_conversion_N_failed_0006a260[23];
      uStack_800._0_1_ = s_set_DA_conversion_N_failed_0006a260[24];
      uStack_800._1_1_ = s_set_DA_conversion_N_failed_0006a260[25];
      uStack_800._2_1_ = s_set_DA_conversion_N_failed_0006a260[26];
      uStack_800._3_1_ = s_set_DA_conversion_N_failed_0006a260[27];
      FUN_0002e584(0,&local_818);
    }
  }
  return iVar4;
}

