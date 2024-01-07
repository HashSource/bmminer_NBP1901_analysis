
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00031cac(void)

{
  int iVar1;
  uint uVar2;
  undefined4 local_808;
  undefined4 uStack_804;
  undefined4 uStack_800;
  undefined4 uStack_7fc;
  undefined4 local_7f8;
  undefined4 uStack_7f4;
  undefined4 uStack_7f0;
  undefined local_7ec;
  
  if (3 < DAT_0007eb9c) {
    local_808 = s_____power_off_hashboard_____00066894._0_4_;
    uStack_804 = s_____power_off_hashboard_____00066894._4_4_;
    uStack_800 = s_____power_off_hashboard_____00066894._8_4_;
    uStack_7fc = s_____power_off_hashboard_____00066894._12_4_;
    local_7f8 = s_____power_off_hashboard_____00066894._16_4_;
    uStack_7f4 = s_____power_off_hashboard_____00066894._20_4_;
    uStack_7f0 = s_____power_off_hashboard_____00066894._24_4_;
    local_7ec = (undefined)ram0x000668b0;
    FUN_0002e584(3,&local_808,0);
  }
  uVar2 = 0;
  do {
    iVar1 = FUN_0001e29c(uVar2);
    if (iVar1 != 0) {
      thunk_FUN_00046900(uVar2 & 0xff);
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 != 4);
  FUN_000194dc();
  FUN_000447d8();
  return;
}

