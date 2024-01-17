
void FUN_0003403c(void)

{
  undefined uVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  short *psVar12;
  int iVar13;
  uint uVar14;
  undefined4 uVar15;
  int local_864;
  int local_85c;
  int local_84c;
  undefined auStack_838 [8];
  char acStack_830 [2052];
  
  uVar14 = 0;
  local_85c = 0;
  uVar5 = FUN_0003388c();
  FUN_0001629c();
  do {
    iVar6 = FUN_0001e29c(uVar14);
    if (iVar6 != 0) {
      local_84c = 0;
      FUN_0001f0e0(uVar14,1,0,DAT_00482a70);
      do {
        DAT_0008110c = 1;
        FUN_0002bdd0();
        memset(&DAT_0059cd98 + uVar14 * 0x100000,0,0x100000);
        iVar6 = FUN_0001e0f0();
        if (0 < iVar6) {
          local_864 = 0;
          do {
            iVar7 = FUN_0001e160();
            FUN_00050da8(uVar14 & 0xff,local_864 * iVar7);
            FUN_000302a0(auStack_838);
            do {
              pthread_mutex_lock((pthread_mutex_t *)&DAT_000810dc);
              iVar7 = DAT_005945c0;
              if (0 < DAT_005945c0) {
                iVar13 = 0;
                do {
                  DAT_005945c0 = DAT_005945c0 + -1;
                  iVar13 = iVar13 + 1;
                  uVar11 = DAT_005945bc + 1;
                  if (uVar11 < 0x1ff) {
                    DAT_005945bc = uVar11;
                  }
                  iVar10 = uVar11 * 8;
                  if (0x1fe < uVar11) {
                    DAT_005945bc = 0;
                  }
                  if ((*(byte *)((int)&DAT_005945c0 + iVar10 + 3) == uVar14) &&
                     (*(char *)((int)&DAT_005945c0 + iVar10 + 2) == '@')) {
                    uVar1 = *(undefined *)((int)&DAT_005945c0 + iVar10 + 1);
                    uVar15 = (&DAT_005945bc)[uVar11 * 2];
                    uVar8 = FUN_0001e160();
                    iVar9 = FUN_0005faf8(uVar1,uVar8);
                    uVar1 = *(undefined *)((int)&DAT_005945c0 + iVar10 + 1);
                    bVar2 = *(byte *)((int)&DAT_005945c0 + iVar10 + 3);
                    *(short *)(&DAT_0059cd9a +
                              ((*(ushort *)((int)&DAT_005945bc + iVar10 + 2) & 0x3ff) +
                              ((uVar14 & 3) * 0x100 + iVar9) * 0x400) * 4) = (short)uVar15;
                    uVar8 = FUN_0001e160();
                    iVar9 = FUN_0005faf8(uVar1,uVar8);
                    *(undefined2 *)
                     (&DAT_0059cd98 +
                     ((*(ushort *)((int)&DAT_005945bc + iVar10 + 2) & 0x3ff) +
                     (iVar9 + (bVar2 & 3) * 0x100) * 0x400) * 4) = 1;
                  }
                } while (iVar7 != iVar13);
              }
              pthread_mutex_unlock((pthread_mutex_t *)&DAT_000810dc);
              usleep(1000);
              FUN_000302a0(acStack_830);
              iVar7 = FUN_00030578(acStack_830,auStack_838);
            } while (iVar7 < 100);
            local_864 = local_864 + 1;
          } while (iVar6 != local_864);
        }
        iVar6 = FUN_0001e0f0();
        if (iVar6 < 1) {
          if (3 < DAT_0007eb9c) {
            iVar7 = 0;
            bVar4 = false;
            goto LAB_00034608;
          }
          iVar7 = 0;
LAB_000345b0:
          if (3 < DAT_0007eb9c) {
            snprintf(acStack_830,0x800,"bad count is acceptable = %d",iVar7);
            FUN_0002e584(3,acStack_830,0);
          }
          usleep(1000000);
          break;
        }
        bVar4 = false;
        iVar13 = 0;
        iVar7 = 0;
        do {
          iVar10 = FUN_0001e120();
          if (0 < iVar10) {
            bVar3 = false;
            iVar9 = 0;
            psVar12 = (short *)(&DAT_0059cd98 + (iVar13 + local_85c) * 0x1000);
            do {
              if (psVar12[1] == 0) {
                if (*psVar12 == 0) {
                  if (3 < DAT_0007eb9c) {
                    snprintf(acStack_830,0x800,"core %8d in asic %d not returned",iVar9,iVar13);
                    FUN_0002e584(3,acStack_830,0);
                  }
                }
                else if (3 < DAT_0007eb9c) {
                  snprintf(acStack_830,0x800,"core %8d data in asic %d is zero",iVar9,iVar13);
                  FUN_0002e584(3,acStack_830,0);
                }
                bVar3 = true;
                iVar7 = iVar7 + 1;
                bVar4 = true;
              }
              iVar9 = iVar9 + 1;
              psVar12 = psVar12 + 2;
            } while (iVar10 != iVar9);
            if (bVar3) {
              if (3 < DAT_0007eb9c) {
                snprintf(acStack_830,0x800,"reopen asic %d",iVar13);
                FUN_0002e584(3,acStack_830,0);
              }
              uVar11 = uVar14 & 0xff;
              iVar10 = FUN_0001e160();
              FUN_00050cc4(uVar11,iVar13 * iVar10,1);
              usleep(10000);
              iVar10 = FUN_0001e160();
              FUN_00050cc4(uVar11,iVar13 * iVar10,0);
              usleep(10000);
              iVar10 = FUN_0001e160();
              FUN_000515d0(uVar11,iVar13 * iVar10,(char)uVar5,0);
              FUN_000304d4(10);
              iVar10 = FUN_0001e160();
              FUN_00051668(uVar11,iVar13 * iVar10,(char)((uint)uVar5 >> 8),
                           (char)((uint)uVar5 >> 0x10),0);
              iVar10 = FUN_0001e160();
              FUN_00050df8(uVar11,iVar13 * iVar10);
              usleep(10000);
              if (3 < DAT_0007eb9c) {
                snprintf(acStack_830,0x800,"reset clock asic %d",iVar13);
                FUN_0002e584(3,acStack_830,0);
              }
              iVar10 = FUN_0001e160();
              FUN_000517f8(uVar11,iVar13 * iVar10,0);
              iVar10 = FUN_0001e160();
              FUN_00051794(uVar11,iVar13 * iVar10);
              usleep(100000);
              iVar10 = FUN_0001e160();
              FUN_000517f8(uVar11,iVar13 * iVar10,1);
            }
          }
          iVar13 = iVar13 + 1;
        } while (iVar6 != iVar13);
        if (3 < DAT_0007eb9c) {
LAB_00034608:
          local_84c = local_84c + 1;
          snprintf(acStack_830,0x800,
                   "chain %d, bad core num %8d, rate = %.2f ========================round %d",uVar14
                   ,iVar7);
          FUN_0002e584(3,acStack_830,0);
        }
        if (iVar7 < 0x9c) goto LAB_000345b0;
        usleep(1000000);
        if (1 < local_84c) {
          bVar4 = false;
        }
      } while (bVar4);
    }
    uVar14 = uVar14 + 1;
    local_85c = local_85c + 0x100;
    if (uVar14 == 4) {
      DAT_0008110c = 0;
      FUN_000162b0();
      return;
    }
  } while( true );
}

