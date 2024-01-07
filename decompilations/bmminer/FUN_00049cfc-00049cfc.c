
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00049cfc(undefined4 param_1,int param_2,int param_3)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
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
    iVar3 = FUN_000433d0(DAT_005051a4,local_824,&local_81c);
    piVar2 = local_81c;
    if (iVar3 == 1) {
      if (param_3 != 0) {
        pbVar6 = (byte *)(param_2 + -1);
        do {
          uVar5 = piVar2[1];
          pbVar6 = pbVar6 + 1;
          bVar1 = *pbVar6;
          iVar4 = *piVar2;
          iVar3 = FUN_00049844();
          if (iVar3 == 0) {
            free(local_81c);
            local_818._0_1_ = s_iic_not_ready_4_write_0006a420[0];
            local_818._1_1_ = s_iic_not_ready_4_write_0006a420[1];
            local_818._2_1_ = s_iic_not_ready_4_write_0006a420[2];
            local_818._3_1_ = s_iic_not_ready_4_write_0006a420[3];
            uStack_814._0_1_ = s_iic_not_ready_4_write_0006a420[4];
            uStack_814._1_1_ = s_iic_not_ready_4_write_0006a420[5];
            uStack_814._2_1_ = s_iic_not_ready_4_write_0006a420[6];
            uStack_814._3_1_ = s_iic_not_ready_4_write_0006a420[7];
            uStack_810._0_1_ = s_iic_not_ready_4_write_0006a420[8];
            uStack_810._1_1_ = s_iic_not_ready_4_write_0006a420[9];
            uStack_810._2_1_ = s_iic_not_ready_4_write_0006a420[10];
            uStack_810._3_1_ = s_iic_not_ready_4_write_0006a420[11];
            uStack_80c._0_1_ = s_iic_not_ready_4_write_0006a420[12];
            uStack_80c._1_1_ = s_iic_not_ready_4_write_0006a420[13];
            uStack_80c._2_1_ = s_iic_not_ready_4_write_0006a420[14];
            uStack_80c._3_1_ = s_iic_not_ready_4_write_0006a420[15];
            local_808._0_1_ = s_iic_not_ready_4_write_0006a420[16];
            local_808._1_1_ = s_iic_not_ready_4_write_0006a420[17];
            local_808._2_1_ = s_iic_not_ready_4_write_0006a420[18];
            local_808._3_1_ = s_iic_not_ready_4_write_0006a420[19];
            uStack_804 = (undefined2)ram0x0006a434;
            local_802 = (undefined)((uint)ram0x0006a434 >> 0x10);
            FUN_0002e584(0,&local_818,0);
            pthread_mutex_unlock(DAT_00049e88);
            return -2;
          }
          FUN_00040390(0xc,(uint)bVar1 | (uVar5 >> 4) << 0x14 | iVar4 << 0x1a | (uVar5 & 0xe) << 0xf
                      );
        } while ((byte *)(param_2 + param_3 + -1) != pbVar6);
      }
      free(local_81c);
      pthread_mutex_unlock(DAT_00049e88);
      return param_3;
    }
    snprintf((char *)&local_818,0x800,"ctx %d not inited\n",local_824[0]);
    FUN_0002e584(0,&local_818,0);
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_005051a8);
    iVar3 = -2;
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
    iVar3 = -1;
  }
  return iVar3;
}

