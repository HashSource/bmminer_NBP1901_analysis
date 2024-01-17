
undefined4 FUN_000146c8(uint param_1)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *__format;
  char cVar6;
  undefined4 uVar7;
  byte bVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  char *local_840;
  char *local_834;
  undefined local_82a;
  byte local_829;
  undefined4 local_828;
  undefined4 uStack_824;
  undefined4 uStack_820;
  undefined4 uStack_81c;
  undefined4 local_818;
  undefined4 uStack_814;
  undefined4 uStack_810;
  undefined4 uStack_80c;
  undefined4 uStack_808;
  undefined4 uStack_804;
  
  iVar11 = 0;
  local_834 = (char *)0x0;
LAB_000146f0:
  do {
    iVar3 = FUN_00014434();
    if (iVar3 <= iVar11) {
LAB_000149cc:
      if (3 < DAT_0007eb9c) {
        snprintf((char *)&local_828,0x800,"chain %d temp sensor %s\n",param_1,local_834);
        FUN_0002e584(3,&local_828,0);
      }
      return 0;
    }
    iVar3 = iVar11 * 4;
    iVar9 = 4;
    uVar10 = (int)(short)*(undefined4 *)(DAT_0007f7b4 + iVar11 * 4) * (int)(short)DAT_0007f7b0 &
             0xff;
    FUN_00050874(param_1 & 0xff,uVar10);
    usleep(10000);
    do {
      local_828 = local_828 & 0xffffff00;
      FUN_000142bc(param_1,uVar10,0xfe,0,&local_828);
      if ((char)local_828 == '\x1a') {
        iVar9 = 0;
        local_834 = "NCT218";
        goto LAB_000147d8;
      }
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
    iVar9 = 4;
    while( true ) {
      local_828 = local_828 & 0xffffff00;
      FUN_000142bc(param_1,uVar10,0xfe,0,&local_828);
      if ((char)local_828 == 'U') break;
      iVar9 = iVar9 + -1;
      if (iVar9 == 0) {
        if (3 < DAT_0007eb9c) {
          snprintf((char *)&local_828,0x800,"sensor %d @ chain %d manufacture id unknown",
                   *(undefined4 *)(DAT_0007f7b4 + iVar3),param_1);
          FUN_0002e584(3,&local_828,0);
          return 0xffffffff;
        }
        return 0xffffffff;
      }
    }
    iVar9 = 1;
    local_834 = "TMP451";
LAB_000147d8:
    if (3 < DAT_0007eb9c) {
      snprintf((char *)&local_828,0x800,"sensor %d @ chain %d is %s",
               *(undefined4 *)(DAT_0007f7b4 + iVar3),param_1,local_834);
      FUN_0002e584(3,&local_828,0);
    }
    local_82a = 4;
    if (DAT_0007f7b0 == 0) {
      if (DAT_0007eb9c < 4) {
        return 0;
      }
      local_828._0_1_ = s_can_not_set_ext_mode_before_cali_00060638[0];
      local_828._1_1_ = s_can_not_set_ext_mode_before_cali_00060638[1];
      local_828._2_1_ = s_can_not_set_ext_mode_before_cali_00060638[2];
      local_828._3_1_ = s_can_not_set_ext_mode_before_cali_00060638[3];
      uStack_824._0_1_ = s_can_not_set_ext_mode_before_cali_00060638[4];
      uStack_824._1_1_ = s_can_not_set_ext_mode_before_cali_00060638[5];
      uStack_824._2_1_ = s_can_not_set_ext_mode_before_cali_00060638[6];
      uStack_824._3_1_ = s_can_not_set_ext_mode_before_cali_00060638[7];
      uStack_820._0_1_ = s_can_not_set_ext_mode_before_cali_00060638[8];
      uStack_820._1_1_ = s_can_not_set_ext_mode_before_cali_00060638[9];
      uStack_820._2_1_ = s_can_not_set_ext_mode_before_cali_00060638[10];
      uStack_820._3_1_ = s_can_not_set_ext_mode_before_cali_00060638[11];
      uStack_81c._0_1_ = s_can_not_set_ext_mode_before_cali_00060638[12];
      uStack_81c._1_1_ = s_can_not_set_ext_mode_before_cali_00060638[13];
      uStack_81c._2_1_ = s_can_not_set_ext_mode_before_cali_00060638[14];
      uStack_81c._3_1_ = s_can_not_set_ext_mode_before_cali_00060638[15];
      local_818._0_1_ = s_can_not_set_ext_mode_before_cali_00060638[16];
      local_818._1_1_ = s_can_not_set_ext_mode_before_cali_00060638[17];
      local_818._2_1_ = s_can_not_set_ext_mode_before_cali_00060638[18];
      local_818._3_1_ = s_can_not_set_ext_mode_before_cali_00060638[19];
      uStack_814._0_1_ = s_can_not_set_ext_mode_before_cali_00060638[20];
      uStack_814._1_1_ = s_can_not_set_ext_mode_before_cali_00060638[21];
      uStack_814._2_1_ = s_can_not_set_ext_mode_before_cali_00060638[22];
      uStack_814._3_1_ = s_can_not_set_ext_mode_before_cali_00060638[23];
      uStack_810._0_1_ = s_can_not_set_ext_mode_before_cali_00060638[24];
      uStack_810._1_1_ = s_can_not_set_ext_mode_before_cali_00060638[25];
      uStack_810._2_1_ = s_can_not_set_ext_mode_before_cali_00060638[26];
      uStack_810._3_1_ = s_can_not_set_ext_mode_before_cali_00060638[27];
      uStack_80c._0_1_ = s_can_not_set_ext_mode_before_cali_00060638[28];
      uStack_80c._1_1_ = s_can_not_set_ext_mode_before_cali_00060638[29];
      uStack_80c._2_1_ = s_can_not_set_ext_mode_before_cali_00060638[30];
      uStack_80c._3_1_ = s_can_not_set_ext_mode_before_cali_00060638[31];
      uStack_808._0_1_ = s_can_not_set_ext_mode_before_cali_00060638[32];
      uStack_808._1_1_ = s_can_not_set_ext_mode_before_cali_00060638[33];
      uStack_808._2_1_ = s_can_not_set_ext_mode_before_cali_00060638[34];
      uStack_808._3_1_ = s_can_not_set_ext_mode_before_cali_00060638[35];
      uStack_804._0_1_ = s_can_not_set_ext_mode_before_cali_00060638[36];
      uStack_804._1_1_ = s_can_not_set_ext_mode_before_cali_00060638[37];
      uStack_804._2_1_ = s_can_not_set_ext_mode_before_cali_00060638[38];
      uStack_804._3_1_ = s_can_not_set_ext_mode_before_cali_00060638[39];
      FUN_0002e584(3,&local_828,0);
LAB_000148d4:
      if (DAT_0007eb9c < 4) {
        return 0;
      }
      snprintf((char *)&local_828,0x800,"sensor %d @ chain %d fail to set to ext mode",
               *(undefined4 *)(DAT_0007f7b4 + iVar3),param_1);
      FUN_0002e584(3,&local_828,0);
      goto LAB_000149cc;
    }
    iVar4 = FUN_0001e170();
    if (iVar4 == 0) {
      if (DAT_0007eb9c < 4) {
        return 0;
      }
      snprintf((char *)&local_828,0x800,"%s chain %d ,index %d not connected",DAT_00014cb8,param_1,
               iVar11);
      FUN_0002e584(3,&local_828,0);
      goto LAB_000148d4;
    }
    iVar4 = FUN_000142bc(param_1,(int)(short)*(undefined4 *)(DAT_0007f7b4 + iVar3) *
                                 (int)(short)DAT_0007f7b0 & 0xff,(&UNK_000604a3)[iVar9 * 0x10],1,
                         &local_82a);
    if (iVar4 == 0) {
      if (DAT_0007eb9c < 4) {
        return 0;
      }
      snprintf((char *)&local_828,0x800,"set ext mode failed for senser %d @ chain %d",
               *(undefined4 *)(DAT_0007f7b4 + iVar3),param_1);
      FUN_0002e584(3,&local_828,0);
      goto LAB_000148d4;
    }
    local_840 = "sensor %d @ chain %d, offset = %d";
    cVar6 = '\v';
    while( true ) {
      cVar1 = FUN_00014454(param_1,iVar11,iVar9,0);
      *(short *)(*(int *)(*(int *)(DAT_0007f7b8 + param_1 * 4) + 4) + iVar11 * 6 + 2) = (short)cVar1
      ;
      cVar2 = FUN_00014454(param_1,iVar11,iVar9,1);
      bVar8 = cVar1 - cVar2;
      iVar4 = (int)(char)bVar8;
      *(short *)(*(int *)(*(int *)(DAT_0007f7b8 + param_1 * 4) + 8) + iVar11 * 6 + 2) = (short)cVar2
      ;
      if ((byte)(bVar8 + 2) < 5) break;
      local_829 = bVar8;
      if (DAT_0007f7b0 == 0) {
        if (3 < DAT_0007eb9c) {
          local_828._0_1_ = s_can_not_set_ext_mode_before_cali_00060638[0];
          local_828._1_1_ = s_can_not_set_ext_mode_before_cali_00060638[1];
          local_828._2_1_ = s_can_not_set_ext_mode_before_cali_00060638[2];
          local_828._3_1_ = s_can_not_set_ext_mode_before_cali_00060638[3];
          uStack_824._0_1_ = s_can_not_set_ext_mode_before_cali_00060638[4];
          uStack_824._1_1_ = s_can_not_set_ext_mode_before_cali_00060638[5];
          uStack_824._2_1_ = s_can_not_set_ext_mode_before_cali_00060638[6];
          uStack_824._3_1_ = s_can_not_set_ext_mode_before_cali_00060638[7];
          uStack_820._0_1_ = s_can_not_set_ext_mode_before_cali_00060638[8];
          uStack_820._1_1_ = s_can_not_set_ext_mode_before_cali_00060638[9];
          uStack_820._2_1_ = s_can_not_set_ext_mode_before_cali_00060638[10];
          uStack_820._3_1_ = s_can_not_set_ext_mode_before_cali_00060638[11];
          uStack_81c._0_1_ = s_can_not_set_ext_mode_before_cali_00060638[12];
          uStack_81c._1_1_ = s_can_not_set_ext_mode_before_cali_00060638[13];
          uStack_81c._2_1_ = s_can_not_set_ext_mode_before_cali_00060638[14];
          uStack_81c._3_1_ = s_can_not_set_ext_mode_before_cali_00060638[15];
          local_818._0_1_ = s_can_not_set_ext_mode_before_cali_00060638[16];
          local_818._1_1_ = s_can_not_set_ext_mode_before_cali_00060638[17];
          local_818._2_1_ = s_can_not_set_ext_mode_before_cali_00060638[18];
          local_818._3_1_ = s_can_not_set_ext_mode_before_cali_00060638[19];
          uStack_814._0_1_ = s_can_not_set_ext_mode_before_cali_00060638[20];
          uStack_814._1_1_ = s_can_not_set_ext_mode_before_cali_00060638[21];
          uStack_814._2_1_ = s_can_not_set_ext_mode_before_cali_00060638[22];
          uStack_814._3_1_ = s_can_not_set_ext_mode_before_cali_00060638[23];
          uStack_810._0_1_ = s_can_not_set_ext_mode_before_cali_00060638[24];
          uStack_810._1_1_ = s_can_not_set_ext_mode_before_cali_00060638[25];
          uStack_810._2_1_ = s_can_not_set_ext_mode_before_cali_00060638[26];
          uStack_810._3_1_ = s_can_not_set_ext_mode_before_cali_00060638[27];
          uStack_80c._0_1_ = s_can_not_set_ext_mode_before_cali_00060638[28];
          uStack_80c._1_1_ = s_can_not_set_ext_mode_before_cali_00060638[29];
          uStack_80c._2_1_ = s_can_not_set_ext_mode_before_cali_00060638[30];
          uStack_80c._3_1_ = s_can_not_set_ext_mode_before_cali_00060638[31];
          uStack_808._0_1_ = s_can_not_set_ext_mode_before_cali_00060638[32];
          uStack_808._1_1_ = s_can_not_set_ext_mode_before_cali_00060638[33];
          uStack_808._2_1_ = s_can_not_set_ext_mode_before_cali_00060638[34];
          uStack_808._3_1_ = s_can_not_set_ext_mode_before_cali_00060638[35];
          uStack_804._0_1_ = s_can_not_set_ext_mode_before_cali_00060638[36];
          uStack_804._1_1_ = s_can_not_set_ext_mode_before_cali_00060638[37];
          uStack_804._2_1_ = s_can_not_set_ext_mode_before_cali_00060638[38];
          uStack_804._3_1_ = s_can_not_set_ext_mode_before_cali_00060638[39];
          FUN_0002e584(3,&local_828,0);
        }
LAB_00014a78:
        if (iVar4 < 0) {
          iVar4 = -iVar4;
        }
      }
      else {
        iVar5 = FUN_0001e170();
        if (iVar5 != 0) {
          iVar5 = FUN_000142bc(param_1,(int)(short)*(undefined4 *)(DAT_0007f7b4 + iVar3) *
                                       (int)(short)DAT_0007f7b0 & 0xff,(&UNK_000604a4)[iVar9 * 0x10]
                               ,1,&local_829);
          if (iVar5 == 0) {
            if (3 < DAT_0007eb9c) {
              snprintf((char *)&local_828,0x800,"set offset failed for senser %d @ chain %d",
                       *(undefined4 *)(DAT_0007f7b4 + iVar3),param_1);
              FUN_0002e584(3,&local_828,0);
            }
          }
          else if (3 < DAT_0007eb9c) {
            uVar7 = *(undefined4 *)(DAT_0007f7b4 + iVar3);
            __format = local_840;
            iVar5 = iVar4;
            goto LAB_00014b5c;
          }
          goto LAB_00014a78;
        }
        if (DAT_0007eb9c < 4) goto LAB_00014a78;
        __format = "%s chain %d ,index %d not connected";
        uVar7 = DAT_00014cbc;
        iVar5 = iVar11;
LAB_00014b5c:
        snprintf((char *)&local_828,0x800,__format,uVar7,param_1,iVar5);
        FUN_0002e584(3,&local_828,0);
        if (iVar4 < 0) {
          iVar4 = -iVar4;
        }
      }
      if ((iVar4 < 3) || (cVar6 = cVar6 + -1, cVar6 == '\0')) goto LAB_00014b80;
    }
    if (4 < DAT_0007eb9c) {
      iVar11 = iVar11 + 1;
      snprintf((char *)&local_828,0x800,
               "sensor %d @ chain %d chip_temp_offset less than 2, no need to set offset",
               *(undefined4 *)(DAT_0007f7b4 + iVar3),param_1);
      FUN_0002e584(4,&local_828,0);
      goto LAB_000146f0;
    }
LAB_00014b80:
    iVar11 = iVar11 + 1;
  } while( true );
}

