
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0002c96c(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  undefined4 local_810;
  undefined4 uStack_80c;
  undefined4 uStack_808;
  undefined4 uStack_804;
  undefined4 local_800;
  undefined4 uStack_7fc;
  undefined4 uStack_7f8;
  undefined2 uStack_7f4;
  undefined local_7f2;
  
  bVar4 = *(byte *)param_1;
  if ((bVar4 & 0x40) == 0) {
    uVar5 = *(byte *)((int)param_1 + 3) & 0x60;
    if ((*(byte *)((int)param_1 + 3) & 0x60) == 0) {
      pthread_mutex_lock((pthread_mutex_t *)&DAT_000810dc);
      uVar2 = DAT_005945c0;
      bVar4 = DAT_0008110c;
      if (DAT_005945c0 < 0x1ff) {
        uVar3 = DAT_005945b8 + 1;
        iVar1 = uVar3 * 8;
        (&DAT_005945bc)[uVar3 * 2] = param_1[1];
        *(byte *)(&DAT_005945c0 + uVar3 * 2) =
             (byte)(((uint)*(byte *)((int)param_1 + 3) << 0x1b) >> 0x1b);
        *(byte *)((int)&DAT_005945c0 + iVar1 + 1) = *(byte *)((int)param_1 + 2);
        if (*(byte *)((int)param_1 + 1) != 0x40) {
          bVar4 = bVar4 | 1;
        }
        *(byte *)((int)&DAT_005945c0 + iVar1 + 2) = *(byte *)((int)param_1 + 1);
        *(byte *)((int)&DAT_005945c0 + iVar1 + 3) = (byte)(((uint)*(byte *)param_1 << 0x1c) >> 0x1c)
        ;
        if (bVar4 != 0) {
          DAT_005945c0 = uVar2 + 1;
          DAT_005945b8 = uVar3;
          if (0x1fe < uVar3) {
            DAT_005945b8 = uVar5;
          }
        }
      }
      else if (3 < DAT_0007eb9c) {
        local_810._0_1_ = s_reg_value_buf_buffer_is_full__00064e04[0];
        local_810._1_1_ = s_reg_value_buf_buffer_is_full__00064e04[1];
        local_810._2_1_ = s_reg_value_buf_buffer_is_full__00064e04[2];
        local_810._3_1_ = s_reg_value_buf_buffer_is_full__00064e04[3];
        uStack_80c._0_1_ = s_reg_value_buf_buffer_is_full__00064e04[4];
        uStack_80c._1_1_ = s_reg_value_buf_buffer_is_full__00064e04[5];
        uStack_80c._2_1_ = s_reg_value_buf_buffer_is_full__00064e04[6];
        uStack_80c._3_1_ = s_reg_value_buf_buffer_is_full__00064e04[7];
        uStack_808._0_1_ = s_reg_value_buf_buffer_is_full__00064e04[8];
        uStack_808._1_1_ = s_reg_value_buf_buffer_is_full__00064e04[9];
        uStack_808._2_1_ = s_reg_value_buf_buffer_is_full__00064e04[10];
        uStack_808._3_1_ = s_reg_value_buf_buffer_is_full__00064e04[11];
        uStack_804._0_1_ = s_reg_value_buf_buffer_is_full__00064e04[12];
        uStack_804._1_1_ = s_reg_value_buf_buffer_is_full__00064e04[13];
        uStack_804._2_1_ = s_reg_value_buf_buffer_is_full__00064e04[14];
        uStack_804._3_1_ = s_reg_value_buf_buffer_is_full__00064e04[15];
        local_800._0_1_ = s_reg_value_buf_buffer_is_full__00064e04[16];
        local_800._1_1_ = s_reg_value_buf_buffer_is_full__00064e04[17];
        local_800._2_1_ = s_reg_value_buf_buffer_is_full__00064e04[18];
        local_800._3_1_ = s_reg_value_buf_buffer_is_full__00064e04[19];
        uStack_7fc._0_1_ = s_reg_value_buf_buffer_is_full__00064e04[20];
        uStack_7fc._1_1_ = s_reg_value_buf_buffer_is_full__00064e04[21];
        uStack_7fc._2_1_ = s_reg_value_buf_buffer_is_full__00064e04[22];
        uStack_7fc._3_1_ = s_reg_value_buf_buffer_is_full__00064e04[23];
        uStack_7f8._0_1_ = s_reg_value_buf_buffer_is_full__00064e04[24];
        uStack_7f8._1_1_ = s_reg_value_buf_buffer_is_full__00064e04[25];
        uStack_7f8._2_1_ = s_reg_value_buf_buffer_is_full__00064e04[26];
        uStack_7f8._3_1_ = s_reg_value_buf_buffer_is_full__00064e04[27];
        uStack_7f4 = (undefined2)ram0x00064e20;
        local_7f2 = (undefined)((uint)ram0x00064e20 >> 0x10);
        FUN_0002e584(3,&local_810,uVar5);
      }
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_000810dc);
      return;
    }
    if (3 < DAT_0007eb9c) {
      snprintf((char *)&local_810,0x800,"!!! REG_TYPE = 1. %u\n",*param_1);
      FUN_0002e584(3,&local_810,bVar4 & 0x40);
      return;
    }
  }
  else {
    if (3 < DAT_0007eb9c) {
      local_810 = s_____reg_crc_error_00064dd8._0_4_;
      uStack_80c = s_____reg_crc_error_00064dd8._4_4_;
      uStack_808 = s_____reg_crc_error_00064dd8._8_4_;
      uStack_804 = s_____reg_crc_error_00064dd8._12_4_;
      FUN_0002e584(3,&local_810,0);
    }
    DAT_005955bc = DAT_005955bc + 1;
  }
  return;
}

