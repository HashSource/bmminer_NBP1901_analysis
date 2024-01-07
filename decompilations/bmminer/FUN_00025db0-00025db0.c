
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00025db0(void)

{
  undefined4 uVar1;
  uint __seed;
  long lVar2;
  int local_820;
  uint uStack_81c;
  undefined4 local_818;
  undefined4 uStack_814;
  undefined4 uStack_810;
  undefined4 uStack_80c;
  undefined4 local_808;
  undefined4 uStack_804;
  undefined4 local_800;
  undefined4 uStack_7fc;
  undefined2 uStack_7f8;
  undefined local_7f6;
  
  FUN_000302a0(&local_820);
  if (DAT_00482a74 == 0 && DAT_00482a78 == 0) {
    FUN_000302a0();
    return;
  }
  local_820 = local_820 - DAT_00482a74;
  if ((int)(uStack_81c - DAT_00482a78) < 0) {
    local_820 = local_820 + -1;
  }
  if (local_820 < 0x12d) {
    if (DAT_0007fa04 != 0) {
      if (3 < DAT_0007eb9c) {
        local_818._0_1_ = s_network_connection_resume__resta_00063158[0];
        local_818._1_1_ = s_network_connection_resume__resta_00063158[1];
        local_818._2_1_ = s_network_connection_resume__resta_00063158[2];
        local_818._3_1_ = s_network_connection_resume__resta_00063158[3];
        uStack_814._0_1_ = s_network_connection_resume__resta_00063158[4];
        uStack_814._1_1_ = s_network_connection_resume__resta_00063158[5];
        uStack_814._2_1_ = s_network_connection_resume__resta_00063158[6];
        uStack_814._3_1_ = s_network_connection_resume__resta_00063158[7];
        uStack_810._0_1_ = s_network_connection_resume__resta_00063158[8];
        uStack_810._1_1_ = s_network_connection_resume__resta_00063158[9];
        uStack_810._2_1_ = s_network_connection_resume__resta_00063158[10];
        uStack_810._3_1_ = s_network_connection_resume__resta_00063158[11];
        uStack_80c._0_1_ = s_network_connection_resume__resta_00063158[12];
        uStack_80c._1_1_ = s_network_connection_resume__resta_00063158[13];
        uStack_80c._2_1_ = s_network_connection_resume__resta_00063158[14];
        uStack_80c._3_1_ = s_network_connection_resume__resta_00063158[15];
        local_808._0_1_ = s_network_connection_resume__resta_00063158[16];
        local_808._1_1_ = s_network_connection_resume__resta_00063158[17];
        local_808._2_1_ = s_network_connection_resume__resta_00063158[18];
        local_808._3_1_ = s_network_connection_resume__resta_00063158[19];
        uStack_804._0_1_ = s_network_connection_resume__resta_00063158[20];
        uStack_804._1_1_ = s_network_connection_resume__resta_00063158[21];
        uStack_804._2_1_ = s_network_connection_resume__resta_00063158[22];
        uStack_804._3_1_ = s_network_connection_resume__resta_00063158[23];
        local_800._0_1_ = s_network_connection_resume__resta_00063158[24];
        local_800._1_1_ = s_network_connection_resume__resta_00063158[25];
        local_800._2_1_ = s_network_connection_resume__resta_00063158[26];
        local_800._3_1_ = s_network_connection_resume__resta_00063158[27];
        uStack_7fc._0_1_ = s_network_connection_resume__resta_00063158[28];
        uStack_7fc._1_1_ = s_network_connection_resume__resta_00063158[29];
        uStack_7fc._2_1_ = s_network_connection_resume__resta_00063158[30];
        uStack_7fc._3_1_ = s_network_connection_resume__resta_00063158[31];
        uStack_7f8 = (undefined2)ram0x00063178;
        local_7f6 = (undefined)((uint)ram0x00063178 >> 0x10);
        FUN_0002e584(3,&local_818,0);
      }
      FUN_00031d58(6,"network connection resume, restart...");
      DAT_0007fa04 = 0;
      DAT_0007fa00 = 0;
      return;
    }
    if (DAT_0007fa00 != 0) {
      if (3 < DAT_0007eb9c) {
        local_818._0_1_ = s_network_connection_resume_000631a4[0];
        local_818._1_1_ = s_network_connection_resume_000631a4[1];
        local_818._2_1_ = s_network_connection_resume_000631a4[2];
        local_818._3_1_ = s_network_connection_resume_000631a4[3];
        uStack_814._0_1_ = s_network_connection_resume_000631a4[4];
        uStack_814._1_1_ = s_network_connection_resume_000631a4[5];
        uStack_814._2_1_ = s_network_connection_resume_000631a4[6];
        uStack_814._3_1_ = s_network_connection_resume_000631a4[7];
        uStack_810._0_1_ = s_network_connection_resume_000631a4[8];
        uStack_810._1_1_ = s_network_connection_resume_000631a4[9];
        uStack_810._2_1_ = s_network_connection_resume_000631a4[10];
        uStack_810._3_1_ = s_network_connection_resume_000631a4[11];
        uStack_80c._0_1_ = s_network_connection_resume_000631a4[12];
        uStack_80c._1_1_ = s_network_connection_resume_000631a4[13];
        uStack_80c._2_1_ = s_network_connection_resume_000631a4[14];
        uStack_80c._3_1_ = s_network_connection_resume_000631a4[15];
        local_808._0_1_ = s_network_connection_resume_000631a4[16];
        local_808._1_1_ = s_network_connection_resume_000631a4[17];
        local_808._2_1_ = s_network_connection_resume_000631a4[18];
        local_808._3_1_ = s_network_connection_resume_000631a4[19];
        uStack_804._0_1_ = s_network_connection_resume_000631a4[20];
        uStack_804._1_1_ = s_network_connection_resume_000631a4[21];
        uStack_804._2_1_ = s_network_connection_resume_000631a4[22];
        uStack_804._3_1_ = s_network_connection_resume_000631a4[23];
        local_800._0_2_ = (short)ram0x000631bc;
        FUN_0002e584(3,&local_818,0);
      }
      uVar1 = FUN_00031d48();
      FUN_00031d58(uVar1,0);
      DAT_0007fa00 = 0;
      return;
    }
  }
  else if (DAT_0007fa00 == 0) {
    FUN_00031d58(3,"network connection lost");
    __seed = FUN_0002b2f4();
    if (__seed == 0) {
      __seed = uStack_81c;
    }
    srandom(__seed);
    lVar2 = random();
    DAT_0007fa00 = lVar2 % 300 + 1;
    if (3 < DAT_0007eb9c) {
      snprintf((char *)&local_818,0x800,"will power off in %d seconds in case not resume");
      FUN_0002e584(3,&local_818,0);
    }
  }
  else if ((DAT_0007fa00 + 299 < local_820) && (DAT_0007fa04 == 0)) {
    if (3 < DAT_0007eb9c) {
      snprintf((char *)&local_818,0x800,
               "network connection lost for 5 min + %d seconds, power off...");
      FUN_0002e584(3,&local_818,0);
    }
    FUN_000194dc();
    DAT_0007fa04 = 1;
  }
  return;
}

