
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined4 FUN_00012620(undefined4 param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  double dVar4;
  longlong *plVar5;
  undefined2 uVar6;
  FILE *__stream;
  char *pcVar7;
  size_t sVar8;
  ushort **ppuVar9;
  long lVar10;
  void *pvVar11;
  void *pvVar12;
  uint uVar13;
  int *piVar14;
  uint *puVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  pthread_mutex_t *__mutex;
  uint *puVar22;
  uint uVar23;
  int iVar24;
  int iVar25;
  undefined4 uVar26;
  int iVar27;
  undefined4 *puVar28;
  undefined4 uVar29;
  bool bVar30;
  double dVar31;
  undefined8 uVar32;
  longlong lVar33;
  int iVar35;
  longlong lVar34;
  undefined4 uVar36;
  uint local_a68;
  uint local_a64;
  uint local_a40;
  uint local_a3c [3];
  undefined auStack_a30 [12];
  uint local_a24 [10];
  pthread_attr_t pStack_9fc;
  sigaction local_9bc;
  undefined4 local_930;
  undefined4 local_92c;
  undefined4 local_928;
  undefined4 uStack_924;
  undefined4 uStack_920;
  undefined4 uStack_91c;
  undefined4 local_918;
  undefined4 uStack_914;
  undefined4 uStack_910;
  undefined4 uStack_90c;
  undefined auStack_908 [12];
  undefined auStack_8fc [204];
  undefined4 local_830;
  undefined4 local_82c;
  undefined4 local_828;
  undefined4 local_824;
  undefined4 local_820;
  undefined4 local_81c;
  undefined4 local_818;
  undefined4 local_814;
  
  local_9bc.__sigaction_handler.sa_handler = (__sighandler_t)&LAB_00028878;
  local_9bc.sa_flags = 0;
  sigemptyset(&local_9bc.sa_mask);
  sigaction(0xf,&local_9bc,(sigaction *)&DAT_00592464);
  sigaction(2,&local_9bc,(sigaction *)&DAT_00594524);
  sigaction(6,&local_9bc,(sigaction *)&DAT_0058e35c);
  sem_init(DAT_0001293c,0,0);
  FUN_00029070(&DAT_00590408,DAT_00012940,0xad3);
  uVar26 = *param_2;
  memset(&local_930,0,0x100);
  memset(&pStack_9fc,0,0x40);
  snprintf(pStack_9fc.__size,0x40,"pidof %s",uVar26);
  __stream = popen(pStack_9fc.__size,"r");
  if (__stream != (FILE *)0x0) {
LAB_00012730:
    do {
      pcVar7 = fgets((char *)&local_930,0x100,__stream);
      if (pcVar7 == (char *)0x0) goto LAB_00012828;
      if (DAT_00482a5d != '\0') {
        if (((DAT_00590404 == '\0') && (DAT_00482a5c == '\0')) && (DAT_0007eba0 < 7)) {
LAB_000127d8:
          if ((DAT_00482a5c == '\0') && (DAT_0007eba0 < 7)) goto LAB_00012730;
        }
        else {
          snprintf((char *)&local_830,0x800,"pidof %s command result is: %s\n",uVar26,&local_930);
          FUN_0002e584(7,&local_830);
          if (DAT_00482a5d == '\0') goto LAB_00012730;
          if (DAT_00590404 == '\0') goto LAB_000127d8;
        }
        sVar8 = strlen((char *)&local_930);
        snprintf((char *)&local_830,0x800,"strlen is: %d\n",sVar8);
        FUN_0002e584(7,&local_830,0);
      }
    } while( true );
  }
  if ((DAT_00482a5d != '\0') &&
     (((DAT_00590404 != '\0' || (DAT_00482a5c != '\0')) || (6 < DAT_0007eba0)))) {
    snprintf((char *)&local_830,0x800," app-service:%s Not Found!!!",uVar26);
    FUN_0002e584(7,&local_830,0);
  }
LAB_000129f0:
  FUN_00052f1c("/etc/bitmain_category.conf");
  pvVar11 = calloc(1,0x1664);
  DAT_00592460 = pvVar11;
  pvVar12 = calloc(1,0x188);
  DAT_0058e354 = pvVar12;
  DAT_0058e34c = calloc(1,0x40);
  *(void **)((int)DAT_0058e34c + 0x24) = pvVar12;
  *(void **)((int)pvVar12 + 0x14) = pvVar11;
  FUN_0002bc2c(param_1,param_2);
  FUN_0002aef4();
  iVar24 = FUN_0002823c();
  if (iVar24 != 0) {
    FUN_00031d58(4,"socket init failed!");
  }
  iVar24 = FUN_000339ec();
  if (iVar24 != 0) {
    FUN_00031d58(4,"basic init failed!");
  }
  DAT_00590400 = calloc(1,0x40);
  pthread_attr_init(&pStack_9fc);
  pthread_attr_setstacksize(&pStack_9fc,0x200000);
  iVar24 = FUN_00030b10(DAT_00590400,&pStack_9fc,&DAT_000283e4);
  if ((iVar24 != 0) && (((DAT_00590404 != '\0' || (DAT_00482a5c != '\0')) || (2 < DAT_0007eba0)))) {
    snprintf((char *)&local_830,0x800,"%s: create thread for get api status failed\n",DAT_00012944);
    FUN_0002e584(3,&local_830,0);
  }
  pthread_detach(*(pthread_t *)((int)DAT_00590400 + 0xc));
  iVar21 = *(int *)(*(int *)((int)DAT_0058e34c + 0x24) + 0x14);
  iVar24 = pthread_mutex_init((pthread_mutex_t *)(iVar21 + 0x70),(pthread_mutexattr_t *)0x0);
  if (iVar24 != 0) {
    FUN_00028fb8(DAT_000130bc,0x78d);
  }
  FUN_00029070(iVar21,DAT_00012948,0x78e);
  FUN_00029070(iVar21 + 0x180,DAT_00012948,0x78f);
  FUN_00029070(iVar21 + 0x8b8,DAT_00012948,0x790);
  FUN_00029070(iVar21 + 0xff0,DAT_00012948,0x791);
  memset(&local_830,0,0x20);
  local_830 = CONCAT22(0x1a,(undefined2)local_830);
  local_830._0_1_ = 'Q';
  local_82c = CONCAT31((int3)(local_82c >> 8),
                       ~((byte)~(byte)(((local_82c & 0xfd | (DAT_00080f64 & 1) << 1) << 0x1e) >>
                                      0x18) >> 6)) | 0x700;
  local_828._2_1_ = (char)DAT_00080f68;
  local_828._0_2_ = 0x3609;
  local_828._3_1_ = 'P';
  local_820._0_2_ = 0xa0a;
  local_818 = CONCAT22(400,(undefined2)local_818);
  local_814 = CONCAT22(local_814._2_2_,600);
  local_824._2_2_ = (short)DAT_0007eb50;
  local_824._0_2_ = (short)DAT_0007eb4c;
  local_818 = CONCAT31(local_818._1_3_,4);
  uVar6 = FUN_00031590(&local_830,0x1e);
  local_814 = CONCAT22(uVar6,(undefined2)local_814);
  uVar26 = local_820;
  uVar29 = local_81c;
  iVar24 = FUN_00034828(local_830,local_82c,local_828,local_824,local_820,local_81c,local_818,
                        local_814);
  if (iVar24 == 0) {
    FUN_00031d58(4,"soc init failed!");
  }
  FUN_00031d58(2,0);
  pthread_mutex_lock(DAT_0001294c);
  if (DAT_00080f38 != 0) {
    if (3 < DAT_0007eb9c) {
      local_830._0_1_ = s_start_the_cached_job_00063f2c[0];
      local_830._1_1_ = s_start_the_cached_job_00063f2c[1];
      local_830._2_1_ = s_start_the_cached_job_00063f2c[2];
      local_830._3_1_ = s_start_the_cached_job_00063f2c[3];
      local_82c._0_1_ = s_start_the_cached_job_00063f2c[4];
      local_82c._1_1_ = s_start_the_cached_job_00063f2c[5];
      local_82c._2_1_ = s_start_the_cached_job_00063f2c[6];
      local_82c._3_1_ = s_start_the_cached_job_00063f2c[7];
      local_828._0_1_ = s_start_the_cached_job_00063f2c[8];
      local_828._1_1_ = s_start_the_cached_job_00063f2c[9];
      local_828._2_1_ = s_start_the_cached_job_00063f2c[10];
      local_828._3_1_ = s_start_the_cached_job_00063f2c[11];
      local_824._0_1_ = s_start_the_cached_job_00063f2c[12];
      local_824._1_1_ = s_start_the_cached_job_00063f2c[13];
      local_824._2_1_ = s_start_the_cached_job_00063f2c[14];
      local_824._3_1_ = s_start_the_cached_job_00063f2c[15];
      local_820._0_1_ = s_start_the_cached_job_00063f2c[16];
      local_820._1_1_ = s_start_the_cached_job_00063f2c[17];
      local_820._2_1_ = s_start_the_cached_job_00063f2c[18];
      local_820._3_1_ = s_start_the_cached_job_00063f2c[19];
      local_81c = CONCAT31(local_81c._1_3_,(char)ram0x00063f40);
      FUN_0002e584(3,&local_830,0);
    }
    FUN_0002b330(DAT_00080f3c,DAT_00080f38);
  }
  dVar4 = DAT_00013090;
  pthread_mutex_unlock(DAT_00013098);
  FUN_00032ca8();
  lVar34 = CONCAT44(uVar29,uVar26);
  do {
    pvVar11 = DAT_0058e34c;
    if (*(char *)((int)DAT_0058e354 + 0x16c) != '\0') {
      sem_destroy(DAT_000130b4);
      FUN_000194dc();
      FUN_00053604();
      return 0;
    }
    __mutex = *(pthread_mutex_t **)(*(int *)((int)DAT_0058e34c + 0x24) + 0x14);
    pthread_mutex_lock((pthread_mutex_t *)&DAT_004fcad0);
    iVar24 = pthread_mutex_lock(__mutex);
    if (iVar24 != 0) {
      piVar14 = __errno_location();
      pcVar7 = "bmminer.c";
      uVar26 = DAT_000130b8;
      snprintf((char *)&local_830,0x800,"WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",*piVar14,
               "bmminer.c",DAT_000130b8,0x80f);
      FUN_0002e584(3,&local_830,1);
      lVar34 = CONCAT44(uVar26,pcVar7);
    }
    iVar24 = pthread_rwlock_rdlock((pthread_rwlock_t *)(__mutex + 1));
    if (iVar24 != 0) {
      piVar14 = __errno_location();
      pcVar7 = "bmminer.c";
      uVar26 = DAT_000130b8;
      snprintf((char *)&local_830,0x800,"WTF RDLOCK ERROR ON LOCK! errno=%d in %s %s():%d",*piVar14,
               "bmminer.c",DAT_000130b8,0x80f);
      FUN_0002e584(3,&local_830,1);
      lVar34 = CONCAT44(uVar26,pcVar7);
    }
    iVar24 = pthread_mutex_unlock(__mutex);
    if (iVar24 != 0) {
      piVar14 = __errno_location();
      pcVar7 = "bmminer.c";
      uVar26 = DAT_000130b8;
      snprintf((char *)&local_830,0x800,"WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",*piVar14
               ,"bmminer.c",DAT_000130b8,0x80f);
      FUN_0002e584(3,&local_830,1);
      lVar34 = CONCAT44(uVar26,pcVar7);
    }
    local_a68 = 0;
    local_a64 = 0;
LAB_00012da8:
    if (DAT_005955d0 != 0) {
      while( true ) {
        iVar24 = 0;
        uVar20 = *(uint *)(&DAT_005955e8 + DAT_005955cc * 0x3c);
        iVar25 = *(int *)(&DAT_005955d4 + DAT_005955cc * 0x3c);
        uVar26 = *(undefined4 *)(&DAT_005955e0 + DAT_005955cc * 0x3c);
        uVar29 = *(undefined4 *)(&DAT_005955e4 + DAT_005955cc * 0x3c);
        iVar21 = *(int *)(&DAT_005955ec + DAT_005955cc * 0x3c);
        iVar27 = *(int *)(&DAT_005955d8 + DAT_005955cc * 0x3c);
        uVar16 = *(int *)(&DAT_005955dc + DAT_005955cc * 0x3c) << 0x18 |
                 *(uint *)(&DAT_005955dc + DAT_005955cc * 0x3c) >> 0x18 |
                 *(uint *)(&DAT_005955dc + DAT_005955cc * 0x3c) >> 8 & 0xff00 |
                 (*(uint *)(&DAT_005955dc + DAT_005955cc * 0x3c) & 0xff00) << 8;
        do {
          iVar24 = iVar24 + 1;
        } while (iVar24 != 0x20);
        if ((DAT_00482a5d != '\0') &&
           (((DAT_00590404 != '\0' || (DAT_00482a5c != '\0')) || (6 < DAT_0007eba0)))) {
          iVar24 = iVar25;
          iVar35 = iVar27;
          snprintf((char *)&local_830,0x800,
                   "%s: job_id:0x%x   work_id:0x%x   nonce2:0x%llx nonce3:0x%x   version:0x%x\n",
                   DAT_000130ac,iVar25,iVar27,uVar26,uVar29,uVar20,uVar16);
          FUN_0002e584(7,&local_830,0);
          lVar34 = CONCAT44(iVar35,iVar24);
        }
        uVar36 = (undefined4)((ulonglong)lVar34 >> 0x20);
        uVar17 = DAT_005955cc;
        if (0x1fd < DAT_005955cc) {
          uVar17 = 0;
        }
        puVar22 = (uint *)((int)__mutex + 0xac);
        if (DAT_005955cc < 0x1fe) {
          uVar17 = uVar17 + 1;
        }
        DAT_005955d0 = DAT_005955d0 + -1;
        DAT_005955cc = uVar17;
        if ((uVar20 != DAT_00080f6c) || (iVar27 != DAT_00080f70)) break;
        iVar24 = FUN_0001e29c(iVar21);
        if (iVar24 != 1) goto LAB_00012da8;
        if ((DAT_00482a5d != '\0') &&
           (((DAT_00590404 != '\0' || (DAT_00482a5c != '\0')) || (6 < DAT_0007eba0)))) {
          local_830._0_1_ = s_reepat_nonce_error_00063f90[0];
          local_830._1_1_ = s_reepat_nonce_error_00063f90[1];
          local_830._2_1_ = s_reepat_nonce_error_00063f90[2];
          local_830._3_1_ = s_reepat_nonce_error_00063f90[3];
          local_82c._0_1_ = s_reepat_nonce_error_00063f90[4];
          local_82c._1_1_ = s_reepat_nonce_error_00063f90[5];
          local_82c._2_1_ = s_reepat_nonce_error_00063f90[6];
          local_82c._3_1_ = s_reepat_nonce_error_00063f90[7];
          local_828._0_1_ = s_reepat_nonce_error_00063f90[8];
          local_828._1_1_ = s_reepat_nonce_error_00063f90[9];
          local_828._2_1_ = s_reepat_nonce_error_00063f90[10];
          local_828._3_1_ = s_reepat_nonce_error_00063f90[11];
          local_824._0_1_ = s_reepat_nonce_error_00063f90[12];
          local_824._1_1_ = s_reepat_nonce_error_00063f90[13];
          local_824._2_1_ = s_reepat_nonce_error_00063f90[14];
          local_824._3_1_ = s_reepat_nonce_error_00063f90[15];
                    /* WARNING: Ignoring partial resolution of indirect */
          local_820._0_2_ = (short)ram0x00063fa0;
          FUN_0002e584(7,&local_830,0);
        }
LAB_00013038:
        FUN_0002a3c4(pvVar11);
        FUN_0001e6e0(iVar21);
        if (DAT_005955d0 == 0) goto LAB_00013054;
      }
      DAT_00080f6c = uVar20;
      DAT_00080f70 = iVar27;
      if (DAT_00482a5d == '\0') {
LAB_00013208:
        if (DAT_0007eab8 - iVar25 == 1) goto LAB_000136bc;
        if (DAT_0007eab8 != iVar25) {
          if (DAT_0007eab8 - iVar25 != 2) {
            if ((DAT_00590404 == '\0') && (DAT_00482a5c == '\0')) {
LAB_00012ff0:
              if (2 < DAT_0007eba0) goto LAB_00012ffc;
            }
            else {
LAB_00012ffc:
              snprintf((char *)&local_830,0x800,"%s: job_id non\'t found ...\n",DAT_000130ac,
                       (int)lVar34,(int)((ulonglong)lVar34 >> 0x20));
              FUN_0002e584(3,&local_830,0);
            }
            iVar24 = FUN_0001e29c(iVar21);
            if (iVar24 == 1) goto LAB_00013038;
            goto LAB_00012da8;
          }
LAB_00013228:
          puVar22 = (uint *)((int)__mutex + 0xf1c);
        }
      }
      else {
        if (((DAT_00590404 != '\0') || (DAT_00482a5c != '\0')) || (6 < DAT_0007eba0)) {
          iVar24 = iVar21 + 1;
          snprintf((char *)&local_830,0x800,"%s: Chain ID J%d ...\n",DAT_000130ac,iVar24,uVar36);
          FUN_0002e584(7,&local_830,0);
          lVar34 = CONCAT44(uVar36,iVar24);
          if (DAT_00482a5d != '\0') {
            iVar24 = DAT_0007eab8 - iVar25;
            if (DAT_00590404 == '\0') goto LAB_00012fbc;
            goto LAB_000131d0;
          }
          goto LAB_00013208;
        }
        iVar24 = DAT_0007eab8 - iVar25;
LAB_00012fbc:
        if ((DAT_00482a5c != '\0') || (6 < DAT_0007eba0)) {
LAB_000131d0:
          iVar27 = DAT_0007eab8;
          iVar35 = iVar25;
          snprintf((char *)&local_830,0x800,"%s: given_id:%d job_id:%d switch:%d  ...\n",
                   DAT_000130ac,DAT_0007eab8,iVar25,iVar24);
          FUN_0002e584(7,&local_830,0);
          lVar34 = CONCAT44(iVar35,iVar27);
          goto LAB_00013208;
        }
        if (iVar24 != 1) {
          if (iVar24 != 0) {
            if (iVar24 != 2) goto LAB_00012ff0;
            goto LAB_00013228;
          }
          goto LAB_00013234;
        }
LAB_000136bc:
        puVar22 = (uint *)((int)__mutex + 0x7e4);
      }
LAB_00013234:
      FUN_0002a264(pvVar11,&local_a40,puVar22,puVar22,uVar26,uVar29,uVar16);
      uVar16 = local_a40;
      uVar17 = *puVar22;
      uVar32 = *(undefined8 *)(local_a40 + 0x138);
      lVar33 = FUN_00060180((int)uVar32,(int)((ulonglong)uVar32 >> 0x20));
      plVar5 = DAT_000130a0;
      lVar34 = CONCAT44(uVar29,uVar26);
      iVar24 = (int)((ulonglong)lVar33 >> 0x20);
      if (iVar24 != *(int *)((int)DAT_000130a0 + 4) || (int)lVar33 != *(int *)DAT_000130a0) {
        *DAT_000130a0 = lVar33;
        *(undefined4 *)(plVar5 + 1) = 0;
        *(undefined4 *)((int)plVar5 + 0xc) = 0;
        uVar18 = 0;
        uVar19 = 0;
        lVar34 = lVar33;
        if (lVar33 == 0) {
          uVar13 = 0xffffffff;
          uVar23 = uVar13;
        }
        else {
          do {
            uVar23 = uVar19;
            uVar13 = uVar18;
            uVar1 = (uint)((ulonglong)lVar34 >> 0x21);
            uVar2 = (uint)((byte)((ulonglong)lVar34 >> 0x20) & 1) << 0x1f | (uint)lVar34 >> 1;
            lVar34 = CONCAT44(uVar1,uVar2);
            uVar18 = uVar13 + (0xfffffffe < uVar23);
            uVar19 = uVar23 + 1;
          } while ((uVar2 | uVar1) != 0);
        }
        *(uint *)(plVar5 + 1) = uVar23;
        *(uint *)((int)plVar5 + 0xc) = uVar13;
        lVar34 = CONCAT44(uVar29,uVar26);
        if ((DAT_00482a5d != '\0') &&
           (((DAT_00590404 != '\0' || (DAT_00482a5c != '\0')) ||
            (lVar34 = CONCAT44(uVar29,uVar26), 6 < DAT_0007eba0)))) {
          snprintf((char *)&local_830,0x800,
                   "%s: pool_diff:%lld work_diff:%f pool_diff_bit:%lld ...\n",DAT_000130b0,
                   (int)lVar33,iVar24,uVar32,uVar23,uVar13);
          FUN_0002e584(7,&local_830,0);
          lVar34 = lVar33;
        }
      }
      uVar32 = *(undefined8 *)(DAT_000130a4 + -8);
      lVar33 = FUN_00060180((int)uVar32,(int)((ulonglong)uVar32 >> 0x20));
      iVar24 = (int)((ulonglong)lVar33 >> 0x20);
      if (iVar24 != *(int *)((int)plVar5 + 0x14) || (int)lVar33 != *(int *)(plVar5 + 2)) {
        plVar5[2] = lVar33;
        iVar25 = DAT_000130a8;
        uVar18 = 0;
        uVar19 = 0;
        lVar3 = lVar33;
        if (lVar33 == 0) {
          uVar13 = 0xffffffff;
          uVar23 = uVar13;
        }
        else {
          do {
            uVar23 = uVar19;
            uVar13 = uVar18;
            uVar1 = (uint)((ulonglong)lVar3 >> 0x21);
            uVar2 = (uint)((byte)((ulonglong)lVar3 >> 0x20) & 1) << 0x1f | (uint)lVar3 >> 1;
            lVar3 = CONCAT44(uVar1,uVar2);
            uVar18 = uVar13 + (0xfffffffe < uVar23);
            uVar19 = uVar23 + 1;
          } while ((uVar2 | uVar1) != 0);
        }
        *(uint *)(DAT_000130a8 + -8) = uVar23;
        *(uint *)(iVar25 + -4) = uVar13;
        if ((DAT_00482a5d != '\0') &&
           (((DAT_00590404 != '\0' || (DAT_00482a5c != '\0')) || (6 < DAT_0007eba0)))) {
          snprintf((char *)&local_830,0x800,
                   "%s:net_diff:%lld current_diff:%f net_diff_bit %lld ...\n",DAT_000130b0,
                   (int)lVar33,iVar24,uVar32,uVar23,uVar13);
          lVar34 = lVar33;
          FUN_0002e584(7,&local_830,0);
        }
      }
      local_928 = *(undefined4 *)(uVar16 + 0x80);
      uStack_924 = *(undefined4 *)(uVar16 + 0x84);
      uStack_920 = *(undefined4 *)(uVar16 + 0x88);
      uStack_91c = *(undefined4 *)(uVar16 + 0x8c);
      local_918 = *(undefined4 *)(uVar16 + 0x90);
      uStack_914 = *(undefined4 *)(uVar16 + 0x94);
      uStack_910 = *(undefined4 *)(uVar16 + 0x98);
      uStack_90c = *(undefined4 *)(uVar16 + 0x9c);
      local_930 = 0x50;
      local_92c = 0;
      local_a3c[0] = *(uint *)(uVar16 + 0x40);
      local_a3c[1] = *(undefined4 *)(uVar16 + 0x44);
      local_a3c[2] = *(undefined4 *)(uVar16 + 0x48);
      FUN_000316b0(auStack_908,local_a3c,0xc,auStack_a30);
      local_a3c[0] = uVar20;
      FUN_000316b0(auStack_8fc,local_a3c,4);
      FUN_0002327c(&local_930,local_a3c);
      memset(&local_930,0,0xe8);
      FUN_00023430(local_a3c,0x20,local_a24 + 2);
      puVar15 = local_a24 + 1;
      puVar22 = &local_a40;
      do {
        puVar15 = puVar15 + 1;
        uVar18 = *puVar15;
        puVar22 = puVar22 + 1;
        *puVar22 = uVar18 << 0x18 | (uVar18 >> 8 & 0xff) << 0x10 | (uVar18 >> 0x10 & 0xff) << 8 |
                   uVar18 >> 0x18;
      } while (local_a24 + 9 != puVar15);
      if (local_a24[1] == 0) {
        puVar22 = local_a24 + 1;
        uVar18 = 0;
        do {
          puVar22 = puVar22 + -1;
          if (*puVar22 != 0) {
            uVar19 = (int)uVar18 >> 0x1f;
            goto LAB_00013570;
          }
          uVar18 = uVar18 + 1;
        } while (uVar18 != 7);
        uVar18 = 7;
        uVar19 = 0;
LAB_00013570:
        uVar23 = *(uint *)((int)plVar5 + 0xc) >> 5;
        uVar13 = *(uint *)(plVar5 + 1) >> 5 | *(uint *)((int)plVar5 + 0xc) << 0x1b;
        bVar30 = uVar19 <= uVar23;
        if (uVar23 == uVar19) {
          bVar30 = uVar18 <= uVar13;
        }
        if (!bVar30 || uVar23 == uVar19 && uVar13 == uVar18) {
          uVar26 = FUN_0001e160();
          iVar24 = FUN_00051978(uVar20,uVar26);
          uVar26 = FUN_00051970(uVar20);
          if ((DAT_00482a5d != '\0') &&
             (((DAT_00590404 != '\0' || (DAT_00482a5c != '\0')) || (6 < DAT_0007eba0)))) {
            iVar25 = iVar21;
            iVar27 = iVar24;
            snprintf((char *)&local_830,0x800,"%s: chain %d which_asic_nonce %d which_core_nonce %d"
                     ,DAT_000130b0,iVar21,iVar24,uVar26);
            FUN_0002e584(7,&local_830,0);
            lVar34 = CONCAT44(iVar27,iVar25);
          }
          uVar18 = *(uint *)(plVar5 + 1);
          iVar24 = iVar24 + iVar21 * 0x100;
          uVar23 = (&DAT_0099cd98)[iVar24 * 2];
          uVar19 = local_a24[-(uVar18 >> 5 | *(int *)((int)plVar5 + 0xc) << 0x1b)];
          (&DAT_0099cd98)[iVar24 * 2] = uVar23 + 1;
          (&DAT_0099cd9c)[iVar24 * 2] = (&DAT_0099cd9c)[iVar24 * 2] + (uint)(0xfffffffe < uVar23);
          if ((uVar19 << 0x18 | (uVar19 >> 8 & 0xff) << 0x10 | (uVar19 >> 0x10 & 0xff) << 8 |
              uVar19 >> 0x18) < 0xffffffffU >> (uVar18 & 0x1f)) {
            uVar18 = (&DAT_0099ed98)[iVar21 * 2];
            (&DAT_0099ed98)[iVar21 * 2] = uVar18 + 0x100;
            (&DAT_0099ed9c)[iVar21 * 2] = (&DAT_0099ed9c)[iVar21 * 2] + (uint)(0xfffffeff < uVar18);
            FUN_0002acec(pvVar11,uVar16,uVar20,uVar17 & 0xff);
            bVar30 = 0xfffffeff < local_a68;
            local_a68 = local_a68 + 0x100;
            local_a64 = local_a64 + bVar30;
          }
          else if ((local_a24[0] << 0x18 | (local_a24[0] >> 8 & 0xff) << 0x10 |
                    (local_a24[0] >> 0x10 & 0xff) << 8 | local_a24[0] >> 0x18) < 0xffffff) {
            uVar16 = (&DAT_0099ed98)[iVar21 * 2];
            bVar30 = 0xfffffeff < local_a68;
            local_a68 = local_a68 + 0x100;
            (&DAT_0099ed98)[iVar21 * 2] = uVar16 + 0x100;
            (&DAT_0099ed9c)[iVar21 * 2] = (&DAT_0099ed9c)[iVar21 * 2] + (uint)(0xfffffeff < uVar16);
            local_a64 = local_a64 + bVar30;
          }
        }
      }
      else {
        iVar24 = FUN_0001e29c(iVar21);
        if (iVar24 == 1) {
          if ((DAT_00482a5d != '\0') &&
             (((DAT_00590404 != '\0' || (DAT_00482a5c != '\0')) || (6 < DAT_0007eba0)))) {
            local_830._0_1_ = s_hash2_32_error_00064074[0];
            local_830._1_1_ = s_hash2_32_error_00064074[1];
            local_830._2_1_ = s_hash2_32_error_00064074[2];
            local_830._3_1_ = s_hash2_32_error_00064074[3];
            local_82c._0_1_ = s_hash2_32_error_00064074[4];
            local_82c._1_1_ = s_hash2_32_error_00064074[5];
            local_82c._2_1_ = s_hash2_32_error_00064074[6];
            local_82c._3_1_ = s_hash2_32_error_00064074[7];
            local_828._0_1_ = s_hash2_32_error_00064074[8];
            local_828._1_1_ = s_hash2_32_error_00064074[9];
            local_828._2_1_ = s_hash2_32_error_00064074[10];
            local_828._3_1_ = s_hash2_32_error_00064074[11];
                    /* WARNING: Ignoring partial resolution of indirect */
            local_824._0_2_ = (short)ram0x00064080;
            FUN_0002e584(7,&local_830,0);
          }
          FUN_0002a3c4(pvVar11);
          FUN_0001e6e0(iVar21);
        }
        if ((DAT_00482a5d != '\0') &&
           (((DAT_00590404 != '\0' || (DAT_00482a5c != '\0')) || (6 < DAT_0007eba0)))) {
          snprintf((char *)&local_830,0x800,"%s: HASH2_32[7] != 0",DAT_000130b0);
          FUN_0002e584(7,&local_830,0);
        }
      }
      FUN_0002a1e0(&local_a40,"bmminer.c",DAT_000130b8,0x869);
      goto LAB_00012da8;
    }
LAB_00013054:
    bVar30 = CARRY4(DAT_0099ee08,local_a68);
    DAT_0099ee08 = DAT_0099ee08 + local_a68;
    DAT_0099ee0c = DAT_0099ee0c + local_a64 + (uint)bVar30;
    iVar24 = pthread_rwlock_unlock((pthread_rwlock_t *)(__mutex + 1));
    if (iVar24 != 0) {
      piVar14 = __errno_location();
      pcVar7 = "bmminer.c";
      uVar26 = DAT_000130b8;
      snprintf((char *)&local_830,0x800,"WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d",
               *piVar14,"bmminer.c",DAT_000130b8,0x86c);
      FUN_0002e584(3,&local_830,1);
      lVar34 = CONCAT44(uVar26,pcVar7);
    }
    (*DAT_0007ecc4)();
    pthread_mutex_unlock((pthread_mutex_t *)&DAT_004fcad0);
    FUN_000304d4(1);
    if ((local_a68 | local_a64) != 0) {
      uVar16 = -local_a68;
      uVar20 = local_a68 + ((uint)(local_a68 != 0) * -2 - local_a64) +
               (uint)CARRY4(local_a68 * 0x7fffffff,local_a68 * 0x7fffffff) +
               (uint)CARRY4(local_a68 * -2,local_a68);
      if ((DAT_00482a5d != '\0') &&
         (((DAT_00590404 != '\0' || (DAT_00482a5c != '\0')) || (6 < DAT_0007eba0)))) {
        uVar17 = uVar16;
        uVar18 = uVar20;
        snprintf((char *)&local_830,0x800,"%s: hashes %llu ...\n",DAT_000130ac,uVar16,uVar20);
        FUN_0002e584(7,&local_830,0);
        lVar34 = CONCAT44(uVar18,uVar17);
      }
      if ((uVar16 | uVar20) != 0) {
        dVar31 = (double)FUN_000600c4(uVar16,uVar20);
        *(double *)(DAT_0001309c + -8) = dVar31 / dVar4 + *(double *)(DAT_0001309c + -8);
      }
    }
  } while( true );
LAB_00012828:
  pclose(__stream);
  uVar20 = 1;
  uVar16 = 0;
  iVar24 = 0;
  puVar28 = &local_930;
  while( true ) {
    sVar8 = strlen((char *)&local_930);
    if (sVar8 < uVar20) break;
    memset(local_a24 + 2,0,0x20);
    ppuVar9 = __ctype_b_loc();
    if (((*ppuVar9)[*(byte *)puVar28] & 0x2000) != 0) {
      strncpy((char *)(local_a24 + 2),(char *)((int)&local_930 + uVar16),(uVar20 - uVar16) - 1);
      lVar10 = strtol((char *)(local_a24 + 2),(char **)0x0,10);
      uVar16 = uVar20;
      if (((0 < lVar10) && (iVar24 = iVar24 + 1, DAT_00482a5d != '\0')) &&
         ((DAT_00590404 != '\0' || ((DAT_00482a5c != '\0' || (6 < DAT_0007eba0)))))) {
        snprintf((char *)&local_830,0x800,"Parsed proc id is: %d\n");
        FUN_0002e584(7,&local_830,0);
      }
    }
    uVar20 = uVar20 + 1;
    puVar28 = (undefined4 *)((int)puVar28 + 1);
  }
  if (iVar24 != 0) {
    if (((DAT_00590404 != '\0') || (DAT_00482a5c != '\0')) || (2 < DAT_0007eba0)) {
      snprintf((char *)&local_830,0x800," %d instance of %s is  already Running on this machine",
               iVar24,uVar26);
      FUN_0002e584(3,&local_830,0);
    }
    if (iVar24 != 1) {
      snprintf((char *)&local_830,0x800,"%s is forbidden to start twice, will exit immediately!",
               *param_2);
      FUN_0002e584(3,&local_830,1);
    }
  }
  goto LAB_000129f0;
}

