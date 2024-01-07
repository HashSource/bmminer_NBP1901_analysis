
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00049e8c(undefined4 param_1,byte *param_2,int param_3,int param_4,int param_5)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 local_82c [2];
  int *local_824;
  undefined4 local_820;
  undefined4 uStack_81c;
  undefined4 uStack_818;
  undefined4 uStack_814;
  undefined4 local_810;
  undefined4 uStack_80c;
  undefined4 local_808;
  undefined4 uStack_804;
  undefined4 local_800;
  undefined4 uStack_7fc;
  undefined4 uStack_7f8;
  undefined4 uStack_7f4;
  undefined local_7f0;
  
  local_82c[0] = param_1;
  if (param_3 == 1) {
    local_824 = (int *)pthread_mutex_lock((pthread_mutex_t *)&DAT_005051a8);
    if (local_824 == (int *)0x0) {
      iVar3 = FUN_000433d0(DAT_005051a4,local_82c,&local_824);
      piVar2 = local_824;
      if (iVar3 == 1) {
        iVar3 = 0;
        if (param_5 != 0) {
          do {
            iVar6 = *piVar2;
            uVar5 = piVar2[1];
            bVar1 = *param_2;
            iVar4 = FUN_00049844();
            if (iVar4 == 0) {
              local_820._0_1_ = s_iic_not_ready_4_read1_0006a3dc[0];
              local_820._1_1_ = s_iic_not_ready_4_read1_0006a3dc[1];
              local_820._2_1_ = s_iic_not_ready_4_read1_0006a3dc[2];
              local_820._3_1_ = s_iic_not_ready_4_read1_0006a3dc[3];
              uStack_81c._0_1_ = s_iic_not_ready_4_read1_0006a3dc[4];
              uStack_81c._1_1_ = s_iic_not_ready_4_read1_0006a3dc[5];
              uStack_81c._2_1_ = s_iic_not_ready_4_read1_0006a3dc[6];
              uStack_81c._3_1_ = s_iic_not_ready_4_read1_0006a3dc[7];
              uStack_818._0_1_ = s_iic_not_ready_4_read1_0006a3dc[8];
              uStack_818._1_1_ = s_iic_not_ready_4_read1_0006a3dc[9];
              uStack_818._2_1_ = s_iic_not_ready_4_read1_0006a3dc[10];
              uStack_818._3_1_ = s_iic_not_ready_4_read1_0006a3dc[11];
              uStack_814._0_1_ = s_iic_not_ready_4_read1_0006a3dc[12];
              uStack_814._1_1_ = s_iic_not_ready_4_read1_0006a3dc[13];
              uStack_814._2_1_ = s_iic_not_ready_4_read1_0006a3dc[14];
              uStack_814._3_1_ = s_iic_not_ready_4_read1_0006a3dc[15];
              local_810._0_1_ = s_iic_not_ready_4_read1_0006a3dc[16];
              local_810._1_1_ = s_iic_not_ready_4_read1_0006a3dc[17];
              local_810._2_1_ = s_iic_not_ready_4_read1_0006a3dc[18];
              local_810._3_1_ = s_iic_not_ready_4_read1_0006a3dc[19];
              FUN_0002e584(0,&local_820,0);
              free(local_824);
              pthread_mutex_unlock(DAT_0004a0d8);
              return -2;
            }
            FUN_00040390(0xc,iVar6 << 0x1a | 0x3000000U | (uVar5 >> 4) << 0x14 |
                             (uVar5 & 0xe) << 0xf | ((uint)bVar1 + iVar3) * 0x100);
            iVar4 = param_4 + iVar3;
            iVar3 = iVar3 + 1;
            iVar4 = FUN_000498a0(iVar4);
            if (iVar4 == 0) {
              local_820._0_1_ = s_iic_failed_to_read_data_0006a46c[0];
              local_820._1_1_ = s_iic_failed_to_read_data_0006a46c[1];
              local_820._2_1_ = s_iic_failed_to_read_data_0006a46c[2];
              local_820._3_1_ = s_iic_failed_to_read_data_0006a46c[3];
              uStack_81c._0_1_ = s_iic_failed_to_read_data_0006a46c[4];
              uStack_81c._1_1_ = s_iic_failed_to_read_data_0006a46c[5];
              uStack_81c._2_1_ = s_iic_failed_to_read_data_0006a46c[6];
              uStack_81c._3_1_ = s_iic_failed_to_read_data_0006a46c[7];
              uStack_818._0_1_ = s_iic_failed_to_read_data_0006a46c[8];
              uStack_818._1_1_ = s_iic_failed_to_read_data_0006a46c[9];
              uStack_818._2_1_ = s_iic_failed_to_read_data_0006a46c[10];
              uStack_818._3_1_ = s_iic_failed_to_read_data_0006a46c[11];
              uStack_814._0_1_ = s_iic_failed_to_read_data_0006a46c[12];
              uStack_814._1_1_ = s_iic_failed_to_read_data_0006a46c[13];
              uStack_814._2_1_ = s_iic_failed_to_read_data_0006a46c[14];
              uStack_814._3_1_ = s_iic_failed_to_read_data_0006a46c[15];
              local_810._0_1_ = s_iic_failed_to_read_data_0006a46c[16];
              local_810._1_1_ = s_iic_failed_to_read_data_0006a46c[17];
              local_810._2_1_ = s_iic_failed_to_read_data_0006a46c[18];
              local_810._3_1_ = s_iic_failed_to_read_data_0006a46c[19];
              uStack_80c._0_1_ = s_iic_failed_to_read_data_0006a46c[20];
              uStack_80c._1_1_ = s_iic_failed_to_read_data_0006a46c[21];
              uStack_80c._2_1_ = s_iic_failed_to_read_data_0006a46c[22];
              uStack_80c._3_1_ = s_iic_failed_to_read_data_0006a46c[23];
              local_808 = CONCAT31(local_808._1_3_,(char)ram0x0006a484);
              FUN_0002e584(0,&local_820,0);
              free(local_824);
              pthread_mutex_unlock(DAT_0004a0d8);
              return -3;
            }
          } while (param_5 != iVar3);
        }
        free(local_824);
        pthread_mutex_unlock(DAT_0004a0d8);
        return param_5;
      }
      snprintf((char *)&local_820,0x800,"ctx %d not inited\n",local_82c[0]);
      FUN_0002e584(0,&local_820,0);
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_005051a8);
      iVar3 = -2;
    }
    else {
      local_820._0_1_ = s_failed_to_i2c_lock_0006a3b0[0];
      local_820._1_1_ = s_failed_to_i2c_lock_0006a3b0[1];
      local_820._2_1_ = s_failed_to_i2c_lock_0006a3b0[2];
      local_820._3_1_ = s_failed_to_i2c_lock_0006a3b0[3];
      uStack_81c._0_1_ = s_failed_to_i2c_lock_0006a3b0[4];
      uStack_81c._1_1_ = s_failed_to_i2c_lock_0006a3b0[5];
      uStack_81c._2_1_ = s_failed_to_i2c_lock_0006a3b0[6];
      uStack_81c._3_1_ = s_failed_to_i2c_lock_0006a3b0[7];
      uStack_818._0_1_ = s_failed_to_i2c_lock_0006a3b0[8];
      uStack_818._1_1_ = s_failed_to_i2c_lock_0006a3b0[9];
      uStack_818._2_1_ = s_failed_to_i2c_lock_0006a3b0[10];
      uStack_818._3_1_ = s_failed_to_i2c_lock_0006a3b0[11];
      uStack_814._0_1_ = s_failed_to_i2c_lock_0006a3b0[12];
      uStack_814._1_1_ = s_failed_to_i2c_lock_0006a3b0[13];
      uStack_814._2_1_ = s_failed_to_i2c_lock_0006a3b0[14];
      uStack_814._3_1_ = s_failed_to_i2c_lock_0006a3b0[15];
      local_810._0_1_ = s_failed_to_i2c_lock_0006a3b0[16];
      local_810._1_1_ = s_failed_to_i2c_lock_0006a3b0[17];
      local_810._2_1_ = s_failed_to_i2c_lock_0006a3b0[18];
      local_810._3_1_ = s_failed_to_i2c_lock_0006a3b0[19];
      FUN_0002e584(0,&local_820);
      iVar3 = -1;
    }
  }
  else {
    local_820 = s_more_than_one_byte_reg_address_i_0006a438._0_4_;
    uStack_81c = s_more_than_one_byte_reg_address_i_0006a438._4_4_;
    uStack_818 = s_more_than_one_byte_reg_address_i_0006a438._8_4_;
    uStack_814 = s_more_than_one_byte_reg_address_i_0006a438._12_4_;
    local_810 = s_more_than_one_byte_reg_address_i_0006a438._16_4_;
    uStack_80c = s_more_than_one_byte_reg_address_i_0006a438._20_4_;
    local_808 = s_more_than_one_byte_reg_address_i_0006a438._24_4_;
    uStack_804 = s_more_than_one_byte_reg_address_i_0006a438._28_4_;
    local_800 = s_more_than_one_byte_reg_address_i_0006a438._32_4_;
    uStack_7fc = s_more_than_one_byte_reg_address_i_0006a438._36_4_;
    uStack_7f8 = s_more_than_one_byte_reg_address_i_0006a438._40_4_;
    uStack_7f4 = s_more_than_one_byte_reg_address_i_0006a438._44_4_;
    local_7f0 = (undefined)ram0x0006a468;
    FUN_0002e584(0,&local_820);
    iVar3 = -3;
  }
  return iVar3;
}

