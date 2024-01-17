
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0003a86c(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  int *piVar16;
  int local_860;
  undefined4 *local_844;
  int local_838;
  int local_834;
  int local_830;
  int local_82c;
  undefined4 local_828;
  undefined4 uStack_824;
  undefined4 uStack_820;
  undefined4 uStack_81c;
  undefined4 local_818;
  undefined2 uStack_814;
  undefined local_812;
  
  if ((DAT_004fcb3c == (int *)0x0) || (DAT_004fcb3c[1] == 0)) {
    if (3 < DAT_0007eb9c) {
      local_828 = s_Handle_is_NULL__00067bc8._0_4_;
      uStack_824 = s_Handle_is_NULL__00067bc8._4_4_;
      uStack_820 = s_Handle_is_NULL__00067bc8._8_4_;
      uStack_81c = s_Handle_is_NULL__00067bc8._12_4_;
      local_818 = CONCAT31(local_818._1_3_,(char)ram0x00067bd8);
      FUN_0002e584(3,&local_828,0);
      return;
    }
  }
  else {
    if (3 < DAT_0007eb9c) {
      local_828 = s_Pattern_test_start____0006821c._0_4_;
      uStack_824 = s_Pattern_test_start____0006821c._4_4_;
      uStack_820 = s_Pattern_test_start____0006821c._8_4_;
      uStack_81c = s_Pattern_test_start____0006821c._12_4_;
      local_818 = s_Pattern_test_start____0006821c._16_4_;
      uStack_814 = (undefined2)ram0x00068230;
      local_812 = (undefined)((uint)ram0x00068230 >> 0x10);
      FUN_0002e584(3,&local_828,0);
    }
    local_844 = &local_828;
    FUN_000302a0(&local_838);
    FUN_000398bc();
    uVar1 = FUN_000452b0();
    FUN_000452d0(uVar1 | 0x10000);
    iVar10 = *DAT_004fcb3c;
    DAT_004fcb3c[0x10] = 1;
    if (iVar10 == 0xa1) {
      FUN_0003893c(param_1);
    }
    else {
      FUN_000389f0();
    }
    iVar10 = 0;
    do {
      iVar2 = FUN_0001e29c(iVar10);
      if ((iVar2 != 0) && (DAT_004fcb3c[iVar10 + 2] == 1)) {
        iVar2 = 3;
        do {
          iVar3 = FUN_00039584(iVar10);
          if (iVar3 != 0) break;
          usleep(100000);
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      iVar10 = iVar10 + 1;
    } while (iVar10 != 4);
    iVar2 = 0;
    DAT_004fcb3c[0x10] = 0;
    iVar10 = FUN_000391f4();
    do {
      iVar3 = FUN_0001e29c(iVar2);
      if ((iVar3 != 0) && (DAT_004fcb3c[iVar2 + 2] == 1)) {
        iVar3 = FUN_0001e0f0();
        if (iVar3 != 0) {
          local_860 = 0;
          do {
            uVar4 = FUN_0001e100();
            iVar5 = FUN_0005f880(local_860,uVar4);
            iVar6 = FUN_0001e130();
            if (iVar6 != 0) {
              iVar13 = 0;
              iVar14 = iVar10 + (iVar5 + iVar2 * 0x40) * 4;
              piVar15 = (int *)(iVar10 + 0x408ffc + (local_860 + iVar2 * 0x100) * 0x1000);
              do {
                iVar7 = FUN_0001e150();
                iVar8 = FUN_0001e150();
                iVar8 = iVar13 * iVar8;
                iVar13 = iVar13 + 1;
                uVar4 = FUN_0001e130();
                iVar8 = FUN_0005f880(iVar8,uVar4);
                piVar15 = piVar15 + 1;
                iVar9 = *piVar15;
                iVar7 = iVar10 + (iVar8 + iVar5 * iVar7 + iVar2 * 0x40) * 4;
                piVar11 = (int *)(iVar10 + (local_860 * 9 + iVar2 * 0x900 + iVar9) * 4 + 0x400000);
                *(int *)(&DAT_0080a010 + iVar7) = *(int *)(&DAT_0080a010 + iVar7) + iVar9;
                *(int *)(&DAT_0080a410 + iVar14) = *(int *)(&DAT_0080a410 + iVar14) + iVar9;
                *piVar11 = *piVar11 + 1;
              } while (iVar6 != iVar13);
            }
            local_860 = local_860 + 1;
          } while (iVar3 != local_860);
        }
        iVar3 = FUN_0001e0f0();
        if (iVar3 != 0) {
          piVar15 = (int *)(iVar10 + 0x400000 + iVar2 * 0x2400);
          piVar11 = piVar15 + iVar3 * 9;
          do {
            piVar12 = piVar15;
            do {
              iVar3 = *piVar12;
              piVar16 = piVar12 + 1;
              piVar12 = piVar12 + 1;
              *piVar12 = *piVar16 + iVar3;
            } while (piVar12 != piVar15 + 8);
            piVar15 = piVar15 + 9;
          } while (piVar15 != piVar11);
        }
        uVar4 = FUN_00038b6c(iVar2,iVar10);
        *(undefined4 *)(&DAT_0080a894 + iVar10 + iVar2 * 4) = uVar4;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 != 4);
    FUN_000302a0(&local_830);
    local_830 = local_830 - local_838;
    if (local_82c - local_834 < 0) {
      local_830 = local_830 + -1;
    }
    if (3 < DAT_0007eb9c) {
      snprintf((char *)local_844,0x800,"Pattern test done, time cost %lds\n",local_830);
      FUN_0002e584(3,local_844,0);
      return;
    }
  }
  return;
}

