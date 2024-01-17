
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000271e8(void)

{
  longlong lVar1;
  longlong lVar2;
  double dVar3;
  pthread_mutex_t *__mutex;
  undefined uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  int *piVar10;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int *piVar16;
  int iVar17;
  int iVar18;
  int *piVar19;
  float fVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  int local_2a90;
  int *local_2a84;
  int local_2a5c [15];
  int local_2a20 [60];
  int local_2930 [60];
  undefined4 local_2840;
  undefined4 uStack_283c;
  undefined4 uStack_2838;
  undefined4 uStack_2834;
  undefined4 local_2830;
  undefined2 local_282c;
  int aiStack_2040 [1023];
  int iStack_1044;
  undefined4 local_1040;
  undefined4 uStack_103c;
  undefined4 uStack_1038;
  undefined4 uStack_1034;
  undefined2 uStack_1030;
  undefined local_102e;
  int *piVar11;
  
  prctl(0xf,"tuning_freq",0,0,0);
  while (iVar5 = FUN_00031d38(), __mutex = DAT_00027688, iVar5 != 2) {
    FUN_000304d4(1000);
  }
  while( true ) {
    pthread_mutex_lock(__mutex);
    iVar5 = FUN_00019ab4();
    uVar4 = DAT_0007eb78;
    if (iVar5 == DAT_00482a8c) break;
    pthread_mutex_unlock(__mutex);
    FUN_000304d4(1000);
  }
  DAT_0007eb78 = 0;
  pthread_mutex_unlock(DAT_00027688);
  FUN_000304d4(60000);
  if (3 < DAT_0007eb9c) {
    local_1040._0_1_ = s_tuning_freq_start_00063344[0];
    local_1040._1_1_ = s_tuning_freq_start_00063344[1];
    local_1040._2_1_ = s_tuning_freq_start_00063344[2];
    local_1040._3_1_ = s_tuning_freq_start_00063344[3];
    uStack_103c._0_1_ = s_tuning_freq_start_00063344[4];
    uStack_103c._1_1_ = s_tuning_freq_start_00063344[5];
    uStack_103c._2_1_ = s_tuning_freq_start_00063344[6];
    uStack_103c._3_1_ = s_tuning_freq_start_00063344[7];
    uStack_1038._0_1_ = s_tuning_freq_start_00063344[8];
    uStack_1038._1_1_ = s_tuning_freq_start_00063344[9];
    uStack_1038._2_1_ = s_tuning_freq_start_00063344[10];
    uStack_1038._3_1_ = s_tuning_freq_start_00063344[11];
    uStack_1034._0_1_ = s_tuning_freq_start_00063344[12];
    uStack_1034._1_1_ = s_tuning_freq_start_00063344[13];
    uStack_1034._2_1_ = s_tuning_freq_start_00063344[14];
    uStack_1034._3_1_ = s_tuning_freq_start_00063344[15];
    uStack_1030 = (undefined2)ram0x00063354;
    local_102e = (undefined)((uint)ram0x00063354 >> 0x10);
    FUN_0002e584(3,&iStack_1044 + 1,0);
  }
  FUN_00027058();
  dVar21 = DAT_00027680;
  dVar3 = DAT_00027678;
  if (DAT_0007eb68 < 1) {
    iVar5 = 0;
    iVar14 = DAT_00482a6c;
  }
  else {
    piVar16 = &iStack_1044 + 1;
    local_2a90 = 0;
    iVar5 = 0;
    iVar12 = DAT_00482a6c;
    iVar15 = DAT_00482a6c;
    while( true ) {
      iVar14 = iVar12;
      if (3 < DAT_0007eb9c) {
        snprintf((char *)&local_2840,0x800,"level %d, freq_curr %d, freq_next %d\n",iVar5,iVar15,
                 iVar14);
        FUN_0002e584(3,&local_2840,0);
      }
      iVar12 = 0;
      do {
        iVar6 = FUN_0001e29c(iVar12);
        if (iVar6 != 0) {
          FUN_0001aae4(DAT_0007edd0,iVar12,DAT_00482a70,iVar15,iVar14,0);
        }
        iVar6 = DAT_0002768c;
        iVar12 = iVar12 + 1;
      } while (iVar12 != 4);
      iVar15 = 0;
      memcpy(aiStack_2040,(void *)(DAT_0002768c + 4),0x1000);
      FUN_000304d4(180000);
      do {
        iVar12 = FUN_0001e29c(iVar15);
        if ((iVar12 != 0) && (iVar12 = FUN_0001e0f0(), 0 < iVar12)) {
          piVar19 = (int *)(iVar6 + iVar15 * 0x400);
          piVar9 = piVar16 + iVar15 * 0x100;
          piVar10 = aiStack_2040 + iVar15 * 0x100;
          do {
            piVar11 = piVar10 + 1;
            piVar19 = piVar19 + 1;
            *piVar9 = *piVar19 - *piVar10;
            piVar9 = piVar9 + 1;
            piVar10 = piVar11;
          } while (piVar11 != aiStack_2040 + iVar12 + iVar15 * 0x100);
        }
        iVar15 = iVar15 + 1;
      } while (iVar15 != 4);
      iVar12 = 0;
      FUN_00026bd4(iVar14,piVar16);
      iVar15 = local_2a90;
      do {
        iVar6 = FUN_0001e29c(iVar12);
        if (iVar6 != 0) {
          fVar20 = (float)FUN_00026f7c(iVar12,piVar16);
          *(int *)((int)local_2a20 + iVar15) = (int)fVar20;
          iVar6 = FUN_0001e0f0();
          if (iVar6 < 1) {
            iVar18 = 0;
          }
          else {
            iVar18 = 0;
            iVar13 = 0;
            piVar9 = &iStack_1044 + iVar12 * 0x100;
            do {
              iVar13 = iVar13 + 1;
              piVar9 = piVar9 + 1;
              iVar18 = iVar18 + *piVar9;
            } while (iVar6 != iVar13);
          }
          *(int *)((int)local_2930 + iVar15) = iVar18;
          if (3 < DAT_0007eb9c) {
            snprintf((char *)&local_2840,0x800,"chain %d, nonce_stdev %d, nonce_num %d\n",iVar12,
                     (int)fVar20,iVar18);
            FUN_0002e584(3,&local_2840,0);
          }
        }
        iVar12 = iVar12 + 1;
        iVar15 = iVar15 + 0x3c;
      } while (iVar12 != 4);
      uVar7 = FUN_0001e0f0();
      uVar8 = FUN_0001e130();
      lVar2 = (longlong)iVar14 * 180000000 * (longlong)(int)uVar7;
      lVar1 = (ulonglong)uVar8 *
              ((ulonglong)uVar7 * ((longlong)iVar14 * 180000000 & 0xffffffffU) & 0xffffffff);
      dVar22 = (double)FUN_000600b4((int)lVar1,
                                    uVar8 * (int)((ulonglong)lVar2 >> 0x20) +
                                    (int)lVar2 * ((int)uVar8 >> 0x1f) +
                                    (int)((ulonglong)lVar1 >> 0x20));
      iVar15 = (int)(longlong)(dVar22 * dVar3);
      local_2a5c[iVar5] = iVar15;
      if (3 < DAT_0007eb9c) {
        snprintf((char *)&local_2840,0x800,"ideal_nonce_num %d\n",iVar15);
        FUN_0002e584(3,&local_2840,0);
      }
      iVar13 = 0;
      iVar12 = iVar14 - DAT_0007eb6c;
      iVar6 = 0;
      iVar18 = local_2a90;
      do {
        iVar17 = iVar6 + 1;
        iVar6 = FUN_0001e29c(iVar6);
        if ((iVar6 != 0) && (*(int *)((int)local_2a20 + iVar18) < 0x28)) {
          dVar23 = (double)(longlong)iVar15 * dVar21;
          dVar22 = (double)(longlong)*(int *)((int)local_2930 + iVar18);
          if (dVar22 != dVar23 && dVar22 < dVar23 == (NAN(dVar22) || NAN(dVar23))) {
            iVar13 = iVar13 + 1;
          }
        }
        iVar18 = iVar18 + 0x3c;
        iVar6 = iVar17;
      } while (iVar17 != 4);
      iVar15 = FUN_0001e28c();
      iVar5 = iVar5 + 1;
      if (iVar15 <= iVar13) break;
      if ((DAT_0007eb68 <= iVar5) || (local_2a90 = local_2a90 + 4, iVar15 = iVar14, iVar5 == 0xf))
      goto LAB_00027694;
    }
    if (3 < DAT_0007eb9c) {
      local_2840._0_1_ = s_all_chain_tuing_done_000633bc[0];
      local_2840._1_1_ = s_all_chain_tuing_done_000633bc[1];
      local_2840._2_1_ = s_all_chain_tuing_done_000633bc[2];
      local_2840._3_1_ = s_all_chain_tuing_done_000633bc[3];
      uStack_283c._0_1_ = s_all_chain_tuing_done_000633bc[4];
      uStack_283c._1_1_ = s_all_chain_tuing_done_000633bc[5];
      uStack_283c._2_1_ = s_all_chain_tuing_done_000633bc[6];
      uStack_283c._3_1_ = s_all_chain_tuing_done_000633bc[7];
      uStack_2838._0_1_ = s_all_chain_tuing_done_000633bc[8];
      uStack_2838._1_1_ = s_all_chain_tuing_done_000633bc[9];
      uStack_2838._2_1_ = s_all_chain_tuing_done_000633bc[10];
      uStack_2838._3_1_ = s_all_chain_tuing_done_000633bc[11];
      uStack_2834._0_1_ = s_all_chain_tuing_done_000633bc[12];
      uStack_2834._1_1_ = s_all_chain_tuing_done_000633bc[13];
      uStack_2834._2_1_ = s_all_chain_tuing_done_000633bc[14];
      uStack_2834._3_1_ = s_all_chain_tuing_done_000633bc[15];
      local_2830._0_1_ = s_all_chain_tuing_done_000633bc[16];
      local_2830._1_1_ = s_all_chain_tuing_done_000633bc[17];
      local_2830._2_1_ = s_all_chain_tuing_done_000633bc[18];
      local_2830._3_1_ = s_all_chain_tuing_done_000633bc[19];
      local_282c = (undefined2)ram0x000633d0;
      FUN_0002e584(3,&local_2840,0);
    }
  }
LAB_00027694:
  dVar3 = DAT_00027938;
  local_2a84 = local_2930;
  iVar15 = 0;
  piVar16 = local_2a5c + 0xe;
  FUN_0001ead4(0xff);
  do {
    iVar12 = FUN_0001e29c(iVar15);
    if (iVar12 != 0) {
      iVar12 = iVar5 + -1;
      if (0 < iVar5) {
        iVar6 = 0x7fffffff;
        piVar9 = piVar16;
        do {
          piVar9 = piVar9 + 1;
          if (*piVar9 <= iVar6) {
            iVar6 = *piVar9;
          }
        } while (piVar9 != piVar16 + iVar5);
        iVar18 = 0;
        piVar9 = piVar16;
        do {
          piVar9 = piVar9 + 1;
          iVar12 = iVar18;
          if (*piVar9 < 0x28) {
            dVar22 = (double)(longlong)local_2a5c[iVar18] * dVar3;
            dVar21 = (double)(longlong)local_2a84[iVar18];
            if (dVar21 != dVar22 && dVar21 < dVar22 == (NAN(dVar21) || NAN(dVar22))) break;
          }
          if ((double)(longlong)*piVar9 < (double)(longlong)iVar6 * 1.25) {
            dVar22 = (double)(longlong)local_2a5c[iVar18] * dVar3;
            dVar21 = (double)(longlong)local_2a84[iVar18];
            if (dVar21 != dVar22 && dVar21 < dVar22 == (NAN(dVar21) || NAN(dVar22))) break;
          }
          iVar18 = iVar18 + 1;
          iVar12 = iVar5 + -1;
        } while (iVar5 != iVar18);
      }
      iVar6 = DAT_00482a6c - DAT_0007eb6c * iVar12;
      if (3 < DAT_0007eb9c) {
        snprintf((char *)&local_2840,0x800,"chain %d best level %d, best freq %d\n",iVar15,iVar12,
                 iVar6);
        FUN_0002e584(3,&local_2840,0);
      }
      FUN_0001aae4(DAT_0007edd0,iVar15,DAT_00482a70,iVar14,iVar6,0);
    }
    iVar15 = iVar15 + 1;
    local_2a84 = local_2a84 + 0xf;
    piVar16 = piVar16 + 0xf;
    if (iVar15 == 4) {
      DAT_0007eb78 = uVar4;
      if (3 < DAT_0007eb9c) {
        local_2840._0_1_ = s_tuning_freq_end_000633fc[0];
        local_2840._1_1_ = s_tuning_freq_end_000633fc[1];
        local_2840._2_1_ = s_tuning_freq_end_000633fc[2];
        local_2840._3_1_ = s_tuning_freq_end_000633fc[3];
        uStack_283c._0_1_ = s_tuning_freq_end_000633fc[4];
        uStack_283c._1_1_ = s_tuning_freq_end_000633fc[5];
        uStack_283c._2_1_ = s_tuning_freq_end_000633fc[6];
        uStack_283c._3_1_ = s_tuning_freq_end_000633fc[7];
        uStack_2838._0_1_ = s_tuning_freq_end_000633fc[8];
        uStack_2838._1_1_ = s_tuning_freq_end_000633fc[9];
        uStack_2838._2_1_ = s_tuning_freq_end_000633fc[10];
        uStack_2838._3_1_ = s_tuning_freq_end_000633fc[11];
        uStack_2834._0_1_ = s_tuning_freq_end_000633fc[12];
        uStack_2834._1_1_ = s_tuning_freq_end_000633fc[13];
        uStack_2834._2_1_ = s_tuning_freq_end_000633fc[14];
        uStack_2834._3_1_ = s_tuning_freq_end_000633fc[15];
        local_2830 = CONCAT31(local_2830._1_3_,(char)ram0x0006340c);
        FUN_0002e584(3,&local_2840,0);
      }
      return 0;
    }
  } while( true );
}

