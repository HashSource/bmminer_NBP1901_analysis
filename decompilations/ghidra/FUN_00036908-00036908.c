
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00036908(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 local_818;
  undefined4 uStack_814;
  undefined4 uStack_810;
  undefined4 uStack_80c;
  undefined4 local_808;
  undefined4 uStack_804;
  undefined4 uStack_800;
  undefined4 uStack_7fc;
  undefined4 local_7f8;
  undefined4 uStack_7f4;
  undefined4 uStack_7f0;
  undefined4 uStack_7ec;
  undefined4 local_7e8;
  
  if (4 < DAT_0007eb9c) {
    local_818 = s__DEBUG__Send_1_midstate_work__000676cc._0_4_;
    uStack_814 = s__DEBUG__Send_1_midstate_work__000676cc._4_4_;
    uStack_810 = s__DEBUG__Send_1_midstate_work__000676cc._8_4_;
    uStack_80c = s__DEBUG__Send_1_midstate_work__000676cc._12_4_;
    local_808 = s__DEBUG__Send_1_midstate_work__000676cc._16_4_;
    uStack_804 = s__DEBUG__Send_1_midstate_work__000676cc._20_4_;
    uStack_800 = s__DEBUG__Send_1_midstate_work__000676cc._24_4_;
    FUN_0002e584(4,&local_818,0);
  }
  uVar3 = 0;
  memset(&local_818,0,0x34);
  local_818 = CONCAT31(local_818._1_3_,1);
  do {
    iVar1 = FUN_0001e29c(uVar3);
    if (iVar1 != 0) {
      while (uVar2 = FUN_00044ed4(), (uVar2 & 1 << (uVar3 & 0xff)) == 0) {
        FUN_000304d4(1);
      }
      local_818 = CONCAT22(local_818._2_2_,CONCAT11((char)uVar3,(undefined)local_818)) | 0x8000;
      FUN_0001edf0(local_818,uStack_814,uStack_810,uStack_80c,local_808,uStack_804,uStack_800,
                   uStack_7fc,local_7f8,uStack_7f4,uStack_7f0,uStack_7ec,local_7e8);
      FUN_000304d4(10);
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 != 4);
  return;
}

