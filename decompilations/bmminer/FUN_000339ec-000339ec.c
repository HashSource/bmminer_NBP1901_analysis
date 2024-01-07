
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000339ec(void)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined4 local_818;
  undefined4 uStack_814;
  undefined4 uStack_810;
  undefined4 uStack_80c;
  undefined4 local_808;
  undefined4 uStack_804;
  undefined4 uStack_800;
  undefined4 uStack_7fc;
  undefined local_7f8;
  
  DAT_0007edc8 = 2;
  DAT_00482a71 = 1;
  if ((DAT_0007eb9c < 4) || (FUN_00031c64(), DAT_0007eb9c < 4)) {
    if (DAT_00080da0 == '\0') goto LAB_00033af0;
LAB_00033a40:
    iVar1 = FUN_0003fd74();
  }
  else {
    puVar5 = &DAT_00080ca0;
    snprintf((char *)&local_818,0x800,"Miner compile time: %s type: %s\n",&DAT_00080ba0,
             &DAT_00080ca0);
    FUN_0002e584(3,&local_818,0);
    if (DAT_00080da0 != '\0') {
      if (DAT_0007eb9c < 4) goto LAB_00033a40;
      snprintf((char *)&local_818,0x800,"Miner sn: %s\n",&DAT_00080da0,puVar5);
      FUN_0002e584(3,&local_818,0);
    }
LAB_00033af0:
    if (DAT_0007eb9c < 4) goto LAB_00033a40;
    memcpy(&local_818,
           "commit version: dd076742 2022-10-27 22:42:25, build by: jenkins 2022-12-06 16:28:38\n",
           0x55);
    FUN_0002e584(3,&local_818,0);
    if (DAT_0007eb9c < 4) goto LAB_00033a40;
    snprintf((char *)&local_818,0x800,"opt_multi_version     = %d\n",DAT_0007eb58);
    FUN_0002e584(3,&local_818,0);
    if (DAT_0007eb9c < 4) goto LAB_00033a40;
    snprintf((char *)&local_818,0x800,"opt_bitmain_ab        = %d\n",(uint)DAT_0007eb5c);
    FUN_0002e584(3,&local_818,0);
    if (DAT_0007eb9c < 4) goto LAB_00033a40;
    snprintf((char *)&local_818,0x800,"mid_auto_gen          = %d\n",0);
    FUN_0002e584(3,&local_818,0);
    if (DAT_0007eb9c < 4) goto LAB_00033a40;
    snprintf((char *)&local_818,0x800,"opt_bitmain_work_mode = %d\n",DAT_00080fb4);
    FUN_0002e584(3,&local_818,0);
    iVar1 = FUN_0003fd74();
  }
  if (iVar1 != 0) {
    s_No_chain_exist__exit__00066d1c[0] = (char)s_No_chain_exist__exit__00066d1c._0_4_;
    s_No_chain_exist__exit__00066d1c[1] = SUB41(s_No_chain_exist__exit__00066d1c._0_4_,1);
    s_No_chain_exist__exit__00066d1c[2] = SUB41(s_No_chain_exist__exit__00066d1c._0_4_,2);
    s_No_chain_exist__exit__00066d1c[3] = SUB41(s_No_chain_exist__exit__00066d1c._0_4_,3);
    s_No_chain_exist__exit__00066d1c[4] = (char)s_No_chain_exist__exit__00066d1c._4_4_;
    s_No_chain_exist__exit__00066d1c[5] = SUB41(s_No_chain_exist__exit__00066d1c._4_4_,1);
    s_No_chain_exist__exit__00066d1c[6] = SUB41(s_No_chain_exist__exit__00066d1c._4_4_,2);
    s_No_chain_exist__exit__00066d1c[7] = SUB41(s_No_chain_exist__exit__00066d1c._4_4_,3);
    s_No_chain_exist__exit__00066d1c[8] = (char)s_No_chain_exist__exit__00066d1c._8_4_;
    s_No_chain_exist__exit__00066d1c[9] = SUB41(s_No_chain_exist__exit__00066d1c._8_4_,1);
    s_No_chain_exist__exit__00066d1c[10] = SUB41(s_No_chain_exist__exit__00066d1c._8_4_,2);
    s_No_chain_exist__exit__00066d1c[11] = SUB41(s_No_chain_exist__exit__00066d1c._8_4_,3);
    s_No_chain_exist__exit__00066d1c[12] = (char)s_No_chain_exist__exit__00066d1c._12_4_;
    s_No_chain_exist__exit__00066d1c[13] = SUB41(s_No_chain_exist__exit__00066d1c._12_4_,1);
    s_No_chain_exist__exit__00066d1c[14] = SUB41(s_No_chain_exist__exit__00066d1c._12_4_,2);
    s_No_chain_exist__exit__00066d1c[15] = SUB41(s_No_chain_exist__exit__00066d1c._12_4_,3);
    s_No_chain_exist__exit__00066d1c[16] = (char)s_No_chain_exist__exit__00066d1c._16_4_;
    s_No_chain_exist__exit__00066d1c[17] = SUB41(s_No_chain_exist__exit__00066d1c._16_4_,1);
    s_No_chain_exist__exit__00066d1c[18] = SUB41(s_No_chain_exist__exit__00066d1c._16_4_,2);
    s_No_chain_exist__exit__00066d1c[19] = SUB41(s_No_chain_exist__exit__00066d1c._16_4_,3);
    s_Fixture_data_load_failed__exit__00066d44[0] =
         (char)s_Fixture_data_load_failed__exit__00066d44._0_4_;
    s_Fixture_data_load_failed__exit__00066d44[1] =
         SUB41(s_Fixture_data_load_failed__exit__00066d44._0_4_,1);
    s_Fixture_data_load_failed__exit__00066d44[2] =
         SUB41(s_Fixture_data_load_failed__exit__00066d44._0_4_,2);
    s_Fixture_data_load_failed__exit__00066d44[3] =
         SUB41(s_Fixture_data_load_failed__exit__00066d44._0_4_,3);
    s_Fixture_data_load_failed__exit__00066d44[4] =
         (char)s_Fixture_data_load_failed__exit__00066d44._4_4_;
    s_Fixture_data_load_failed__exit__00066d44[5] =
         SUB41(s_Fixture_data_load_failed__exit__00066d44._4_4_,1);
    s_Fixture_data_load_failed__exit__00066d44[6] =
         SUB41(s_Fixture_data_load_failed__exit__00066d44._4_4_,2);
    s_Fixture_data_load_failed__exit__00066d44[7] =
         SUB41(s_Fixture_data_load_failed__exit__00066d44._4_4_,3);
    s_Fixture_data_load_failed__exit__00066d44[8] =
         (char)s_Fixture_data_load_failed__exit__00066d44._8_4_;
    s_Fixture_data_load_failed__exit__00066d44[9] =
         SUB41(s_Fixture_data_load_failed__exit__00066d44._8_4_,1);
    s_Fixture_data_load_failed__exit__00066d44[10] =
         SUB41(s_Fixture_data_load_failed__exit__00066d44._8_4_,2);
    s_Fixture_data_load_failed__exit__00066d44[11] =
         SUB41(s_Fixture_data_load_failed__exit__00066d44._8_4_,3);
    s_Fixture_data_load_failed__exit__00066d44[12] =
         (char)s_Fixture_data_load_failed__exit__00066d44._12_4_;
    s_Fixture_data_load_failed__exit__00066d44[13] =
         SUB41(s_Fixture_data_load_failed__exit__00066d44._12_4_,1);
    s_Fixture_data_load_failed__exit__00066d44[14] =
         SUB41(s_Fixture_data_load_failed__exit__00066d44._12_4_,2);
    s_Fixture_data_load_failed__exit__00066d44[15] =
         SUB41(s_Fixture_data_load_failed__exit__00066d44._12_4_,3);
    s_Fixture_data_load_failed__exit__00066d44[16] =
         (char)s_Fixture_data_load_failed__exit__00066d44._16_4_;
    s_Fixture_data_load_failed__exit__00066d44[17] =
         SUB41(s_Fixture_data_load_failed__exit__00066d44._16_4_,1);
    s_Fixture_data_load_failed__exit__00066d44[18] =
         SUB41(s_Fixture_data_load_failed__exit__00066d44._16_4_,2);
    s_Fixture_data_load_failed__exit__00066d44[19] =
         SUB41(s_Fixture_data_load_failed__exit__00066d44._16_4_,3);
    s_Fixture_data_load_failed__exit__00066d44[20] =
         (char)s_Fixture_data_load_failed__exit__00066d44._20_4_;
    s_Fixture_data_load_failed__exit__00066d44[21] =
         SUB41(s_Fixture_data_load_failed__exit__00066d44._20_4_,1);
    s_Fixture_data_load_failed__exit__00066d44[22] =
         SUB41(s_Fixture_data_load_failed__exit__00066d44._20_4_,2);
    s_Fixture_data_load_failed__exit__00066d44[23] =
         SUB41(s_Fixture_data_load_failed__exit__00066d44._20_4_,3);
    s_Fixture_data_load_failed__exit__00066d44[24] =
         (char)s_Fixture_data_load_failed__exit__00066d44._24_4_;
    s_Fixture_data_load_failed__exit__00066d44[25] =
         SUB41(s_Fixture_data_load_failed__exit__00066d44._24_4_,1);
    s_Fixture_data_load_failed__exit__00066d44[26] =
         SUB41(s_Fixture_data_load_failed__exit__00066d44._24_4_,2);
    s_Fixture_data_load_failed__exit__00066d44[27] =
         SUB41(s_Fixture_data_load_failed__exit__00066d44._24_4_,3);
    s_Fixture_data_load_failed__exit__00066d44[28] =
         (char)s_Fixture_data_load_failed__exit__00066d44._28_4_;
    s_Fixture_data_load_failed__exit__00066d44[29] =
         SUB41(s_Fixture_data_load_failed__exit__00066d44._28_4_,1);
    s_Fixture_data_load_failed__exit__00066d44[30] =
         SUB41(s_Fixture_data_load_failed__exit__00066d44._28_4_,2);
    s_Fixture_data_load_failed__exit__00066d44[31] =
         SUB41(s_Fixture_data_load_failed__exit__00066d44._28_4_,3);
    s_Miner_data_load_failed__exit__00066d68[0] =
         (char)s_Miner_data_load_failed__exit__00066d68._0_4_;
    s_Miner_data_load_failed__exit__00066d68[1] =
         SUB41(s_Miner_data_load_failed__exit__00066d68._0_4_,1);
    s_Miner_data_load_failed__exit__00066d68[2] =
         SUB41(s_Miner_data_load_failed__exit__00066d68._0_4_,2);
    s_Miner_data_load_failed__exit__00066d68[3] =
         SUB41(s_Miner_data_load_failed__exit__00066d68._0_4_,3);
    s_Miner_data_load_failed__exit__00066d68[4] =
         (char)s_Miner_data_load_failed__exit__00066d68._4_4_;
    s_Miner_data_load_failed__exit__00066d68[5] =
         SUB41(s_Miner_data_load_failed__exit__00066d68._4_4_,1);
    s_Miner_data_load_failed__exit__00066d68[6] =
         SUB41(s_Miner_data_load_failed__exit__00066d68._4_4_,2);
    s_Miner_data_load_failed__exit__00066d68[7] =
         SUB41(s_Miner_data_load_failed__exit__00066d68._4_4_,3);
    s_Miner_data_load_failed__exit__00066d68[8] =
         (char)s_Miner_data_load_failed__exit__00066d68._8_4_;
    s_Miner_data_load_failed__exit__00066d68[9] =
         SUB41(s_Miner_data_load_failed__exit__00066d68._8_4_,1);
    s_Miner_data_load_failed__exit__00066d68[10] =
         SUB41(s_Miner_data_load_failed__exit__00066d68._8_4_,2);
    s_Miner_data_load_failed__exit__00066d68[11] =
         SUB41(s_Miner_data_load_failed__exit__00066d68._8_4_,3);
    s_Miner_data_load_failed__exit__00066d68[12] =
         (char)s_Miner_data_load_failed__exit__00066d68._12_4_;
    s_Miner_data_load_failed__exit__00066d68[13] =
         SUB41(s_Miner_data_load_failed__exit__00066d68._12_4_,1);
    s_Miner_data_load_failed__exit__00066d68[14] =
         SUB41(s_Miner_data_load_failed__exit__00066d68._12_4_,2);
    s_Miner_data_load_failed__exit__00066d68[15] =
         SUB41(s_Miner_data_load_failed__exit__00066d68._12_4_,3);
    s_Miner_data_load_failed__exit__00066d68[16] =
         (char)s_Miner_data_load_failed__exit__00066d68._16_4_;
    s_Miner_data_load_failed__exit__00066d68[17] =
         SUB41(s_Miner_data_load_failed__exit__00066d68._16_4_,1);
    s_Miner_data_load_failed__exit__00066d68[18] =
         SUB41(s_Miner_data_load_failed__exit__00066d68._16_4_,2);
    s_Miner_data_load_failed__exit__00066d68[19] =
         SUB41(s_Miner_data_load_failed__exit__00066d68._16_4_,3);
    s_Miner_data_load_failed__exit__00066d68[20] =
         (char)s_Miner_data_load_failed__exit__00066d68._20_4_;
    s_Miner_data_load_failed__exit__00066d68[21] =
         SUB41(s_Miner_data_load_failed__exit__00066d68._20_4_,1);
    s_Miner_data_load_failed__exit__00066d68[22] =
         SUB41(s_Miner_data_load_failed__exit__00066d68._20_4_,2);
    s_Miner_data_load_failed__exit__00066d68[23] =
         SUB41(s_Miner_data_load_failed__exit__00066d68._20_4_,3);
    s_Miner_data_load_failed__exit__00066d68[24] =
         (char)s_Miner_data_load_failed__exit__00066d68._24_4_;
    s_Miner_data_load_failed__exit__00066d68[25] =
         SUB41(s_Miner_data_load_failed__exit__00066d68._24_4_,1);
    s_Miner_data_load_failed__exit__00066d68[26] =
         SUB41(s_Miner_data_load_failed__exit__00066d68._24_4_,2);
    s_Miner_data_load_failed__exit__00066d68[27] =
         SUB41(s_Miner_data_load_failed__exit__00066d68._24_4_,3);
    return 0;
  }
  FUN_000140e4();
  FUN_000141b4();
  FUN_00042728();
  FUN_00042778();
  DAT_0007eb5c = 1;
  FUN_00024364();
  FUN_00025284();
  iVar1 = FUN_0001b4ac();
  if (iVar1 != 0) {
    return 0;
  }
  FUN_0003345c();
  FUN_00013fb0(100);
  FUN_00032bd0();
  FUN_00045b74();
  FUN_000324a8();
  iVar1 = FUN_0001e28c();
  if (iVar1 == 0) {
    if (DAT_0007eb9c < 4) {
      return 0xffffffff;
    }
    local_818._0_1_ = s_No_chain_exist__exit__00066d1c[0];
    local_818._1_1_ = s_No_chain_exist__exit__00066d1c[1];
    local_818._2_1_ = s_No_chain_exist__exit__00066d1c[2];
    local_818._3_1_ = s_No_chain_exist__exit__00066d1c[3];
    uStack_814._0_1_ = s_No_chain_exist__exit__00066d1c[4];
    uStack_814._1_1_ = s_No_chain_exist__exit__00066d1c[5];
    uStack_814._2_1_ = s_No_chain_exist__exit__00066d1c[6];
    uStack_814._3_1_ = s_No_chain_exist__exit__00066d1c[7];
    uStack_810._0_1_ = s_No_chain_exist__exit__00066d1c[8];
    uStack_810._1_1_ = s_No_chain_exist__exit__00066d1c[9];
    uStack_810._2_1_ = s_No_chain_exist__exit__00066d1c[10];
    uStack_810._3_1_ = s_No_chain_exist__exit__00066d1c[11];
    uStack_80c._0_1_ = s_No_chain_exist__exit__00066d1c[12];
    uStack_80c._1_1_ = s_No_chain_exist__exit__00066d1c[13];
    uStack_80c._2_1_ = s_No_chain_exist__exit__00066d1c[14];
    uStack_80c._3_1_ = s_No_chain_exist__exit__00066d1c[15];
    local_808._0_1_ = s_No_chain_exist__exit__00066d1c[16];
    local_808._1_1_ = s_No_chain_exist__exit__00066d1c[17];
    local_808._2_1_ = s_No_chain_exist__exit__00066d1c[18];
    local_808._3_1_ = s_No_chain_exist__exit__00066d1c[19];
    FUN_0002e584(3,&local_818,0);
    return 0xffffffff;
  }
  if (((DAT_00590404 != '\0') || (DAT_00482a5c != '\0')) || (4 < DAT_0007eba0)) {
    uVar2 = FUN_0001e28c();
    snprintf((char *)&local_818,0x800,"chain num = %d",uVar2);
    FUN_0002e584(5,&local_818,0);
  }
  uVar3 = 0;
  do {
    uVar4 = uVar3 + 1;
    iVar1 = FUN_0001e29c(uVar3);
    if (iVar1 != 0) {
      thunk_FUN_0005198c(uVar3 & 0xff);
    }
    uVar3 = uVar4;
  } while (uVar4 != 4);
  FUN_00017ef8();
  iVar1 = FUN_00017f7c();
  if (iVar1 == 0) {
    if (DAT_0007edc8 == 1) {
      if (DAT_0007eb9c < 4) {
        return 0;
      }
    }
    else {
      FUN_000356c4(3,0xff);
      if (DAT_0007eb9c < 4) goto LAB_00033dac;
    }
    local_818._0_1_ = s_Fixture_data_load_failed__exit__00066d44[0];
    local_818._1_1_ = s_Fixture_data_load_failed__exit__00066d44[1];
    local_818._2_1_ = s_Fixture_data_load_failed__exit__00066d44[2];
    local_818._3_1_ = s_Fixture_data_load_failed__exit__00066d44[3];
    uStack_814._0_1_ = s_Fixture_data_load_failed__exit__00066d44[4];
    uStack_814._1_1_ = s_Fixture_data_load_failed__exit__00066d44[5];
    uStack_814._2_1_ = s_Fixture_data_load_failed__exit__00066d44[6];
    uStack_814._3_1_ = s_Fixture_data_load_failed__exit__00066d44[7];
    uStack_810._0_1_ = s_Fixture_data_load_failed__exit__00066d44[8];
    uStack_810._1_1_ = s_Fixture_data_load_failed__exit__00066d44[9];
    uStack_810._2_1_ = s_Fixture_data_load_failed__exit__00066d44[10];
    uStack_810._3_1_ = s_Fixture_data_load_failed__exit__00066d44[11];
    uStack_80c._0_1_ = s_Fixture_data_load_failed__exit__00066d44[12];
    uStack_80c._1_1_ = s_Fixture_data_load_failed__exit__00066d44[13];
    uStack_80c._2_1_ = s_Fixture_data_load_failed__exit__00066d44[14];
    uStack_80c._3_1_ = s_Fixture_data_load_failed__exit__00066d44[15];
    local_808._0_1_ = s_Fixture_data_load_failed__exit__00066d44[16];
    local_808._1_1_ = s_Fixture_data_load_failed__exit__00066d44[17];
    local_808._2_1_ = s_Fixture_data_load_failed__exit__00066d44[18];
    local_808._3_1_ = s_Fixture_data_load_failed__exit__00066d44[19];
    uStack_804._0_1_ = s_Fixture_data_load_failed__exit__00066d44[20];
    uStack_804._1_1_ = s_Fixture_data_load_failed__exit__00066d44[21];
    uStack_804._2_1_ = s_Fixture_data_load_failed__exit__00066d44[22];
    uStack_804._3_1_ = s_Fixture_data_load_failed__exit__00066d44[23];
    uStack_800._0_1_ = s_Fixture_data_load_failed__exit__00066d44[24];
    uStack_800._1_1_ = s_Fixture_data_load_failed__exit__00066d44[25];
    uStack_800._2_1_ = s_Fixture_data_load_failed__exit__00066d44[26];
    uStack_800._3_1_ = s_Fixture_data_load_failed__exit__00066d44[27];
    uStack_7fc._0_1_ = s_Fixture_data_load_failed__exit__00066d44[28];
    uStack_7fc._1_1_ = s_Fixture_data_load_failed__exit__00066d44[29];
    uStack_7fc._2_1_ = s_Fixture_data_load_failed__exit__00066d44[30];
    uStack_7fc._3_1_ = s_Fixture_data_load_failed__exit__00066d44[31];
    local_7f8 = (undefined)ram0x00066d64;
    FUN_0002e584(3,&local_818,0);
  }
LAB_00033dac:
  if (((DAT_0007edc8 == 0) && (iVar1 = FUN_00036218(), iVar1 != 0)) &&
     ((iVar1 = FUN_00017f90(), iVar1 == 0 && (3 < DAT_0007eb9c)))) {
    local_818._0_1_ = s_Miner_data_load_failed__exit__00066d68[0];
    local_818._1_1_ = s_Miner_data_load_failed__exit__00066d68[1];
    local_818._2_1_ = s_Miner_data_load_failed__exit__00066d68[2];
    local_818._3_1_ = s_Miner_data_load_failed__exit__00066d68[3];
    uStack_814._0_1_ = s_Miner_data_load_failed__exit__00066d68[4];
    uStack_814._1_1_ = s_Miner_data_load_failed__exit__00066d68[5];
    uStack_814._2_1_ = s_Miner_data_load_failed__exit__00066d68[6];
    uStack_814._3_1_ = s_Miner_data_load_failed__exit__00066d68[7];
    uStack_810._0_1_ = s_Miner_data_load_failed__exit__00066d68[8];
    uStack_810._1_1_ = s_Miner_data_load_failed__exit__00066d68[9];
    uStack_810._2_1_ = s_Miner_data_load_failed__exit__00066d68[10];
    uStack_810._3_1_ = s_Miner_data_load_failed__exit__00066d68[11];
    uStack_80c._0_1_ = s_Miner_data_load_failed__exit__00066d68[12];
    uStack_80c._1_1_ = s_Miner_data_load_failed__exit__00066d68[13];
    uStack_80c._2_1_ = s_Miner_data_load_failed__exit__00066d68[14];
    uStack_80c._3_1_ = s_Miner_data_load_failed__exit__00066d68[15];
    local_808._0_1_ = s_Miner_data_load_failed__exit__00066d68[16];
    local_808._1_1_ = s_Miner_data_load_failed__exit__00066d68[17];
    local_808._2_1_ = s_Miner_data_load_failed__exit__00066d68[18];
    local_808._3_1_ = s_Miner_data_load_failed__exit__00066d68[19];
    uStack_804._0_1_ = s_Miner_data_load_failed__exit__00066d68[20];
    uStack_804._1_1_ = s_Miner_data_load_failed__exit__00066d68[21];
    uStack_804._2_1_ = s_Miner_data_load_failed__exit__00066d68[22];
    uStack_804._3_1_ = s_Miner_data_load_failed__exit__00066d68[23];
    uStack_800._0_1_ = s_Miner_data_load_failed__exit__00066d68[24];
    uStack_800._1_1_ = s_Miner_data_load_failed__exit__00066d68[25];
    uStack_800._2_1_ = s_Miner_data_load_failed__exit__00066d68[26];
    uStack_800._3_1_ = s_Miner_data_load_failed__exit__00066d68[27];
    FUN_0002e584(3,&local_818,0);
    return 0;
  }
  return 0;
}

