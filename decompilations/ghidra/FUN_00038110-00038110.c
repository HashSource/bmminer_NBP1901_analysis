
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00038110(char *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  uint uVar7;
  int iVar8;
  char **ppcVar9;
  FILE *local_82c;
  undefined4 local_828;
  undefined4 uStack_824;
  undefined4 uStack_820;
  undefined4 uStack_81c;
  undefined4 local_818;
  undefined4 uStack_814;
  undefined4 uStack_810;
  undefined4 uStack_80c;
  undefined4 local_808;
  undefined4 uStack_804;
  undefined4 uStack_800;
  
  if (4 < DAT_0007eb9c) {
    local_828 = s__DEBUG__Free_memory_for_sw_sweep_00067a64._0_4_;
    uStack_824 = s__DEBUG__Free_memory_for_sw_sweep_00067a64._4_4_;
    uStack_820 = s__DEBUG__Free_memory_for_sw_sweep_00067a64._8_4_;
    uStack_81c = s__DEBUG__Free_memory_for_sw_sweep_00067a64._12_4_;
    local_818 = s__DEBUG__Free_memory_for_sw_sweep_00067a64._16_4_;
    uStack_814 = s__DEBUG__Free_memory_for_sw_sweep_00067a64._20_4_;
    uStack_810 = s__DEBUG__Free_memory_for_sw_sweep_00067a64._24_4_;
    uStack_80c = s__DEBUG__Free_memory_for_sw_sweep_00067a64._28_4_;
    local_808._0_3_ = (undefined3)ram0x00067a84;
    FUN_0002e584(4,&local_828,0);
  }
  ppcVar9 = DAT_004fcb38;
  if (DAT_004fcb38 == (char **)0x0) {
    DAT_004fcb38 = (char **)calloc(0x8114ac,1);
    if (DAT_004fcb38 == (char **)0x0) {
      if (3 < DAT_0007eb9c) {
        local_828._0_1_ = s_Fail_to_allocate_memory_for_sw_s_00067a88[0];
        local_828._1_1_ = s_Fail_to_allocate_memory_for_sw_s_00067a88[1];
        local_828._2_1_ = s_Fail_to_allocate_memory_for_sw_s_00067a88[2];
        local_828._3_1_ = s_Fail_to_allocate_memory_for_sw_s_00067a88[3];
        uStack_824._0_1_ = s_Fail_to_allocate_memory_for_sw_s_00067a88[4];
        uStack_824._1_1_ = s_Fail_to_allocate_memory_for_sw_s_00067a88[5];
        uStack_824._2_1_ = s_Fail_to_allocate_memory_for_sw_s_00067a88[6];
        uStack_824._3_1_ = s_Fail_to_allocate_memory_for_sw_s_00067a88[7];
        uStack_820._0_1_ = s_Fail_to_allocate_memory_for_sw_s_00067a88[8];
        uStack_820._1_1_ = s_Fail_to_allocate_memory_for_sw_s_00067a88[9];
        uStack_820._2_1_ = s_Fail_to_allocate_memory_for_sw_s_00067a88[10];
        uStack_820._3_1_ = s_Fail_to_allocate_memory_for_sw_s_00067a88[11];
        uStack_81c._0_1_ = s_Fail_to_allocate_memory_for_sw_s_00067a88[12];
        uStack_81c._1_1_ = s_Fail_to_allocate_memory_for_sw_s_00067a88[13];
        uStack_81c._2_1_ = s_Fail_to_allocate_memory_for_sw_s_00067a88[14];
        uStack_81c._3_1_ = s_Fail_to_allocate_memory_for_sw_s_00067a88[15];
        local_818._0_1_ = s_Fail_to_allocate_memory_for_sw_s_00067a88[16];
        local_818._1_1_ = s_Fail_to_allocate_memory_for_sw_s_00067a88[17];
        local_818._2_1_ = s_Fail_to_allocate_memory_for_sw_s_00067a88[18];
        local_818._3_1_ = s_Fail_to_allocate_memory_for_sw_s_00067a88[19];
        uStack_814._0_1_ = s_Fail_to_allocate_memory_for_sw_s_00067a88[20];
        uStack_814._1_1_ = s_Fail_to_allocate_memory_for_sw_s_00067a88[21];
        uStack_814._2_1_ = s_Fail_to_allocate_memory_for_sw_s_00067a88[22];
        uStack_814._3_1_ = s_Fail_to_allocate_memory_for_sw_s_00067a88[23];
        uStack_810._0_1_ = s_Fail_to_allocate_memory_for_sw_s_00067a88[24];
        uStack_810._1_1_ = s_Fail_to_allocate_memory_for_sw_s_00067a88[25];
        uStack_810._2_1_ = s_Fail_to_allocate_memory_for_sw_s_00067a88[26];
        uStack_810._3_1_ = s_Fail_to_allocate_memory_for_sw_s_00067a88[27];
        uStack_80c._0_1_ = s_Fail_to_allocate_memory_for_sw_s_00067a88[28];
        uStack_80c._1_1_ = s_Fail_to_allocate_memory_for_sw_s_00067a88[29];
        uStack_80c._2_1_ = s_Fail_to_allocate_memory_for_sw_s_00067a88[30];
        uStack_80c._3_1_ = s_Fail_to_allocate_memory_for_sw_s_00067a88[31];
        local_808._0_1_ = s_Fail_to_allocate_memory_for_sw_s_00067a88[32];
        local_808._1_1_ = s_Fail_to_allocate_memory_for_sw_s_00067a88[33];
        local_808._2_1_ = s_Fail_to_allocate_memory_for_sw_s_00067a88[34];
        local_808._3_1_ = s_Fail_to_allocate_memory_for_sw_s_00067a88[35];
        uStack_804._0_1_ = s_Fail_to_allocate_memory_for_sw_s_00067a88[36];
        uStack_804._1_1_ = s_Fail_to_allocate_memory_for_sw_s_00067a88[37];
        uStack_804._2_1_ = s_Fail_to_allocate_memory_for_sw_s_00067a88[38];
        uStack_804._3_1_ = s_Fail_to_allocate_memory_for_sw_s_00067a88[39];
        uStack_800._0_1_ = s_Fail_to_allocate_memory_for_sw_s_00067a88[40];
        uStack_800._1_1_ = s_Fail_to_allocate_memory_for_sw_s_00067a88[41];
        uStack_800._2_1_ = s_Fail_to_allocate_memory_for_sw_s_00067a88[42];
        uStack_800._3_1_ = s_Fail_to_allocate_memory_for_sw_s_00067a88[43];
        FUN_0002e584(3,&local_828,0);
LAB_000383c0:
        if (DAT_004fcb38 != (char **)0x0) {
LAB_0003832c:
          FUN_00037f08();
        }
      }
      FUN_000356c4(0xd,0xff);
      return 0xffffffff;
    }
    iVar1 = FUN_0001e0f0();
    ppcVar9 = DAT_004fcb38;
    if (iVar1 != 0) {
      iVar8 = 0;
      do {
        iVar2 = FUN_0001e130();
        ppcVar9 = DAT_004fcb38;
        pcVar6 = (char *)malloc(iVar2 * 0x1a0);
        iVar2 = iVar8 + 1;
        ppcVar9[(int)(&DAT_00202a2a + iVar8 + 1)] = pcVar6;
        if (pcVar6 == (char *)0x0) {
          if (DAT_0007eb9c < 4) goto LAB_0003832c;
          local_828._0_1_ = s_Fail_to_allocate_memory_for_work_00067ab4[0];
          local_828._1_1_ = s_Fail_to_allocate_memory_for_work_00067ab4[1];
          local_828._2_1_ = s_Fail_to_allocate_memory_for_work_00067ab4[2];
          local_828._3_1_ = s_Fail_to_allocate_memory_for_work_00067ab4[3];
          uStack_824._0_1_ = s_Fail_to_allocate_memory_for_work_00067ab4[4];
          uStack_824._1_1_ = s_Fail_to_allocate_memory_for_work_00067ab4[5];
          uStack_824._2_1_ = s_Fail_to_allocate_memory_for_work_00067ab4[6];
          uStack_824._3_1_ = s_Fail_to_allocate_memory_for_work_00067ab4[7];
          uStack_820._0_1_ = s_Fail_to_allocate_memory_for_work_00067ab4[8];
          uStack_820._1_1_ = s_Fail_to_allocate_memory_for_work_00067ab4[9];
          uStack_820._2_1_ = s_Fail_to_allocate_memory_for_work_00067ab4[10];
          uStack_820._3_1_ = s_Fail_to_allocate_memory_for_work_00067ab4[11];
          uStack_81c._0_1_ = s_Fail_to_allocate_memory_for_work_00067ab4[12];
          uStack_81c._1_1_ = s_Fail_to_allocate_memory_for_work_00067ab4[13];
          uStack_81c._2_1_ = s_Fail_to_allocate_memory_for_work_00067ab4[14];
          uStack_81c._3_1_ = s_Fail_to_allocate_memory_for_work_00067ab4[15];
          local_818._0_1_ = s_Fail_to_allocate_memory_for_work_00067ab4[16];
          local_818._1_1_ = s_Fail_to_allocate_memory_for_work_00067ab4[17];
          local_818._2_1_ = s_Fail_to_allocate_memory_for_work_00067ab4[18];
          local_818._3_1_ = s_Fail_to_allocate_memory_for_work_00067ab4[19];
          uStack_814._0_1_ = s_Fail_to_allocate_memory_for_work_00067ab4[20];
          uStack_814._1_1_ = s_Fail_to_allocate_memory_for_work_00067ab4[21];
          uStack_814._2_1_ = s_Fail_to_allocate_memory_for_work_00067ab4[22];
          uStack_814._3_1_ = s_Fail_to_allocate_memory_for_work_00067ab4[23];
          uStack_810._0_1_ = s_Fail_to_allocate_memory_for_work_00067ab4[24];
          uStack_810._1_1_ = s_Fail_to_allocate_memory_for_work_00067ab4[25];
          uStack_810._2_1_ = s_Fail_to_allocate_memory_for_work_00067ab4[26];
          uStack_810._3_1_ = s_Fail_to_allocate_memory_for_work_00067ab4[27];
          uStack_80c._0_1_ = s_Fail_to_allocate_memory_for_work_00067ab4[28];
          uStack_80c._1_1_ = s_Fail_to_allocate_memory_for_work_00067ab4[29];
          uStack_80c._2_1_ = s_Fail_to_allocate_memory_for_work_00067ab4[30];
          uStack_80c._3_1_ = s_Fail_to_allocate_memory_for_work_00067ab4[31];
          local_808._0_1_ = s_Fail_to_allocate_memory_for_work_00067ab4[32];
          local_808._1_1_ = s_Fail_to_allocate_memory_for_work_00067ab4[33];
          local_808._2_1_ = s_Fail_to_allocate_memory_for_work_00067ab4[34];
          local_808._3_1_ = s_Fail_to_allocate_memory_for_work_00067ab4[35];
          FUN_0002e584(3,&local_828,0);
          goto LAB_000383c0;
        }
        iVar8 = iVar2;
      } while (iVar1 != iVar2);
    }
  }
  *ppcVar9 = param_1;
  pcVar6 = *DAT_004fcb38;
  local_82c = fopen64(pcVar6,"r");
  if (local_82c == (FILE *)0x0) {
    if (3 < DAT_0007eb9c) {
      snprintf((char *)&local_828,0x800,"Fail to open pattern file %s.\n",pcVar6);
      FUN_0002e584(3,&local_828,0);
    }
LAB_00038234:
    FUN_000356c4(0x16,0xff);
    if (DAT_0007eb9c < 4) {
      uVar5 = 0xffffffff;
    }
    else {
      uVar5 = 0xffffffff;
      local_828._0_1_ = s_Load_pattern_file_failed__00067b40[0];
      local_828._1_1_ = s_Load_pattern_file_failed__00067b40[1];
      local_828._2_1_ = s_Load_pattern_file_failed__00067b40[2];
      local_828._3_1_ = s_Load_pattern_file_failed__00067b40[3];
      uStack_824._0_1_ = s_Load_pattern_file_failed__00067b40[4];
      uStack_824._1_1_ = s_Load_pattern_file_failed__00067b40[5];
      uStack_824._2_1_ = s_Load_pattern_file_failed__00067b40[6];
      uStack_824._3_1_ = s_Load_pattern_file_failed__00067b40[7];
      uStack_820._0_1_ = s_Load_pattern_file_failed__00067b40[8];
      uStack_820._1_1_ = s_Load_pattern_file_failed__00067b40[9];
      uStack_820._2_1_ = s_Load_pattern_file_failed__00067b40[10];
      uStack_820._3_1_ = s_Load_pattern_file_failed__00067b40[11];
      uStack_81c._0_1_ = s_Load_pattern_file_failed__00067b40[12];
      uStack_81c._1_1_ = s_Load_pattern_file_failed__00067b40[13];
      uStack_81c._2_1_ = s_Load_pattern_file_failed__00067b40[14];
      uStack_81c._3_1_ = s_Load_pattern_file_failed__00067b40[15];
      local_818._0_1_ = s_Load_pattern_file_failed__00067b40[16];
      local_818._1_1_ = s_Load_pattern_file_failed__00067b40[17];
      local_818._2_1_ = s_Load_pattern_file_failed__00067b40[18];
      local_818._3_1_ = s_Load_pattern_file_failed__00067b40[19];
      uStack_814._0_1_ = s_Load_pattern_file_failed__00067b40[20];
      uStack_814._1_1_ = s_Load_pattern_file_failed__00067b40[21];
      uStack_814._2_1_ = s_Load_pattern_file_failed__00067b40[22];
      uStack_814._3_1_ = s_Load_pattern_file_failed__00067b40[23];
      uStack_810._0_3_ = (undefined3)ram0x00067b58;
      FUN_0002e584(3,&local_828,0);
    }
  }
  else {
    iVar1 = FUN_0001e0f0();
    if (iVar1 != 0) {
      iVar8 = 0;
      do {
        iVar2 = FUN_0001e130();
        if (iVar2 == 0) {
          uVar7 = 0;
        }
        else {
          uVar7 = 0;
          iVar3 = 0;
          do {
            iVar4 = iVar3 + 1;
            iVar3 = FUN_00037fa0(&local_82c,iVar8,iVar3,8);
            uVar7 = uVar7 + iVar3;
            iVar3 = iVar4;
          } while (iVar2 != iVar4);
        }
        iVar2 = FUN_0001e130();
        if (uVar7 < (uint)(iVar2 << 3)) {
          if (3 < DAT_0007eb9c) {
            iVar1 = FUN_0001e130();
            snprintf((char *)&local_828,0x800,
                     "No enough work, asic = %d, work_count = %d, work_count_target = %d.\n",iVar8,
                     uVar7,iVar1 << 3);
            FUN_0002e584(3,&local_828,0);
          }
          fclose(local_82c);
          goto LAB_00038234;
        }
        iVar8 = iVar8 + 1;
      } while (iVar1 != iVar8);
    }
    uVar5 = 0;
    fclose(local_82c);
  }
  FUN_00044970();
  FUN_00044880(4);
  return uVar5;
}

