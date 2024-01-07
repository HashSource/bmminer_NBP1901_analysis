
undefined4 FUN_0002b330(void *param_1,uint param_2)

{
  int iVar1;
  pthread_mutex_t *__mutex;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  void *local_82c;
  undefined4 local_828;
  undefined4 uStack_824;
  undefined4 uStack_820;
  undefined4 uStack_81c;
  undefined4 local_818;
  undefined4 uStack_814;
  undefined4 uStack_810;
  undefined4 uStack_80c;
  undefined4 local_808;
  
  __mutex = DAT_00592460;
  local_82c = (void *)0x0;
  if ((DAT_00482a5d != '\0') &&
     (((DAT_00590404 != '\0' || (DAT_00482a5c != '\0')) || (6 < DAT_0007eba0)))) {
    snprintf((char *)&local_828,0x800,"%s, rec job data %p size: %d\n",DAT_0002b7f8,param_1,param_2)
    ;
    FUN_0002e584(7,&local_828,0);
  }
  uVar2 = FUN_00031d38();
  if (uVar2 < 2) {
    pthread_mutex_lock(DAT_0002b7fc);
    if ((DAT_00080f3c == (void *)0x0) || (DAT_00080f38 < param_2)) {
      DAT_00080f3c = realloc(DAT_00080f3c,param_2);
    }
    memcpy(DAT_00080f3c,param_1,param_2);
    DAT_00080f38 = param_2;
    pthread_mutex_unlock(DAT_0002b7fc);
    return 0;
  }
  iVar3 = pthread_mutex_lock((pthread_mutex_t *)((int)__mutex + 0x70));
  if (iVar3 != 0) {
    piVar4 = __errno_location();
    snprintf((char *)&local_828,0x800,"WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",*piVar4,
             "bmminer.c",DAT_0002b7f8,0x8ca);
    FUN_0002e584(3,&local_828,1);
  }
  piVar4 = (int *)calloc(1,0x738);
  FUN_0002b05c(piVar4,param_1,param_2);
  if (*(char *)(piVar4 + 0xa0) == '\0') {
    local_828._0_1_ = s_Bitmain_S9_has_to_use_stratum_po_00063c80[0];
    local_828._1_1_ = s_Bitmain_S9_has_to_use_stratum_po_00063c80[1];
    local_828._2_1_ = s_Bitmain_S9_has_to_use_stratum_po_00063c80[2];
    local_828._3_1_ = s_Bitmain_S9_has_to_use_stratum_po_00063c80[3];
    uStack_824._0_1_ = s_Bitmain_S9_has_to_use_stratum_po_00063c80[4];
    uStack_824._1_1_ = s_Bitmain_S9_has_to_use_stratum_po_00063c80[5];
    uStack_824._2_1_ = s_Bitmain_S9_has_to_use_stratum_po_00063c80[6];
    uStack_824._3_1_ = s_Bitmain_S9_has_to_use_stratum_po_00063c80[7];
    uStack_820._0_1_ = s_Bitmain_S9_has_to_use_stratum_po_00063c80[8];
    uStack_820._1_1_ = s_Bitmain_S9_has_to_use_stratum_po_00063c80[9];
    uStack_820._2_1_ = s_Bitmain_S9_has_to_use_stratum_po_00063c80[10];
    uStack_820._3_1_ = s_Bitmain_S9_has_to_use_stratum_po_00063c80[11];
    uStack_81c._0_1_ = s_Bitmain_S9_has_to_use_stratum_po_00063c80[12];
    uStack_81c._1_1_ = s_Bitmain_S9_has_to_use_stratum_po_00063c80[13];
    uStack_81c._2_1_ = s_Bitmain_S9_has_to_use_stratum_po_00063c80[14];
    uStack_81c._3_1_ = s_Bitmain_S9_has_to_use_stratum_po_00063c80[15];
    local_818._0_1_ = s_Bitmain_S9_has_to_use_stratum_po_00063c80[16];
    local_818._1_1_ = s_Bitmain_S9_has_to_use_stratum_po_00063c80[17];
    local_818._2_1_ = s_Bitmain_S9_has_to_use_stratum_po_00063c80[18];
    local_818._3_1_ = s_Bitmain_S9_has_to_use_stratum_po_00063c80[19];
    uStack_814._0_1_ = s_Bitmain_S9_has_to_use_stratum_po_00063c80[20];
    uStack_814._1_1_ = s_Bitmain_S9_has_to_use_stratum_po_00063c80[21];
    uStack_814._2_1_ = s_Bitmain_S9_has_to_use_stratum_po_00063c80[22];
    uStack_814._3_1_ = s_Bitmain_S9_has_to_use_stratum_po_00063c80[23];
    uStack_810._0_1_ = s_Bitmain_S9_has_to_use_stratum_po_00063c80[24];
    uStack_810._1_1_ = s_Bitmain_S9_has_to_use_stratum_po_00063c80[25];
    uStack_810._2_1_ = s_Bitmain_S9_has_to_use_stratum_po_00063c80[26];
    uStack_810._3_1_ = s_Bitmain_S9_has_to_use_stratum_po_00063c80[27];
    uStack_80c._0_1_ = s_Bitmain_S9_has_to_use_stratum_po_00063c80[28];
    uStack_80c._1_1_ = s_Bitmain_S9_has_to_use_stratum_po_00063c80[29];
    uStack_80c._2_1_ = s_Bitmain_S9_has_to_use_stratum_po_00063c80[30];
    uStack_80c._3_1_ = s_Bitmain_S9_has_to_use_stratum_po_00063c80[31];
    local_808._0_1_ = s_Bitmain_S9_has_to_use_stratum_po_00063c80[32];
    local_808._1_1_ = s_Bitmain_S9_has_to_use_stratum_po_00063c80[33];
    local_808._2_1_ = s_Bitmain_S9_has_to_use_stratum_po_00063c80[34];
    local_808._3_1_ = s_Bitmain_S9_has_to_use_stratum_po_00063c80[35];
    FUN_0002e584(3,&local_828,1);
  }
  iVar3 = pthread_mutex_lock(__mutex);
  if (iVar3 != 0) {
    piVar5 = __errno_location();
    snprintf((char *)&local_828,0x800,"WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",*piVar5,
             "bmminer.c",DAT_0002b7f8,0x8d5);
    FUN_0002e584(3,&local_828,1);
  }
  iVar3 = pthread_rwlock_wrlock((pthread_rwlock_t *)(__mutex + 1));
  if (iVar3 != 0) {
    piVar5 = __errno_location();
    snprintf((char *)&local_828,0x800,"WTF WRLOCK ERROR ON LOCK! errno=%d in %s %s():%d",*piVar5,
             "bmminer.c",DAT_0002b7f8,0x8d5);
    FUN_0002e584(3,&local_828,1);
  }
  __mutex[7].__data.__lock = *piVar4;
  FUN_00033478((int)__mutex + 0xf1c,(int)__mutex + 0x7e4);
  *(undefined4 *)((int)__mutex + 0x165c) = *(undefined4 *)((int)__mutex + 0x1658);
  FUN_00033478((int)__mutex + 0x7e4,(int)__mutex + 0xac);
  *(undefined4 *)((int)__mutex + 0x1658) = *(undefined4 *)((int)__mutex + 0x1654);
  FUN_00033478((int)__mutex + 0xac,piVar4);
  DAT_0007eab8 = DAT_0007eab8 + 1;
  *(int *)((int)__mutex + 0x1654) = DAT_0007eab8;
  iVar3 = pthread_rwlock_unlock((pthread_rwlock_t *)(__mutex + 1));
  if (iVar3 != 0) {
    piVar5 = __errno_location();
    snprintf((char *)&local_828,0x800,"WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d",*piVar5,
             "bmminer.c",DAT_0002b7f8,0x8e1);
    FUN_0002e584(3,&local_828,1);
  }
  iVar3 = pthread_mutex_unlock(__mutex);
  if (iVar3 != 0) {
    piVar5 = __errno_location();
    snprintf((char *)&local_828,0x800,"WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",*piVar5,
             "bmminer.c",DAT_0002b7f8,0x8e1);
    FUN_0002e584(3,&local_828,1);
  }
  (*DAT_0007ecc4)();
  FUN_00032cc0(&local_82c,piVar4,*(undefined4 *)((int)__mutex + 0x1654));
  pthread_mutex_lock((pthread_mutex_t *)&DAT_004fcaa0);
  FUN_00032f40(local_82c);
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_004fcaa0);
  free(local_82c);
  iVar3 = pthread_mutex_unlock((pthread_mutex_t *)((int)__mutex + 0x70));
  if (iVar3 != 0) {
    piVar5 = __errno_location();
    snprintf((char *)&local_828,0x800,"WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",*piVar5,
             "bmminer.c",DAT_0002b7f8,0x8eb);
    FUN_0002e584(3,&local_828,1);
  }
  (*DAT_0007ecc4)();
  if (0 < piVar4[0x1ab]) {
    iVar3 = 0;
    do {
      iVar1 = iVar3 * 4;
      iVar3 = iVar3 + 1;
      free(*(void **)(piVar4[0xa9] + iVar1));
    } while (iVar3 < piVar4[0x1ab]);
  }
  free((void *)piVar4[0xa9]);
  free((void *)piVar4[0x188]);
  free((void *)piVar4[0xa8]);
  free((void *)piVar4[0x99]);
  free(piVar4);
  return 0;
}

