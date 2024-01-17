
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00039ea0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_810;
  undefined4 uStack_80c;
  undefined4 uStack_808;
  undefined4 uStack_804;
  undefined4 local_800;
  undefined4 uStack_7fc;
  undefined4 uStack_7f8;
  undefined4 uStack_7f4;
  undefined4 local_7f0;
  undefined4 uStack_7ec;
  undefined4 uStack_7e8;
  undefined4 uStack_7e4;
  undefined4 uStack_7e0;
  undefined4 uStack_7dc;
  undefined4 uStack_7d8;
  
  if (4 < DAT_0007eb9c) {
    local_810 = s__DEBUG__Check_if_all_chain_patte_0006803c._0_4_;
    uStack_80c = s__DEBUG__Check_if_all_chain_patte_0006803c._4_4_;
    uStack_808 = s__DEBUG__Check_if_all_chain_patte_0006803c._8_4_;
    uStack_804 = s__DEBUG__Check_if_all_chain_patte_0006803c._12_4_;
    local_800 = s__DEBUG__Check_if_all_chain_patte_0006803c._16_4_;
    uStack_7fc = s__DEBUG__Check_if_all_chain_patte_0006803c._20_4_;
    uStack_7f8 = s__DEBUG__Check_if_all_chain_patte_0006803c._24_4_;
    uStack_7f4 = s__DEBUG__Check_if_all_chain_patte_0006803c._28_4_;
    local_7f0 = s__DEBUG__Check_if_all_chain_patte_0006803c._32_4_;
    uStack_7ec = s__DEBUG__Check_if_all_chain_patte_0006803c._36_4_;
    uStack_7e8 = s__DEBUG__Check_if_all_chain_patte_0006803c._40_4_;
    uStack_7e4 = s__DEBUG__Check_if_all_chain_patte_0006803c._44_4_;
    uStack_7e0 = s__DEBUG__Check_if_all_chain_patte_0006803c._48_4_;
    uStack_7dc = s__DEBUG__Check_if_all_chain_patte_0006803c._52_4_;
    uStack_7d8 = s__DEBUG__Check_if_all_chain_patte_0006803c._56_4_;
    FUN_0002e584(4,&local_810,0);
  }
  if ((DAT_004fcb3c == 0) || (*(int *)(DAT_004fcb3c + 4) == 0)) {
    if (3 < DAT_0007eb9c) {
      local_810._0_1_ = s_Handle_is_NULL__00067bc8[0];
      local_810._1_1_ = s_Handle_is_NULL__00067bc8[1];
      local_810._2_1_ = s_Handle_is_NULL__00067bc8[2];
      local_810._3_1_ = s_Handle_is_NULL__00067bc8[3];
      uStack_80c._0_1_ = s_Handle_is_NULL__00067bc8[4];
      uStack_80c._1_1_ = s_Handle_is_NULL__00067bc8[5];
      uStack_80c._2_1_ = s_Handle_is_NULL__00067bc8[6];
      uStack_80c._3_1_ = s_Handle_is_NULL__00067bc8[7];
      uStack_808._0_1_ = s_Handle_is_NULL__00067bc8[8];
      uStack_808._1_1_ = s_Handle_is_NULL__00067bc8[9];
      uStack_808._2_1_ = s_Handle_is_NULL__00067bc8[10];
      uStack_808._3_1_ = s_Handle_is_NULL__00067bc8[11];
      uStack_804._0_1_ = s_Handle_is_NULL__00067bc8[12];
      uStack_804._1_1_ = s_Handle_is_NULL__00067bc8[13];
      uStack_804._2_1_ = s_Handle_is_NULL__00067bc8[14];
      uStack_804._3_1_ = s_Handle_is_NULL__00067bc8[15];
      local_800 = CONCAT31(local_800._1_3_,(char)ram0x00067bd8);
      FUN_0002e584(3,&local_810,0);
      return 1;
    }
  }
  else {
    iVar3 = 0;
    do {
      iVar1 = FUN_0001e29c(iVar3);
      iVar2 = iVar3 + 2;
      iVar3 = iVar3 + 1;
      if ((iVar1 != 0) && ((*(uint *)(DAT_004fcb3c + iVar2 * 4) & 0xfffffffd) != 0)) {
        return 0;
      }
    } while (iVar3 != 4);
  }
  return 1;
}

