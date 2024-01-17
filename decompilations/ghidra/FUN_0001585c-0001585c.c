
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined4 FUN_0001585c(void)

{
  pthread_mutex_t *__mutex;
  void *pvVar1;
  void *pvVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  pthread_mutex_t *__mutex_00;
  int iVar16;
  int iVar17;
  bool bVar18;
  uint local_86c;
  int local_85c;
  int local_848;
  int local_844;
  int local_840;
  int local_83c;
  undefined4 local_838 [4];
  undefined4 local_828;
  undefined4 uStack_824;
  undefined4 uStack_820;
  undefined4 uStack_81c;
  undefined4 local_818;
  undefined4 uStack_814;
  undefined4 local_810;
  undefined4 uStack_80c;
  undefined4 local_808;
  
  prctl(0xf,"temp_mtr",0,0,0);
  if (DAT_0007eb9c < 4) {
    if (DAT_0007f7e0 == 0) {
      return 0;
    }
  }
  else {
    local_828._0_1_ = s_temperature_monitor_thread_start_00060844[0];
    local_828._1_1_ = s_temperature_monitor_thread_start_00060844[1];
    local_828._2_1_ = s_temperature_monitor_thread_start_00060844[2];
    local_828._3_1_ = s_temperature_monitor_thread_start_00060844[3];
    uStack_824._0_1_ = s_temperature_monitor_thread_start_00060844[4];
    uStack_824._1_1_ = s_temperature_monitor_thread_start_00060844[5];
    uStack_824._2_1_ = s_temperature_monitor_thread_start_00060844[6];
    uStack_824._3_1_ = s_temperature_monitor_thread_start_00060844[7];
    uStack_820._0_1_ = s_temperature_monitor_thread_start_00060844[8];
    uStack_820._1_1_ = s_temperature_monitor_thread_start_00060844[9];
    uStack_820._2_1_ = s_temperature_monitor_thread_start_00060844[10];
    uStack_820._3_1_ = s_temperature_monitor_thread_start_00060844[11];
    uStack_81c._0_1_ = s_temperature_monitor_thread_start_00060844[12];
    uStack_81c._1_1_ = s_temperature_monitor_thread_start_00060844[13];
    uStack_81c._2_1_ = s_temperature_monitor_thread_start_00060844[14];
    uStack_81c._3_1_ = s_temperature_monitor_thread_start_00060844[15];
    local_818._0_1_ = s_temperature_monitor_thread_start_00060844[16];
    local_818._1_1_ = s_temperature_monitor_thread_start_00060844[17];
    local_818._2_1_ = s_temperature_monitor_thread_start_00060844[18];
    local_818._3_1_ = s_temperature_monitor_thread_start_00060844[19];
    uStack_814._0_1_ = s_temperature_monitor_thread_start_00060844[20];
    uStack_814._1_1_ = s_temperature_monitor_thread_start_00060844[21];
    uStack_814._2_1_ = s_temperature_monitor_thread_start_00060844[22];
    uStack_814._3_1_ = s_temperature_monitor_thread_start_00060844[23];
    local_810._0_1_ = s_temperature_monitor_thread_start_00060844[24];
    local_810._1_1_ = s_temperature_monitor_thread_start_00060844[25];
    local_810._2_1_ = s_temperature_monitor_thread_start_00060844[26];
    local_810._3_1_ = s_temperature_monitor_thread_start_00060844[27];
    uStack_80c._0_1_ = s_temperature_monitor_thread_start_00060844[28];
    uStack_80c._1_1_ = s_temperature_monitor_thread_start_00060844[29];
    uStack_80c._2_1_ = s_temperature_monitor_thread_start_00060844[30];
    uStack_80c._3_1_ = s_temperature_monitor_thread_start_00060844[31];
    local_808._0_1_ = s_temperature_monitor_thread_start_00060844[32];
    local_808._1_1_ = s_temperature_monitor_thread_start_00060844[33];
    local_808._2_1_ = s_temperature_monitor_thread_start_00060844[34];
    local_808._3_1_ = s_temperature_monitor_thread_start_00060844[35];
    FUN_0002e584(3,&local_828,0);
    if (DAT_0007f7e0 == 0) goto LAB_00015db8;
  }
  local_85c = 0;
  do {
    local_86c = 0;
    do {
      iVar4 = FUN_0001e29c(local_86c);
      if (iVar4 != 0) {
        iVar4 = local_86c * 4;
        iVar16 = 0;
        while( true ) {
          iVar5 = FUN_00014434();
          iVar6 = FUN_0001e19c();
          if (iVar6 < iVar5) {
            iVar5 = FUN_00014434();
          }
          else {
            iVar5 = FUN_0001e19c();
          }
          if (iVar5 <= iVar16) break;
          pcVar7 = (char *)FUN_0001e0c0();
          iVar5 = strcmp(pcVar7,"BHB28601");
          if (iVar5 == 0) {
            uVar14 = 1;
          }
          else {
            pcVar7 = (char *)FUN_0001e0c0();
            iVar5 = strcmp(pcVar7,"BHB28501");
            uVar14 = (uint)(iVar5 == 0);
          }
          __mutex = DAT_00016274;
          uVar13 = uVar14 + 1;
          iVar5 = iVar16 * 6;
          iVar6 = uVar14 << 2;
          __mutex_00 = (pthread_mutex_t *)((int)DAT_00016274 + 0x2c);
          uVar15 = uVar14;
          if (uVar14 == 0) goto LAB_00015acc;
LAB_00015974:
          uVar15 = uVar14;
          if (DAT_0007f7bc == 0) goto LAB_00015ab4;
LAB_00015980:
          if (DAT_0007f7e8 != 0) goto LAB_00015ab4;
          iVar8 = FUN_00014434();
          if (iVar8 <= iVar16) goto LAB_00015ab4;
          pthread_mutex_lock(__mutex_00);
          FUN_000302a0(&local_848);
          if (uVar15 == 1) {
            local_85c = FUN_00014454(local_86c,iVar16,
                                     (int)*(short *)(*(int *)(*(int *)(DAT_0007f7b8 + iVar4) + 4) +
                                                    iVar5),0);
          }
          else if (uVar15 == 2) {
            local_85c = FUN_00014454(local_86c,iVar16,
                                     (int)*(short *)(*(int *)(*(int *)(DAT_0007f7b8 + iVar4) + 8) +
                                                    iVar5),1);
          }
          FUN_000302a0(&local_840);
          iVar8 = local_840 - local_848;
          puVar11 = (undefined *)(local_83c - local_844);
          if ((int)puVar11 < 0) {
            iVar8 = iVar8 + -1;
            puVar11 = &DAT_000f4240 + (int)puVar11;
          }
          if (4 < DAT_0007eb9c) {
            puVar12 = &DAT_00060830;
            if (uVar15 != 1) {
              puVar12 = &DAT_00060834;
            }
            snprintf((char *)&local_828,0x800,"%s read %d on chain %d takes %ldms\n",puVar12,iVar16,
                     local_86c,iVar8 * 1000 + (int)puVar11 / 1000);
            FUN_0002e584(4,&local_828,0);
          }
          pthread_mutex_unlock(__mutex_00);
          while( true ) {
            pthread_mutex_lock(__mutex);
            iVar8 = DAT_0007f7b8;
            if (local_85c == 0xff) {
              iVar8 = *(int *)(*(int *)(DAT_0007f7b8 + iVar4) + iVar6) + iVar5;
              *(short *)(iVar8 + 4) = *(short *)(iVar8 + 4) + 1;
            }
            else {
              *(undefined2 *)(*(int *)(*(int *)(DAT_0007f7b8 + iVar4) + iVar6) + iVar5 + 2) =
                   (undefined2)local_85c;
              *(undefined2 *)(*(int *)(*(int *)(iVar8 + iVar4) + iVar6) + iVar5 + 4) = 0;
            }
            pthread_mutex_unlock(__mutex);
LAB_00015ab4:
            uVar14 = uVar13;
            if (uVar13 == 3) break;
            while( true ) {
              uVar13 = uVar14 + 1;
              iVar6 = iVar6 + 4;
              uVar15 = uVar14;
              if (uVar14 != 0) goto LAB_00015974;
LAB_00015acc:
              iVar8 = FUN_0001e19c();
              if (iVar16 < iVar8) break;
              uVar14 = uVar13;
              if (DAT_0007f7bc != 0) goto LAB_00015980;
            }
            FUN_000302a0(&local_848);
            iVar8 = FUN_0001e29c(local_86c);
            if (iVar8 == 0) {
              if (DAT_0007eb9c < 5) {
LAB_0001600c:
                local_85c = 0xff;
              }
              else {
                snprintf((char *)&local_828,0x800,"%s chain %d not pluged",DAT_00016280,local_86c);
                local_85c = 0xff;
                FUN_0002e584(4,&local_828,0);
              }
            }
            else {
              iVar8 = FUN_0001e19c();
              if (iVar16 < iVar8) {
                iVar8 = FUN_00048110(local_86c & 0xff,*(undefined *)(DAT_0007f7dc + iVar16),uVar15,
                                     local_838,2);
                if (iVar8 == 2) {
                  local_85c = (int)(char)local_838[0];
                }
                else {
                  if (DAT_0007eb9c < 4) goto LAB_0001600c;
                  local_85c = 0xff;
                  snprintf((char *)&local_828,0x800,"fail to read pic temp for chain %d",local_86c);
                  FUN_0002e584(3,&local_828,uVar15);
                }
              }
              else {
                if (DAT_0007eb9c < 4) goto LAB_0001600c;
                local_85c = 0xff;
                snprintf((char *)&local_828,0x800,"%s invalid index = %d on chain %d",DAT_00016280,
                         iVar16,local_86c);
                FUN_0002e584(3,&local_828,uVar15);
              }
            }
            FUN_000302a0(&local_840);
            iVar8 = local_83c - local_844;
            bVar18 = iVar8 < 0;
            if (bVar18) {
              iVar8 = iVar8 + 0xf4000;
            }
            iVar17 = local_840 - local_848;
            if (bVar18) {
              iVar17 = iVar17 + -1;
              iVar8 = iVar8 + 0x240;
            }
            if (4 < DAT_0007eb9c) {
              snprintf((char *)&local_828,0x800,"pic read %d on chain %d takes %ldms\n",iVar16,
                       local_86c,iVar17 * 1000 + iVar8 / 1000);
              FUN_0002e584(4,&local_828,0);
            }
          }
          iVar16 = iVar16 + 1;
        }
        local_838[0] = *DAT_00016278;
        local_838[1] = DAT_00016278[1];
        local_838[2] = DAT_00016278[2];
        local_838[3] = DAT_00016278[3];
        memset(&local_828,0,0x100);
        if (DAT_0007f804 == (void *)0x0) {
          iVar16 = FUN_00014434();
          iVar5 = FUN_0001e19c();
          if (iVar5 < iVar16) {
            iVar16 = FUN_00014434();
          }
          else {
            iVar16 = FUN_0001e19c();
          }
          DAT_0007f804 = malloc(iVar16 * 4 + 1);
        }
        if (DAT_0007f808 == (void *)0x0) {
          iVar16 = FUN_00014434();
          iVar5 = FUN_0001e19c();
          if (iVar5 < iVar16) {
            iVar16 = FUN_00014434();
          }
          else {
            iVar16 = FUN_0001e19c();
          }
          DAT_0007f808 = malloc(iVar16 * 4 + 1);
        }
        iVar16 = 0;
        pthread_mutex_lock(DAT_00016274);
        do {
          if (iVar16 == 0) {
            iVar5 = FUN_0001e19c();
          }
          else {
            if (DAT_0007f7b0 == 0) break;
            iVar5 = FUN_00014434();
          }
          if (iVar5 < 1) {
            iVar6 = -1;
            iVar5 = iVar6;
          }
          else {
            iVar17 = 0;
            iVar8 = 0;
            iVar6 = 0;
            do {
              iVar9 = sprintf((char *)((int)DAT_0007f804 + iVar6),"%03d-",
                              (int)*(short *)(*(int *)(*(int *)(DAT_0007f7b8 + iVar4) + iVar16 * 4)
                                              + iVar17 + 2));
              iVar6 = iVar6 + iVar9;
              iVar9 = *(int *)(*(int *)(DAT_0007f7b8 + iVar4) + iVar16 * 4) + iVar17;
              iVar17 = iVar17 + 6;
              iVar9 = sprintf((char *)((int)DAT_0007f808 + iVar8),"%03d-",(int)*(short *)(iVar9 + 4)
                             );
              iVar8 = iVar8 + iVar9;
            } while (iVar5 * 6 - iVar17 != 0);
            iVar6 = iVar6 + -1;
            iVar5 = iVar8 + -1;
          }
          pvVar2 = DAT_0007f808;
          pvVar1 = DAT_0007f804;
          *(undefined *)((int)DAT_0007f808 + iVar5) = 0x20;
          *(undefined *)((int)pvVar1 + iVar6) = 0x20;
          sprintf((char *)&local_828,"chain %d %s temp: %s, failure:%s",local_86c,local_838[iVar16],
                  pvVar1,pvVar2);
          if (DAT_0007f80c == 0) {
            DAT_0007f80c = FUN_000536f4("bmminer_temp");
          }
          iVar16 = iVar16 + 1;
          FUN_00054cb0(DAT_0007f80c,"temperature/temperature.c",0x19,DAT_0001627c,0xe,0x21b,0x14,
                       "%s",&local_828);
        } while (iVar16 != 3);
        pthread_mutex_unlock(DAT_00016274);
      }
      local_86c = local_86c + 1;
    } while (local_86c != 4);
    iVar5 = 0;
    iVar4 = FUN_00015508();
    uVar14 = 0;
    iVar16 = 0;
    uVar10 = FUN_000155c4();
    do {
      iVar6 = FUN_0001e29c(iVar16);
      if (iVar6 != 0) {
        uVar14 = uVar14 + 1 & 0xff;
        cVar3 = FUN_00014434();
        iVar6 = FUN_000157f8(iVar16,cVar3 + -1);
        cVar3 = FUN_00014434();
        iVar8 = FUN_000157f8(iVar16,cVar3 + -2);
        iVar5 = iVar8 + iVar6 + iVar5;
      }
      iVar16 = iVar16 + 1;
    } while (iVar16 != 4);
    pcVar7 = (char *)FUN_0001e0c0();
    iVar16 = strcmp(pcVar7,"BHB28601");
    if (iVar16 == 0) {
LAB_00015d24:
      if (DAT_0007f7bc == 0) goto LAB_00015d74;
      if (iVar4 < 0x51) goto LAB_00015ee8;
LAB_00015d3c:
      FUN_00020a20(1);
      if (iVar5 < (int)(uVar14 * 2)) {
        FUN_00020a38(0);
        goto joined_r0x00015f0c;
      }
LAB_00015ef8:
      FUN_00020a38(1);
joined_r0x00015f0c:
      if (3 < DAT_0007eb9c) {
        snprintf((char *)&local_828,0x800,
                 "over max temp, pcb temp %d (max %d), chip temp %d(max %d) pcb temp rise %d chip temp rise %d, total_exit_failure %d\n"
                 ,iVar4,0x50,uVar10,0x5f,0,0,iVar5);
        FUN_0002e584(3,&local_828,0);
      }
      FUN_00031d58(0xf,"over max temp");
    }
    else {
      pcVar7 = (char *)FUN_0001e0c0();
      iVar16 = strcmp(pcVar7,"BHB28501");
      if (iVar16 == 0) goto LAB_00015d24;
      if (0x50 < iVar4) goto LAB_00015d3c;
LAB_00015ee8:
      FUN_00020a20(0);
      if ((int)(uVar14 * 2) <= iVar5) goto LAB_00015ef8;
      FUN_00020a38(0);
      iVar16 = FUN_00031d48();
      if (iVar4 == 0 && iVar16 == 2) {
        iVar16 = 0xff;
        iVar6 = 0;
        do {
          iVar8 = iVar6 + 1;
          iVar6 = FUN_000156cc(iVar6);
          if (iVar6 < iVar16) {
            iVar16 = iVar6;
          }
          iVar16 = (int)(short)iVar16;
          iVar6 = iVar8;
        } while (iVar8 != 4);
        if ((iVar16 != 0) || (DAT_0007f810 = DAT_0007f810 + 1, DAT_0007f810 < 0xb))
        goto LAB_00015d74;
        goto joined_r0x00015f0c;
      }
    }
LAB_00015d74:
    FUN_00013da4(400,0);
    iVar4 = FUN_00031d38();
    if ((iVar4 != 0) && (DAT_00080fb4 != 1)) {
      FUN_00035344();
    }
    usleep(10000);
  } while (DAT_0007f7e0 != 0);
LAB_00015db8:
  if (3 < DAT_0007eb9c) {
    local_828._0_1_ = s_temp_monitor_thread_exit_000609dc[0];
    local_828._1_1_ = s_temp_monitor_thread_exit_000609dc[1];
    local_828._2_1_ = s_temp_monitor_thread_exit_000609dc[2];
    local_828._3_1_ = s_temp_monitor_thread_exit_000609dc[3];
    uStack_824._0_1_ = s_temp_monitor_thread_exit_000609dc[4];
    uStack_824._1_1_ = s_temp_monitor_thread_exit_000609dc[5];
    uStack_824._2_1_ = s_temp_monitor_thread_exit_000609dc[6];
    uStack_824._3_1_ = s_temp_monitor_thread_exit_000609dc[7];
    uStack_820._0_1_ = s_temp_monitor_thread_exit_000609dc[8];
    uStack_820._1_1_ = s_temp_monitor_thread_exit_000609dc[9];
    uStack_820._2_1_ = s_temp_monitor_thread_exit_000609dc[10];
    uStack_820._3_1_ = s_temp_monitor_thread_exit_000609dc[11];
    uStack_81c._0_1_ = s_temp_monitor_thread_exit_000609dc[12];
    uStack_81c._1_1_ = s_temp_monitor_thread_exit_000609dc[13];
    uStack_81c._2_1_ = s_temp_monitor_thread_exit_000609dc[14];
    uStack_81c._3_1_ = s_temp_monitor_thread_exit_000609dc[15];
    local_818._0_1_ = s_temp_monitor_thread_exit_000609dc[16];
    local_818._1_1_ = s_temp_monitor_thread_exit_000609dc[17];
    local_818._2_1_ = s_temp_monitor_thread_exit_000609dc[18];
    local_818._3_1_ = s_temp_monitor_thread_exit_000609dc[19];
    uStack_814._0_1_ = s_temp_monitor_thread_exit_000609dc[20];
    uStack_814._1_1_ = s_temp_monitor_thread_exit_000609dc[21];
    uStack_814._2_1_ = s_temp_monitor_thread_exit_000609dc[22];
    uStack_814._3_1_ = s_temp_monitor_thread_exit_000609dc[23];
    local_810 = CONCAT31(local_810._1_3_,(char)ram0x000609f4);
    FUN_0002e584(3,&local_828,0);
  }
  return 0;
}

