
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00049b10(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 local_824 [2];
  int *local_81c;
  undefined4 local_818;
  undefined4 uStack_814;
  undefined4 uStack_810;
  undefined4 uStack_80c;
  undefined4 local_808;
  undefined2 uStack_804;
  undefined local_802;
  
  local_824[0] = param_1;
  local_81c = (int *)pthread_mutex_lock((pthread_mutex_t *)&DAT_005051a8);
  if (local_81c == (int *)0x0) {
    iVar1 = FUN_000433d0(DAT_005051a4,local_824,&local_81c);
    if (iVar1 == 1) {
      iVar1 = *local_81c;
      uVar4 = local_81c[1];
      if (param_3 != 0) {
        iVar2 = param_2;
        do {
          iVar3 = FUN_00049844();
          if (iVar3 == 0) {
            free(local_81c);
            local_818._0_1_ = s_iic_not_ready_4_read1_0006a3dc[0];
            local_818._1_1_ = s_iic_not_ready_4_read1_0006a3dc[1];
            local_818._2_1_ = s_iic_not_ready_4_read1_0006a3dc[2];
            local_818._3_1_ = s_iic_not_ready_4_read1_0006a3dc[3];
            uStack_814._0_1_ = s_iic_not_ready_4_read1_0006a3dc[4];
            uStack_814._1_1_ = s_iic_not_ready_4_read1_0006a3dc[5];
            uStack_814._2_1_ = s_iic_not_ready_4_read1_0006a3dc[6];
            uStack_814._3_1_ = s_iic_not_ready_4_read1_0006a3dc[7];
            uStack_810._0_1_ = s_iic_not_ready_4_read1_0006a3dc[8];
            uStack_810._1_1_ = s_iic_not_ready_4_read1_0006a3dc[9];
            uStack_810._2_1_ = s_iic_not_ready_4_read1_0006a3dc[10];
            uStack_810._3_1_ = s_iic_not_ready_4_read1_0006a3dc[11];
            uStack_80c._0_1_ = s_iic_not_ready_4_read1_0006a3dc[12];
            uStack_80c._1_1_ = s_iic_not_ready_4_read1_0006a3dc[13];
            uStack_80c._2_1_ = s_iic_not_ready_4_read1_0006a3dc[14];
            uStack_80c._3_1_ = s_iic_not_ready_4_read1_0006a3dc[15];
            local_808._0_1_ = s_iic_not_ready_4_read1_0006a3dc[16];
            local_808._1_1_ = s_iic_not_ready_4_read1_0006a3dc[17];
            local_808._2_1_ = s_iic_not_ready_4_read1_0006a3dc[18];
            local_808._3_1_ = s_iic_not_ready_4_read1_0006a3dc[19];
            uStack_804 = (undefined2)ram0x0006a3f0;
            local_802 = (undefined)((uint)ram0x0006a3f0 >> 0x10);
            FUN_0002e584(0,&local_818,0);
            pthread_mutex_unlock(DAT_00049cf8);
            return -2;
          }
          FUN_00040390(0xc,iVar1 << 0x1a | 0x2000000U | (uVar4 >> 4) << 0x14 | (uVar4 & 0xe) << 0xf)
          ;
          iVar3 = iVar2 + 1;
          iVar2 = FUN_000498a0(iVar2);
          if (iVar2 == 0) {
            free(local_81c);
            local_818._0_1_ = s_iic_not_ready_4_read2_0006a3f4[0];
            local_818._1_1_ = s_iic_not_ready_4_read2_0006a3f4[1];
            local_818._2_1_ = s_iic_not_ready_4_read2_0006a3f4[2];
            local_818._3_1_ = s_iic_not_ready_4_read2_0006a3f4[3];
            uStack_814._0_1_ = s_iic_not_ready_4_read2_0006a3f4[4];
            uStack_814._1_1_ = s_iic_not_ready_4_read2_0006a3f4[5];
            uStack_814._2_1_ = s_iic_not_ready_4_read2_0006a3f4[6];
            uStack_814._3_1_ = s_iic_not_ready_4_read2_0006a3f4[7];
            uStack_810._0_1_ = s_iic_not_ready_4_read2_0006a3f4[8];
            uStack_810._1_1_ = s_iic_not_ready_4_read2_0006a3f4[9];
            uStack_810._2_1_ = s_iic_not_ready_4_read2_0006a3f4[10];
            uStack_810._3_1_ = s_iic_not_ready_4_read2_0006a3f4[11];
            uStack_80c._0_1_ = s_iic_not_ready_4_read2_0006a3f4[12];
            uStack_80c._1_1_ = s_iic_not_ready_4_read2_0006a3f4[13];
            uStack_80c._2_1_ = s_iic_not_ready_4_read2_0006a3f4[14];
            uStack_80c._3_1_ = s_iic_not_ready_4_read2_0006a3f4[15];
            local_808._0_1_ = s_iic_not_ready_4_read2_0006a3f4[16];
            local_808._1_1_ = s_iic_not_ready_4_read2_0006a3f4[17];
            local_808._2_1_ = s_iic_not_ready_4_read2_0006a3f4[18];
            local_808._3_1_ = s_iic_not_ready_4_read2_0006a3f4[19];
            uStack_804 = (undefined2)ram0x0006a408;
            local_802 = (undefined)((uint)ram0x0006a408 >> 0x10);
            FUN_0002e584(0,&local_818,0);
            pthread_mutex_unlock(DAT_00049cf8);
            return -3;
          }
          iVar2 = iVar3;
        } while (iVar3 != param_2 + param_3);
      }
      free(local_81c);
      pthread_mutex_unlock(DAT_00049cf8);
      return param_3;
    }
    snprintf((char *)&local_818,0x800,"ctx %d not inited\n",local_824[0]);
    FUN_0002e584(0,&local_818,0);
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_005051a8);
    iVar1 = -2;
  }
  else {
    local_818._0_1_ = s_failed_to_i2c_lock_0006a3b0[0];
    local_818._1_1_ = s_failed_to_i2c_lock_0006a3b0[1];
    local_818._2_1_ = s_failed_to_i2c_lock_0006a3b0[2];
    local_818._3_1_ = s_failed_to_i2c_lock_0006a3b0[3];
    uStack_814._0_1_ = s_failed_to_i2c_lock_0006a3b0[4];
    uStack_814._1_1_ = s_failed_to_i2c_lock_0006a3b0[5];
    uStack_814._2_1_ = s_failed_to_i2c_lock_0006a3b0[6];
    uStack_814._3_1_ = s_failed_to_i2c_lock_0006a3b0[7];
    uStack_810._0_1_ = s_failed_to_i2c_lock_0006a3b0[8];
    uStack_810._1_1_ = s_failed_to_i2c_lock_0006a3b0[9];
    uStack_810._2_1_ = s_failed_to_i2c_lock_0006a3b0[10];
    uStack_810._3_1_ = s_failed_to_i2c_lock_0006a3b0[11];
    uStack_80c._0_1_ = s_failed_to_i2c_lock_0006a3b0[12];
    uStack_80c._1_1_ = s_failed_to_i2c_lock_0006a3b0[13];
    uStack_80c._2_1_ = s_failed_to_i2c_lock_0006a3b0[14];
    uStack_80c._3_1_ = s_failed_to_i2c_lock_0006a3b0[15];
    local_808._0_1_ = s_failed_to_i2c_lock_0006a3b0[16];
    local_808._1_1_ = s_failed_to_i2c_lock_0006a3b0[17];
    local_808._2_1_ = s_failed_to_i2c_lock_0006a3b0[18];
    local_808._3_1_ = s_failed_to_i2c_lock_0006a3b0[19];
    FUN_0002e584(0,&local_818);
    iVar1 = -1;
  }
  return iVar1;
}

