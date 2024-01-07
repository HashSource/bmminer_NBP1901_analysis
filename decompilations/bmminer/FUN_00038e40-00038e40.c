
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00038e40(void)

{
  undefined4 local_810;
  undefined4 uStack_80c;
  undefined4 uStack_808;
  undefined4 uStack_804;
  undefined4 local_800;
  undefined4 uStack_7fc;
  undefined4 uStack_7f8;
  undefined4 uStack_7f4;
  undefined4 uStack_7f0;
  undefined2 uStack_7ec;
  undefined local_7ea;
  
  if (DAT_0007eb9c < 5) {
    if (DAT_004fcb3c == (void *)0x0) {
      return;
    }
LAB_00038e70:
    if (*(int *)((int)DAT_004fcb3c + 4) == 0) {
      if (DAT_0007eb9c < 5) goto LAB_00038e9c;
      goto LAB_00038ec0;
    }
    (**(code **)(*(int *)((int)DAT_004fcb3c + 4) + 8))();
    if (4 < DAT_0007eb9c) goto LAB_00038ec0;
  }
  else {
    local_810 = s__DEBUG__Pattern_test_exit__00067cd8._0_4_;
    uStack_80c = s__DEBUG__Pattern_test_exit__00067cd8._4_4_;
    uStack_808 = s__DEBUG__Pattern_test_exit__00067cd8._8_4_;
    uStack_804 = s__DEBUG__Pattern_test_exit__00067cd8._12_4_;
    local_800 = s__DEBUG__Pattern_test_exit__00067cd8._16_4_;
    uStack_7fc = s__DEBUG__Pattern_test_exit__00067cd8._20_4_;
    uStack_7f8 = s__DEBUG__Pattern_test_exit__00067cd8._24_4_;
    FUN_0002e584(4,&local_810,0);
    if (DAT_004fcb3c != (void *)0x0) goto LAB_00038e70;
    if (DAT_0007eb9c < 5) {
      return;
    }
LAB_00038ec0:
    local_810._0_1_ = s__DEBUG__Free_memory_for_pattern_t_00067cf4[0];
    local_810._1_1_ = s__DEBUG__Free_memory_for_pattern_t_00067cf4[1];
    local_810._2_1_ = s__DEBUG__Free_memory_for_pattern_t_00067cf4[2];
    local_810._3_1_ = s__DEBUG__Free_memory_for_pattern_t_00067cf4[3];
    uStack_80c._0_1_ = s__DEBUG__Free_memory_for_pattern_t_00067cf4[4];
    uStack_80c._1_1_ = s__DEBUG__Free_memory_for_pattern_t_00067cf4[5];
    uStack_80c._2_1_ = s__DEBUG__Free_memory_for_pattern_t_00067cf4[6];
    uStack_80c._3_1_ = s__DEBUG__Free_memory_for_pattern_t_00067cf4[7];
    uStack_808._0_1_ = s__DEBUG__Free_memory_for_pattern_t_00067cf4[8];
    uStack_808._1_1_ = s__DEBUG__Free_memory_for_pattern_t_00067cf4[9];
    uStack_808._2_1_ = s__DEBUG__Free_memory_for_pattern_t_00067cf4[10];
    uStack_808._3_1_ = s__DEBUG__Free_memory_for_pattern_t_00067cf4[11];
    uStack_804._0_1_ = s__DEBUG__Free_memory_for_pattern_t_00067cf4[12];
    uStack_804._1_1_ = s__DEBUG__Free_memory_for_pattern_t_00067cf4[13];
    uStack_804._2_1_ = s__DEBUG__Free_memory_for_pattern_t_00067cf4[14];
    uStack_804._3_1_ = s__DEBUG__Free_memory_for_pattern_t_00067cf4[15];
    local_800._0_1_ = s__DEBUG__Free_memory_for_pattern_t_00067cf4[16];
    local_800._1_1_ = s__DEBUG__Free_memory_for_pattern_t_00067cf4[17];
    local_800._2_1_ = s__DEBUG__Free_memory_for_pattern_t_00067cf4[18];
    local_800._3_1_ = s__DEBUG__Free_memory_for_pattern_t_00067cf4[19];
    uStack_7fc._0_1_ = s__DEBUG__Free_memory_for_pattern_t_00067cf4[20];
    uStack_7fc._1_1_ = s__DEBUG__Free_memory_for_pattern_t_00067cf4[21];
    uStack_7fc._2_1_ = s__DEBUG__Free_memory_for_pattern_t_00067cf4[22];
    uStack_7fc._3_1_ = s__DEBUG__Free_memory_for_pattern_t_00067cf4[23];
    uStack_7f8._0_1_ = s__DEBUG__Free_memory_for_pattern_t_00067cf4[24];
    uStack_7f8._1_1_ = s__DEBUG__Free_memory_for_pattern_t_00067cf4[25];
    uStack_7f8._2_1_ = s__DEBUG__Free_memory_for_pattern_t_00067cf4[26];
    uStack_7f8._3_1_ = s__DEBUG__Free_memory_for_pattern_t_00067cf4[27];
    uStack_7f4._0_1_ = s__DEBUG__Free_memory_for_pattern_t_00067cf4[28];
    uStack_7f4._1_1_ = s__DEBUG__Free_memory_for_pattern_t_00067cf4[29];
    uStack_7f4._2_1_ = s__DEBUG__Free_memory_for_pattern_t_00067cf4[30];
    uStack_7f4._3_1_ = s__DEBUG__Free_memory_for_pattern_t_00067cf4[31];
    uStack_7f0._0_1_ = s__DEBUG__Free_memory_for_pattern_t_00067cf4[32];
    uStack_7f0._1_1_ = s__DEBUG__Free_memory_for_pattern_t_00067cf4[33];
    uStack_7f0._2_1_ = s__DEBUG__Free_memory_for_pattern_t_00067cf4[34];
    uStack_7f0._3_1_ = s__DEBUG__Free_memory_for_pattern_t_00067cf4[35];
    uStack_7ec = (undefined2)ram0x00067d18;
    local_7ea = (undefined)((uint)ram0x00067d18 >> 0x10);
    FUN_0002e584(4,&local_810,0);
  }
  if (DAT_004fcb3c == (void *)0x0) {
    return;
  }
LAB_00038e9c:
  free(DAT_004fcb3c);
  DAT_004fcb3c = (void *)0x0;
  return;
}

