
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00035c74(void)

{
  undefined4 local_808;
  undefined4 uStack_804;
  undefined4 uStack_800;
  undefined4 uStack_7fc;
  undefined4 uStack_7f8;
  undefined4 local_7f4;
  undefined4 uStack_7f0;
  undefined4 uStack_7ec;
  
  if (4 < DAT_0007eb9c) {
    local_808 = s__DEBUG__Sweep_exit__000673e8._0_4_;
    uStack_804 = s__DEBUG__Sweep_exit__000673e8._4_4_;
    uStack_800 = s__DEBUG__Sweep_exit__000673e8._8_4_;
    uStack_7fc = s__DEBUG__Sweep_exit__000673e8._12_4_;
    uStack_7f8 = s__DEBUG__Sweep_exit__000673e8._16_4_;
    local_7f4._0_1_ = (char)ram0x000673fc;
    FUN_0002e584(4,&local_808,0);
    if (4 < DAT_0007eb9c) {
      local_808._0_1_ = s__DEBUG__Free_memory_for_sweep__00067400[0];
      local_808._1_1_ = s__DEBUG__Free_memory_for_sweep__00067400[1];
      local_808._2_1_ = s__DEBUG__Free_memory_for_sweep__00067400[2];
      local_808._3_1_ = s__DEBUG__Free_memory_for_sweep__00067400[3];
      uStack_804._0_1_ = s__DEBUG__Free_memory_for_sweep__00067400[4];
      uStack_804._1_1_ = s__DEBUG__Free_memory_for_sweep__00067400[5];
      uStack_804._2_1_ = s__DEBUG__Free_memory_for_sweep__00067400[6];
      uStack_804._3_1_ = s__DEBUG__Free_memory_for_sweep__00067400[7];
      uStack_800._0_1_ = s__DEBUG__Free_memory_for_sweep__00067400[8];
      uStack_800._1_1_ = s__DEBUG__Free_memory_for_sweep__00067400[9];
      uStack_800._2_1_ = s__DEBUG__Free_memory_for_sweep__00067400[10];
      uStack_800._3_1_ = s__DEBUG__Free_memory_for_sweep__00067400[11];
      uStack_7fc._0_1_ = s__DEBUG__Free_memory_for_sweep__00067400[12];
      uStack_7fc._1_1_ = s__DEBUG__Free_memory_for_sweep__00067400[13];
      uStack_7fc._2_1_ = s__DEBUG__Free_memory_for_sweep__00067400[14];
      uStack_7fc._3_1_ = s__DEBUG__Free_memory_for_sweep__00067400[15];
      uStack_7f8._0_1_ = s__DEBUG__Free_memory_for_sweep__00067400[16];
      uStack_7f8._1_1_ = s__DEBUG__Free_memory_for_sweep__00067400[17];
      uStack_7f8._2_1_ = s__DEBUG__Free_memory_for_sweep__00067400[18];
      uStack_7f8._3_1_ = s__DEBUG__Free_memory_for_sweep__00067400[19];
      local_7f4._0_1_ = s__DEBUG__Free_memory_for_sweep__00067400[20];
      local_7f4._1_1_ = s__DEBUG__Free_memory_for_sweep__00067400[21];
      local_7f4._2_1_ = s__DEBUG__Free_memory_for_sweep__00067400[22];
      local_7f4._3_1_ = s__DEBUG__Free_memory_for_sweep__00067400[23];
      uStack_7f0._0_1_ = s__DEBUG__Free_memory_for_sweep__00067400[24];
      uStack_7f0._1_1_ = s__DEBUG__Free_memory_for_sweep__00067400[25];
      uStack_7f0._2_1_ = s__DEBUG__Free_memory_for_sweep__00067400[26];
      uStack_7f0._3_1_ = s__DEBUG__Free_memory_for_sweep__00067400[27];
      uStack_7ec._0_1_ = s__DEBUG__Free_memory_for_sweep__00067400[28];
      uStack_7ec._1_1_ = s__DEBUG__Free_memory_for_sweep__00067400[29];
      uStack_7ec._2_1_ = s__DEBUG__Free_memory_for_sweep__00067400[30];
      uStack_7ec._3_1_ = s__DEBUG__Free_memory_for_sweep__00067400[31];
      FUN_0002e584(4,&local_808,0);
    }
  }
  if (DAT_004fcb28 != (void *)0x0) {
    free(DAT_004fcb28);
    DAT_004fcb28 = (void *)0x0;
  }
  return;
}

