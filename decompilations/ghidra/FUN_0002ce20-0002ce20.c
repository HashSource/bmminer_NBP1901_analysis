
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0002ce20(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int extraout_r1;
  uint extraout_r1_00;
  uint extraout_r1_01;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  undefined4 local_828;
  undefined4 uStack_824;
  undefined4 uStack_820;
  undefined4 uStack_81c;
  undefined4 local_818;
  undefined4 uStack_814;
  undefined4 uStack_810;
  undefined2 uStack_80c;
  undefined local_80a;
  
  if (4 < DAT_0007eb9c) {
    local_828 = s__dump_domain_nonce_number____00064e44._0_4_;
    uStack_824 = s__dump_domain_nonce_number____00064e44._4_4_;
    uStack_820 = s__dump_domain_nonce_number____00064e44._8_4_;
    uStack_81c = s__dump_domain_nonce_number____00064e44._12_4_;
    local_818 = s__dump_domain_nonce_number____00064e44._16_4_;
    uStack_814 = s__dump_domain_nonce_number____00064e44._20_4_;
    uStack_810 = s__dump_domain_nonce_number____00064e44._24_4_;
    uStack_80c = (undefined2)ram0x00064e60;
    local_80a = (undefined)((uint)ram0x00064e60 >> 0x10);
    FUN_0002e584(4,&local_828,0);
    param_2 = extraout_r1_01;
  }
  iVar4 = 0;
  do {
    uVar7 = FUN_0001e29c(iVar4,param_2);
    param_2 = (uint)((ulonglong)uVar7 >> 0x20);
    if ((int)uVar7 != 0) {
      if (4 < DAT_0007eb9c) {
        snprintf((char *)&local_828,0x800,"Chain[%d]:\n",iVar4);
        FUN_0002e584(4,&local_828,0);
      }
      uVar5 = 0;
      iVar6 = 0;
      while( true ) {
        param_2 = uVar5;
        iVar2 = FUN_0001e0e0();
        iVar3 = FUN_0001e150();
        uVar5 = param_2 + 1;
        if (iVar3 * iVar2 - param_2 == 0 || iVar3 * iVar2 < (int)param_2) break;
        iVar2 = FUN_0002cd30(iVar4);
        iVar3 = iVar6 + iVar2;
        if (4 < DAT_0007eb9c) {
          snprintf((char *)&local_828,0x800,"D[%02d]:%-10d ",param_2,iVar2);
          FUN_0002e584(4,&local_828,0);
        }
        uVar1 = FUN_0001e150();
        FUN_0005fd8c(uVar5,uVar1);
        iVar6 = iVar3;
        if ((extraout_r1 == 0) && (iVar6 = 0, 4 < DAT_0007eb9c)) {
          snprintf((char *)&local_828,0x800,"D_BIG[%02d]:%-10d\n",param_2 >> 2,iVar3);
          FUN_0002e584(4,&local_828,0);
        }
      }
      if (4 < DAT_0007eb9c) {
        local_828._0_2_ = 10;
        FUN_0002e584(4,&local_828,0);
        param_2 = extraout_r1_00;
      }
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 != 4);
  return;
}

