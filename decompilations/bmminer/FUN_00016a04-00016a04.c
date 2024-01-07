
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00016a04(void)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined auStack_928 [57];
  undefined auStack_8ef [199];
  undefined4 local_828;
  undefined4 uStack_824;
  undefined4 uStack_820;
  undefined4 uStack_81c;
  undefined4 local_818;
  undefined4 uStack_814;
  undefined4 uStack_810;
  undefined4 uStack_80c;
  undefined4 uStack_808;
  undefined local_804;
  
  if ((DAT_0007f814 == 0) || (*(char *)(DAT_0007f814 + 0x1c) == '\0')) {
    if (3 < DAT_0007eb9c) {
      local_828 = s_No_fixture_configuration_for_flu_00060b58._0_4_;
      uStack_824 = s_No_fixture_configuration_for_flu_00060b58._4_4_;
      uStack_820 = s_No_fixture_configuration_for_flu_00060b58._8_4_;
      uStack_81c = s_No_fixture_configuration_for_flu_00060b58._12_4_;
      local_818 = s_No_fixture_configuration_for_flu_00060b58._16_4_;
      uStack_814 = s_No_fixture_configuration_for_flu_00060b58._20_4_;
      uStack_810 = s_No_fixture_configuration_for_flu_00060b58._24_4_;
      uStack_80c = s_No_fixture_configuration_for_flu_00060b58._28_4_;
      uStack_808 = s_No_fixture_configuration_for_flu_00060b58._32_4_;
      local_804 = (undefined)ram0x00060b7c;
      FUN_0002e584(3,&local_828,0);
      return 0xffffffff;
    }
    uVar8 = 0xffffffff;
  }
  else {
    iVar4 = 0;
    uVar8 = 0;
    do {
      iVar2 = FUN_0001e29c(iVar4);
      iVar5 = DAT_0007f814;
      if (iVar2 != 0) {
        memset(auStack_928,0,0x100);
        iVar5 = *(int *)(iVar5 + iVar4 * 4);
        if (3 < DAT_0007eb9c) {
          snprintf((char *)&local_828,0x800,"[chain %d] Update miner info in eeprom.\n",iVar4);
          FUN_0002e584(3,&local_828,0);
        }
        uVar3 = (uint)*(byte *)(iVar5 + 1);
        bVar1 = *(byte *)(iVar5 + 0x38);
        iVar2 = -uVar3 + 0x39;
        memcpy(auStack_928,(void *)(iVar5 + uVar3),(uint)bVar1);
        uVar6 = ((uint)bVar1 - iVar2) + 7 & 0xfffffff8;
        uVar7 = (uVar3 + 5 & 0xfffffff8) + 2;
        FUN_00018e48(auStack_8ef + -uVar3,uVar6,1);
        iVar2 = iVar2 + uVar6;
        if ((int)(0x100 - uVar7) < iVar2) {
          uVar8 = 0xffffffff;
          if (3 < DAT_0007eb9c) {
            snprintf((char *)&local_828,0x800,
                     "[chain %d] Update miner info Failed, EEPROM does not have enough space.\n",
                     iVar4);
            FUN_0002e584(3,&local_828,0);
          }
        }
        else {
          FUN_00044200(iVar4,uVar7 & 0xfe,auStack_928,iVar2);
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 != 4);
  }
  return uVar8;
}

