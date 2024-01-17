
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000398bc(void)

{
  undefined4 local_808;
  undefined4 uStack_804;
  undefined4 uStack_800;
  undefined4 uStack_7fc;
  undefined4 uStack_7f8;
  undefined2 local_7f4;
  
  if (4 < DAT_0007eb9c) {
    local_808 = s__DEBUG__Clear_stats__00067e9c._0_4_;
    uStack_804 = s__DEBUG__Clear_stats__00067e9c._4_4_;
    uStack_800 = s__DEBUG__Clear_stats__00067e9c._8_4_;
    uStack_7fc = s__DEBUG__Clear_stats__00067e9c._12_4_;
    uStack_7f8 = s__DEBUG__Clear_stats__00067e9c._16_4_;
    local_7f4 = (undefined2)ram0x00067eb0;
    FUN_0002e584(4,&local_808,0);
  }
  if ((DAT_004fcb3c == 0) || (*(int *)(DAT_004fcb3c + 4) == 0)) {
    if (3 < DAT_0007eb9c) {
      FUN_000387f8();
      return;
    }
  }
  else {
    (**(code **)(*(int *)(DAT_004fcb3c + 4) + 0xc))();
  }
  return;
}

