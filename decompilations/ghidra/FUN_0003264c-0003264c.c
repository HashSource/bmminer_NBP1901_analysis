
void FUN_0003264c(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  int extraout_r1;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  char acStack_828 [2052];
  
  iVar5 = 0;
  do {
    iVar1 = FUN_0001e29c(iVar5);
    if (iVar1 != 0) {
      FUN_0001e0f0();
      uVar6 = 0;
      puVar7 = &DAT_0099cd98 + iVar5 * 0x200;
      while( true ) {
        uVar4 = FUN_0001e0f0();
        uVar2 = DAT_0007eb9c;
        if (uVar4 <= uVar6) break;
        uVar3 = puVar7[1];
        iVar1 = (iVar5 * 0x3c00 + uVar6 * 0x3c + DAT_00482a60 % 0x3c) * 8;
        *(undefined4 *)(&DAT_00483aa0 + iVar1) = *puVar7;
        *(undefined4 *)(&DAT_00483aa4 + iVar1) = uVar3;
        if (4 < uVar2) {
          snprintf(acStack_828,0x800,"chain %u asic %u asic_nonce_num %llu\n",iVar5,uVar6);
          FUN_0002e584(4,acStack_828,0);
        }
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 2;
      }
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 != 4);
  DAT_00482a60 = DAT_00482a60 + 1;
  memset(&DAT_005924f4,0,0x2000);
  memset(&DAT_00590440,0,0x2000);
  memset(&DAT_0058e3f8,0,0x2000);
  puVar7 = &DAT_00482aa0;
  FUN_00031980(&DAT_005924f4,10);
  FUN_00031980(&DAT_00590440,0x1e);
  iVar5 = 0;
  FUN_00031980(&DAT_0058e3f8,0x3c);
  do {
    iVar1 = FUN_0001e29c(iVar5);
    if (iVar1 != 0) {
      iVar1 = 0;
      uVar6 = 0;
      puVar8 = &DAT_0099cd98 + iVar5 * 0x200;
      while( true ) {
        uVar2 = FUN_0001e0f0();
        iVar9 = iVar1 + uVar6;
        if (uVar2 <= uVar6) break;
        uVar3 = FUN_0001e100();
        FUN_0005fadc(uVar6,uVar3);
        iVar10 = iVar9;
        if (extraout_r1 == 0) {
          iVar1 = iVar1 + 1;
          iVar10 = iVar1 + uVar6;
          FUN_0001e820(iVar5,iVar9,0x20);
        }
        iVar9 = DAT_00482a60 % 0x3c + -1;
        if (iVar9 < 0) {
          iVar9 = DAT_00482a60 % 0x3c + 0x3b;
        }
        if (*(int *)(&DAT_00483aa0 + (iVar5 * 0x3c00 + uVar6 * 0x3c + iVar9) * 8) < 2) {
          FUN_0001e820(iVar5,iVar10,0x78);
          puVar7[uVar6] = puVar7[uVar6] + 1;
        }
        else {
          FUN_0001e820(iVar5,iVar10,0x6f);
        }
        uVar6 = uVar6 + 1;
        *puVar8 = 0;
        puVar8[1] = 0;
        puVar8 = puVar8 + 2;
      }
      FUN_0001e820(iVar5,iVar9,0);
    }
    iVar5 = iVar5 + 1;
    puVar7 = puVar7 + 0x100;
  } while (iVar5 != 4);
  return;
}

