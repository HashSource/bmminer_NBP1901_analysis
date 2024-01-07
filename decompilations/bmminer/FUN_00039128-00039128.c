
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00039128(undefined4 param_1)

{
  undefined4 local_810;
  undefined4 uStack_80c;
  undefined4 uStack_808;
  undefined4 uStack_804;
  undefined local_800;
  
  if ((DAT_004fcb3c == 0) || (*(int *)(DAT_004fcb3c + 4) == 0)) {
    if (3 < DAT_0007eb9c) {
      local_810 = s_Handle_is_NULL__00067bc8._0_4_;
      uStack_80c = s_Handle_is_NULL__00067bc8._4_4_;
      uStack_808 = s_Handle_is_NULL__00067bc8._8_4_;
      uStack_804 = s_Handle_is_NULL__00067bc8._12_4_;
      local_800 = (undefined)ram0x00067bd8;
      FUN_0002e584(3,&local_810,0);
      return;
    }
  }
  else {
    pthread_mutex_lock((pthread_mutex_t *)&DAT_000810dc);
    if (*(int *)(DAT_004fcb3c + 0x40) == 0) {
      FUN_000390b0(param_1);
    }
    else {
      (**(code **)(*(int *)(DAT_004fcb3c + 4) + 0x18))(param_1);
    }
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_000810dc);
  }
  return;
}

