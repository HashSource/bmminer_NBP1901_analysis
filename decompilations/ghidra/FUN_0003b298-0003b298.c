
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0003b298(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float **ppfVar7;
  uint uVar8;
  float **ppfVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  bool bVar13;
  float fVar14;
  float *pfVar15;
  float fVar16;
  uint local_968;
  uint local_964 [15];
  float *apfStack_928 [60];
  undefined4 local_838;
  undefined4 uStack_834;
  undefined4 uStack_830;
  undefined4 uStack_82c;
  undefined4 local_828;
  undefined4 uStack_824;
  undefined4 local_820;
  undefined local_81c;
  
  if (3 < DAT_0007eb9c) {
    local_838 = s_Do_freq_tuning_basic__00068478._0_4_;
    uStack_834 = s_Do_freq_tuning_basic__00068478._4_4_;
    uStack_830 = s_Do_freq_tuning_basic__00068478._8_4_;
    uStack_82c = s_Do_freq_tuning_basic__00068478._12_4_;
    local_828 = s_Do_freq_tuning_basic__00068478._16_4_;
    uStack_824._0_3_ = (undefined3)ram0x0006848c;
    FUN_0002e584(3,&local_838,0);
  }
  piVar12 = DAT_004fcb40;
  memset(DAT_004fcb40 + 1,0,0x30);
  *piVar12 = param_1;
  FUN_00039a7c();
  FUN_000361e4(*(undefined4 *)*DAT_004fcb40);
  iVar2 = FUN_0003ac6c();
  if (iVar2 == 0) {
    FUN_0001a470((float)(ulonglong)*(uint *)(*DAT_004fcb40 + 4),0xff,DAT_00482a70,
                 *(undefined *)(*DAT_004fcb40 + 0x14));
    if (3 < DAT_0007eb9c) {
      local_838._0_2_ = 10;
      FUN_0002ea54(3,&local_838,0);
      if (3 < DAT_0007eb9c) {
        local_838._0_1_ = s_>>>>_Do_tuning_parallel__00068490[0];
        local_838._1_1_ = s_>>>>_Do_tuning_parallel__00068490[1];
        local_838._2_1_ = s_>>>>_Do_tuning_parallel__00068490[2];
        local_838._3_1_ = s_>>>>_Do_tuning_parallel__00068490[3];
        uStack_834._0_1_ = s_>>>>_Do_tuning_parallel__00068490[4];
        uStack_834._1_1_ = s_>>>>_Do_tuning_parallel__00068490[5];
        uStack_834._2_1_ = s_>>>>_Do_tuning_parallel__00068490[6];
        uStack_834._3_1_ = s_>>>>_Do_tuning_parallel__00068490[7];
        uStack_830._0_1_ = s_>>>>_Do_tuning_parallel__00068490[8];
        uStack_830._1_1_ = s_>>>>_Do_tuning_parallel__00068490[9];
        uStack_830._2_1_ = s_>>>>_Do_tuning_parallel__00068490[10];
        uStack_830._3_1_ = s_>>>>_Do_tuning_parallel__00068490[11];
        uStack_82c._0_1_ = s_>>>>_Do_tuning_parallel__00068490[12];
        uStack_82c._1_1_ = s_>>>>_Do_tuning_parallel__00068490[13];
        uStack_82c._2_1_ = s_>>>>_Do_tuning_parallel__00068490[14];
        uStack_82c._3_1_ = s_>>>>_Do_tuning_parallel__00068490[15];
        local_828._0_1_ = s_>>>>_Do_tuning_parallel__00068490[16];
        local_828._1_1_ = s_>>>>_Do_tuning_parallel__00068490[17];
        local_828._2_1_ = s_>>>>_Do_tuning_parallel__00068490[18];
        local_828._3_1_ = s_>>>>_Do_tuning_parallel__00068490[19];
        uStack_824._0_1_ = s_>>>>_Do_tuning_parallel__00068490[20];
        uStack_824._1_1_ = s_>>>>_Do_tuning_parallel__00068490[21];
        uStack_824._2_1_ = s_>>>>_Do_tuning_parallel__00068490[22];
        uStack_824._3_1_ = s_>>>>_Do_tuning_parallel__00068490[23];
        local_820._0_2_ = (short)ram0x000684a8;
        FUN_0002e584(3,&local_838,0);
      }
    }
    iVar2 = 0;
    do {
      iVar3 = FUN_0001e29c(iVar2);
      if (iVar3 != 0) {
        FUN_0003962c(iVar2,1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 != 4);
    iVar2 = *DAT_004fcb40;
    uVar11 = *(uint *)(iVar2 + 4);
    iVar3 = *(int *)(iVar2 + 0x10);
    uVar8 = *(uint *)(iVar2 + 0xc);
    if (3 < DAT_0007eb9c) {
      snprintf((char *)&local_838,0x800,
               "freq_prev = %d, freq_start = %d, freq_step = %d, freq_min = %d\n",uVar11,uVar11,
               iVar3,uVar8);
      FUN_0002e584(3,&local_838,0);
    }
    local_968 = uVar11;
    if (uVar11 < uVar8) {
      iVar10 = 0;
      iVar2 = 0;
    }
    else {
      iVar10 = 0;
      do {
        if (DAT_0007eb9c < 4) {
LAB_0003b3cc:
          iVar2 = FUN_00039998();
        }
        else {
          local_838._0_2_ = 10;
          FUN_0002ea54(3,&local_838,0);
          if (DAT_0007eb9c < 4) goto LAB_0003b3cc;
          snprintf((char *)&local_838,0x800,">>>> freq_curr = %d\n",local_968);
          FUN_0002e584(3,&local_838,0);
          iVar2 = FUN_00039998();
        }
        if (iVar2 == 0) {
          iVar2 = 0;
          if (3 < DAT_0007eb9c) {
            local_81c = (undefined)unique0x10000236;
            local_838 = s_All_ready_chain_done__exit__00068504._0_4_;
            uStack_834 = s_All_ready_chain_done__exit__00068504._4_4_;
            uStack_830 = s_All_ready_chain_done__exit__00068504._8_4_;
            uStack_82c = s_All_ready_chain_done__exit__00068504._12_4_;
            local_828 = s_All_ready_chain_done__exit__00068504._16_4_;
            uStack_824 = s_All_ready_chain_done__exit__00068504._20_4_;
            local_820 = s_All_ready_chain_done__exit__00068504._24_4_;
            FUN_0002e584(3,&local_838,0);
          }
          goto LAB_0003b4e0;
        }
        iVar2 = 0;
        do {
          iVar4 = FUN_0001e29c(iVar2);
          if ((iVar4 != 0) && (iVar4 = FUN_000397a0(iVar2), iVar4 == 1)) {
            FUN_0001aae4((float)(longlong)DAT_0007edd0,iVar2,DAT_00482a70,uVar11,local_968,
                         *(undefined *)(*DAT_004fcb40 + 0x15));
          }
          uVar1 = local_968;
          iVar2 = iVar2 + 1;
        } while (iVar2 != 4);
        iVar2 = FUN_0003ac6c();
        if (iVar2 != 0) {
          if (3 < DAT_0007eb9c) {
            local_838._0_1_ = s_Set_voltage_failed__exit__00068524[0];
            local_838._1_1_ = s_Set_voltage_failed__exit__00068524[1];
            local_838._2_1_ = s_Set_voltage_failed__exit__00068524[2];
            local_838._3_1_ = s_Set_voltage_failed__exit__00068524[3];
            uStack_834._0_1_ = s_Set_voltage_failed__exit__00068524[4];
            uStack_834._1_1_ = s_Set_voltage_failed__exit__00068524[5];
            uStack_834._2_1_ = s_Set_voltage_failed__exit__00068524[6];
            uStack_834._3_1_ = s_Set_voltage_failed__exit__00068524[7];
            uStack_830._0_1_ = s_Set_voltage_failed__exit__00068524[8];
            uStack_830._1_1_ = s_Set_voltage_failed__exit__00068524[9];
            uStack_830._2_1_ = s_Set_voltage_failed__exit__00068524[10];
            uStack_830._3_1_ = s_Set_voltage_failed__exit__00068524[11];
            uStack_82c._0_1_ = s_Set_voltage_failed__exit__00068524[12];
            uStack_82c._1_1_ = s_Set_voltage_failed__exit__00068524[13];
            uStack_82c._2_1_ = s_Set_voltage_failed__exit__00068524[14];
            uStack_82c._3_1_ = s_Set_voltage_failed__exit__00068524[15];
            local_828._0_1_ = s_Set_voltage_failed__exit__00068524[16];
            local_828._1_1_ = s_Set_voltage_failed__exit__00068524[17];
            local_828._2_1_ = s_Set_voltage_failed__exit__00068524[18];
            local_828._3_1_ = s_Set_voltage_failed__exit__00068524[19];
            uStack_824._0_1_ = s_Set_voltage_failed__exit__00068524[20];
            uStack_824._1_1_ = s_Set_voltage_failed__exit__00068524[21];
            uStack_824._2_1_ = s_Set_voltage_failed__exit__00068524[22];
            uStack_824._3_1_ = s_Set_voltage_failed__exit__00068524[23];
            local_820._0_3_ = (undefined3)ram0x0006853c;
            FUN_0002e584(3,&local_838,0);
          }
          goto LAB_0003b4e0;
        }
        uVar11 = 0x14;
        FUN_000321b8(local_968,DAT_0007eb58);
        FUN_0003a86c(&local_968);
        iVar4 = FUN_000391f4();
        iVar2 = 0;
        do {
          iVar5 = FUN_0001e29c(iVar2);
          if ((iVar5 != 0) && (iVar5 = FUN_000397a0(iVar2), iVar5 == 1)) {
            FUN_0003a054(iVar2,iVar4);
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 != 4);
        iVar2 = 0;
        do {
          iVar5 = FUN_0001e29c(iVar2);
          if ((iVar5 != 0) && (iVar5 = FUN_000397a0(iVar2), iVar5 == 1)) {
            iVar5 = *DAT_004fcb40;
            iVar5 = FUN_00039b60(*(undefined4 *)(iVar5 + 0x1c),*(undefined4 *)(iVar5 + 0x20),
                                 *(undefined4 *)(iVar5 + 0x24),iVar2);
            if (iVar5 == 0) {
              DAT_004fcb40[iVar2 + 5] = 1;
            }
            else {
              FUN_0003962c(iVar2,2);
            }
            fVar14 = (float)FUN_0003a828(iVar2,iVar4);
            fVar16 = (float)DAT_004fcb40[iVar2 + 9];
            if (fVar14 != fVar16 && fVar14 < fVar16 == (NAN(fVar14) || NAN(fVar16))) {
              DAT_004fcb40[iVar2 + 9] = (int)fVar14;
            }
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 != 4);
        iVar2 = 0;
        piVar12 = (int *)(&DAT_0080a894 + iVar4);
        ppfVar9 = apfStack_928;
        ppfVar7 = ppfVar9 + iVar10 * 4;
        do {
          iVar4 = FUN_0001e29c(iVar2);
          bVar13 = iVar4 != 0;
          iVar2 = iVar2 + 1;
          if (bVar13) {
            ppfVar9 = (float **)*piVar12;
          }
          if (bVar13) {
            uVar11 = local_968;
          }
          piVar12 = piVar12 + 1;
          if (bVar13) {
            *ppfVar7 = (float *)ppfVar9;
            local_964[iVar10] = uVar11;
          }
          ppfVar7 = ppfVar7 + 1;
        } while (iVar2 != 4);
        iVar10 = iVar10 + 1;
        local_968 = local_968 - iVar3;
        uVar11 = uVar1;
      } while (uVar8 <= local_968);
      iVar2 = 0;
    }
LAB_0003b4e0:
    iVar3 = 0;
    iVar4 = FUN_0001e29c(0);
    uVar11 = DAT_0007eb9c;
    while( true ) {
      DAT_0007eb9c = uVar11;
      if (iVar4 != 0) {
        ppfVar7 = apfStack_928 + iVar3;
        iVar5 = 0;
        iVar4 = 0;
        while ((iVar6 = iVar4, iVar5 < iVar10 + -1 &&
               (pfVar15 = *ppfVar7, iVar6 = iVar5, 5.0 <= (float)pfVar15))) {
          ppfVar7 = ppfVar7 + 4;
          iVar5 = iVar5 + 1;
          fVar14 = (float)*ppfVar7 * 1.5;
          if ((float)pfVar15 != fVar14 &&
              (float)pfVar15 < fVar14 == (NAN((float)pfVar15) || NAN(fVar14))) {
            iVar4 = iVar5;
          }
        }
        uVar8 = local_964[iVar6];
        DAT_004fcb40[iVar3 + 1] = uVar8;
        if (3 < uVar11) {
          snprintf((char *)&local_838,0x800,"chain %d best level %d, freq %d\n",iVar3,iVar6,uVar8);
          FUN_0002e584(3,&local_838,0);
        }
      }
      iVar3 = iVar3 + 1;
      if (iVar3 == 4) break;
      iVar4 = FUN_0001e29c(iVar3);
      uVar11 = DAT_0007eb9c;
    }
  }
  return iVar2;
}

