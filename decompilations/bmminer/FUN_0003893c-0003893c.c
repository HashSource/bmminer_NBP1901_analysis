
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0003893c(undefined4 param_1)

{
  undefined4 local_810;
  undefined4 uStack_80c;
  undefined4 uStack_808;
  undefined4 uStack_804;
  undefined4 local_800;
  undefined4 uStack_7fc;
  undefined4 uStack_7f8;
  undefined4 uStack_7f4;
  undefined local_7f0;
  
  if (4 < DAT_0007eb9c) {
    local_810 = s__DEBUG__Send_work_for_hw_sweep__00067c08._0_4_;
    uStack_80c = s__DEBUG__Send_work_for_hw_sweep__00067c08._4_4_;
    uStack_808 = s__DEBUG__Send_work_for_hw_sweep__00067c08._8_4_;
    uStack_804 = s__DEBUG__Send_work_for_hw_sweep__00067c08._12_4_;
    local_800 = s__DEBUG__Send_work_for_hw_sweep__00067c08._16_4_;
    uStack_7fc = s__DEBUG__Send_work_for_hw_sweep__00067c08._20_4_;
    uStack_7f8 = s__DEBUG__Send_work_for_hw_sweep__00067c08._24_4_;
    uStack_7f4 = s__DEBUG__Send_work_for_hw_sweep__00067c08._28_4_;
    local_7f0 = (undefined)ram0x00067c28;
    FUN_0002e584(4,&local_810,0);
  }
  if ((DAT_004fcb3c == 0) || (*(int *)(DAT_004fcb3c + 4) == 0)) {
    if (3 < DAT_0007eb9c) {
      FUN_000387f8();
      return;
    }
  }
  else {
    (**(code **)(*(int *)(DAT_004fcb3c + 4) + 0x1c))(0xff,param_1);
  }
  return;
}

