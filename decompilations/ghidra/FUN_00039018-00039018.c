
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00039018(void)

{
  undefined4 local_808;
  undefined4 uStack_804;
  undefined4 uStack_800;
  undefined4 uStack_7fc;
  undefined local_7f8;
  
  if ((DAT_004fcb3c == 0) || (*(int *)(DAT_004fcb3c + 4) == 0)) {
    if (3 < DAT_0007eb9c) {
      local_808 = s_Handle_is_NULL__00067bc8._0_4_;
      uStack_804 = s_Handle_is_NULL__00067bc8._4_4_;
      uStack_800 = s_Handle_is_NULL__00067bc8._8_4_;
      uStack_7fc = s_Handle_is_NULL__00067bc8._12_4_;
      local_7f8 = (undefined)ram0x00067bd8;
      FUN_0002e584(3,&local_808,0);
      return;
    }
  }
  else if (*(int *)(DAT_004fcb3c + 0x40) != 0) {
    (**(code **)(*(int *)(DAT_004fcb3c + 4) + 0x14))();
  }
  return;
}

