
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0002cb2c(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int extraout_r1;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 local_828;
  undefined4 uStack_824;
  undefined4 uStack_820;
  undefined4 uStack_81c;
  undefined4 local_818;
  undefined4 uStack_814;
  undefined4 uStack_810;
  undefined local_80c;
  
  if (4 < DAT_0007eb9c) {
    local_828 = s__dump_asic_nonce_number____000632c0._0_4_;
    uStack_824 = s__dump_asic_nonce_number____000632c0._4_4_;
    uStack_820 = s__dump_asic_nonce_number____000632c0._8_4_;
    uStack_81c = s__dump_asic_nonce_number____000632c0._12_4_;
    local_818 = s__dump_asic_nonce_number____000632c0._16_4_;
    uStack_814 = s__dump_asic_nonce_number____000632c0._20_4_;
    uStack_810 = s__dump_asic_nonce_number____000632c0._24_4_;
    local_80c = (undefined)ram0x000632dc;
    FUN_0002e584(4,&local_828);
  }
  iVar1 = DAT_0002cd2c;
  iVar9 = 0;
  iVar8 = 0;
  do {
    iVar2 = FUN_0001e29c(iVar8);
    if (iVar2 != 0) {
      if (4 < DAT_0007eb9c) {
        snprintf((char *)&local_828,0x800,"Chain[%d]:\n",iVar8);
        FUN_0002e584(4,&local_828);
      }
      iVar2 = FUN_0001e0f0();
      iVar10 = 0;
      if (0 < iVar2) {
        iVar7 = 0;
        do {
          iVar3 = FUN_0001e120();
          if (iVar3 < 1) {
            iVar5 = 0;
          }
          else {
            iVar5 = 0;
            piVar6 = (int *)(iVar1 + (iVar7 + iVar9) * 0x1000);
            do {
              piVar6 = piVar6 + 1;
              iVar5 = iVar5 + *piVar6;
            } while (piVar6 != (int *)(iVar1 + (iVar3 + (iVar7 + iVar9) * 0x400) * 4));
            iVar10 = iVar10 + iVar5;
          }
          if (4 < DAT_0007eb9c) {
            snprintf((char *)&local_828,0x800,"IC[%03d] = %-10d ",iVar7,iVar5);
            FUN_0002e584(4,&local_828,0);
          }
          iVar7 = iVar7 + 1;
          uVar4 = FUN_0001e100();
          FUN_0005fd8c(iVar7,uVar4);
          if ((extraout_r1 == 0) && (4 < DAT_0007eb9c)) {
            local_828._0_2_ = 10;
            FUN_0002e584(4,&local_828);
          }
        } while (iVar7 != iVar2);
      }
      if (4 < DAT_0007eb9c) {
        snprintf((char *)&local_828,0x800,"Chain[%d] total nonce number = %d\n",iVar8,iVar10);
        FUN_0002e584(4,&local_828);
        if (4 < DAT_0007eb9c) {
          local_828._0_2_ = 10;
          FUN_0002e584(4,&local_828);
        }
      }
    }
    iVar8 = iVar8 + 1;
    iVar9 = iVar9 + 0x100;
  } while (iVar8 != 4);
  return;
}

