
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0002c5e8(byte *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined8 uVar11;
  undefined4 local_828;
  undefined4 uStack_824;
  undefined4 uStack_820;
  undefined4 uStack_81c;
  undefined4 uStack_818;
  undefined4 local_814;
  undefined4 uStack_810;
  undefined4 uStack_80c;
  
  if (DAT_00482a89 == '\0') {
    return;
  }
  bVar1 = *param_1;
  if ((bVar1 & 0x80) == 0) {
    if (3 < DAT_0007eb9c) {
      local_828 = s_____nonce_invalid_00064d44._0_4_;
      uStack_824 = s_____nonce_invalid_00064d44._4_4_;
      uStack_820 = s_____nonce_invalid_00064d44._8_4_;
      uStack_81c = s_____nonce_invalid_00064d44._12_4_;
      FUN_0002e584(3,&local_828,0);
      return;
    }
  }
  else {
    if ((bVar1 & 0x40) != 0) {
      if (3 < DAT_0007eb9c) {
        local_828 = s_____nonce_crc_error_00064d58._0_4_;
        uStack_824 = s_____nonce_crc_error_00064d58._4_4_;
        uStack_820 = s_____nonce_crc_error_00064d58._8_4_;
        uStack_81c = s_____nonce_crc_error_00064d58._12_4_;
        uStack_818 = s_____nonce_crc_error_00064d58._16_4_;
        local_814 = CONCAT31(local_814._1_3_,(char)ram0x00064d6c);
        FUN_0002e584(3,&local_828,0);
      }
      DAT_005955c0 = DAT_005955c0 + 1;
      return;
    }
    pthread_mutex_lock((pthread_mutex_t *)&DAT_004fcad0);
    uVar3 = DAT_005955c8;
    if (DAT_005955d0 < 0x1ff) {
      uVar9 = *(ushort *)(param_1 + 2) & 0x7fff;
      iVar7 = DAT_005955c8 * 0x3c;
      *(uint *)(&DAT_005955d8 + iVar7) = uVar9;
      *(undefined4 *)(&DAT_005955e8 + iVar7) = *(undefined4 *)(param_1 + 4);
      *(uint *)(&DAT_005955ec + iVar7) = *param_1 & 0xf;
      uVar2 = FUN_0004466c(uVar9);
      uVar4 = DAT_0007eb9c;
      *(undefined4 *)(&DAT_005955d4 + iVar7) = uVar2;
      if (4 < uVar4) {
        snprintf((char *)&local_828,0x800,"blk ver = 0x%x\n",(uint)*(ushort *)(param_1 + 9));
        FUN_0002e584(4,&local_828,bVar1 & 0x40);
      }
      iVar7 = uVar3 * 0x3c;
      uVar2 = FUN_00044680(uVar9);
      *(undefined4 *)(&DAT_005955dc + iVar7) = uVar2;
      uVar11 = FUN_00044654(uVar9);
      *(undefined8 *)(&DAT_005955e0 + iVar7) = uVar11;
      FUN_00044698(uVar9,&DAT_005955f0 + iVar7,0x20);
      iVar8 = *(int *)(&DAT_005955e8 + iVar7);
      iVar7 = *(int *)(&DAT_005955ec + iVar7);
      uVar3 = FUN_00051970(iVar8);
      uVar2 = FUN_0001e160();
      uVar4 = FUN_00051978(iVar8,uVar2);
      if (((iVar7 < 4) && (uVar9 = FUN_0001e0f0(), uVar4 < uVar9)) &&
         (uVar9 = FUN_0001e120(), iVar8 != 0 && uVar3 < uVar9)) {
        iVar8 = uVar4 + iVar7 * 0x100;
        iVar6 = iVar8 + 4;
        iVar10 = *(int *)(&DAT_00081118 + iVar6 * 4);
        iVar5 = uVar3 + iVar8 * 0x400 + 0x404;
        iVar8 = *(int *)(&DAT_00081118 + iVar5 * 4);
        *(int *)(&DAT_00081118 + iVar7 * 4) = *(int *)(&DAT_00081118 + iVar7 * 4) + 1;
        *(int *)(&DAT_00081118 + iVar6 * 4) = iVar10 + 1;
        *(int *)(&DAT_00081118 + iVar5 * 4) = iVar8 + 1;
      }
      else if (4 < DAT_0007eb9c) {
        snprintf((char *)&local_828,0x800,"buf [%x] is error!\n",iVar8);
        FUN_0002e584(4,&local_828,0);
        if (4 < DAT_0007eb9c) {
          snprintf((char *)&local_828,0x800,"chain = %d, chip = %d, core = %d\n",iVar7,uVar4,uVar3);
          FUN_0002e584(4,&local_828,0);
        }
      }
      DAT_005955c8 = DAT_005955c8 + 1;
      uVar3 = DAT_005955c8;
      if (0x1fe < DAT_005955c8) {
        uVar3 = 0;
      }
      DAT_005955d0 = DAT_005955d0 + 1;
      if (0x1fe < DAT_005955c8) {
        DAT_005955c8 = uVar3;
      }
      DAT_00081110 = 0;
    }
    else if (DAT_00081110 == 0) {
      if (3 < DAT_0007eb9c) {
        local_828._0_1_ = s_nonce_read_out_buffer_is_full__00064db8[0];
        local_828._1_1_ = s_nonce_read_out_buffer_is_full__00064db8[1];
        local_828._2_1_ = s_nonce_read_out_buffer_is_full__00064db8[2];
        local_828._3_1_ = s_nonce_read_out_buffer_is_full__00064db8[3];
        uStack_824._0_1_ = s_nonce_read_out_buffer_is_full__00064db8[4];
        uStack_824._1_1_ = s_nonce_read_out_buffer_is_full__00064db8[5];
        uStack_824._2_1_ = s_nonce_read_out_buffer_is_full__00064db8[6];
        uStack_824._3_1_ = s_nonce_read_out_buffer_is_full__00064db8[7];
        uStack_820._0_1_ = s_nonce_read_out_buffer_is_full__00064db8[8];
        uStack_820._1_1_ = s_nonce_read_out_buffer_is_full__00064db8[9];
        uStack_820._2_1_ = s_nonce_read_out_buffer_is_full__00064db8[10];
        uStack_820._3_1_ = s_nonce_read_out_buffer_is_full__00064db8[11];
        uStack_81c._0_1_ = s_nonce_read_out_buffer_is_full__00064db8[12];
        uStack_81c._1_1_ = s_nonce_read_out_buffer_is_full__00064db8[13];
        uStack_81c._2_1_ = s_nonce_read_out_buffer_is_full__00064db8[14];
        uStack_81c._3_1_ = s_nonce_read_out_buffer_is_full__00064db8[15];
        uStack_818._0_1_ = s_nonce_read_out_buffer_is_full__00064db8[16];
        uStack_818._1_1_ = s_nonce_read_out_buffer_is_full__00064db8[17];
        uStack_818._2_1_ = s_nonce_read_out_buffer_is_full__00064db8[18];
        uStack_818._3_1_ = s_nonce_read_out_buffer_is_full__00064db8[19];
        local_814._0_1_ = s_nonce_read_out_buffer_is_full__00064db8[20];
        local_814._1_1_ = s_nonce_read_out_buffer_is_full__00064db8[21];
        local_814._2_1_ = s_nonce_read_out_buffer_is_full__00064db8[22];
        local_814._3_1_ = s_nonce_read_out_buffer_is_full__00064db8[23];
        uStack_810._0_1_ = s_nonce_read_out_buffer_is_full__00064db8[24];
        uStack_810._1_1_ = s_nonce_read_out_buffer_is_full__00064db8[25];
        uStack_810._2_1_ = s_nonce_read_out_buffer_is_full__00064db8[26];
        uStack_810._3_1_ = s_nonce_read_out_buffer_is_full__00064db8[27];
        uStack_80c._0_1_ = s_nonce_read_out_buffer_is_full__00064db8[28];
        uStack_80c._1_1_ = s_nonce_read_out_buffer_is_full__00064db8[29];
        uStack_80c._2_1_ = s_nonce_read_out_buffer_is_full__00064db8[30];
        uStack_80c._3_1_ = s_nonce_read_out_buffer_is_full__00064db8[31];
        FUN_0002e584(3,&local_828,0);
      }
      DAT_00081110 = 1;
    }
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_004fcad0);
  }
  return;
}

