
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00037fa0(FILE **param_1,int param_2,int param_3,int param_4)

{
  size_t sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uStack_858;
  undefined4 local_854;
  undefined4 uStack_850;
  undefined4 uStack_84c;
  undefined4 local_848;
  undefined4 uStack_844;
  undefined4 uStack_840;
  undefined4 uStack_83c;
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
  undefined2 uStack_810;
  undefined local_80e;
  
  if (param_4 == 0) {
    iVar3 = 0;
  }
  else {
    iVar4 = param_3 * param_4 * 0x34;
    iVar3 = 0;
    while( true ) {
      iVar5 = iVar3 + 1;
      iVar6 = *(int *)(DAT_004fcb38 + (int)(&DAT_00202a2a + param_2) * 4 + 4);
      sVar1 = fread(&uStack_858,1,0x30,*param_1);
      iVar2 = iVar6 + iVar4;
      if (sVar1 != 0x30) break;
      *(undefined4 *)(iVar2 + 4) = uStack_858;
      *(undefined4 *)(iVar2 + 0x14) = local_848;
      *(undefined4 *)(iVar2 + 0x18) = uStack_844;
      *(undefined4 *)(iVar2 + 0x1c) = uStack_840;
      *(undefined4 *)(iVar2 + 0x20) = uStack_83c;
      *(undefined4 *)(iVar2 + 0x24) = local_838;
      *(undefined4 *)(iVar2 + 0x28) = uStack_834;
      *(undefined4 *)(iVar2 + 0x2c) = uStack_830;
      *(undefined4 *)(iVar2 + 0x30) = uStack_82c;
      *(undefined4 *)(iVar2 + 8) = local_854;
      *(undefined4 *)(iVar2 + 0xc) = uStack_850;
      *(undefined4 *)(iVar2 + 0x10) = uStack_84c;
      *(int *)(iVar6 + iVar4) = iVar3;
      iVar4 = iVar4 + 0x34;
      iVar3 = iVar5;
      if (iVar5 == param_4) {
        return iVar5;
      }
    }
    if (3 < DAT_0007eb9c) {
      local_828._0_1_ = s_Load_core_pattern_failed__00067a48[0];
      local_828._1_1_ = s_Load_core_pattern_failed__00067a48[1];
      local_828._2_1_ = s_Load_core_pattern_failed__00067a48[2];
      local_828._3_1_ = s_Load_core_pattern_failed__00067a48[3];
      uStack_824._0_1_ = s_Load_core_pattern_failed__00067a48[4];
      uStack_824._1_1_ = s_Load_core_pattern_failed__00067a48[5];
      uStack_824._2_1_ = s_Load_core_pattern_failed__00067a48[6];
      uStack_824._3_1_ = s_Load_core_pattern_failed__00067a48[7];
      uStack_820._0_1_ = s_Load_core_pattern_failed__00067a48[8];
      uStack_820._1_1_ = s_Load_core_pattern_failed__00067a48[9];
      uStack_820._2_1_ = s_Load_core_pattern_failed__00067a48[10];
      uStack_820._3_1_ = s_Load_core_pattern_failed__00067a48[11];
      uStack_81c._0_1_ = s_Load_core_pattern_failed__00067a48[12];
      uStack_81c._1_1_ = s_Load_core_pattern_failed__00067a48[13];
      uStack_81c._2_1_ = s_Load_core_pattern_failed__00067a48[14];
      uStack_81c._3_1_ = s_Load_core_pattern_failed__00067a48[15];
      local_818._0_1_ = s_Load_core_pattern_failed__00067a48[16];
      local_818._1_1_ = s_Load_core_pattern_failed__00067a48[17];
      local_818._2_1_ = s_Load_core_pattern_failed__00067a48[18];
      local_818._3_1_ = s_Load_core_pattern_failed__00067a48[19];
      uStack_814._0_1_ = s_Load_core_pattern_failed__00067a48[20];
      uStack_814._1_1_ = s_Load_core_pattern_failed__00067a48[21];
      uStack_814._2_1_ = s_Load_core_pattern_failed__00067a48[22];
      uStack_814._3_1_ = s_Load_core_pattern_failed__00067a48[23];
      uStack_810 = (undefined2)ram0x00067a60;
      local_80e = (undefined)((uint)ram0x00067a60 >> 0x10);
      FUN_0002e584(3,&local_828,0);
      return iVar3;
    }
  }
  return iVar3;
}

