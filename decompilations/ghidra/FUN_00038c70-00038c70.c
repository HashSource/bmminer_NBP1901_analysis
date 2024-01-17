
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00038c70(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 local_818;
  undefined4 uStack_814;
  undefined4 uStack_810;
  undefined4 uStack_80c;
  undefined4 local_808;
  undefined4 uStack_804;
  undefined4 uStack_800;
  undefined4 uStack_7fc;
  undefined4 local_7f8;
  undefined4 uStack_7f4;
  undefined4 uStack_7f0;
  undefined4 uStack_7ec;
  
  if (DAT_0007eb9c < 5) {
    if (1 < param_1 - 0xa0U) {
LAB_00038ca4:
      FUN_000356c4(0x14,0xff);
      if (DAT_0007eb9c < 4) {
        return 0xffffffff;
      }
      snprintf((char *)&local_818,0x800,"Invalid sweep type 0x%X\n",param_1);
      goto LAB_00038dac;
    }
  }
  else {
    snprintf((char *)&local_818,0x800,"[DEBUG] sweep_type = 0x%X, pattern_file_path = %s\n",param_1,
             param_2);
    FUN_0002e584(4,&local_818,0);
    if (1 < param_1 - 0xa0U) goto LAB_00038ca4;
    if (4 < DAT_0007eb9c) {
      local_818._0_1_ = s__DEBUG__allocate_memory_for_patt_00067c7c[0];
      local_818._1_1_ = s__DEBUG__allocate_memory_for_patt_00067c7c[1];
      local_818._2_1_ = s__DEBUG__allocate_memory_for_patt_00067c7c[2];
      local_818._3_1_ = s__DEBUG__allocate_memory_for_patt_00067c7c[3];
      uStack_814._0_1_ = s__DEBUG__allocate_memory_for_patt_00067c7c[4];
      uStack_814._1_1_ = s__DEBUG__allocate_memory_for_patt_00067c7c[5];
      uStack_814._2_1_ = s__DEBUG__allocate_memory_for_patt_00067c7c[6];
      uStack_814._3_1_ = s__DEBUG__allocate_memory_for_patt_00067c7c[7];
      uStack_810._0_1_ = s__DEBUG__allocate_memory_for_patt_00067c7c[8];
      uStack_810._1_1_ = s__DEBUG__allocate_memory_for_patt_00067c7c[9];
      uStack_810._2_1_ = s__DEBUG__allocate_memory_for_patt_00067c7c[10];
      uStack_810._3_1_ = s__DEBUG__allocate_memory_for_patt_00067c7c[11];
      uStack_80c._0_1_ = s__DEBUG__allocate_memory_for_patt_00067c7c[12];
      uStack_80c._1_1_ = s__DEBUG__allocate_memory_for_patt_00067c7c[13];
      uStack_80c._2_1_ = s__DEBUG__allocate_memory_for_patt_00067c7c[14];
      uStack_80c._3_1_ = s__DEBUG__allocate_memory_for_patt_00067c7c[15];
      local_808._0_1_ = s__DEBUG__allocate_memory_for_patt_00067c7c[16];
      local_808._1_1_ = s__DEBUG__allocate_memory_for_patt_00067c7c[17];
      local_808._2_1_ = s__DEBUG__allocate_memory_for_patt_00067c7c[18];
      local_808._3_1_ = s__DEBUG__allocate_memory_for_patt_00067c7c[19];
      uStack_804._0_1_ = s__DEBUG__allocate_memory_for_patt_00067c7c[20];
      uStack_804._1_1_ = s__DEBUG__allocate_memory_for_patt_00067c7c[21];
      uStack_804._2_1_ = s__DEBUG__allocate_memory_for_patt_00067c7c[22];
      uStack_804._3_1_ = s__DEBUG__allocate_memory_for_patt_00067c7c[23];
      uStack_800._0_1_ = s__DEBUG__allocate_memory_for_patt_00067c7c[24];
      uStack_800._1_1_ = s__DEBUG__allocate_memory_for_patt_00067c7c[25];
      uStack_800._2_1_ = s__DEBUG__allocate_memory_for_patt_00067c7c[26];
      uStack_800._3_1_ = s__DEBUG__allocate_memory_for_patt_00067c7c[27];
      uStack_7fc._0_1_ = s__DEBUG__allocate_memory_for_patt_00067c7c[28];
      uStack_7fc._1_1_ = s__DEBUG__allocate_memory_for_patt_00067c7c[29];
      uStack_7fc._2_1_ = s__DEBUG__allocate_memory_for_patt_00067c7c[30];
      uStack_7fc._3_1_ = s__DEBUG__allocate_memory_for_patt_00067c7c[31];
      local_7f8._0_1_ = s__DEBUG__allocate_memory_for_patt_00067c7c[32];
      local_7f8._1_1_ = s__DEBUG__allocate_memory_for_patt_00067c7c[33];
      local_7f8._2_1_ = s__DEBUG__allocate_memory_for_patt_00067c7c[34];
      local_7f8._3_1_ = s__DEBUG__allocate_memory_for_patt_00067c7c[35];
      uStack_7f4._0_1_ = s__DEBUG__allocate_memory_for_patt_00067c7c[36];
      uStack_7f4._1_1_ = s__DEBUG__allocate_memory_for_patt_00067c7c[37];
      uStack_7f4._2_1_ = s__DEBUG__allocate_memory_for_patt_00067c7c[38];
      uStack_7f4._3_1_ = s__DEBUG__allocate_memory_for_patt_00067c7c[39];
      uStack_7f0._0_3_ = (undefined3)ram0x00067ca4;
      FUN_0002e584(4,&local_818,0);
    }
  }
  piVar3 = DAT_004fcb3c;
  if (DAT_004fcb3c == (int *)0x0) {
    piVar3 = (int *)calloc(0x44,1);
    DAT_004fcb3c = piVar3;
    if (piVar3 == (int *)0x0) {
      FUN_000356c4(0xd,0xff);
      if (DAT_0007eb9c < 4) {
        return 0xffffffff;
      }
      local_818._0_1_ = s_Fail_to_allocate_memory_for_send_00067ca8[0];
      local_818._1_1_ = s_Fail_to_allocate_memory_for_send_00067ca8[1];
      local_818._2_1_ = s_Fail_to_allocate_memory_for_send_00067ca8[2];
      local_818._3_1_ = s_Fail_to_allocate_memory_for_send_00067ca8[3];
      uStack_814._0_1_ = s_Fail_to_allocate_memory_for_send_00067ca8[4];
      uStack_814._1_1_ = s_Fail_to_allocate_memory_for_send_00067ca8[5];
      uStack_814._2_1_ = s_Fail_to_allocate_memory_for_send_00067ca8[6];
      uStack_814._3_1_ = s_Fail_to_allocate_memory_for_send_00067ca8[7];
      uStack_810._0_1_ = s_Fail_to_allocate_memory_for_send_00067ca8[8];
      uStack_810._1_1_ = s_Fail_to_allocate_memory_for_send_00067ca8[9];
      uStack_810._2_1_ = s_Fail_to_allocate_memory_for_send_00067ca8[10];
      uStack_810._3_1_ = s_Fail_to_allocate_memory_for_send_00067ca8[11];
      uStack_80c._0_1_ = s_Fail_to_allocate_memory_for_send_00067ca8[12];
      uStack_80c._1_1_ = s_Fail_to_allocate_memory_for_send_00067ca8[13];
      uStack_80c._2_1_ = s_Fail_to_allocate_memory_for_send_00067ca8[14];
      uStack_80c._3_1_ = s_Fail_to_allocate_memory_for_send_00067ca8[15];
      local_808._0_1_ = s_Fail_to_allocate_memory_for_send_00067ca8[16];
      local_808._1_1_ = s_Fail_to_allocate_memory_for_send_00067ca8[17];
      local_808._2_1_ = s_Fail_to_allocate_memory_for_send_00067ca8[18];
      local_808._3_1_ = s_Fail_to_allocate_memory_for_send_00067ca8[19];
      uStack_804._0_1_ = s_Fail_to_allocate_memory_for_send_00067ca8[20];
      uStack_804._1_1_ = s_Fail_to_allocate_memory_for_send_00067ca8[21];
      uStack_804._2_1_ = s_Fail_to_allocate_memory_for_send_00067ca8[22];
      uStack_804._3_1_ = s_Fail_to_allocate_memory_for_send_00067ca8[23];
      uStack_800._0_1_ = s_Fail_to_allocate_memory_for_send_00067ca8[24];
      uStack_800._1_1_ = s_Fail_to_allocate_memory_for_send_00067ca8[25];
      uStack_800._2_1_ = s_Fail_to_allocate_memory_for_send_00067ca8[26];
      uStack_800._3_1_ = s_Fail_to_allocate_memory_for_send_00067ca8[27];
      uStack_7fc._0_1_ = s_Fail_to_allocate_memory_for_send_00067ca8[28];
      uStack_7fc._1_1_ = s_Fail_to_allocate_memory_for_send_00067ca8[29];
      uStack_7fc._2_1_ = s_Fail_to_allocate_memory_for_send_00067ca8[30];
      uStack_7fc._3_1_ = s_Fail_to_allocate_memory_for_send_00067ca8[31];
      local_7f8._0_1_ = s_Fail_to_allocate_memory_for_send_00067ca8[32];
      local_7f8._1_1_ = s_Fail_to_allocate_memory_for_send_00067ca8[33];
      local_7f8._2_1_ = s_Fail_to_allocate_memory_for_send_00067ca8[34];
      local_7f8._3_1_ = s_Fail_to_allocate_memory_for_send_00067ca8[35];
      uStack_7f4._0_1_ = s_Fail_to_allocate_memory_for_send_00067ca8[36];
      uStack_7f4._1_1_ = s_Fail_to_allocate_memory_for_send_00067ca8[37];
      uStack_7f4._2_1_ = s_Fail_to_allocate_memory_for_send_00067ca8[38];
      uStack_7f4._3_1_ = s_Fail_to_allocate_memory_for_send_00067ca8[39];
      uStack_7f0._0_1_ = s_Fail_to_allocate_memory_for_send_00067ca8[40];
      uStack_7f0._1_1_ = s_Fail_to_allocate_memory_for_send_00067ca8[41];
      uStack_7f0._2_1_ = s_Fail_to_allocate_memory_for_send_00067ca8[42];
      uStack_7f0._3_1_ = s_Fail_to_allocate_memory_for_send_00067ca8[43];
      uStack_7ec._0_1_ = s_Fail_to_allocate_memory_for_send_00067ca8[44];
      uStack_7ec._1_1_ = s_Fail_to_allocate_memory_for_send_00067ca8[45];
      uStack_7ec._2_1_ = s_Fail_to_allocate_memory_for_send_00067ca8[46];
      uStack_7ec._3_1_ = s_Fail_to_allocate_memory_for_send_00067ca8[47];
LAB_00038dac:
      FUN_0002e584(3,&local_818,0);
      return 0xffffffff;
    }
    piVar3[2] = 0;
    piVar3[3] = 0;
    piVar3[4] = 0;
    piVar3[5] = 0;
  }
  *piVar3 = param_1;
  if (param_1 == 0xa0) {
    iVar1 = FUN_00038450();
    piVar3[1] = iVar1;
  }
  else {
    iVar1 = FUN_00037574();
    piVar3[1] = iVar1;
  }
  uVar2 = (**(code **)(DAT_004fcb3c[1] + 4))(param_2);
  return uVar2;
}

