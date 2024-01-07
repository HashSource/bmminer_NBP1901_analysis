
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00036a0c(void)

{
  undefined4 local_808;
  undefined4 uStack_804;
  undefined4 uStack_800;
  undefined4 uStack_7fc;
  undefined4 local_7f8;
  undefined4 uStack_7f4;
  undefined4 uStack_7f0;
  undefined4 uStack_7ec;
  undefined2 uStack_7e8;
  undefined local_7e6;
  
  if (4 < DAT_0007eb9c) {
    local_808 = s__DEBUG__Free_memory_for_hw_sweep_000676ec._0_4_;
    uStack_804 = s__DEBUG__Free_memory_for_hw_sweep_000676ec._4_4_;
    uStack_800 = s__DEBUG__Free_memory_for_hw_sweep_000676ec._8_4_;
    uStack_7fc = s__DEBUG__Free_memory_for_hw_sweep_000676ec._12_4_;
    local_7f8 = s__DEBUG__Free_memory_for_hw_sweep_000676ec._16_4_;
    uStack_7f4 = s__DEBUG__Free_memory_for_hw_sweep_000676ec._20_4_;
    uStack_7f0 = s__DEBUG__Free_memory_for_hw_sweep_000676ec._24_4_;
    uStack_7ec = s__DEBUG__Free_memory_for_hw_sweep_000676ec._28_4_;
    uStack_7e8 = (undefined2)ram0x0006770c;
    local_7e6 = (undefined)((uint)ram0x0006770c >> 0x10);
    FUN_0002e584(4,&local_808,0);
  }
  if (DAT_004fcb34 != (void *)0x0) {
    if (*(void **)((int)DAT_004fcb34 + 4) != (void *)0x0) {
      free(*(void **)((int)DAT_004fcb34 + 4));
    }
    free(DAT_004fcb34);
    DAT_004fcb34 = (void *)0x0;
  }
  return;
}

