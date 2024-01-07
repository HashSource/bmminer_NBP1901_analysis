
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_00026bd4(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_r1;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  char *pcVar9;
  char acStack_128 [260];
  
  memset(acStack_128,0,0x100);
  if (DAT_0008074c == 0) {
    DAT_0008074c = FUN_000536f4("bmminer_tuning");
  }
  FUN_00054cb0(DAT_0008074c,"thread.c",8,"_tuning_freq_dump_nonce_info",0x1c,0x263,0x14,
               "\n current freq: %d\n",param_1);
  if (DAT_0008074c == 0) {
    DAT_0008074c = FUN_000536f4("bmminer_tuning");
  }
  iVar4 = 0;
  FUN_00054cb0(DAT_0008074c,"thread.c",8,"_tuning_freq_dump_nonce_info",0x1c,0x264,0x14,
               "\n dump asic nonce number...\n",param_1);
  iVar8 = 0;
  do {
    iVar1 = FUN_0001e29c(iVar8);
    if (iVar1 != 0) {
      if (DAT_0008074c == 0) {
        DAT_0008074c = FUN_000536f4("bmminer_tuning");
      }
      FUN_00054cb0(DAT_0008074c,"thread.c",8,"_tuning_freq_dump_nonce_info",0x1c,0x268,0x14,
                   "Chain[%d] nonce:\n",iVar8);
      iVar1 = FUN_0001e0f0();
      if (0 < iVar1) {
        puVar7 = (undefined4 *)(param_2 + -4 + iVar8 * 0x400);
        iVar5 = 0;
        do {
          puVar7 = puVar7 + 1;
          iVar6 = iVar5 + 1;
          iVar2 = snprintf(acStack_128 + iVar4,0x100 - iVar4,"asic[%03d]=%-8d",iVar5,*puVar7);
          uVar3 = FUN_0001e100();
          FUN_0005fd8c(iVar6,uVar3);
          iVar4 = iVar4 + iVar2;
          if (extraout_r1 == 0) {
            iVar4 = 0;
            if (DAT_0008074c == 0) {
              DAT_0008074c = FUN_000536f4("bmminer_tuning");
            }
            iVar2 = DAT_0008074c;
            pcVar9 = acStack_128;
            uVar3 = FUN_0005faf8(iVar5,iVar1);
            FUN_00054cb0(iVar2,"thread.c",8,"_tuning_freq_dump_nonce_info",0x1c,0x271,0x14,
                         "domain %02d %s",uVar3,pcVar9);
          }
          iVar5 = iVar6;
        } while (iVar6 != iVar1);
      }
      if (DAT_0008074c == 0) {
        DAT_0008074c = FUN_000536f4("bmminer_tuning");
      }
      uVar3 = 0;
      iVar1 = iVar8;
      FUN_00054cb0(DAT_0008074c,"thread.c",8,"_tuning_freq_dump_nonce_info",0x1c,0x276,0x14,
                   "Chain[%d] total nonce number = %d\n",iVar8,0);
      if (DAT_0008074c == 0) {
        DAT_0008074c = FUN_000536f4("bmminer_tuning");
      }
      FUN_00054cb0(DAT_0008074c,"thread.c",8,"_tuning_freq_dump_nonce_info",0x1c,0x277,0x14,"\n",
                   iVar1,uVar3);
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 != 4);
  return;
}

