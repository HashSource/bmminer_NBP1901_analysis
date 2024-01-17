
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_000290b4(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 local_810;
  undefined4 uStack_80c;
  undefined4 uStack_808;
  undefined4 uStack_804;
  undefined4 local_800;
  undefined4 uStack_7fc;
  undefined4 uStack_7f8;
  undefined4 uStack_7f4;
  undefined2 uStack_7f0;
  undefined local_7ee;
  
  iVar1 = FUN_0002f490(1,0x1c0,"bmminer.c",DAT_000292d4,0x558);
  if (iVar1 == 0) {
    local_810._0_1_ = s_Failed_to_calloc_work_in_make_wo_000638e4[0];
    local_810._1_1_ = s_Failed_to_calloc_work_in_make_wo_000638e4[1];
    local_810._2_1_ = s_Failed_to_calloc_work_in_make_wo_000638e4[2];
    local_810._3_1_ = s_Failed_to_calloc_work_in_make_wo_000638e4[3];
    uStack_80c._0_1_ = s_Failed_to_calloc_work_in_make_wo_000638e4[4];
    uStack_80c._1_1_ = s_Failed_to_calloc_work_in_make_wo_000638e4[5];
    uStack_80c._2_1_ = s_Failed_to_calloc_work_in_make_wo_000638e4[6];
    uStack_80c._3_1_ = s_Failed_to_calloc_work_in_make_wo_000638e4[7];
    uStack_808._0_1_ = s_Failed_to_calloc_work_in_make_wo_000638e4[8];
    uStack_808._1_1_ = s_Failed_to_calloc_work_in_make_wo_000638e4[9];
    uStack_808._2_1_ = s_Failed_to_calloc_work_in_make_wo_000638e4[10];
    uStack_808._3_1_ = s_Failed_to_calloc_work_in_make_wo_000638e4[11];
    uStack_804._0_1_ = s_Failed_to_calloc_work_in_make_wo_000638e4[12];
    uStack_804._1_1_ = s_Failed_to_calloc_work_in_make_wo_000638e4[13];
    uStack_804._2_1_ = s_Failed_to_calloc_work_in_make_wo_000638e4[14];
    uStack_804._3_1_ = s_Failed_to_calloc_work_in_make_wo_000638e4[15];
    local_800._0_1_ = s_Failed_to_calloc_work_in_make_wo_000638e4[16];
    local_800._1_1_ = s_Failed_to_calloc_work_in_make_wo_000638e4[17];
    local_800._2_1_ = s_Failed_to_calloc_work_in_make_wo_000638e4[18];
    local_800._3_1_ = s_Failed_to_calloc_work_in_make_wo_000638e4[19];
    uStack_7fc._0_1_ = s_Failed_to_calloc_work_in_make_wo_000638e4[20];
    uStack_7fc._1_1_ = s_Failed_to_calloc_work_in_make_wo_000638e4[21];
    uStack_7fc._2_1_ = s_Failed_to_calloc_work_in_make_wo_000638e4[22];
    uStack_7fc._3_1_ = s_Failed_to_calloc_work_in_make_wo_000638e4[23];
    uStack_7f8._0_1_ = s_Failed_to_calloc_work_in_make_wo_000638e4[24];
    uStack_7f8._1_1_ = s_Failed_to_calloc_work_in_make_wo_000638e4[25];
    uStack_7f8._2_1_ = s_Failed_to_calloc_work_in_make_wo_000638e4[26];
    uStack_7f8._3_1_ = s_Failed_to_calloc_work_in_make_wo_000638e4[27];
    uStack_7f4._0_1_ = s_Failed_to_calloc_work_in_make_wo_000638e4[28];
    uStack_7f4._1_1_ = s_Failed_to_calloc_work_in_make_wo_000638e4[29];
    uStack_7f4._2_1_ = s_Failed_to_calloc_work_in_make_wo_000638e4[30];
    uStack_7f4._3_1_ = s_Failed_to_calloc_work_in_make_wo_000638e4[31];
    uStack_7f0 = (undefined2)ram0x00063904;
    local_7ee = (undefined)((uint)ram0x00063904 >> 0x10);
    FUN_0002e584(3,&local_810,1);
  }
  iVar2 = pthread_mutex_lock((pthread_mutex_t *)&DAT_00590408);
  if (iVar2 == 0) {
    iVar2 = pthread_rwlock_wrlock(DAT_000292d8);
  }
  else {
    piVar4 = __errno_location();
    snprintf((char *)&local_810,0x800,"WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",*piVar4,
             "bmminer.c",DAT_000292dc,0x54f);
    FUN_0002e584(3,&local_810,1);
    iVar2 = pthread_rwlock_wrlock(DAT_000292d8);
  }
  if (iVar2 != 0) {
    piVar4 = __errno_location();
    snprintf((char *)&local_810,0x800,"WTF WRLOCK ERROR ON LOCK! errno=%d in %s %s():%d",*piVar4,
             "bmminer.c",DAT_000292dc,0x54f);
    FUN_0002e584(3,&local_810,1);
  }
  iVar2 = DAT_00080b94;
  DAT_00080b94 = DAT_00080b94 + 1;
  iVar3 = pthread_rwlock_unlock(DAT_000292d8);
  if (iVar3 != 0) {
    piVar4 = __errno_location();
    snprintf((char *)&local_810,0x800,"WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d",*piVar4,
             "bmminer.c",DAT_000292dc,0x551);
    FUN_0002e584(3,&local_810,1);
  }
  iVar3 = pthread_mutex_unlock((pthread_mutex_t *)&DAT_00590408);
  if (iVar3 != 0) {
    piVar4 = __errno_location();
    snprintf((char *)&local_810,0x800,"WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",*piVar4,
             "bmminer.c",DAT_000292dc,0x551);
    FUN_0002e584(3,&local_810,1);
  }
  (*DAT_0007ecc4)();
  *(int *)(iVar1 + 0x154) = iVar2;
  return iVar1;
}

