
void FUN_0002d158(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_r1;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  char *pcVar11;
  char acStack_128 [260];
  
  iVar4 = 0;
  iVar10 = 0;
  iVar6 = 0;
  memset(acStack_128,0,0x100);
  do {
    iVar2 = FUN_0001e29c(iVar10);
    if (iVar2 != 0) {
      if (DAT_00081114 == 0) {
        DAT_00081114 = FUN_000536f4("bmminer_nonce");
      }
      FUN_00054cb0(DAT_00081114,"asic_response.c",0xf,"dump_nonce_info_all_core",0x18,0x21a,0x14,
                   "\n asic nonce number for chain[%d]...\n",iVar10);
      iVar2 = FUN_0001e0f0();
      if (0 < iVar2) {
        piVar9 = (int *)(DAT_0002d33c + iVar10 * 0x400);
        iVar5 = 0;
        do {
          piVar9 = piVar9 + 1;
          iVar8 = iVar5 + 1;
          iVar7 = iVar6 + *piVar9;
          iVar6 = snprintf(acStack_128 + iVar4,0x100 - iVar4,"asic[%03d]=%-8d",iVar5,*piVar9);
          uVar3 = FUN_0001e100();
          FUN_0005fd8c(iVar8,uVar3);
          iVar4 = iVar4 + iVar6;
          iVar6 = iVar7;
          if (extraout_r1 == 0) {
            if (DAT_00081114 == 0) {
              DAT_00081114 = FUN_000536f4("bmminer_nonce");
            }
            iVar1 = DAT_00081114;
            uVar3 = FUN_0001e100();
            iVar6 = 0;
            iVar4 = 0;
            pcVar11 = acStack_128;
            uVar3 = FUN_0005faf8(iVar5,uVar3);
            FUN_00054cb0(iVar1,"asic_response.c",0xf,"dump_nonce_info_all_core",0x18,0x220,0x14,
                         "domain %02d %s total=%-8u",uVar3,pcVar11,iVar7);
          }
          iVar5 = iVar8;
        } while (iVar8 != iVar2);
      }
    }
    iVar10 = iVar10 + 1;
  } while (iVar10 != 4);
  return;
}

