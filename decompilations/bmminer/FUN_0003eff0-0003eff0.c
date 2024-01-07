
undefined4 FUN_0003eff0(uint param_1,int param_2)

{
  double dVar1;
  float fVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  int iVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined8 uVar20;
  char acStack_30c0 [128];
  undefined8 local_3040;
  double adStack_2840 [256];
  double adStack_2040 [1024];
  
  memset(adStack_2040,0,0x2000);
  pcVar3 = (char *)FUN_0001e0c0();
  iVar4 = strcmp(pcVar3,"BHB28601");
  if (iVar4 != 0) {
    pcVar3 = (char *)FUN_0001e0c0();
    iVar4 = strcmp(pcVar3,"BHB28701");
    if (iVar4 != 0) {
      iVar4 = FUN_0001e0f0();
      uVar20 = DAT_0003f8f0;
      if (iVar4 != 0) {
        iVar8 = 0;
        puVar12 = &local_3040;
        iVar13 = 0;
        do {
          iVar11 = iVar13 + 1;
          iVar13 = FUN_00014ed0(iVar13);
          if (iVar13 == 0) {
            FUN_0005146c(param_1 & 0xff,iVar8);
            usleep(5000);
            FUN_00051508(param_1 & 0xff,iVar8);
            usleep(10000);
            *puVar12 = uVar20;
          }
          iVar8 = iVar8 + param_2;
          puVar12 = puVar12 + 1;
          iVar13 = iVar11;
        } while (iVar4 != iVar11);
      }
      usleep(100000);
      iVar4 = FUN_0001e0e0();
      fVar2 = DAT_0003f900;
      dVar1 = DAT_0003f8f8;
      if (iVar4 != 0) {
        iVar13 = 0;
        do {
          iVar8 = FUN_0001e100();
          if (iVar8 != 0) {
            iVar11 = 0;
            do {
              while( true ) {
                iVar5 = FUN_0001e100();
                iVar6 = iVar13 * iVar5 + iVar11;
                iVar5 = FUN_00014ed0(iVar6);
                if (iVar5 == 0) break;
LAB_0003f608:
                iVar11 = iVar11 + 1;
                if (iVar8 == iVar11) goto LAB_0003f7c4;
              }
              iVar5 = iVar6 * param_2;
              memset(acStack_30c0,0,0x80);
              uVar9 = FUN_0002c06c(0xb0,iVar5,param_1);
              if ((uVar9 & 4) == 0) {
                if (DAT_004fcb48 == 0) {
                  DAT_004fcb48 = FUN_000536f4("bmminer_adc");
                }
                FUN_00054cb0(DAT_004fcb48,"log/adc_sample.c",0x10,DAT_0003f904,0x11,0x8d,0x14,
                             "chain::%d, asic::%d adc control vm sample not ready %08x.\n",param_1,
                             iVar6,uVar9);
                goto LAB_0003f608;
              }
              uVar9 = FUN_0002c06c(0xb4,iVar5,param_1);
              uVar7 = FUN_0002c06c(0xb8,iVar5,param_1);
              dVar15 = (double)((float)(longlong)(int)(uVar9 & 0xfff) * fVar2) * dVar1 - dVar1;
              dVar14 = (double)((float)(longlong)(int)((uVar9 << 4) >> 0x14) * fVar2) * dVar1 -
                       dVar1;
              dVar16 = (double)((float)(longlong)(int)(uVar7 & 0xfff) * fVar2) * dVar1 - dVar1;
              dVar17 = (double)((float)(longlong)(int)((uVar7 << 4) >> 0x14) * fVar2) * dVar1 -
                       dVar1;
              dVar19 = dVar15 + dVar14 + dVar16 + dVar17;
              adStack_2040[iVar6 * 4 + 3] = dVar17;
              adStack_2040[iVar6 * 4] = dVar15;
              adStack_2040[iVar6 * 4 + 1] = dVar14;
              dVar18 = dVar19 * 0.25;
              adStack_2040[iVar6 * 4 + 2] = dVar16;
              (&local_3040)[iVar6] = dVar18;
              sprintf(acStack_30c0,"chain %2d asic %03d adc:\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f",
                      param_1,iVar6,dVar15,dVar14,dVar16,dVar17,dVar19,dVar18);
              if (DAT_004fcb48 == 0) {
                DAT_004fcb48 = FUN_000536f4("bmminer_adc");
              }
              iVar11 = iVar11 + 1;
              FUN_00054cb0(DAT_004fcb48,"log/adc_sample.c",0x10,DAT_0003f904,0x11,0x9d,0x14,
                           "asic adc:%s");
            } while (iVar8 != iVar11);
          }
LAB_0003f7c4:
          iVar13 = iVar13 + 1;
        } while (iVar4 != iVar13);
      }
      iVar4 = FUN_0001e0e0();
      if (iVar4 != 0) {
        iVar13 = 0;
        do {
          iVar8 = sprintf(acStack_30c0,"domain %2d:",iVar13);
          iVar11 = FUN_0001e100();
          if (iVar11 != 0) {
            iVar5 = 0;
            do {
              iVar6 = FUN_0001e100();
              iVar6 = iVar13 * iVar6 + iVar5;
              iVar5 = iVar5 + 1;
              iVar6 = sprintf(acStack_30c0 + iVar8,"\t%.2f",*(undefined4 *)(&local_3040 + iVar6),
                              *(undefined4 *)((int)&local_3040 + iVar6 * 8 + 4));
              iVar8 = iVar8 + iVar6;
            } while (iVar11 != iVar5);
          }
          if (DAT_004fcb48 == 0) {
            DAT_004fcb48 = FUN_000536f4("bmminer_adc");
          }
          iVar13 = iVar13 + 1;
          FUN_00054cb0(DAT_004fcb48,"log/adc_sample.c",0x10,DAT_0003f904,0x11,0xa9,0x14,
                       "chain %2d %s",param_1);
        } while (iVar4 != iVar13);
      }
      goto LAB_0003f490;
    }
  }
  uVar9 = param_1 & 0xff;
  pthread_mutex_lock((pthread_mutex_t *)&DAT_0007f7ec);
  FUN_00016330(1);
  usleep(20000);
  FUN_00051478(uVar9);
  usleep(20000);
  FUN_000514a4(uVar9);
  usleep(20000);
  uVar20 = FUN_0001e0e0();
  dVar15 = DAT_0003f440;
  dVar1 = DAT_0003f438;
  iVar4 = (int)uVar20;
  if (iVar4 != 0) {
    iVar13 = 0;
    do {
      uVar20 = FUN_0001e100((int)uVar20,(int)((ulonglong)uVar20 >> 0x20));
      iVar8 = (int)uVar20;
      if (iVar8 != 0) {
        iVar11 = 0;
        do {
          while( true ) {
            iVar5 = FUN_0001e100((int)uVar20,(int)((ulonglong)uVar20 >> 0x20));
            iVar10 = iVar13 * iVar5 + iVar11;
            iVar5 = FUN_0001e160();
            iVar5 = iVar10 * iVar5;
            iVar6 = FUN_00014ed0(iVar10);
            uVar20 = CONCAT44(iVar5,0xb0);
            if (iVar6 == 0) break;
LAB_0003f128:
            iVar11 = iVar11 + 1;
            if (iVar8 == iVar11) goto LAB_0003f240;
          }
          uVar7 = FUN_0002c06c(0xb0,iVar5,param_1);
          if ((uVar7 & 4) == 0) {
            if (DAT_004fcb48 == 0) {
              DAT_004fcb48 = FUN_000536f4("bmminer_adc",iVar5,param_1);
            }
            uVar20 = FUN_00054cb0(DAT_004fcb48,"log/adc_sample.c",0x10,"get_adc_data_with_addr",0x16
                                  ,0x2d,0x14,
                                  "chain::%d, asic::%d adc control vm sample not ready %08x.\n",
                                  param_1,iVar10,uVar7);
            goto LAB_0003f128;
          }
          uVar7 = FUN_0002c06c(0xb4);
          uVar20 = FUN_0002c06c(0xb8,iVar5,param_1);
          iVar11 = iVar11 + 1;
          dVar14 = (double)(ulonglong)(uVar7 & 0xfff) * dVar1 * dVar15 - dVar1;
          dVar16 = (double)(ulonglong)((uVar7 << 4) >> 0x14) * dVar1 * dVar15 - dVar1;
          dVar18 = (double)(ulonglong)(((uint)uVar20 << 4) >> 0x14) * dVar1 * dVar15 - dVar1;
          adStack_2040[iVar10 * 4] = dVar14;
          dVar17 = (double)(ulonglong)((uint)uVar20 & 0xfff) * dVar1 * dVar15 - dVar1;
          adStack_2840[iVar10] = dVar18;
          adStack_2040[iVar10 * 4 + 1] = dVar16 - dVar14;
          adStack_2040[iVar10 * 4 + 2] = dVar17 - dVar16;
          adStack_2040[iVar10 * 4 + 3] = dVar18 - dVar17;
        } while (iVar8 != iVar11);
      }
LAB_0003f240:
      iVar13 = iVar13 + 1;
    } while (iVar4 != iVar13);
  }
  iVar4 = FUN_0001e0e0();
  if (iVar4 != 0) {
    iVar13 = 0;
    do {
      if (DAT_004fcb48 == 0) {
        DAT_004fcb48 = FUN_000536f4("bmminer_adc");
      }
      FUN_00054cb0(DAT_004fcb48,"log/adc_sample.c",0x10,DAT_0003f448,0x10,0x43,0x14,
                   "[C: %d], [D: %d]",param_1);
      iVar8 = FUN_0001e100();
      if (iVar8 != 0) {
        iVar11 = 0;
        do {
          memset(&local_3040,0,0x100);
          iVar5 = FUN_0001e100();
          iVar6 = iVar13 * iVar5 + iVar11;
          iVar5 = FUN_0001e100();
          iVar5 = FUN_0005f880(iVar11,iVar5 + -1);
          if (iVar5 == 1) {
            snprintf((char *)&local_3040,0x100,
                     "{I} %2d: d0 %.3f, d1 %.3f, d2 %.3f, d3 %.3f, sum = %f\n",iVar6,
                     adStack_2040[iVar6 * 4],adStack_2040[iVar6 * 4 + 1],adStack_2040[iVar6 * 4 + 2]
                     ,adStack_2040[iVar6 * 4 + 3],adStack_2840[iVar6]);
          }
          else {
            snprintf((char *)&local_3040,0x100,
                     "{I} %2d: d0 %.3f, d1 %.3f, d2 %.3f, d3 %.3f, sum = %f",iVar6,
                     adStack_2040[iVar6 * 4],adStack_2040[iVar6 * 4 + 1],adStack_2040[iVar6 * 4 + 2]
                     ,adStack_2040[iVar6 * 4 + 3],adStack_2840[iVar6]);
          }
          if (DAT_004fcb48 == 0) {
            DAT_004fcb48 = FUN_000536f4("bmminer_adc");
          }
          iVar11 = iVar11 + 1;
          FUN_00054cb0(DAT_004fcb48,"log/adc_sample.c",0x10,DAT_0003f448,0x10,0x51,0x14,"%s",
                       &local_3040);
        } while (iVar8 != iVar11);
      }
      iVar13 = iVar13 + 1;
    } while (iVar4 != iVar13);
  }
  FUN_000513fc(uVar9);
  usleep(20000);
  FUN_00016330(0);
  usleep(20000);
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_0007f7ec);
LAB_0003f490:
  pthread_mutex_lock(DAT_0003f44c);
  memcpy(&DAT_004fcb68 + param_1 * 0x2000,adStack_2040,0x2000);
  pthread_mutex_unlock(DAT_0003f44c);
  return 0;
}

