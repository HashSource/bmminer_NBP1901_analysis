
void FUN_0002aef4(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 local_810;
  undefined4 uStack_80c;
  undefined4 uStack_808;
  undefined4 uStack_804;
  undefined4 uStack_800;
  undefined4 uStack_7fc;
  undefined4 uStack_7f8;
  undefined4 uStack_7f4;
  
  iVar3 = DAT_00592460;
  iVar2 = DAT_0058e354;
  uVar1 = DAT_0002afbc;
  if (DAT_0058e354 != 0) {
    *(undefined4 *)(DAT_0058e354 + 0x20) = 0;
    *(undefined4 *)(iVar2 + 4) = uVar1;
    *(int *)(iVar2 + 0x14) = iVar3;
    *(undefined4 *)(iVar2 + 0x94) = 1;
    if (iVar3 == 0) {
      local_810._0_1_ = s_Failed_to_calloc_cgpu_info_data_00063bcc[0];
      local_810._1_1_ = s_Failed_to_calloc_cgpu_info_data_00063bcc[1];
      local_810._2_1_ = s_Failed_to_calloc_cgpu_info_data_00063bcc[2];
      local_810._3_1_ = s_Failed_to_calloc_cgpu_info_data_00063bcc[3];
      uStack_80c._0_1_ = s_Failed_to_calloc_cgpu_info_data_00063bcc[4];
      uStack_80c._1_1_ = s_Failed_to_calloc_cgpu_info_data_00063bcc[5];
      uStack_80c._2_1_ = s_Failed_to_calloc_cgpu_info_data_00063bcc[6];
      uStack_80c._3_1_ = s_Failed_to_calloc_cgpu_info_data_00063bcc[7];
      uStack_808._0_1_ = s_Failed_to_calloc_cgpu_info_data_00063bcc[8];
      uStack_808._1_1_ = s_Failed_to_calloc_cgpu_info_data_00063bcc[9];
      uStack_808._2_1_ = s_Failed_to_calloc_cgpu_info_data_00063bcc[10];
      uStack_808._3_1_ = s_Failed_to_calloc_cgpu_info_data_00063bcc[11];
      uStack_804._0_1_ = s_Failed_to_calloc_cgpu_info_data_00063bcc[12];
      uStack_804._1_1_ = s_Failed_to_calloc_cgpu_info_data_00063bcc[13];
      uStack_804._2_1_ = s_Failed_to_calloc_cgpu_info_data_00063bcc[14];
      uStack_804._3_1_ = s_Failed_to_calloc_cgpu_info_data_00063bcc[15];
      uStack_800._0_1_ = s_Failed_to_calloc_cgpu_info_data_00063bcc[16];
      uStack_800._1_1_ = s_Failed_to_calloc_cgpu_info_data_00063bcc[17];
      uStack_800._2_1_ = s_Failed_to_calloc_cgpu_info_data_00063bcc[18];
      uStack_800._3_1_ = s_Failed_to_calloc_cgpu_info_data_00063bcc[19];
      uStack_7fc._0_1_ = s_Failed_to_calloc_cgpu_info_data_00063bcc[20];
      uStack_7fc._1_1_ = s_Failed_to_calloc_cgpu_info_data_00063bcc[21];
      uStack_7fc._2_1_ = s_Failed_to_calloc_cgpu_info_data_00063bcc[22];
      uStack_7fc._3_1_ = s_Failed_to_calloc_cgpu_info_data_00063bcc[23];
      uStack_7f8._0_1_ = s_Failed_to_calloc_cgpu_info_data_00063bcc[24];
      uStack_7f8._1_1_ = s_Failed_to_calloc_cgpu_info_data_00063bcc[25];
      uStack_7f8._2_1_ = s_Failed_to_calloc_cgpu_info_data_00063bcc[26];
      uStack_7f8._3_1_ = s_Failed_to_calloc_cgpu_info_data_00063bcc[27];
      uStack_7f4._0_1_ = s_Failed_to_calloc_cgpu_info_data_00063bcc[28];
      uStack_7f4._1_1_ = s_Failed_to_calloc_cgpu_info_data_00063bcc[29];
      uStack_7f4._2_1_ = s_Failed_to_calloc_cgpu_info_data_00063bcc[30];
      uStack_7f4._3_1_ = s_Failed_to_calloc_cgpu_info_data_00063bcc[31];
      FUN_0002e584(3,&local_810,1);
      iVar3 = *(int *)(iVar2 + 0x14);
    }
    *(undefined4 *)(iVar3 + 0x1654) = 0;
    *(undefined4 *)(iVar3 + 0x1658) = 1;
    *(undefined4 *)(iVar3 + 0x165c) = 2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  __assert_fail("cgpu","bmminer.c",0x7ea,DAT_0002afc0);
}

