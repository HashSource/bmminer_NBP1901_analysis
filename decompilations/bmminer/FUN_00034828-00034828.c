
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_00034828(uint param_1,uint param_2,uint param_3,uint param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,uint param_8)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int extraout_r1;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined4 *puVar12;
  double dVar13;
  undefined8 uVar14;
  uint local_85c;
  undefined4 local_838;
  undefined4 uStack_834;
  undefined4 uStack_830;
  undefined4 uStack_82c;
  undefined4 local_828;
  undefined4 uStack_824;
  undefined4 uStack_820;
  undefined4 uStack_81c;
  undefined4 local_818;
  undefined4 uStack_814;
  undefined4 uStack_810;
  undefined local_80c;
  
  DAT_0099edc8 = param_5;
  DAT_0099edcc = param_6;
  DAT_0099edd0 = param_7;
  DAT_0099edd4 = param_8;
  uVar6 = param_1 & 0xff;
  DAT_0099edb8 = param_1;
  DAT_0099edbc = param_2;
  DAT_0099edc0 = param_3;
  DAT_0099edc4 = param_4;
  if (uVar6 != 0x51) {
    if (DAT_0007eb9c < 5) {
      return 0;
    }
    pcVar7 = "config_parameter.token_type != 0x%x, it is 0x%x\n";
    uVar9 = 0x51;
LAB_000348c4:
    snprintf((char *)&local_838,0x800,pcVar7,uVar9,uVar6);
    FUN_0002e584(4,&local_838,0);
    return 0;
  }
  uVar6 = FUN_00031590(&DAT_0099edb8,0x1e);
  uVar9 = DAT_0099edd4 >> 0x10;
  if (uVar6 != uVar9) {
    if (DAT_0007eb9c < 5) {
      return 0;
    }
    pcVar7 = "config_parameter.crc = 0x%x, but we calculate it as 0x%x\n";
    goto LAB_000348c4;
  }
  if (3 < DAT_0007eb9c) {
    snprintf((char *)&local_838,0x800,"fan_eft : %d  fan_pwm : %d\n",(DAT_0099edbc << 0x1e) >> 0x1f,
             DAT_0099edc0 >> 0x10 & 0xff);
    FUN_0002e584(3,&local_838);
  }
  if (DAT_0007edc8 == 0) {
    cVar2 = FUN_000362a0(0xa1);
    uVar6 = 0;
    do {
      uVar9 = uVar6 + 1;
      iVar3 = FUN_0001e29c(uVar6);
      if (iVar3 != 0) {
        thunk_FUN_0005198c(uVar6 & 0xff);
      }
      uVar6 = uVar9;
    } while (uVar9 != 4);
    if (cVar2 != '\0') {
      return 0;
    }
  }
  cVar2 = FUN_00027a58();
  if (cVar2 != '\0') {
    return 0;
  }
  if ((DAT_00482a71 == '\0') || ((DAT_0099edbc & 0x10) == 0)) {
    uVar6 = FUN_00031bac();
    if (0 < (int)uVar6) goto LAB_000349b8;
    if ((uVar6 & 0xff) != 0) {
      return 0;
    }
  }
  else {
    DAT_00482a8c = DAT_0099edc4 >> 0x10;
    uVar6 = FUN_00031bac();
LAB_000349b8:
    DAT_00482a8c = uVar6;
    if (3 < DAT_0007eb9c) {
      snprintf((char *)&local_838,0x800,"fixed working voltage = %d\n",DAT_00482a8c);
      FUN_0002e584(3,&local_838);
    }
  }
  cVar2 = FUN_00033e34();
  if (cVar2 != '\0') {
    return 0;
  }
  if ((DAT_00482a71 == '\0') || ((DAT_0099edbc & 8) == 0)) {
    DAT_00482a6c = 200;
    iVar3 = 0;
    uVar6 = DAT_00482a6c;
  }
  else {
    DAT_00482a6c = DAT_0099edc4 & 0xffff;
    iVar4 = 0;
    uVar9 = 0;
    do {
      iVar3 = FUN_0001e29c(iVar4);
      uVar6 = uVar9;
      if ((((iVar3 != 0) && (iVar3 = FUN_000183fc(iVar4,DAT_00080fb4 & 0xff), iVar3 == 0)) &&
          (uVar6 = local_85c, uVar9 != 0)) && (uVar6 = uVar9, local_85c <= uVar9)) {
        uVar6 = local_85c;
      }
      iVar4 = iVar4 + 1;
      uVar9 = uVar6;
    } while (iVar4 != 4);
    if (3 < DAT_0007eb9c) {
      snprintf((char *)&local_838,0x800,"min freq in eeprom = %d\n",uVar6);
      iVar3 = FUN_0002e584(3,&local_838);
    }
    if ((uVar6 == 0) || ((int)uVar6 < 1)) {
      if (3 < DAT_0007eb9c) {
        local_838._0_1_ = s_failed_to_load_freq_in_eeprom__u_00066fac[0];
        local_838._1_1_ = s_failed_to_load_freq_in_eeprom__u_00066fac[1];
        local_838._2_1_ = s_failed_to_load_freq_in_eeprom__u_00066fac[2];
        local_838._3_1_ = s_failed_to_load_freq_in_eeprom__u_00066fac[3];
        uStack_834._0_1_ = s_failed_to_load_freq_in_eeprom__u_00066fac[4];
        uStack_834._1_1_ = s_failed_to_load_freq_in_eeprom__u_00066fac[5];
        uStack_834._2_1_ = s_failed_to_load_freq_in_eeprom__u_00066fac[6];
        uStack_834._3_1_ = s_failed_to_load_freq_in_eeprom__u_00066fac[7];
        uStack_830._0_1_ = s_failed_to_load_freq_in_eeprom__u_00066fac[8];
        uStack_830._1_1_ = s_failed_to_load_freq_in_eeprom__u_00066fac[9];
        uStack_830._2_1_ = s_failed_to_load_freq_in_eeprom__u_00066fac[10];
        uStack_830._3_1_ = s_failed_to_load_freq_in_eeprom__u_00066fac[11];
        uStack_82c._0_1_ = s_failed_to_load_freq_in_eeprom__u_00066fac[12];
        uStack_82c._1_1_ = s_failed_to_load_freq_in_eeprom__u_00066fac[13];
        uStack_82c._2_1_ = s_failed_to_load_freq_in_eeprom__u_00066fac[14];
        uStack_82c._3_1_ = s_failed_to_load_freq_in_eeprom__u_00066fac[15];
        local_828._0_1_ = s_failed_to_load_freq_in_eeprom__u_00066fac[16];
        local_828._1_1_ = s_failed_to_load_freq_in_eeprom__u_00066fac[17];
        local_828._2_1_ = s_failed_to_load_freq_in_eeprom__u_00066fac[18];
        local_828._3_1_ = s_failed_to_load_freq_in_eeprom__u_00066fac[19];
        uStack_824._0_1_ = s_failed_to_load_freq_in_eeprom__u_00066fac[20];
        uStack_824._1_1_ = s_failed_to_load_freq_in_eeprom__u_00066fac[21];
        uStack_824._2_1_ = s_failed_to_load_freq_in_eeprom__u_00066fac[22];
        uStack_824._3_1_ = s_failed_to_load_freq_in_eeprom__u_00066fac[23];
        uStack_820._0_1_ = s_failed_to_load_freq_in_eeprom__u_00066fac[24];
        uStack_820._1_1_ = s_failed_to_load_freq_in_eeprom__u_00066fac[25];
        uStack_820._2_1_ = s_failed_to_load_freq_in_eeprom__u_00066fac[26];
        uStack_820._3_1_ = s_failed_to_load_freq_in_eeprom__u_00066fac[27];
        uStack_81c._0_1_ = s_failed_to_load_freq_in_eeprom__u_00066fac[28];
        uStack_81c._1_1_ = s_failed_to_load_freq_in_eeprom__u_00066fac[29];
        uStack_81c._2_1_ = s_failed_to_load_freq_in_eeprom__u_00066fac[30];
        uStack_81c._3_1_ = s_failed_to_load_freq_in_eeprom__u_00066fac[31];
        local_818._0_1_ = s_failed_to_load_freq_in_eeprom__u_00066fac[32];
        local_818._1_1_ = s_failed_to_load_freq_in_eeprom__u_00066fac[33];
        local_818._2_1_ = s_failed_to_load_freq_in_eeprom__u_00066fac[34];
        local_818._3_1_ = s_failed_to_load_freq_in_eeprom__u_00066fac[35];
        uStack_814._0_1_ = s_failed_to_load_freq_in_eeprom__u_00066fac[36];
        uStack_814._1_1_ = s_failed_to_load_freq_in_eeprom__u_00066fac[37];
        uStack_814._2_1_ = s_failed_to_load_freq_in_eeprom__u_00066fac[38];
        uStack_814._3_1_ = s_failed_to_load_freq_in_eeprom__u_00066fac[39];
        uStack_810._0_1_ = s_failed_to_load_freq_in_eeprom__u_00066fac[40];
        uStack_810._1_1_ = s_failed_to_load_freq_in_eeprom__u_00066fac[41];
        uStack_810._2_1_ = s_failed_to_load_freq_in_eeprom__u_00066fac[42];
        uStack_810._3_1_ = s_failed_to_load_freq_in_eeprom__u_00066fac[43];
        local_80c = (undefined)ram0x00066fd8;
        iVar3 = FUN_0002e584(3,&local_838,0);
      }
      DAT_00482a6c = 200;
      uVar6 = DAT_00482a6c;
    }
  }
  DAT_00482a6c = uVar6;
  if (3 < DAT_0007eb9c) {
    snprintf((char *)&local_838,0x800,"fixed frequency is %d\n",DAT_00482a6c);
    iVar3 = FUN_0002e584(3,&local_838);
  }
  uVar6 = DAT_00482a8c;
  if (DAT_00080fb4 == 3) {
    pcVar7 = (char *)FUN_0001e0c0();
    iVar3 = strcmp(pcVar7,"NBS1902");
    if (iVar3 != 0) {
      pcVar7 = (char *)FUN_0001e0c0();
      iVar3 = strcmp(pcVar7,"NBS1902L");
      if (iVar3 != 0) {
        pcVar7 = (char *)FUN_0001e0c0();
        iVar3 = strcmp(pcVar7,"NBT1903");
        if (iVar3 != 0) {
          pcVar7 = (char *)FUN_0001e0c0();
          iVar3 = strcmp(pcVar7,"NBP1901");
          if (iVar3 != 0) {
            pcVar7 = (char *)FUN_0001e0c0();
            iVar3 = strcmp(pcVar7,"NBP1901L");
            if (iVar3 != 0) goto LAB_00034a64;
          }
          if ((float)(longlong)(int)DAT_00482a8c * DAT_000350e0 < DAT_000350e4) {
            DAT_00482a8c = 0x4b0;
          }
          else {
            DAT_00482a8c = (uint)((float)(longlong)(int)DAT_00482a8c * DAT_000350e0);
          }
          iVar3 = 10;
          DAT_00482a6c = DAT_00482a6c + ((int)(uVar6 - DAT_00482a8c) / 10) * -10;
          goto LAB_00034a64;
        }
      }
    }
    if ((float)(longlong)(int)DAT_00482a8c * DAT_000350e0 < DAT_000350e4) {
      DAT_00482a8c = 0x4b0;
    }
    else {
      DAT_00482a8c = (uint)((float)(longlong)(int)DAT_00482a8c * DAT_000350e0);
    }
    iVar4 = uVar6 - DAT_00482a8c;
    iVar3 = iVar4 * 0x66666667;
    dVar13 = (double)(ulonglong)DAT_00482a6c - (double)(longlong)(iVar4 / 10) * 12.5;
    DAT_00482a6c = (uint)(0.0 < dVar13) * (int)(longlong)dVar13;
  }
LAB_00034a64:
  if ((DAT_00080fb4 == 1) || ((int)DAT_00482a8c < 1)) {
    FUN_000194dc();
    FUN_00013fb0(0);
    FUN_000304d4(2000);
  }
  else {
    FUN_0001e160(iVar3);
    cVar2 = FUN_00015210();
    if (cVar2 == '\0') {
      FUN_00020a38();
    }
    else {
      FUN_00020a38(1);
      FUN_00031d58(0xe,"Can\'t get temperature sensor type!");
    }
  }
  DAT_0099edd8 = FUN_0001572c();
  if (DAT_0007eb9c < 4) {
    if (DAT_00080fb0 == '\0') goto LAB_00034abc;
  }
  else {
    snprintf((char *)&local_838,0x800,"Bring up temperature is %d\n",DAT_0099edd8);
    FUN_0002e584(3,&local_838,0);
    if (DAT_00080fb0 == '\0') goto LAB_00034abc;
    if (3 < DAT_0007eb9c) {
      local_838._0_1_ = s_press_any_key_to_start_rising_fr_00067040[0];
      local_838._1_1_ = s_press_any_key_to_start_rising_fr_00067040[1];
      local_838._2_1_ = s_press_any_key_to_start_rising_fr_00067040[2];
      local_838._3_1_ = s_press_any_key_to_start_rising_fr_00067040[3];
      uStack_834._0_1_ = s_press_any_key_to_start_rising_fr_00067040[4];
      uStack_834._1_1_ = s_press_any_key_to_start_rising_fr_00067040[5];
      uStack_834._2_1_ = s_press_any_key_to_start_rising_fr_00067040[6];
      uStack_834._3_1_ = s_press_any_key_to_start_rising_fr_00067040[7];
      uStack_830._0_1_ = s_press_any_key_to_start_rising_fr_00067040[8];
      uStack_830._1_1_ = s_press_any_key_to_start_rising_fr_00067040[9];
      uStack_830._2_1_ = s_press_any_key_to_start_rising_fr_00067040[10];
      uStack_830._3_1_ = s_press_any_key_to_start_rising_fr_00067040[11];
      uStack_82c._0_1_ = s_press_any_key_to_start_rising_fr_00067040[12];
      uStack_82c._1_1_ = s_press_any_key_to_start_rising_fr_00067040[13];
      uStack_82c._2_1_ = s_press_any_key_to_start_rising_fr_00067040[14];
      uStack_82c._3_1_ = s_press_any_key_to_start_rising_fr_00067040[15];
      local_828._0_1_ = s_press_any_key_to_start_rising_fr_00067040[16];
      local_828._1_1_ = s_press_any_key_to_start_rising_fr_00067040[17];
      local_828._2_1_ = s_press_any_key_to_start_rising_fr_00067040[18];
      local_828._3_1_ = s_press_any_key_to_start_rising_fr_00067040[19];
      uStack_824._0_1_ = s_press_any_key_to_start_rising_fr_00067040[20];
      uStack_824._1_1_ = s_press_any_key_to_start_rising_fr_00067040[21];
      uStack_824._2_1_ = s_press_any_key_to_start_rising_fr_00067040[22];
      uStack_824._3_1_ = s_press_any_key_to_start_rising_fr_00067040[23];
      uStack_820._0_1_ = s_press_any_key_to_start_rising_fr_00067040[24];
      uStack_820._1_1_ = s_press_any_key_to_start_rising_fr_00067040[25];
      uStack_820._2_1_ = s_press_any_key_to_start_rising_fr_00067040[26];
      uStack_820._3_1_ = s_press_any_key_to_start_rising_fr_00067040[27];
      uStack_81c._0_1_ = s_press_any_key_to_start_rising_fr_00067040[28];
      uStack_81c._1_1_ = s_press_any_key_to_start_rising_fr_00067040[29];
      uStack_81c._2_1_ = s_press_any_key_to_start_rising_fr_00067040[30];
      uStack_81c._3_1_ = s_press_any_key_to_start_rising_fr_00067040[31];
      local_818._0_1_ = s_press_any_key_to_start_rising_fr_00067040[32];
      local_818._1_1_ = s_press_any_key_to_start_rising_fr_00067040[33];
      local_818._2_1_ = s_press_any_key_to_start_rising_fr_00067040[34];
      local_818._3_1_ = s_press_any_key_to_start_rising_fr_00067040[35];
      uStack_814._0_1_ = s_press_any_key_to_start_rising_fr_00067040[36];
      uStack_814._1_1_ = s_press_any_key_to_start_rising_fr_00067040[37];
      uStack_814._2_1_ = s_press_any_key_to_start_rising_fr_00067040[38];
      uStack_814._3_1_ = s_press_any_key_to_start_rising_fr_00067040[39];
      uStack_810._0_3_ = (undefined3)ram0x00067068;
      FUN_0002e584(3,&local_838,0);
    }
  }
  _IO_getc(stdin);
LAB_00034abc:
  pthread_mutex_lock((pthread_mutex_t *)&DAT_0007f7ec);
  FUN_00028138(12000000);
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_0007f7ec);
  if (DAT_0007eb79 == '\0') {
    FUN_0003403c();
  }
  else if ((0 < (int)DAT_00482a8c) && (uVar6 = FUN_00019ab4(), uVar6 != DAT_00482a8c)) {
    uVar14 = FUN_0001572c();
    iVar3 = (int)uVar14;
    if (iVar3 < 0x14) {
      uVar6 = DAT_0007eb78 & 1;
    }
    else {
      uVar6 = 0;
    }
    if (uVar6 != 0) {
      uVar9 = 100;
      uVar8 = (0x14 - iVar3) * 100;
      if ((int)uVar8 < 4000) {
        uVar6 = 0xcccccccd;
      }
      lVar1 = CONCAT44(uVar6,uVar8);
      if ((int)uVar8 < 4000) {
        lVar1 = (ulonglong)uVar6 * (ulonglong)uVar8;
      }
      if ((int)uVar8 < 4000) {
        uVar9 = (uint)((ulonglong)lVar1 >> 0x25);
      }
      iVar4 = uVar9 + DAT_00482a8c;
      iVar3 = FUN_00019ac4(iVar3,(int)((ulonglong)uVar14 >> 0x20),(int)lVar1);
      if (iVar3 < iVar4) {
        FUN_00019ac4(iVar3);
      }
    }
    FUN_000195a8();
    FUN_000304d4(4000);
  }
  FUN_000304d4(1000);
  iVar3 = FUN_0001e100();
  if (iVar3 == 2) {
    uVar6 = 0;
    do {
      uVar9 = uVar6 + 1;
      iVar3 = FUN_0001e29c(uVar6);
      if (iVar3 != 0) {
        iVar3 = FUN_0001e160();
        FUN_00050a80(uVar6 & 0xff,iVar3 * 0x13,0);
        iVar3 = FUN_0001e160();
        FUN_00050a80(uVar6 & 0xff,iVar3 * 0x37,0);
      }
      uVar6 = uVar9;
    } while (uVar9 != 4);
  }
  FUN_00031d58(1,"soc init done!");
  cVar2 = FUN_00027c88();
  if (cVar2 != '\0') {
    return 0;
  }
  iVar3 = 0;
  do {
    iVar4 = FUN_0001e29c(iVar3);
    if (iVar4 != 0) {
      iVar4 = 0;
      uVar6 = 0;
      puVar12 = &DAT_0099cd98 + iVar3 * 0x200;
      while( true ) {
        iVar10 = uVar6 + iVar4;
        uVar9 = FUN_0001e67c(iVar3);
        if (uVar9 <= uVar6) break;
        uVar5 = FUN_0001e100();
        FUN_0005fadc(uVar6,uVar5);
        iVar11 = iVar10;
        if (extraout_r1 == 0) {
          iVar4 = iVar4 + 1;
          iVar11 = uVar6 + iVar4;
          FUN_0001e820(iVar3,iVar10,0x20);
        }
        uVar6 = uVar6 + 1;
        FUN_0001e820(iVar3,iVar11,0x6f);
        *puVar12 = 0;
        puVar12[1] = 0;
        puVar12 = puVar12 + 2;
      }
      FUN_0001e820(iVar3,iVar10,0x6f);
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 4);
  cVar2 = FUN_00027b70();
  if (cVar2 != '\0') {
    return 0;
  }
  if (DAT_00080fa4 != '\0') {
    FUN_00027da0();
  }
  FUN_0002bdc4();
  FUN_0003208c();
  FUN_000304d4(500);
  if (DAT_0007eb9c < 4) {
    return 1;
  }
  local_838._0_1_ = s_Init_done__0006707c[0];
  local_838._1_1_ = s_Init_done__0006707c[1];
  local_838._2_1_ = s_Init_done__0006707c[2];
  local_838._3_1_ = s_Init_done__0006707c[3];
  uStack_834._0_1_ = s_Init_done__0006707c[4];
  uStack_834._1_1_ = s_Init_done__0006707c[5];
  uStack_834._2_1_ = s_Init_done__0006707c[6];
  uStack_834._3_1_ = s_Init_done__0006707c[7];
  uStack_830._0_1_ = s_Init_done__0006707c[8];
  uStack_830._1_1_ = s_Init_done__0006707c[9];
  uStack_830._2_1_ = s_Init_done__0006707c[10];
  uStack_830._3_1_ = s_Init_done__0006707c[11];
  FUN_0002e584(3,&local_838,0);
  return 1;
}

