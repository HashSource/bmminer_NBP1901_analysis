
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0003adcc(void)

{
  undefined4 local_808;
  undefined4 uStack_804;
  undefined4 uStack_800;
  undefined4 uStack_7fc;
  undefined4 local_7f8;
  undefined4 uStack_7f4;
  undefined4 uStack_7f0;
  undefined4 uStack_7ec;
  undefined4 local_7e8;
  undefined4 uStack_7e4;
  undefined4 uStack_7e0;
  
  if (4 < DAT_0007eb9c) {
    local_808 = s__DEBUG__Freq_tuning_basic_exit__000682e4._0_4_;
    uStack_804 = s__DEBUG__Freq_tuning_basic_exit__000682e4._4_4_;
    uStack_800 = s__DEBUG__Freq_tuning_basic_exit__000682e4._8_4_;
    uStack_7fc = s__DEBUG__Freq_tuning_basic_exit__000682e4._12_4_;
    local_7f8 = s__DEBUG__Freq_tuning_basic_exit__000682e4._16_4_;
    uStack_7f4 = s__DEBUG__Freq_tuning_basic_exit__000682e4._20_4_;
    uStack_7f0 = s__DEBUG__Freq_tuning_basic_exit__000682e4._24_4_;
    uStack_7ec = s__DEBUG__Freq_tuning_basic_exit__000682e4._28_4_;
    local_7e8._0_1_ = (char)ram0x00068304;
    FUN_0002e584(4,&local_808,0);
    if (4 < DAT_0007eb9c) {
      local_808._0_1_ = s__DEBUG__Free_memory_for_freq_tun_00068308[0];
      local_808._1_1_ = s__DEBUG__Free_memory_for_freq_tun_00068308[1];
      local_808._2_1_ = s__DEBUG__Free_memory_for_freq_tun_00068308[2];
      local_808._3_1_ = s__DEBUG__Free_memory_for_freq_tun_00068308[3];
      uStack_804._0_1_ = s__DEBUG__Free_memory_for_freq_tun_00068308[4];
      uStack_804._1_1_ = s__DEBUG__Free_memory_for_freq_tun_00068308[5];
      uStack_804._2_1_ = s__DEBUG__Free_memory_for_freq_tun_00068308[6];
      uStack_804._3_1_ = s__DEBUG__Free_memory_for_freq_tun_00068308[7];
      uStack_800._0_1_ = s__DEBUG__Free_memory_for_freq_tun_00068308[8];
      uStack_800._1_1_ = s__DEBUG__Free_memory_for_freq_tun_00068308[9];
      uStack_800._2_1_ = s__DEBUG__Free_memory_for_freq_tun_00068308[10];
      uStack_800._3_1_ = s__DEBUG__Free_memory_for_freq_tun_00068308[11];
      uStack_7fc._0_1_ = s__DEBUG__Free_memory_for_freq_tun_00068308[12];
      uStack_7fc._1_1_ = s__DEBUG__Free_memory_for_freq_tun_00068308[13];
      uStack_7fc._2_1_ = s__DEBUG__Free_memory_for_freq_tun_00068308[14];
      uStack_7fc._3_1_ = s__DEBUG__Free_memory_for_freq_tun_00068308[15];
      local_7f8._0_1_ = s__DEBUG__Free_memory_for_freq_tun_00068308[16];
      local_7f8._1_1_ = s__DEBUG__Free_memory_for_freq_tun_00068308[17];
      local_7f8._2_1_ = s__DEBUG__Free_memory_for_freq_tun_00068308[18];
      local_7f8._3_1_ = s__DEBUG__Free_memory_for_freq_tun_00068308[19];
      uStack_7f4._0_1_ = s__DEBUG__Free_memory_for_freq_tun_00068308[20];
      uStack_7f4._1_1_ = s__DEBUG__Free_memory_for_freq_tun_00068308[21];
      uStack_7f4._2_1_ = s__DEBUG__Free_memory_for_freq_tun_00068308[22];
      uStack_7f4._3_1_ = s__DEBUG__Free_memory_for_freq_tun_00068308[23];
      uStack_7f0._0_1_ = s__DEBUG__Free_memory_for_freq_tun_00068308[24];
      uStack_7f0._1_1_ = s__DEBUG__Free_memory_for_freq_tun_00068308[25];
      uStack_7f0._2_1_ = s__DEBUG__Free_memory_for_freq_tun_00068308[26];
      uStack_7f0._3_1_ = s__DEBUG__Free_memory_for_freq_tun_00068308[27];
      uStack_7ec._0_1_ = s__DEBUG__Free_memory_for_freq_tun_00068308[28];
      uStack_7ec._1_1_ = s__DEBUG__Free_memory_for_freq_tun_00068308[29];
      uStack_7ec._2_1_ = s__DEBUG__Free_memory_for_freq_tun_00068308[30];
      uStack_7ec._3_1_ = s__DEBUG__Free_memory_for_freq_tun_00068308[31];
      local_7e8._0_1_ = s__DEBUG__Free_memory_for_freq_tun_00068308[32];
      local_7e8._1_1_ = s__DEBUG__Free_memory_for_freq_tun_00068308[33];
      local_7e8._2_1_ = s__DEBUG__Free_memory_for_freq_tun_00068308[34];
      local_7e8._3_1_ = s__DEBUG__Free_memory_for_freq_tun_00068308[35];
      uStack_7e4._0_1_ = s__DEBUG__Free_memory_for_freq_tun_00068308[36];
      uStack_7e4._1_1_ = s__DEBUG__Free_memory_for_freq_tun_00068308[37];
      uStack_7e4._2_1_ = s__DEBUG__Free_memory_for_freq_tun_00068308[38];
      uStack_7e4._3_1_ = s__DEBUG__Free_memory_for_freq_tun_00068308[39];
      uStack_7e0._0_1_ = s__DEBUG__Free_memory_for_freq_tun_00068308[40];
      uStack_7e0._1_1_ = s__DEBUG__Free_memory_for_freq_tun_00068308[41];
      uStack_7e0._2_1_ = s__DEBUG__Free_memory_for_freq_tun_00068308[42];
      uStack_7e0._3_1_ = s__DEBUG__Free_memory_for_freq_tun_00068308[43];
      FUN_0002e584(4,&local_808,0);
    }
  }
  if (DAT_004fcb40 != (void *)0x0) {
    free(DAT_004fcb40);
    DAT_004fcb40 = (void *)0x0;
  }
  return;
}

