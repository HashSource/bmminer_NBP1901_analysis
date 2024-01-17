
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00038f58(void)

{
  undefined4 local_808;
  undefined4 uStack_804;
  undefined4 uStack_800;
  undefined4 uStack_7fc;
  undefined4 local_7f8;
  undefined4 uStack_7f4;
  undefined4 uStack_7f0;
  undefined local_7ec;
  
  if (4 < DAT_0007eb9c) {
    local_808 = s__DEBUG__Pattern_test_reset__00067d1c._0_4_;
    uStack_804 = s__DEBUG__Pattern_test_reset__00067d1c._4_4_;
    uStack_800 = s__DEBUG__Pattern_test_reset__00067d1c._8_4_;
    uStack_7fc = s__DEBUG__Pattern_test_reset__00067d1c._12_4_;
    local_7f8 = s__DEBUG__Pattern_test_reset__00067d1c._16_4_;
    uStack_7f4 = s__DEBUG__Pattern_test_reset__00067d1c._20_4_;
    uStack_7f0 = s__DEBUG__Pattern_test_reset__00067d1c._24_4_;
    local_7ec = (undefined)ram0x00067d38;
    FUN_0002e584(4,&local_808,0);
  }
  if ((DAT_004fcb3c == 0) || (*(int *)(DAT_004fcb3c + 4) == 0)) {
    if (3 < DAT_0007eb9c) {
      local_808._0_1_ = s_Handle_is_NULL__00067bc8[0];
      local_808._1_1_ = s_Handle_is_NULL__00067bc8[1];
      local_808._2_1_ = s_Handle_is_NULL__00067bc8[2];
      local_808._3_1_ = s_Handle_is_NULL__00067bc8[3];
      uStack_804._0_1_ = s_Handle_is_NULL__00067bc8[4];
      uStack_804._1_1_ = s_Handle_is_NULL__00067bc8[5];
      uStack_804._2_1_ = s_Handle_is_NULL__00067bc8[6];
      uStack_804._3_1_ = s_Handle_is_NULL__00067bc8[7];
      uStack_800._0_1_ = s_Handle_is_NULL__00067bc8[8];
      uStack_800._1_1_ = s_Handle_is_NULL__00067bc8[9];
      uStack_800._2_1_ = s_Handle_is_NULL__00067bc8[10];
      uStack_800._3_1_ = s_Handle_is_NULL__00067bc8[11];
      uStack_7fc._0_1_ = s_Handle_is_NULL__00067bc8[12];
      uStack_7fc._1_1_ = s_Handle_is_NULL__00067bc8[13];
      uStack_7fc._2_1_ = s_Handle_is_NULL__00067bc8[14];
      uStack_7fc._3_1_ = s_Handle_is_NULL__00067bc8[15];
      local_7f8 = CONCAT31(local_7f8._1_3_,(char)ram0x00067bd8);
      FUN_0002e584(3,&local_808,0);
      return;
    }
  }
  else {
    (**(code **)(*(int *)(DAT_004fcb3c + 4) + 0x10))();
  }
  return;
}

