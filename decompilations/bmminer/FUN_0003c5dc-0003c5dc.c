
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0003c5dc(void)

{
  short sVar1;
  double dVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  int extraout_r1;
  uint uVar10;
  int *piVar11;
  int *piVar12;
  uint *puVar13;
  uint uVar14;
  int *piVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  int *piVar18;
  int iVar19;
  int iVar20;
  uint *puVar21;
  float fVar22;
  float fVar23;
  undefined8 uVar24;
  undefined4 local_1048;
  undefined local_1044 [4];
  undefined4 uStack_1040;
  undefined4 uStack_103c;
  undefined4 local_1038;
  undefined4 uStack_1034;
  undefined4 uStack_1030;
  undefined4 uStack_102c;
  undefined4 local_1028;
  undefined4 local_1024;
  undefined4 local_1020;
  undefined4 local_101c;
  undefined4 local_1018;
  
  if (3 < DAT_0007eb9c) {
    local_1038 = s_Do_freq_tuning_fine__000687d0._0_4_;
    uStack_1034 = s_Do_freq_tuning_fine__000687d0._4_4_;
    uStack_1030 = s_Do_freq_tuning_fine__000687d0._8_4_;
    uStack_102c = s_Do_freq_tuning_fine__000687d0._12_4_;
    local_1028 = s_Do_freq_tuning_fine__000687d0._16_4_;
    local_1024._0_2_ = (short)ram0x000687e4;
    FUN_0002e584(3,&local_1038,0);
  }
  iVar19 = 0;
  do {
    iVar4 = FUN_0001e29c(iVar19);
    if ((iVar4 != 0) && (iVar4 = FUN_0001e0f0(), iVar4 != 0)) {
      iVar5 = *DAT_004fcb44;
      piVar11 = DAT_004fcb44 + iVar4 + iVar19 * 0x100;
      piVar18 = DAT_004fcb44 + iVar19 * 0x100;
      do {
        piVar18 = piVar18 + 1;
        *piVar18 = *(int *)(iVar5 + iVar19 * 4 + 4);
      } while (piVar18 != piVar11);
    }
    iVar19 = iVar19 + 1;
  } while (iVar19 != 4);
  FUN_000361e4(*(undefined4 *)*DAT_004fcb44);
  memcpy(DAT_004fcb44 + 0x405,DAT_004fcb44 + 1,0x1000);
  if (3 < DAT_0007eb9c) {
    local_1038._0_2_ = 10;
    FUN_0002ea54(3,&local_1038,0);
    if (3 < DAT_0007eb9c) {
      local_1038._0_1_ = s_>>>>_Do_freq_tuning_fine_paralle_000687e8[0];
      local_1038._1_1_ = s_>>>>_Do_freq_tuning_fine_paralle_000687e8[1];
      local_1038._2_1_ = s_>>>>_Do_freq_tuning_fine_paralle_000687e8[2];
      local_1038._3_1_ = s_>>>>_Do_freq_tuning_fine_paralle_000687e8[3];
      uStack_1034._0_1_ = s_>>>>_Do_freq_tuning_fine_paralle_000687e8[4];
      uStack_1034._1_1_ = s_>>>>_Do_freq_tuning_fine_paralle_000687e8[5];
      uStack_1034._2_1_ = s_>>>>_Do_freq_tuning_fine_paralle_000687e8[6];
      uStack_1034._3_1_ = s_>>>>_Do_freq_tuning_fine_paralle_000687e8[7];
      uStack_1030._0_1_ = s_>>>>_Do_freq_tuning_fine_paralle_000687e8[8];
      uStack_1030._1_1_ = s_>>>>_Do_freq_tuning_fine_paralle_000687e8[9];
      uStack_1030._2_1_ = s_>>>>_Do_freq_tuning_fine_paralle_000687e8[10];
      uStack_1030._3_1_ = s_>>>>_Do_freq_tuning_fine_paralle_000687e8[11];
      uStack_102c._0_1_ = s_>>>>_Do_freq_tuning_fine_paralle_000687e8[12];
      uStack_102c._1_1_ = s_>>>>_Do_freq_tuning_fine_paralle_000687e8[13];
      uStack_102c._2_1_ = s_>>>>_Do_freq_tuning_fine_paralle_000687e8[14];
      uStack_102c._3_1_ = s_>>>>_Do_freq_tuning_fine_paralle_000687e8[15];
      local_1028._0_1_ = s_>>>>_Do_freq_tuning_fine_paralle_000687e8[16];
      local_1028._1_1_ = s_>>>>_Do_freq_tuning_fine_paralle_000687e8[17];
      local_1028._2_1_ = s_>>>>_Do_freq_tuning_fine_paralle_000687e8[18];
      local_1028._3_1_ = s_>>>>_Do_freq_tuning_fine_paralle_000687e8[19];
      local_1024._0_1_ = s_>>>>_Do_freq_tuning_fine_paralle_000687e8[20];
      local_1024._1_1_ = s_>>>>_Do_freq_tuning_fine_paralle_000687e8[21];
      local_1024._2_1_ = s_>>>>_Do_freq_tuning_fine_paralle_000687e8[22];
      local_1024._3_1_ = s_>>>>_Do_freq_tuning_fine_paralle_000687e8[23];
      local_1020._0_1_ = s_>>>>_Do_freq_tuning_fine_paralle_000687e8[24];
      local_1020._1_1_ = s_>>>>_Do_freq_tuning_fine_paralle_000687e8[25];
      local_1020._2_1_ = s_>>>>_Do_freq_tuning_fine_paralle_000687e8[26];
      local_1020._3_1_ = s_>>>>_Do_freq_tuning_fine_paralle_000687e8[27];
      local_101c._0_1_ = s_>>>>_Do_freq_tuning_fine_paralle_000687e8[28];
      local_101c._1_1_ = s_>>>>_Do_freq_tuning_fine_paralle_000687e8[29];
      local_101c._2_1_ = s_>>>>_Do_freq_tuning_fine_paralle_000687e8[30];
      local_101c._3_1_ = s_>>>>_Do_freq_tuning_fine_paralle_000687e8[31];
      local_1018._0_1_ = s_>>>>_Do_freq_tuning_fine_paralle_000687e8[32];
      local_1018._1_1_ = s_>>>>_Do_freq_tuning_fine_paralle_000687e8[33];
      local_1018._2_1_ = s_>>>>_Do_freq_tuning_fine_paralle_000687e8[34];
      local_1018._3_1_ = s_>>>>_Do_freq_tuning_fine_paralle_000687e8[35];
      FUN_0002e584(3,&local_1038,0);
    }
  }
  iVar19 = 0;
  do {
    iVar4 = FUN_0001e29c(iVar19);
    if (iVar4 != 0) {
      iVar4 = FUN_0003bae4(iVar19);
      uVar6 = 2;
      if (iVar4 == 0) {
        uVar6 = 1;
      }
      FUN_0003962c(iVar19,uVar6);
    }
    dVar2 = DAT_0003c828;
    iVar19 = iVar19 + 1;
  } while (iVar19 != 4);
LAB_0003c6a4:
  iVar19 = FUN_00039998();
  if (iVar19 == 0) {
    iVar19 = 0;
  }
  else {
    if (3 < DAT_0007eb9c) {
      snprintf((char *)&local_1038,0x800,"is_need_serial = %d\n",0);
      FUN_0002e584(3,&local_1038,0);
      if (3 < DAT_0007eb9c) {
        local_1038._0_2_ = 10;
        FUN_0002ea54(3,&local_1038,0);
        if (3 < DAT_0007eb9c) {
          local_1038._0_1_ = s_>>>>_Do_single_grade_tuning__00068824[0];
          local_1038._1_1_ = s_>>>>_Do_single_grade_tuning__00068824[1];
          local_1038._2_1_ = s_>>>>_Do_single_grade_tuning__00068824[2];
          local_1038._3_1_ = s_>>>>_Do_single_grade_tuning__00068824[3];
          uStack_1034._0_1_ = s_>>>>_Do_single_grade_tuning__00068824[4];
          uStack_1034._1_1_ = s_>>>>_Do_single_grade_tuning__00068824[5];
          uStack_1034._2_1_ = s_>>>>_Do_single_grade_tuning__00068824[6];
          uStack_1034._3_1_ = s_>>>>_Do_single_grade_tuning__00068824[7];
          uStack_1030._0_1_ = s_>>>>_Do_single_grade_tuning__00068824[8];
          uStack_1030._1_1_ = s_>>>>_Do_single_grade_tuning__00068824[9];
          uStack_1030._2_1_ = s_>>>>_Do_single_grade_tuning__00068824[10];
          uStack_1030._3_1_ = s_>>>>_Do_single_grade_tuning__00068824[11];
          uStack_102c._0_1_ = s_>>>>_Do_single_grade_tuning__00068824[12];
          uStack_102c._1_1_ = s_>>>>_Do_single_grade_tuning__00068824[13];
          uStack_102c._2_1_ = s_>>>>_Do_single_grade_tuning__00068824[14];
          uStack_102c._3_1_ = s_>>>>_Do_single_grade_tuning__00068824[15];
          local_1028._0_1_ = s_>>>>_Do_single_grade_tuning__00068824[16];
          local_1028._1_1_ = s_>>>>_Do_single_grade_tuning__00068824[17];
          local_1028._2_1_ = s_>>>>_Do_single_grade_tuning__00068824[18];
          local_1028._3_1_ = s_>>>>_Do_single_grade_tuning__00068824[19];
          local_1024._0_1_ = s_>>>>_Do_single_grade_tuning__00068824[20];
          local_1024._1_1_ = s_>>>>_Do_single_grade_tuning__00068824[21];
          local_1024._2_1_ = s_>>>>_Do_single_grade_tuning__00068824[22];
          local_1024._3_1_ = s_>>>>_Do_single_grade_tuning__00068824[23];
          local_1020._0_1_ = s_>>>>_Do_single_grade_tuning__00068824[24];
          local_1020._1_1_ = s_>>>>_Do_single_grade_tuning__00068824[25];
          local_1020._2_1_ = s_>>>>_Do_single_grade_tuning__00068824[26];
          local_1020._3_1_ = s_>>>>_Do_single_grade_tuning__00068824[27];
          local_101c._0_2_ = (short)ram0x00068840;
          FUN_0002e584(3,&local_1038,0);
        }
      }
    }
    iVar19 = 0;
    do {
      iVar4 = FUN_0001e29c(iVar19);
      if (((iVar4 != 0) && (iVar4 = FUN_000397a0(iVar19), iVar4 == 1)) && (3 < DAT_0007eb9c)) {
        snprintf((char *)&local_1038,0x800,"chain = %d, grade = %d\n",iVar19,
                 DAT_004fcb44[iVar19 + 0xc05]);
        FUN_0002e584(3,&local_1038,0);
      }
      iVar19 = iVar19 + 1;
    } while (iVar19 != 4);
    if (3 < DAT_0007eb9c) {
      local_1038._0_1_ = s_Board_init_start__0006885c[0];
      local_1038._1_1_ = s_Board_init_start__0006885c[1];
      local_1038._2_1_ = s_Board_init_start__0006885c[2];
      local_1038._3_1_ = s_Board_init_start__0006885c[3];
      uStack_1034._0_1_ = s_Board_init_start__0006885c[4];
      uStack_1034._1_1_ = s_Board_init_start__0006885c[5];
      uStack_1034._2_1_ = s_Board_init_start__0006885c[6];
      uStack_1034._3_1_ = s_Board_init_start__0006885c[7];
      uStack_1030._0_1_ = s_Board_init_start__0006885c[8];
      uStack_1030._1_1_ = s_Board_init_start__0006885c[9];
      uStack_1030._2_1_ = s_Board_init_start__0006885c[10];
      uStack_1030._3_1_ = s_Board_init_start__0006885c[11];
      uStack_102c._0_1_ = s_Board_init_start__0006885c[12];
      uStack_102c._1_1_ = s_Board_init_start__0006885c[13];
      uStack_102c._2_1_ = s_Board_init_start__0006885c[14];
      uStack_102c._3_1_ = s_Board_init_start__0006885c[15];
      local_1028._0_3_ = (undefined3)ram0x0006886c;
      FUN_0002e584(3,&local_1038,0);
    }
    iVar19 = FUN_00039fb4(*(undefined4 *)(*DAT_004fcb44 + 0x28));
    if (iVar19 == 0) {
      FUN_00039a7c();
      piVar11 = DAT_004fcb44;
      DAT_004fcb44[0xc09] = 0;
      piVar11[0xc0a] = 0;
      piVar11[0xc0b] = 0;
      piVar11[0xc0c] = 0;
      memset(&local_1038,0,0x1000);
      iVar19 = 0;
      do {
        iVar4 = FUN_0001e29c(iVar19);
        if (iVar4 != 0) {
          iVar4 = FUN_000397a0(iVar19);
          if (iVar4 == 1) {
            iVar4 = FUN_0001e0f0();
            if (iVar4 != 0) {
              piVar18 = DAT_004fcb44 + iVar19 * 0x100;
              piVar11 = &local_1038 + iVar19 * 0x100;
              do {
                piVar18 = piVar18 + 1;
                *piVar11 = *piVar18;
                piVar11 = piVar11 + 1;
              } while (piVar18 != DAT_004fcb44 + iVar4 + iVar19 * 0x100);
            }
          }
          else {
            uVar14 = FUN_0003b8a0(iVar19,DAT_004fcb44 + 1);
            if (*(uint *)(*DAT_004fcb44 + 0x18) < uVar14) {
              iVar4 = FUN_0001e0f0();
              if (iVar4 != 0) {
                puVar16 = &local_1038 + iVar19 * 0x100;
                do {
                  puVar17 = puVar16 + 1;
                  *puVar16 = *(undefined4 *)(*DAT_004fcb44 + 0x18);
                  puVar16 = puVar17;
                } while (puVar17 != &local_1038 + iVar4 + iVar19 * 0x100);
              }
            }
            else {
              iVar4 = FUN_0001e0f0();
              if (iVar4 != 0) {
                piVar18 = DAT_004fcb44 + iVar19 * 0x100;
                piVar11 = &local_1038 + iVar19 * 0x100;
                do {
                  piVar18 = piVar18 + 1;
                  *piVar11 = *piVar18;
                  piVar11 = piVar11 + 1;
                } while (piVar18 != DAT_004fcb44 + iVar4 + iVar19 * 0x100);
              }
            }
          }
        }
        iVar19 = iVar19 + 1;
      } while (iVar19 != 4);
      iVar19 = thunk_FUN_00019ab4();
      iVar4 = FUN_000361f4();
      if (iVar19 == iVar4) {
        FUN_0001ad08((float)(longlong)DAT_0007edd0,&local_1038,DAT_00482a70,
                     *(undefined *)(*DAT_004fcb44 + 0x24));
LAB_0003c8f8:
        iVar19 = FUN_00039998();
        if (iVar19 == 0) {
          if (DAT_0007eb9c < 4) goto LAB_0003c6a4;
          iVar19 = 1;
LAB_0003ce88:
          snprintf((char *)&local_1038,0x800,"is_single_grade_done = %d\n",iVar19);
          FUN_0002e584(3,&local_1038,0);
        }
        else {
          iVar19 = 0;
          do {
            iVar4 = FUN_0001e29c(iVar19);
            if (((iVar4 != 0) && (iVar4 = FUN_000397a0(iVar19), iVar4 == 1)) &&
               (uVar6 = FUN_0003b8a0(iVar19,DAT_004fcb44 + 0x405), 3 < DAT_0007eb9c)) {
              snprintf((char *)&local_1038,0x800,"chain = %d, freq_avg = %d, freq_threshold = %d\n",
                       iVar19,uVar6,*(undefined4 *)(*DAT_004fcb44 + 0x18));
              FUN_0002e584(3,&local_1038,0);
            }
            iVar19 = iVar19 + 1;
          } while (iVar19 != 4);
          iVar19 = 1;
          iVar4 = 0;
          do {
            iVar5 = FUN_0001e29c(iVar4);
            if ((iVar5 != 0) && (iVar5 = FUN_000397a0(iVar4), iVar5 == 1)) {
              iVar5 = DAT_004fcb44[iVar4 + 0xc09];
              if (3 < DAT_0007eb9c) {
                snprintf((char *)&local_1038,0x800,
                         "chain = %d, grade_curr = %d, is_grade_curr_done = %d\n",iVar4,
                         DAT_004fcb44[iVar4 + 0xc05],iVar5);
                FUN_0002e584(3,&local_1038,0);
                iVar5 = DAT_004fcb44[iVar4 + 0xc09];
              }
              if (iVar5 == 0) {
                iVar19 = 0;
              }
            }
            iVar4 = iVar4 + 1;
          } while (iVar4 != 4);
          if (3 < DAT_0007eb9c) goto LAB_0003ce88;
        }
        if (iVar19 == 0) {
          iVar19 = 0;
          do {
            iVar4 = FUN_0001e29c(iVar19);
            if (((iVar4 != 0) && (iVar4 = FUN_000397a0(iVar19), iVar4 == 1)) &&
               (DAT_004fcb44[iVar19 + 0xc09] == 0)) {
              iVar4 = FUN_0001e0f0();
              if (iVar4 == 0) {
                iVar5 = *DAT_004fcb44;
                uVar14 = 0;
              }
              else {
                iVar5 = *DAT_004fcb44;
                puVar8 = (uint *)(DAT_004fcb44 + iVar4 + iVar19 * 0x100);
                puVar13 = (uint *)(DAT_004fcb44 + iVar19 * 0x100);
                uVar14 = 0;
                puVar21 = (uint *)(DAT_004fcb44 + iVar19 * 0x100 + 0x405);
                do {
                  puVar13 = puVar13 + 1;
                  uVar10 = *puVar13;
                  *puVar21 = uVar10;
                  if (puVar21[0x400] == 1) {
                    uVar14 = uVar10 - *(int *)(iVar5 + 0x20);
                    *puVar21 = uVar14;
                  }
                  puVar21 = puVar21 + 1;
                } while (puVar13 != puVar8);
              }
              if (*(char *)(iVar5 + 0x25) != '\0') {
                FUN_0001a46c(uVar14,1);
              }
              FUN_000502c0((float)(ulonglong)uVar14,&uStack_1040,local_1044,0);
              if (3 < DAT_0007eb9c) {
                snprintf((char *)&local_1038,0x800,"chain = %d, grade_curr = %d, freq_target = %d\n"
                         ,iVar19,DAT_004fcb44[iVar19 + 0xc05],uVar14);
                FUN_0002e584(3,&local_1038,0);
              }
              iVar4 = FUN_0001e0f0();
              piVar11 = DAT_004fcb44;
              if (iVar4 != 0) {
                iVar5 = 0;
                do {
                  while (piVar11[iVar19 * 0x100 + iVar5 + 0x405] == uVar14) {
                    if (3 < DAT_0007eb9c) {
                      snprintf((char *)&local_1038,0x800,"chain = %d, asic = %d, freq = %d\n",iVar19
                               ,iVar5,uVar14);
                      FUN_0002e584(3,&local_1038,0);
                    }
                    sVar3 = FUN_0001e160();
                    sVar1 = (short)iVar5;
                    iVar5 = iVar5 + 1;
                    FUN_0001f164(iVar19,0,(int)sVar3 * (int)sVar1 & 0xff,DAT_00482a70,uStack_1040,
                                 uStack_103c);
                    usleep(1000000);
                    piVar11 = DAT_004fcb44;
                    if (iVar4 == iVar5) goto LAB_0003cdc4;
                  }
                  iVar5 = iVar5 + 1;
                } while (iVar4 != iVar5);
              }
LAB_0003cdc4:
              FUN_0003bc48(iVar19,piVar11 + 0x405);
            }
            iVar19 = iVar19 + 1;
          } while (iVar19 != 4);
          iVar5 = 0;
          uVar6 = FUN_0003b94c(0xff,DAT_004fcb44 + 0x405);
          FUN_000321b8(uVar6,DAT_0007eb58,0x14);
          local_1048 = FUN_0003ba18(0xff,DAT_004fcb44 + 0x405);
          FUN_0003a86c(&local_1048);
          uVar24 = FUN_000391f4();
          iVar19 = (int)((ulonglong)uVar24 >> 0x20);
          iVar4 = (int)uVar24;
          do {
            uVar24 = FUN_0001e29c(iVar5,iVar19);
            iVar19 = (int)((ulonglong)uVar24 >> 0x20);
            if ((int)uVar24 != 0) {
              uVar24 = FUN_000397a0(iVar5);
              iVar19 = (int)((ulonglong)uVar24 >> 0x20);
              if (((int)uVar24 == 1) && (iVar19 = iVar4, DAT_004fcb44[iVar5 + 0xc09] == 0)) {
                FUN_0003a054(iVar5);
                iVar19 = extraout_r1;
              }
            }
            iVar5 = iVar5 + 1;
          } while (iVar5 != 4);
          iVar5 = 0;
          iVar19 = FUN_0001e29c(0,iVar19);
          do {
            if (((iVar19 != 0) && (iVar19 = FUN_000397a0(iVar5), iVar19 == 1)) &&
               (DAT_004fcb44[iVar5 + 0xc09] == 0)) {
              iVar19 = FUN_0001e0f0();
              if (0 < iVar19) {
                puVar21 = (uint *)(&DAT_00808ffc + iVar5 * 0x400 + iVar4);
                iVar20 = 0;
                do {
                  puVar21 = puVar21 + 1;
                  uVar14 = *puVar21;
                  iVar7 = FUN_0001e130();
                  iVar9 = iVar5 * 0x100 + iVar20;
                  iVar20 = iVar20 + 1;
                  if ((double)(longlong)(iVar7 << 3) * dVar2 < (double)(ulonglong)uVar14) {
                    DAT_004fcb44[iVar9 + 0x805] = 0;
                  }
                  else {
                    DAT_004fcb44[iVar9 + 0x805] = 1;
                  }
                } while (iVar19 != iVar20);
              }
              iVar19 = FUN_0001e0f0();
              if (iVar19 < 1) {
LAB_0003d01c:
                FUN_0003962c(iVar5,2);
              }
              else {
                iVar20 = 0;
                piVar11 = DAT_004fcb44 + iVar5 * 0x100 + 0x804;
                do {
                  piVar11 = piVar11 + 1;
                  iVar20 = iVar20 + *piVar11;
                } while (DAT_004fcb44 + iVar19 + iVar5 * 0x100 + 0x804 != piVar11);
                if (iVar20 == 0) goto LAB_0003d01c;
              }
              iVar19 = FUN_0001e0f0();
              piVar11 = DAT_004fcb44;
              if (iVar19 != 0) {
                piVar18 = DAT_004fcb44 + iVar19 + iVar5 * 0x100;
                piVar15 = DAT_004fcb44 + iVar5 * 0x100;
                piVar12 = DAT_004fcb44 + iVar5 * 0x100 + 0x404;
                do {
                  piVar12 = piVar12 + 1;
                  piVar15 = piVar15 + 1;
                  *piVar15 = *piVar12;
                } while (piVar15 != piVar18);
              }
              uVar14 = DAT_0007eb9c;
              piVar11[iVar5 + 0x401] = 1;
              if (3 < uVar14) {
                snprintf((char *)&local_1038,0x800,
                         "Update freq result of high grade, chain = %d, grade_curr = %d.\n",iVar5,
                         piVar11[iVar5 + 0xc05]);
                FUN_0002e584(3,&local_1038,0);
              }
              fVar22 = (float)FUN_0003a828(iVar5,iVar4);
              fVar23 = (float)DAT_004fcb44[iVar5 + 0xc0d];
              if (fVar22 != fVar23 && fVar22 < fVar23 == (NAN(fVar22) || NAN(fVar23))) {
                DAT_004fcb44[iVar5 + 0xc0d] = (int)fVar22;
              }
              iVar19 = FUN_0003bae4(iVar5);
              if (iVar19 != 0) {
                FUN_0003962c(iVar5,2);
              }
            }
            iVar5 = iVar5 + 1;
            if (iVar5 == 4) goto LAB_0003c8f8;
            iVar19 = FUN_0001e29c(iVar5);
          } while( true );
        }
        goto LAB_0003c6a4;
      }
      iVar19 = FUN_00036208();
      FUN_0001ad08((float)(longlong)DAT_0007edd0,&local_1038,DAT_00482a70,
                   *(undefined *)(*DAT_004fcb44 + 0x24));
      if (iVar19 == 0) goto LAB_0003c8f8;
    }
    else {
      if (DAT_0007eb9c < 4) goto LAB_0003c724;
      local_1038._0_1_ = s_Board_init_failed__exit__00068870[0];
      local_1038._1_1_ = s_Board_init_failed__exit__00068870[1];
      local_1038._2_1_ = s_Board_init_failed__exit__00068870[2];
      local_1038._3_1_ = s_Board_init_failed__exit__00068870[3];
      uStack_1034._0_1_ = s_Board_init_failed__exit__00068870[4];
      uStack_1034._1_1_ = s_Board_init_failed__exit__00068870[5];
      uStack_1034._2_1_ = s_Board_init_failed__exit__00068870[6];
      uStack_1034._3_1_ = s_Board_init_failed__exit__00068870[7];
      uStack_1030._0_1_ = s_Board_init_failed__exit__00068870[8];
      uStack_1030._1_1_ = s_Board_init_failed__exit__00068870[9];
      uStack_1030._2_1_ = s_Board_init_failed__exit__00068870[10];
      uStack_1030._3_1_ = s_Board_init_failed__exit__00068870[11];
      uStack_102c._0_1_ = s_Board_init_failed__exit__00068870[12];
      uStack_102c._1_1_ = s_Board_init_failed__exit__00068870[13];
      uStack_102c._2_1_ = s_Board_init_failed__exit__00068870[14];
      uStack_102c._3_1_ = s_Board_init_failed__exit__00068870[15];
      local_1028._0_1_ = s_Board_init_failed__exit__00068870[16];
      local_1028._1_1_ = s_Board_init_failed__exit__00068870[17];
      local_1028._2_1_ = s_Board_init_failed__exit__00068870[18];
      local_1028._3_1_ = s_Board_init_failed__exit__00068870[19];
      local_1024._0_1_ = s_Board_init_failed__exit__00068870[20];
      local_1024._1_1_ = s_Board_init_failed__exit__00068870[21];
      local_1024._2_1_ = s_Board_init_failed__exit__00068870[22];
      local_1024._3_1_ = s_Board_init_failed__exit__00068870[23];
      local_1020._0_2_ = (short)ram0x00068888;
      FUN_0002e584(3,&local_1038,0);
    }
    if (DAT_0007eb9c < 4) goto LAB_0003c724;
    local_1038._0_1_ = s_Parallel_tuning_failed__exit__000689a4[0];
    local_1038._1_1_ = s_Parallel_tuning_failed__exit__000689a4[1];
    local_1038._2_1_ = s_Parallel_tuning_failed__exit__000689a4[2];
    local_1038._3_1_ = s_Parallel_tuning_failed__exit__000689a4[3];
    uStack_1034._0_1_ = s_Parallel_tuning_failed__exit__000689a4[4];
    uStack_1034._1_1_ = s_Parallel_tuning_failed__exit__000689a4[5];
    uStack_1034._2_1_ = s_Parallel_tuning_failed__exit__000689a4[6];
    uStack_1034._3_1_ = s_Parallel_tuning_failed__exit__000689a4[7];
    uStack_1030._0_1_ = s_Parallel_tuning_failed__exit__000689a4[8];
    uStack_1030._1_1_ = s_Parallel_tuning_failed__exit__000689a4[9];
    uStack_1030._2_1_ = s_Parallel_tuning_failed__exit__000689a4[10];
    uStack_1030._3_1_ = s_Parallel_tuning_failed__exit__000689a4[11];
    uStack_102c._0_1_ = s_Parallel_tuning_failed__exit__000689a4[12];
    uStack_102c._1_1_ = s_Parallel_tuning_failed__exit__000689a4[13];
    uStack_102c._2_1_ = s_Parallel_tuning_failed__exit__000689a4[14];
    uStack_102c._3_1_ = s_Parallel_tuning_failed__exit__000689a4[15];
    local_1028._0_1_ = s_Parallel_tuning_failed__exit__000689a4[16];
    local_1028._1_1_ = s_Parallel_tuning_failed__exit__000689a4[17];
    local_1028._2_1_ = s_Parallel_tuning_failed__exit__000689a4[18];
    local_1028._3_1_ = s_Parallel_tuning_failed__exit__000689a4[19];
    local_1024._0_1_ = s_Parallel_tuning_failed__exit__000689a4[20];
    local_1024._1_1_ = s_Parallel_tuning_failed__exit__000689a4[21];
    local_1024._2_1_ = s_Parallel_tuning_failed__exit__000689a4[22];
    local_1024._3_1_ = s_Parallel_tuning_failed__exit__000689a4[23];
    local_1020._0_1_ = s_Parallel_tuning_failed__exit__000689a4[24];
    local_1020._1_1_ = s_Parallel_tuning_failed__exit__000689a4[25];
    local_1020._2_1_ = s_Parallel_tuning_failed__exit__000689a4[26];
    local_1020._3_1_ = s_Parallel_tuning_failed__exit__000689a4[27];
    local_101c._0_3_ = (undefined3)ram0x000689c0;
    FUN_0002e584(3,&local_1038,0);
  }
  if (3 < DAT_0007eb9c) {
    local_1038._0_1_ = s_Dump_freq_tuning_fine_result__000689c4[0];
    local_1038._1_1_ = s_Dump_freq_tuning_fine_result__000689c4[1];
    local_1038._2_1_ = s_Dump_freq_tuning_fine_result__000689c4[2];
    local_1038._3_1_ = s_Dump_freq_tuning_fine_result__000689c4[3];
    uStack_1034._0_1_ = s_Dump_freq_tuning_fine_result__000689c4[4];
    uStack_1034._1_1_ = s_Dump_freq_tuning_fine_result__000689c4[5];
    uStack_1034._2_1_ = s_Dump_freq_tuning_fine_result__000689c4[6];
    uStack_1034._3_1_ = s_Dump_freq_tuning_fine_result__000689c4[7];
    uStack_1030._0_1_ = s_Dump_freq_tuning_fine_result__000689c4[8];
    uStack_1030._1_1_ = s_Dump_freq_tuning_fine_result__000689c4[9];
    uStack_1030._2_1_ = s_Dump_freq_tuning_fine_result__000689c4[10];
    uStack_1030._3_1_ = s_Dump_freq_tuning_fine_result__000689c4[11];
    uStack_102c._0_1_ = s_Dump_freq_tuning_fine_result__000689c4[12];
    uStack_102c._1_1_ = s_Dump_freq_tuning_fine_result__000689c4[13];
    uStack_102c._2_1_ = s_Dump_freq_tuning_fine_result__000689c4[14];
    uStack_102c._3_1_ = s_Dump_freq_tuning_fine_result__000689c4[15];
    local_1028._0_1_ = s_Dump_freq_tuning_fine_result__000689c4[16];
    local_1028._1_1_ = s_Dump_freq_tuning_fine_result__000689c4[17];
    local_1028._2_1_ = s_Dump_freq_tuning_fine_result__000689c4[18];
    local_1028._3_1_ = s_Dump_freq_tuning_fine_result__000689c4[19];
    local_1024._0_1_ = s_Dump_freq_tuning_fine_result__000689c4[20];
    local_1024._1_1_ = s_Dump_freq_tuning_fine_result__000689c4[21];
    local_1024._2_1_ = s_Dump_freq_tuning_fine_result__000689c4[22];
    local_1024._3_1_ = s_Dump_freq_tuning_fine_result__000689c4[23];
    local_1020._0_1_ = s_Dump_freq_tuning_fine_result__000689c4[24];
    local_1020._1_1_ = s_Dump_freq_tuning_fine_result__000689c4[25];
    local_1020._2_1_ = s_Dump_freq_tuning_fine_result__000689c4[26];
    local_1020._3_1_ = s_Dump_freq_tuning_fine_result__000689c4[27];
    local_101c._0_3_ = (undefined3)ram0x000689e0;
    FUN_0002e584(3,&local_1038,0);
  }
LAB_0003c724:
  FUN_0003bc48(0xff,DAT_004fcb44 + 1);
  return iVar19;
}

