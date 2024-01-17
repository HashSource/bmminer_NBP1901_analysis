
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00023574(int param_1,undefined4 *param_2,size_t param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  size_t sVar11;
  int extraout_r1;
  int iVar12;
  int iVar13;
  int iVar14;
  char *pcVar15;
  int iVar16;
  int iVar17;
  undefined8 uVar18;
  undefined2 local_c54 [2];
  undefined4 local_c50 [256];
  undefined4 local_850;
  undefined4 uStack_84c;
  undefined4 uStack_848;
  undefined4 uStack_844;
  undefined4 local_840;
  undefined4 local_83c;
  undefined4 uStack_838;
  undefined4 uStack_834;
  undefined2 uStack_830;
  undefined local_82e;
  
  pcVar15 = (char *)(param_1 + 4);
  iVar4 = strncmp(pcVar15,"/rate",5);
  if (iVar4 == 0) {
    if ((DAT_00482a5d != '\0') &&
       (((DAT_00590404 != '\0' || (DAT_00482a5c != '\0')) || (6 < DAT_0007eba0)))) {
      local_850._0_1_ = s_cmd___get_rate_000627d4[0];
      local_850._1_1_ = s_cmd___get_rate_000627d4[1];
      local_850._2_1_ = s_cmd___get_rate_000627d4[2];
      local_850._3_1_ = s_cmd___get_rate_000627d4[3];
      uStack_84c._0_1_ = s_cmd___get_rate_000627d4[4];
      uStack_84c._1_1_ = s_cmd___get_rate_000627d4[5];
      uStack_84c._2_1_ = s_cmd___get_rate_000627d4[6];
      uStack_84c._3_1_ = s_cmd___get_rate_000627d4[7];
      uStack_848._0_1_ = s_cmd___get_rate_000627d4[8];
      uStack_848._1_1_ = s_cmd___get_rate_000627d4[9];
      uStack_848._2_1_ = s_cmd___get_rate_000627d4[10];
      uStack_848._3_1_ = s_cmd___get_rate_000627d4[11];
      uStack_844._0_3_ = (undefined3)ram0x000627e0;
      FUN_0002e584(7,&local_850,0);
    }
    uVar5 = FUN_0001a18c();
    FUN_000234d8(param_2,param_3,uVar5);
    return 0;
  }
  iVar4 = strncmp(pcVar15,"/ideal_rate",0xb);
  if (iVar4 == 0) {
    if ((DAT_00482a5d != '\0') &&
       (((DAT_00590404 != '\0' || (DAT_00482a5c != '\0')) || (6 < DAT_0007eba0)))) {
      local_850._0_1_ = s_cmd___get_ideal_rate_000627f0[0];
      local_850._1_1_ = s_cmd___get_ideal_rate_000627f0[1];
      local_850._2_1_ = s_cmd___get_ideal_rate_000627f0[2];
      local_850._3_1_ = s_cmd___get_ideal_rate_000627f0[3];
      uStack_84c._0_1_ = s_cmd___get_ideal_rate_000627f0[4];
      uStack_84c._1_1_ = s_cmd___get_ideal_rate_000627f0[5];
      uStack_84c._2_1_ = s_cmd___get_ideal_rate_000627f0[6];
      uStack_84c._3_1_ = s_cmd___get_ideal_rate_000627f0[7];
      uStack_848._0_1_ = s_cmd___get_ideal_rate_000627f0[8];
      uStack_848._1_1_ = s_cmd___get_ideal_rate_000627f0[9];
      uStack_848._2_1_ = s_cmd___get_ideal_rate_000627f0[10];
      uStack_848._3_1_ = s_cmd___get_ideal_rate_000627f0[11];
      uStack_844._0_1_ = s_cmd___get_ideal_rate_000627f0[12];
      uStack_844._1_1_ = s_cmd___get_ideal_rate_000627f0[13];
      uStack_844._2_1_ = s_cmd___get_ideal_rate_000627f0[14];
      uStack_844._3_1_ = s_cmd___get_ideal_rate_000627f0[15];
      local_840._0_1_ = s_cmd___get_ideal_rate_000627f0[16];
      local_840._1_1_ = s_cmd___get_ideal_rate_000627f0[17];
      local_840._2_1_ = s_cmd___get_ideal_rate_000627f0[18];
      local_840._3_1_ = s_cmd___get_ideal_rate_000627f0[19];
      local_83c._0_1_ = (char)ram0x00062804;
      FUN_0002e584(7,&local_850,0);
    }
    uVar5 = FUN_0001a014();
    FUN_000234d8(param_2,param_3,uVar5);
    return 0;
  }
  iVar4 = strncmp(pcVar15,"/max_rate",9);
  if (iVar4 == 0) {
    if ((DAT_00482a5d != '\0') &&
       (((DAT_00590404 != '\0' || (DAT_00482a5c != '\0')) || (6 < DAT_0007eba0)))) {
      local_850._0_1_ = s_cmd___get_max_rate_00062814[0];
      local_850._1_1_ = s_cmd___get_max_rate_00062814[1];
      local_850._2_1_ = s_cmd___get_max_rate_00062814[2];
      local_850._3_1_ = s_cmd___get_max_rate_00062814[3];
      uStack_84c._0_1_ = s_cmd___get_max_rate_00062814[4];
      uStack_84c._1_1_ = s_cmd___get_max_rate_00062814[5];
      uStack_84c._2_1_ = s_cmd___get_max_rate_00062814[6];
      uStack_84c._3_1_ = s_cmd___get_max_rate_00062814[7];
      uStack_848._0_1_ = s_cmd___get_max_rate_00062814[8];
      uStack_848._1_1_ = s_cmd___get_max_rate_00062814[9];
      uStack_848._2_1_ = s_cmd___get_max_rate_00062814[10];
      uStack_848._3_1_ = s_cmd___get_max_rate_00062814[11];
      uStack_844._0_1_ = s_cmd___get_max_rate_00062814[12];
      uStack_844._1_1_ = s_cmd___get_max_rate_00062814[13];
      uStack_844._2_1_ = s_cmd___get_max_rate_00062814[14];
      uStack_844._3_1_ = s_cmd___get_max_rate_00062814[15];
      local_840._0_3_ = (undefined3)ram0x00062824;
      FUN_0002e584(7,&local_850,0);
    }
    uVar5 = FUN_00019e68();
    FUN_000234d8(param_2,param_3,uVar5);
    return 0;
  }
  iVar4 = strncmp(pcVar15,"/miner_status",0xd);
  if (iVar4 == 0) {
    if ((DAT_00482a5d != '\0') &&
       (((DAT_00590404 != '\0' || (DAT_00482a5c != '\0')) || (6 < DAT_0007eba0)))) {
      local_850._0_1_ = s_cmd___get_miner_status_00062838[0];
      local_850._1_1_ = s_cmd___get_miner_status_00062838[1];
      local_850._2_1_ = s_cmd___get_miner_status_00062838[2];
      local_850._3_1_ = s_cmd___get_miner_status_00062838[3];
      uStack_84c._0_1_ = s_cmd___get_miner_status_00062838[4];
      uStack_84c._1_1_ = s_cmd___get_miner_status_00062838[5];
      uStack_84c._2_1_ = s_cmd___get_miner_status_00062838[6];
      uStack_84c._3_1_ = s_cmd___get_miner_status_00062838[7];
      uStack_848._0_1_ = s_cmd___get_miner_status_00062838[8];
      uStack_848._1_1_ = s_cmd___get_miner_status_00062838[9];
      uStack_848._2_1_ = s_cmd___get_miner_status_00062838[10];
      uStack_848._3_1_ = s_cmd___get_miner_status_00062838[11];
      uStack_844._0_1_ = s_cmd___get_miner_status_00062838[12];
      uStack_844._1_1_ = s_cmd___get_miner_status_00062838[13];
      uStack_844._2_1_ = s_cmd___get_miner_status_00062838[14];
      uStack_844._3_1_ = s_cmd___get_miner_status_00062838[15];
      local_840._0_1_ = s_cmd___get_miner_status_00062838[16];
      local_840._1_1_ = s_cmd___get_miner_status_00062838[17];
      local_840._2_1_ = s_cmd___get_miner_status_00062838[18];
      local_840._3_1_ = s_cmd___get_miner_status_00062838[19];
      FUN_0002e584(7,&local_850,0);
      return 0;
    }
  }
  else {
    iVar4 = strncmp(pcVar15,"/productName",0xc);
    if (iVar4 == 0) {
      if ((DAT_00482a5d != '\0') &&
         (((DAT_00590404 != '\0' || (DAT_00482a5c != '\0')) || (6 < DAT_0007eba0)))) {
        local_850._0_1_ = s_cmd___get_miner_type_00062860[0];
        local_850._1_1_ = s_cmd___get_miner_type_00062860[1];
        local_850._2_1_ = s_cmd___get_miner_type_00062860[2];
        local_850._3_1_ = s_cmd___get_miner_type_00062860[3];
        uStack_84c._0_1_ = s_cmd___get_miner_type_00062860[4];
        uStack_84c._1_1_ = s_cmd___get_miner_type_00062860[5];
        uStack_84c._2_1_ = s_cmd___get_miner_type_00062860[6];
        uStack_84c._3_1_ = s_cmd___get_miner_type_00062860[7];
        uStack_848._0_1_ = s_cmd___get_miner_type_00062860[8];
        uStack_848._1_1_ = s_cmd___get_miner_type_00062860[9];
        uStack_848._2_1_ = s_cmd___get_miner_type_00062860[10];
        uStack_848._3_1_ = s_cmd___get_miner_type_00062860[11];
        uStack_844._0_1_ = s_cmd___get_miner_type_00062860[12];
        uStack_844._1_1_ = s_cmd___get_miner_type_00062860[13];
        uStack_844._2_1_ = s_cmd___get_miner_type_00062860[14];
        uStack_844._3_1_ = s_cmd___get_miner_type_00062860[15];
        local_840._0_1_ = s_cmd___get_miner_type_00062860[16];
        local_840._1_1_ = s_cmd___get_miner_type_00062860[17];
        local_840._2_1_ = s_cmd___get_miner_type_00062860[18];
        local_840._3_1_ = s_cmd___get_miner_type_00062860[19];
        local_83c._0_1_ = (char)ram0x00062874;
        FUN_0002e584(7,&local_850,0);
      }
      snprintf((char *)param_2,0x100,"%s",&DAT_00080ca0);
      return 0;
    }
    iVar4 = strncmp(pcVar15,"/get_sn",7);
    if (iVar4 == 0) {
      if ((DAT_00482a5d != '\0') &&
         (((DAT_00590404 != '\0' || (DAT_00482a5c != '\0')) || (6 < DAT_0007eba0)))) {
        local_850._0_1_ = s_cmd___get_miner_sn_00062880[0];
        local_850._1_1_ = s_cmd___get_miner_sn_00062880[1];
        local_850._2_1_ = s_cmd___get_miner_sn_00062880[2];
        local_850._3_1_ = s_cmd___get_miner_sn_00062880[3];
        uStack_84c._0_1_ = s_cmd___get_miner_sn_00062880[4];
        uStack_84c._1_1_ = s_cmd___get_miner_sn_00062880[5];
        uStack_84c._2_1_ = s_cmd___get_miner_sn_00062880[6];
        uStack_84c._3_1_ = s_cmd___get_miner_sn_00062880[7];
        uStack_848._0_1_ = s_cmd___get_miner_sn_00062880[8];
        uStack_848._1_1_ = s_cmd___get_miner_sn_00062880[9];
        uStack_848._2_1_ = s_cmd___get_miner_sn_00062880[10];
        uStack_848._3_1_ = s_cmd___get_miner_sn_00062880[11];
        uStack_844._0_1_ = s_cmd___get_miner_sn_00062880[12];
        uStack_844._1_1_ = s_cmd___get_miner_sn_00062880[13];
        uStack_844._2_1_ = s_cmd___get_miner_sn_00062880[14];
        uStack_844._3_1_ = s_cmd___get_miner_sn_00062880[15];
        local_840._0_3_ = (undefined3)ram0x00062890;
        FUN_0002e584(7,&local_850,0);
      }
      uVar2 = s_no_miner_sn_stored_on_board_00062894._12_4_;
      uVar1 = s_no_miner_sn_stored_on_board_00062894._8_4_;
      uVar5 = s_no_miner_sn_stored_on_board_00062894._4_4_;
      if (DAT_0007f8f8 != '\0') {
        snprintf((char *)param_2,0x100,"%s");
        return 0;
      }
      *param_2 = s_no_miner_sn_stored_on_board_00062894._0_4_;
      param_2[1] = uVar5;
      param_2[2] = uVar1;
      uVar3 = s_no_miner_sn_stored_on_board_00062894._24_4_;
      uVar1 = s_no_miner_sn_stored_on_board_00062894._20_4_;
      uVar5 = s_no_miner_sn_stored_on_board_00062894._16_4_;
      param_2[3] = uVar2;
      param_2[4] = uVar5;
      param_2[5] = uVar1;
      param_2[6] = uVar3;
      return 0;
    }
    iVar4 = strncmp(pcVar15,"/set_sn",7);
    if (iVar4 == 0) {
      if (((DAT_00590404 != '\0') || (DAT_00482a5c != '\0')) || (4 < DAT_0007eba0)) {
        local_850._0_1_ = s_cmd___set_miner_sn__doesn_t_sppo_000628b8[0];
        local_850._1_1_ = s_cmd___set_miner_sn__doesn_t_sppo_000628b8[1];
        local_850._2_1_ = s_cmd___set_miner_sn__doesn_t_sppo_000628b8[2];
        local_850._3_1_ = s_cmd___set_miner_sn__doesn_t_sppo_000628b8[3];
        uStack_84c._0_1_ = s_cmd___set_miner_sn__doesn_t_sppo_000628b8[4];
        uStack_84c._1_1_ = s_cmd___set_miner_sn__doesn_t_sppo_000628b8[5];
        uStack_84c._2_1_ = s_cmd___set_miner_sn__doesn_t_sppo_000628b8[6];
        uStack_84c._3_1_ = s_cmd___set_miner_sn__doesn_t_sppo_000628b8[7];
        uStack_848._0_1_ = s_cmd___set_miner_sn__doesn_t_sppo_000628b8[8];
        uStack_848._1_1_ = s_cmd___set_miner_sn__doesn_t_sppo_000628b8[9];
        uStack_848._2_1_ = s_cmd___set_miner_sn__doesn_t_sppo_000628b8[10];
        uStack_848._3_1_ = s_cmd___set_miner_sn__doesn_t_sppo_000628b8[11];
        uStack_844._0_1_ = s_cmd___set_miner_sn__doesn_t_sppo_000628b8[12];
        uStack_844._1_1_ = s_cmd___set_miner_sn__doesn_t_sppo_000628b8[13];
        uStack_844._2_1_ = s_cmd___set_miner_sn__doesn_t_sppo_000628b8[14];
        uStack_844._3_1_ = s_cmd___set_miner_sn__doesn_t_sppo_000628b8[15];
        local_840._0_1_ = s_cmd___set_miner_sn__doesn_t_sppo_000628b8[16];
        local_840._1_1_ = s_cmd___set_miner_sn__doesn_t_sppo_000628b8[17];
        local_840._2_1_ = s_cmd___set_miner_sn__doesn_t_sppo_000628b8[18];
        local_840._3_1_ = s_cmd___set_miner_sn__doesn_t_sppo_000628b8[19];
        local_83c._0_1_ = s_cmd___set_miner_sn__doesn_t_sppo_000628b8[20];
        local_83c._1_1_ = s_cmd___set_miner_sn__doesn_t_sppo_000628b8[21];
        local_83c._2_1_ = s_cmd___set_miner_sn__doesn_t_sppo_000628b8[22];
        local_83c._3_1_ = s_cmd___set_miner_sn__doesn_t_sppo_000628b8[23];
        uStack_838._0_1_ = s_cmd___set_miner_sn__doesn_t_sppo_000628b8[24];
        uStack_838._1_1_ = s_cmd___set_miner_sn__doesn_t_sppo_000628b8[25];
        uStack_838._2_1_ = s_cmd___set_miner_sn__doesn_t_sppo_000628b8[26];
        uStack_838._3_1_ = s_cmd___set_miner_sn__doesn_t_sppo_000628b8[27];
        uStack_834._0_1_ = s_cmd___set_miner_sn__doesn_t_sppo_000628b8[28];
        uStack_834._1_1_ = s_cmd___set_miner_sn__doesn_t_sppo_000628b8[29];
        uStack_834._2_1_ = s_cmd___set_miner_sn__doesn_t_sppo_000628b8[30];
        uStack_834._3_1_ = s_cmd___set_miner_sn__doesn_t_sppo_000628b8[31];
        uStack_830 = (undefined2)ram0x000628d8;
        local_82e = (undefined)((uint)ram0x000628d8 >> 0x10);
        FUN_0002e584(5,&local_850,0);
      }
      snprintf((char *)param_2,0x14,"doesn\'t support sn set in Release mode");
      return 0;
    }
    iVar4 = strncmp(pcVar15,"/readreg",8);
    if (iVar4 == 0) {
      local_c50[0]._0_2_ = 0x2d;
      pcVar15 = strtok(pcVar15,(char *)local_c50);
      if ((pcVar15 != (char *)0x0) &&
         (pcVar15 = strtok((char *)0x0,(char *)local_c50), pcVar15 != (char *)0x0)) {
        lVar8 = strtol(pcVar15,(char **)0x0,10);
        pcVar15 = strtok((char *)0x0,(char *)local_c50);
        if (pcVar15 != (char *)0x0) {
          lVar9 = strtol(pcVar15,(char **)0x0,10);
          pcVar15 = strtok((char *)0x0,(char *)local_c50);
          if (pcVar15 != (char *)0x0) {
            lVar7 = strtol(pcVar15,(char **)0x0,0x10);
            if (((DAT_00590404 != '\0') || (DAT_00482a5c != '\0')) || (4 < DAT_0007eba0)) {
              snprintf((char *)&local_850,0x800,"recvBuf = %s, chain = %d, asic = %d, reg = 0x%x\n",
                       param_1,lVar8,lVar9,lVar7);
              FUN_0002e584(5,&local_850,0);
            }
            iVar4 = FUN_0001e160();
            uVar5 = FUN_0002c06c(lVar7,lVar9 * iVar4,lVar8);
            snprintf((char *)param_2,param_3,"reg 0x%08x of asic %2d @ chain %2d, val = 0x%08x",
                     lVar7,lVar9,lVar8,uVar5);
            return 0;
          }
        }
      }
    }
    else {
      iVar4 = strncmp(pcVar15,"/readcorereg",0xc);
      if (iVar4 == 0) {
        local_c54[0] = 0x2d;
        memset(local_c50,0,0x400);
        pcVar15 = strtok(pcVar15,(char *)local_c54);
        if ((pcVar15 != (char *)0x0) &&
           (pcVar15 = strtok((char *)0x0,(char *)local_c54), pcVar15 != (char *)0x0)) {
          lVar8 = strtol(pcVar15,(char **)0x0,10);
          pcVar15 = strtok((char *)0x0,(char *)local_c54);
          if (pcVar15 != (char *)0x0) {
            lVar9 = strtol(pcVar15,(char **)0x0,10);
            pcVar15 = strtok((char *)0x0,(char *)local_c54);
            if (pcVar15 != (char *)0x0) {
              lVar7 = strtol(pcVar15,(char **)0x0,0x10);
              if (((DAT_00590404 != '\0') || (DAT_00482a5c != '\0')) || (4 < DAT_0007eba0)) {
                snprintf((char *)&local_850,0x800,
                         "recvBuf = %s, chain = %d, asic = %d, reg = 0x%x\n",param_1,lVar8,lVar9,
                         lVar7);
                FUN_0002e584(5,&local_850,0);
              }
              iVar4 = FUN_0002c2e8(lVar7,lVar9,lVar8,local_c50);
              if (iVar4 != 0) {
                snprintf((char *)param_2,param_3,"500 server error");
                return 0;
              }
              iVar4 = FUN_0001e120();
              if (iVar4 < 1) {
                return 0;
              }
              iVar14 = 0;
              iVar16 = 0;
              do {
                iVar17 = iVar16 + 1;
                iVar16 = snprintf((char *)((int)param_2 + iVar14),param_3 - iVar14,
                                  "asic\t%03d\tcore\t%03d\treg\t0x%02x\tval\t0x%08x\n",lVar9,iVar16,
                                  lVar7,*(undefined4 *)((int)local_c50 + iVar16 * 2 * 2));
                iVar14 = iVar14 + iVar16;
                iVar16 = iVar17;
              } while (iVar4 != iVar17);
              return 0;
            }
          }
        }
      }
      else {
        iVar4 = strncmp(pcVar15,"/resetcore",10);
        if (iVar4 == 0) {
          local_c50[0]._0_2_ = 0x2d;
          pcVar15 = strtok(pcVar15,(char *)local_c50);
          if ((pcVar15 != (char *)0x0) &&
             (pcVar15 = strtok((char *)0x0,(char *)local_c50), pcVar15 != (char *)0x0)) {
            lVar8 = strtol(pcVar15,(char **)0x0,10);
            pcVar15 = strtok((char *)0x0,(char *)local_c50);
            if (pcVar15 != (char *)0x0) {
              lVar9 = strtol(pcVar15,(char **)0x0,10);
              if (((DAT_00590404 != '\0') || (DAT_00482a5c != '\0')) || (4 < DAT_0007eba0)) {
                snprintf((char *)&local_850,0x800,"recvBuf = %s, chain = %d, asic = %d\n",param_1,
                         lVar8,lVar9);
                FUN_0002e584(5,&local_850,0);
              }
              snprintf((char *)param_2,param_3,"reset chain %d asic %d core success!!!.",lVar8,lVar9
                      );
              return 0;
            }
          }
        }
        else {
          iVar4 = strncmp(pcVar15,"/nonce",6);
          if (iVar4 == 0) {
            memset(&local_850,0,0x100);
            iVar4 = 0;
            iVar14 = 0;
            iVar16 = 0;
            iVar17 = 0;
            do {
              iVar6 = FUN_0001e29c(iVar14);
              if (iVar6 != 0) {
                sVar11 = param_3 - iVar4;
                pcVar15 = (char *)((int)param_2 + iVar4);
                iVar4 = iVar4 + 0x24;
                snprintf(pcVar15,sVar11,"\n asic nonce number for chain[%d]...\n",iVar14);
                iVar6 = FUN_0001e0f0();
                if (iVar6 != 0) {
                  iVar12 = 0;
                  do {
                    iVar10 = FUN_0002cdfc(iVar14,iVar12);
                    iVar17 = iVar17 + iVar10;
                    iVar13 = iVar12 + 1;
                    uVar5 = FUN_0002cdfc(iVar14,iVar12);
                    iVar10 = snprintf((char *)((int)&local_850 + iVar16),0x100 - iVar16,
                                      "asic[%03d]=%-8d ",iVar12,uVar5);
                    uVar5 = FUN_0001e100();
                    FUN_0005fadc(iVar13,uVar5);
                    iVar16 = iVar16 + iVar10;
                    if (extraout_r1 == 0) {
                      uVar5 = FUN_0001e100();
                      uVar5 = FUN_0005f880(iVar12,uVar5);
                      iVar16 = snprintf((char *)((int)param_2 + iVar4),param_3 - iVar4,
                                        "domain %02d %s total=%-8u\n",uVar5,&local_850,iVar17);
                      iVar4 = iVar4 + iVar16;
                      iVar16 = 0;
                      iVar17 = 0;
                    }
                    iVar12 = iVar13;
                  } while (iVar13 != iVar6);
                }
              }
              iVar14 = iVar14 + 1;
            } while (iVar14 != 4);
            return 0;
          }
          iVar4 = strncmp(pcVar15,"/adc",4);
          if (iVar4 == 0) {
            iVar4 = 0;
            iVar14 = 0;
            do {
              iVar16 = FUN_0001e29c(iVar4);
              if (iVar16 != 0) {
                sVar11 = param_3 - iVar14;
                pcVar15 = (char *)((int)param_2 + iVar14);
                iVar14 = iVar14 + 0x17;
                snprintf(pcVar15,sVar11,"\t\t\td0\td1\td2\td3\tsum\tavg\n");
                iVar16 = FUN_0001e0f0();
                if (iVar16 != 0) {
                  iVar17 = 0;
                  do {
                    FUN_0003f92c(iVar4,iVar17,0);
                    FUN_0003f92c(iVar4,iVar17,1);
                    FUN_0003f92c(iVar4,iVar17,2);
                    FUN_0003f92c(iVar4,iVar17,3);
                    FUN_0003f970(iVar4,iVar17);
                    FUN_0003f9ec(iVar4,iVar17);
                    iVar6 = iVar17 + 1;
                    iVar17 = snprintf((char *)((int)param_2 + iVar14),param_3 - iVar14,
                                      "chain %2d asic %03d adc:\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n"
                                      ,iVar4,iVar17);
                    iVar14 = iVar14 + iVar17;
                    iVar17 = iVar6;
                  } while (iVar16 != iVar6);
                }
              }
              iVar4 = iVar4 + 1;
            } while (iVar4 != 4);
            return 0;
          }
          iVar4 = strncmp(pcVar15,"/flush",6);
          if (iVar4 == 0) {
            FUN_000452f8();
            return 0;
          }
          local_850 = strncmp(pcVar15,"/power",6);
          if (local_850 != 0) {
            return 0xffffffff;
          }
          iVar14 = __isoc99_sscanf(pcVar15,"/power-%d");
          iVar4 = local_850;
          if ((iVar14 == 1) && (local_850 < 4)) {
            uVar18 = FUN_000192c8(local_850);
            snprintf((char *)param_2,param_3,"chain %d power is %.2f",iVar4,uVar18);
            return 0;
          }
        }
      }
    }
    snprintf((char *)param_2,param_3,"404 not found");
  }
  return 0;
}

