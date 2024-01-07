
void FUN_0002974c(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  double dVar4;
  int iVar5;
  time_t tVar6;
  void *__ptr;
  void *__ptr_00;
  int *piVar7;
  uint *puVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  undefined4 uVar12;
  char *__s;
  undefined4 uVar13;
  pthread_mutex_t *__mutex;
  pthread_rwlock_t *__rwlock;
  bool bVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined8 uVar20;
  undefined4 local_8d8;
  uint uStack_8d4;
  uint local_8d0 [7];
  uint uStack_8b4;
  uint local_8b0 [8];
  undefined auStack_890 [28];
  uint uStack_874;
  uint local_870 [16];
  undefined2 local_830 [68];
  undefined auStack_7a8 [1916];
  
  __mutex = (pthread_mutex_t *)(param_1 + 0xd4);
  iVar5 = pthread_mutex_lock(__mutex);
  uVar13 = DAT_00029f20;
  if (iVar5 != 0) {
    piVar7 = __errno_location();
    uVar13 = DAT_0002a1a0;
    snprintf((char *)local_830,0x800,"WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",*piVar7,
             "bmminer.c",DAT_0002a1a0,0x4f4);
    FUN_0002e584(3,local_830,1);
  }
  __rwlock = (pthread_rwlock_t *)(param_1 + 0xec);
  iVar5 = pthread_rwlock_wrlock(__rwlock);
  if (iVar5 != 0) {
    piVar7 = __errno_location();
    snprintf((char *)local_830,0x800,"WTF WRLOCK ERROR ON LOCK! errno=%d in %s %s():%d",*piVar7,
             "bmminer.c",uVar13,0x4f4);
    FUN_0002e584(3,local_830,1);
  }
  local_8d8 = *(undefined4 *)(param_1 + 0x270);
  uStack_8d4 = *(uint *)(param_1 + 0x274);
  FUN_00030ea8(*(int *)(param_1 + 0x620) + *(int *)(param_1 + 0x628),&local_8d8,
               *(undefined4 *)(param_1 + 0x278),"bmminer.c",uVar13);
  uVar11 = *(uint *)(param_1 + 0x270);
  iVar5 = *(int *)(param_1 + 0x274);
  *(uint *)(param_1 + 0x270) = uVar11 + 1;
  *(uint *)(param_1 + 0x274) = iVar5 + (uint)(0xfffffffe < uVar11);
  *(uint *)(param_2 + 0x128) = uVar11;
  *(int *)(param_2 + 300) = iVar5;
  *(undefined4 *)(param_2 + 0x130) = *(undefined4 *)(param_1 + 0x278);
  iVar5 = pthread_rwlock_unlock(__rwlock);
  if (iVar5 == 0) {
    iVar5 = pthread_rwlock_rdlock(__rwlock);
    if (iVar5 == 0) goto LAB_0002982c;
LAB_0002a024:
    piVar7 = __errno_location();
    snprintf((char *)local_830,0x800,"WTF RDLOCK ERROR ON LOCK! errno=%d in %s %s():%d",*piVar7,
             "bmminer.c",uVar13,0x4ff);
    FUN_0002e584(3,local_830,1);
    iVar5 = pthread_mutex_unlock(__mutex);
  }
  else {
    piVar7 = __errno_location();
    snprintf((char *)local_830,0x800,"WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d",*piVar7,
             "bmminer.c",uVar13,0x4ff);
    FUN_0002e584(3,local_830,1);
    iVar5 = pthread_rwlock_rdlock(__rwlock);
    if (iVar5 != 0) goto LAB_0002a024;
LAB_0002982c:
    iVar5 = pthread_mutex_unlock(__mutex);
  }
  if (iVar5 != 0) {
    piVar7 = __errno_location();
    snprintf((char *)local_830,0x800,"WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",*piVar7,
             "bmminer.c",uVar13,0x4ff);
    FUN_0002e584(3,local_830,1);
  }
  FUN_0002f1ec(*(undefined4 *)(param_1 + 0x620),*(undefined4 *)(param_1 + 0x624),local_830);
  FUN_0002f1ec(local_830,0x20,local_8d0);
  FUN_00030ea8(local_8b0,local_8d0,0x20,"bmminer.c",uVar13);
  if (0 < *(int *)(param_1 + 0x6ac)) {
    iVar5 = 0;
    do {
      iVar1 = iVar5 * 4;
      iVar5 = iVar5 + 1;
      FUN_00030ea8(auStack_890,*(undefined4 *)(*(int *)(param_1 + 0x2a4) + iVar1),0x20,"bmminer.c",
                   uVar13);
      FUN_0002f1ec(local_8b0,0x40,local_830);
      FUN_0002f1ec(local_830,0x20,local_8d0);
      FUN_00030ea8(local_8b0,local_8d0,0x20,"bmminer.c",uVar13);
    } while (iVar5 < *(int *)(param_1 + 0x6ac));
  }
  puVar10 = &uStack_8b4;
  puVar8 = &uStack_8d4;
  do {
    puVar10 = puVar10 + 1;
    uVar11 = *puVar10;
    puVar8 = puVar8 + 1;
    *puVar8 = uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8 |
              uVar11 >> 0x18;
  } while (local_8b0 + 7 != puVar10);
  FUN_00030ea8(param_2,param_1 + 0x62c,0x70,"bmminer.c",uVar13);
  FUN_00030ea8(param_2 + 0x24,local_8d0,0x20,"bmminer.c",uVar13);
  uVar12 = *(undefined4 *)(param_1 + 0x724);
  *(undefined4 *)(param_2 + 0x138) = *(undefined4 *)(param_1 + 0x720);
  *(undefined4 *)(param_2 + 0x13c) = uVar12;
  uVar12 = __strdup(*(undefined4 *)(param_1 + 0x2a0));
  *(undefined4 *)(param_2 + 0x120) = uVar12;
  uVar12 = __strdup(*(undefined4 *)(param_1 + 0x264));
  *(undefined4 *)(param_2 + 0x140) = uVar12;
  uVar12 = __strdup(param_1 + 0x70c);
  *(undefined4 *)(param_2 + 0x134) = uVar12;
  iVar5 = pthread_rwlock_unlock(__rwlock);
  if (iVar5 != 0) {
    piVar7 = __errno_location();
    snprintf((char *)local_830,0x800,"WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d",*piVar7,
             "bmminer.c",uVar13,0x51e);
    FUN_0002e584(3,local_830,1);
  }
  (*DAT_0007ecc4)();
  if (DAT_00482a5d != '\0') {
    __ptr = (void *)FUN_0002f670(param_2,0x70);
    __ptr_00 = (void *)FUN_0002f670(local_8d0,0x20);
    if (DAT_00482a5d != '\0') {
      if (((DAT_00590404 == '\0') && (DAT_00482a5c == '\0')) && (DAT_0007eba0 < 7)) {
LAB_00029db8:
        if ((DAT_00482a5c == '\0') && (DAT_0007eba0 < 7)) {
LAB_00029e20:
          if ((DAT_00482a5c != '\0') || (6 < DAT_0007eba0)) {
LAB_00029e40:
            snprintf((char *)local_830,0x800,"Work job_id %s nonce2 %llu ntime %s",
                     *(undefined4 *)(param_2 + 0x120),*(undefined4 *)(param_2 + 0x128),
                     *(undefined4 *)(param_2 + 300),*(undefined4 *)(param_2 + 0x134));
            FUN_0002e584(7,local_830,0);
          }
        }
        else {
LAB_00029dd8:
          snprintf((char *)local_830,0x800,"Generated stratum header %s",__ptr);
          FUN_0002e584(7,local_830,0);
          if (DAT_00482a5d != '\0') {
            if (DAT_00590404 == '\0') goto LAB_00029e20;
            goto LAB_00029e40;
          }
        }
      }
      else {
        snprintf((char *)local_830,0x800,"Generated stratum merkle %s",__ptr_00);
        FUN_0002e584(7,local_830,0);
        if (DAT_00482a5d != '\0') {
          if (DAT_00590404 == '\0') goto LAB_00029db8;
          goto LAB_00029dd8;
        }
      }
    }
    free(__ptr);
    free(__ptr_00);
  }
  puVar8 = (uint *)(param_2 + -4);
  puVar10 = &uStack_874;
  do {
    puVar8 = puVar8 + 1;
    uVar11 = *puVar8;
    puVar10 = puVar10 + 1;
    *puVar10 = uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 | (uVar11 >> 0x10 & 0xff) << 8 |
               uVar11 >> 0x18;
  } while (local_870 + 0xf != puVar10);
  FUN_0002f024(local_830);
  FUN_0002f054(local_830,local_870,0x40);
  dVar15 = (double)CONCAT44(0x405,DAT_00029f24);
  FUN_00030ea8(param_2 + 0x80,auStack_7a8,0x20,"bmminer.c");
  FUN_000294b8((int)*(undefined8 *)(param_2 + 0x138),param_2 + 0xa0);
  DAT_005945b4 = DAT_005945b4 + 1;
  tVar6 = time((time_t *)0x0);
  if (5 < tVar6 - DAT_00080b98) {
    DAT_00080b98 = time((time_t *)0x0);
    DAT_00080b9c = DAT_005945b4;
  }
  dVar19 = *(double *)(param_2 + 0x138);
  *(undefined *)(param_2 + 0x11c) = 1;
  *(int *)(param_2 + 0x104) = param_1;
  *(undefined4 *)(param_2 + 0xf8) = 0;
  *(undefined *)(param_2 + 0x118) = 0;
  *(undefined4 *)(param_2 + 0x150) = 0;
  *(undefined *)(param_2 + 0x1b8) = 0x53;
  *(undefined4 *)(param_2 + 0xf4) = 0x3c;
  dVar4 = DAT_00029ed8;
  if (dVar19 == 0.0) {
    dVar18 = (double)FUN_000600b4(*(undefined4 *)(param_2 + 0xb8),*(undefined4 *)(param_2 + 0xbc));
    dVar16 = (double)FUN_000600b4(*(undefined4 *)(param_2 + 0xb0),*(undefined4 *)(param_2 + 0xb4));
    dVar16 = dVar16 * DAT_00029ee0;
    dVar17 = (double)FUN_000600b4(*(undefined4 *)(param_2 + 0xa8),*(undefined4 *)(param_2 + 0xac));
    dVar17 = dVar17 * DAT_00029ee8;
    dVar19 = (double)FUN_000600b4(*(undefined4 *)(param_2 + 0xa0),*(undefined4 *)(param_2 + 0xa4));
    dVar19 = dVar19 + dVar18 * dVar4 + dVar16 + dVar17;
    if (dVar19 == 0.0) {
      uVar20 = 0xffffffffffffffff;
      dVar19 = DAT_0002a188;
    }
    else {
      dVar19 = DAT_00029ef0 / dVar19;
      dVar15 = round(dVar15);
      uVar20 = FUN_00060180(SUB84(dVar15,0),(int)((ulonglong)dVar15 >> 0x20));
    }
    *(double *)(param_2 + 0x178) = dVar19;
  }
  else {
    *(double *)(param_2 + 0x178) = dVar19;
    dVar15 = round(dVar15);
    uVar20 = FUN_00060180(SUB84(dVar15,0),(int)((ulonglong)dVar15 >> 0x20));
  }
  uVar3 = DAT_00029ec4;
  uVar2 = DAT_00029ec0;
  uVar9 = (uint)((ulonglong)uVar20 >> 0x20);
  uVar11 = (uint)uVar20;
  *(double *)(param_1 + 0x1e0) = dVar19;
  bVar14 = uVar3 <= uVar9;
  local_830[0] = 0;
  if (uVar9 == uVar3) {
    bVar14 = uVar2 <= uVar11;
  }
  __s = (char *)(*(int *)(param_2 + 0x104) + 0x30);
  if (!bVar14 || uVar9 == uVar3 && uVar11 == uVar2) {
    bVar14 = DAT_00029efc <= uVar9;
    if (uVar9 == DAT_00029efc) {
      bVar14 = DAT_00029ef8 <= uVar11;
    }
    if (bVar14 && (uVar9 != DAT_00029efc || uVar11 != DAT_00029ef8)) {
      iVar5 = FUN_00060120(uVar11,uVar9,DAT_00029f00,DAT_00029f04);
      local_830[0] = 0x50;
      dVar15 = (double)(longlong)iVar5 / DAT_00029ed0;
      uVar11 = 0x50;
      goto LAB_00029b38;
    }
    bVar14 = DAT_00029f0c <= uVar9;
    if (uVar9 == DAT_00029f0c) {
      bVar14 = DAT_00029f08 <= uVar11;
    }
    if (bVar14 && (uVar9 != DAT_00029f0c || uVar11 != DAT_00029f08)) {
      iVar5 = FUN_00060120(uVar11,uVar9,DAT_00029f18,DAT_00029f1c);
      uVar11 = 0x54;
      local_830[0] = 0x54;
      dVar15 = (double)(longlong)iVar5 / DAT_00029ed0;
      goto LAB_00029b38;
    }
    bVar14 = DAT_00029f14 <= uVar9;
    if (uVar9 == DAT_00029f14) {
      bVar14 = DAT_00029f10 <= uVar11;
    }
    if (bVar14 && (uVar9 != DAT_00029f14 || uVar11 != DAT_00029f10)) {
      iVar5 = FUN_00060120(uVar11,uVar9,&DAT_000f4240,0);
      local_830[0] = 0x47;
      dVar15 = (double)(longlong)iVar5 / DAT_00029ed0;
      uVar11 = 0x47;
      goto LAB_00029b38;
    }
    bVar14 = DAT_0002a194 <= uVar9;
    if (uVar9 == DAT_0002a194) {
      bVar14 = DAT_0002a190 <= uVar11;
    }
    if (bVar14 && (uVar9 != DAT_0002a194 || uVar11 != DAT_0002a190)) {
      iVar5 = FUN_00060120(uVar11,uVar9,1000,0);
      uVar11 = 0x4d;
      local_830[0] = 0x4d;
      dVar15 = (double)(longlong)iVar5 / DAT_0002a198;
      goto LAB_00029b38;
    }
    if ((uVar9 != 0 || 0x3e6 < uVar11) && (uVar9 != 0 || uVar11 != 999)) {
      local_830[0] = 0x4b;
      dVar15 = (double)(longlong)(int)uVar11 / DAT_0002a198;
      uVar11 = 0x4b;
      goto LAB_00029b38;
    }
    snprintf(__s,8,"%d%s",uVar11,local_830);
  }
  else {
    iVar5 = FUN_00060120(uVar11,uVar9,DAT_00029ec8,DAT_00029ecc);
    local_830[0] = 0x45;
    dVar15 = (double)(longlong)iVar5 / DAT_00029ed0;
    uVar11 = 0x45;
LAB_00029b38:
    snprintf(__s,8,"%.3g%s",uVar11,dVar15,local_830);
  }
  dVar15 = *(double *)(param_1 + 0x1d0);
  if (dVar15 == dVar19) {
    uVar11 = *(int *)(param_1 + 0x1e8) + 1;
    *(uint *)(param_1 + 0x1e8) = uVar11;
LAB_00029b70:
    dVar15 = *(double *)(param_1 + 0x1d8);
  }
  else {
    if (dVar15 == dVar19 || dVar15 < dVar19 != (NAN(dVar15) || NAN(dVar19))) {
      if (dVar15 != 0.0) goto LAB_00029b70;
      *(double *)(param_1 + 0x1d0) = dVar19;
      *(undefined4 *)(param_1 + 0x1e8) = 1;
    }
    else {
      *(double *)(param_1 + 0x1d0) = dVar19;
      *(undefined4 *)(param_1 + 0x1e8) = 1;
    }
    uVar11 = 1;
    dVar15 = *(double *)(param_1 + 0x1d8);
  }
  if (dVar15 == dVar19) {
    *(int *)(param_1 + 0x1ec) = *(int *)(param_1 + 0x1ec) + 1;
  }
  else {
    if (dVar15 < dVar19) {
      uVar11 = 1;
    }
    if (dVar15 < dVar19) {
      *(double *)(param_1 + 0x1d8) = dVar19;
      *(uint *)(param_1 + 0x1ec) = uVar11;
    }
  }
  FUN_000302a0(param_2 + 0x108);
  return;
}

