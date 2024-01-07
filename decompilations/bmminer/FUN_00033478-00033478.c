
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00033478(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  void *pvVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  size_t __nmemb;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 local_828;
  undefined4 uStack_824;
  undefined4 uStack_820;
  undefined4 uStack_81c;
  undefined4 local_818;
  undefined4 uStack_814;
  undefined4 uStack_810;
  undefined4 uStack_80c;
  undefined4 local_808;
  undefined4 uStack_804;
  undefined4 uStack_800;
  undefined2 local_7fc;
  undefined local_7fa;
  
  if (param_2[0xa8] == 0) {
    return;
  }
  iVar9 = param_2[0x1ab];
  __nmemb = param_2[0x189];
  iVar2 = pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0x35));
  if (iVar2 != 0) {
    piVar5 = __errno_location();
    snprintf((char *)&local_828,0x800,"WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",*piVar5,
             "driver-btm-api.c",DAT_00033888,0x474);
    FUN_0002e584(3,&local_828,1);
    FUN_0002a574(1);
  }
  iVar2 = pthread_rwlock_wrlock((pthread_rwlock_t *)(param_1 + 0x3b));
  if (iVar2 != 0) {
    piVar5 = __errno_location();
    snprintf((char *)&local_828,0x800,"WTF WRLOCK ERROR ON LOCK! errno=%d in %s %s():%d",*piVar5,
             "driver-btm-api.c",DAT_00033888,0x474);
    FUN_0002e584(3,&local_828,1);
    FUN_0002a574(1);
  }
  free((void *)param_1[0xa8]);
  free((void *)param_1[0x99]);
  free((void *)param_1[0x188]);
  if ((__nmemb & 3) != 0) {
    __nmemb = (__nmemb & 0xfffffffc) + 4;
  }
  pvVar3 = calloc(__nmemb,1);
  param_1[0x188] = pvVar3;
  if (pvVar3 == (void *)0x0) {
    local_828._0_1_ = s_Failed_to_calloc_pool_stratum_co_00066b90[0];
    local_828._1_1_ = s_Failed_to_calloc_pool_stratum_co_00066b90[1];
    local_828._2_1_ = s_Failed_to_calloc_pool_stratum_co_00066b90[2];
    local_828._3_1_ = s_Failed_to_calloc_pool_stratum_co_00066b90[3];
    uStack_824._0_1_ = s_Failed_to_calloc_pool_stratum_co_00066b90[4];
    uStack_824._1_1_ = s_Failed_to_calloc_pool_stratum_co_00066b90[5];
    uStack_824._2_1_ = s_Failed_to_calloc_pool_stratum_co_00066b90[6];
    uStack_824._3_1_ = s_Failed_to_calloc_pool_stratum_co_00066b90[7];
    uStack_820._0_1_ = s_Failed_to_calloc_pool_stratum_co_00066b90[8];
    uStack_820._1_1_ = s_Failed_to_calloc_pool_stratum_co_00066b90[9];
    uStack_820._2_1_ = s_Failed_to_calloc_pool_stratum_co_00066b90[10];
    uStack_820._3_1_ = s_Failed_to_calloc_pool_stratum_co_00066b90[11];
    uStack_81c._0_1_ = s_Failed_to_calloc_pool_stratum_co_00066b90[12];
    uStack_81c._1_1_ = s_Failed_to_calloc_pool_stratum_co_00066b90[13];
    uStack_81c._2_1_ = s_Failed_to_calloc_pool_stratum_co_00066b90[14];
    uStack_81c._3_1_ = s_Failed_to_calloc_pool_stratum_co_00066b90[15];
    local_818._0_1_ = s_Failed_to_calloc_pool_stratum_co_00066b90[16];
    local_818._1_1_ = s_Failed_to_calloc_pool_stratum_co_00066b90[17];
    local_818._2_1_ = s_Failed_to_calloc_pool_stratum_co_00066b90[18];
    local_818._3_1_ = s_Failed_to_calloc_pool_stratum_co_00066b90[19];
    uStack_814._0_1_ = s_Failed_to_calloc_pool_stratum_co_00066b90[20];
    uStack_814._1_1_ = s_Failed_to_calloc_pool_stratum_co_00066b90[21];
    uStack_814._2_1_ = s_Failed_to_calloc_pool_stratum_co_00066b90[22];
    uStack_814._3_1_ = s_Failed_to_calloc_pool_stratum_co_00066b90[23];
    uStack_810._0_1_ = s_Failed_to_calloc_pool_stratum_co_00066b90[24];
    uStack_810._1_1_ = s_Failed_to_calloc_pool_stratum_co_00066b90[25];
    uStack_810._2_1_ = s_Failed_to_calloc_pool_stratum_co_00066b90[26];
    uStack_810._3_1_ = s_Failed_to_calloc_pool_stratum_co_00066b90[27];
    uStack_80c._0_1_ = s_Failed_to_calloc_pool_stratum_co_00066b90[28];
    uStack_80c._1_1_ = s_Failed_to_calloc_pool_stratum_co_00066b90[29];
    uStack_80c._2_1_ = s_Failed_to_calloc_pool_stratum_co_00066b90[30];
    uStack_80c._3_1_ = s_Failed_to_calloc_pool_stratum_co_00066b90[31];
    local_808._0_1_ = s_Failed_to_calloc_pool_stratum_co_00066b90[32];
    local_808._1_1_ = s_Failed_to_calloc_pool_stratum_co_00066b90[33];
    local_808._2_1_ = s_Failed_to_calloc_pool_stratum_co_00066b90[34];
    local_808._3_1_ = s_Failed_to_calloc_pool_stratum_co_00066b90[35];
    uStack_804._0_1_ = s_Failed_to_calloc_pool_stratum_co_00066b90[36];
    uStack_804._1_1_ = s_Failed_to_calloc_pool_stratum_co_00066b90[37];
    uStack_804._2_1_ = s_Failed_to_calloc_pool_stratum_co_00066b90[38];
    uStack_804._3_1_ = s_Failed_to_calloc_pool_stratum_co_00066b90[39];
    uStack_800._0_1_ = s_Failed_to_calloc_pool_stratum_co_00066b90[40];
    uStack_800._1_1_ = s_Failed_to_calloc_pool_stratum_co_00066b90[41];
    uStack_800._2_1_ = s_Failed_to_calloc_pool_stratum_co_00066b90[42];
    uStack_800._3_1_ = s_Failed_to_calloc_pool_stratum_co_00066b90[43];
    local_7fc = CONCAT11(local_7fc._1_1_,(char)ram0x00066bbc);
    FUN_0002e584(3,&local_828,1);
    FUN_0002a574(1);
    pvVar3 = (void *)param_1[0x188];
  }
  memcpy(pvVar3,(void *)param_2[0x188],__nmemb);
  if (0 < (int)param_1[0x1ab]) {
    iVar2 = 0;
    do {
      iVar1 = iVar2 * 4;
      iVar2 = iVar2 + 1;
      free(*(void **)(param_1[0xa9] + iVar1));
    } while (iVar2 < (int)param_1[0x1ab]);
  }
  if (iVar9 != 0) {
    pvVar3 = realloc((void *)param_1[0xa9],iVar9 * 4 + 1);
    param_1[0xa9] = pvVar3;
    if (0 < iVar9) {
      iVar2 = 0;
      while( true ) {
        iVar1 = iVar2 * 4;
        pvVar4 = malloc(0x20);
        *(void **)((int)pvVar3 + iVar2 * 4) = pvVar4;
        puVar8 = *(undefined4 **)(param_1[0xa9] + iVar2 * 4);
        if (puVar8 == (undefined4 *)0x0) {
          local_828._0_1_ = s_Failed_to_malloc_pool_stratum_sw_00066bc0[0];
          local_828._1_1_ = s_Failed_to_malloc_pool_stratum_sw_00066bc0[1];
          local_828._2_1_ = s_Failed_to_malloc_pool_stratum_sw_00066bc0[2];
          local_828._3_1_ = s_Failed_to_malloc_pool_stratum_sw_00066bc0[3];
          uStack_824._0_1_ = s_Failed_to_malloc_pool_stratum_sw_00066bc0[4];
          uStack_824._1_1_ = s_Failed_to_malloc_pool_stratum_sw_00066bc0[5];
          uStack_824._2_1_ = s_Failed_to_malloc_pool_stratum_sw_00066bc0[6];
          uStack_824._3_1_ = s_Failed_to_malloc_pool_stratum_sw_00066bc0[7];
          uStack_820._0_1_ = s_Failed_to_malloc_pool_stratum_sw_00066bc0[8];
          uStack_820._1_1_ = s_Failed_to_malloc_pool_stratum_sw_00066bc0[9];
          uStack_820._2_1_ = s_Failed_to_malloc_pool_stratum_sw_00066bc0[10];
          uStack_820._3_1_ = s_Failed_to_malloc_pool_stratum_sw_00066bc0[11];
          uStack_81c._0_1_ = s_Failed_to_malloc_pool_stratum_sw_00066bc0[12];
          uStack_81c._1_1_ = s_Failed_to_malloc_pool_stratum_sw_00066bc0[13];
          uStack_81c._2_1_ = s_Failed_to_malloc_pool_stratum_sw_00066bc0[14];
          uStack_81c._3_1_ = s_Failed_to_malloc_pool_stratum_sw_00066bc0[15];
          local_818._0_1_ = s_Failed_to_malloc_pool_stratum_sw_00066bc0[16];
          local_818._1_1_ = s_Failed_to_malloc_pool_stratum_sw_00066bc0[17];
          local_818._2_1_ = s_Failed_to_malloc_pool_stratum_sw_00066bc0[18];
          local_818._3_1_ = s_Failed_to_malloc_pool_stratum_sw_00066bc0[19];
          uStack_814._0_1_ = s_Failed_to_malloc_pool_stratum_sw_00066bc0[20];
          uStack_814._1_1_ = s_Failed_to_malloc_pool_stratum_sw_00066bc0[21];
          uStack_814._2_1_ = s_Failed_to_malloc_pool_stratum_sw_00066bc0[22];
          uStack_814._3_1_ = s_Failed_to_malloc_pool_stratum_sw_00066bc0[23];
          uStack_810._0_1_ = s_Failed_to_malloc_pool_stratum_sw_00066bc0[24];
          uStack_810._1_1_ = s_Failed_to_malloc_pool_stratum_sw_00066bc0[25];
          uStack_810._2_1_ = s_Failed_to_malloc_pool_stratum_sw_00066bc0[26];
          uStack_810._3_1_ = s_Failed_to_malloc_pool_stratum_sw_00066bc0[27];
          uStack_80c._0_1_ = s_Failed_to_malloc_pool_stratum_sw_00066bc0[28];
          uStack_80c._1_1_ = s_Failed_to_malloc_pool_stratum_sw_00066bc0[29];
          uStack_80c._2_1_ = s_Failed_to_malloc_pool_stratum_sw_00066bc0[30];
          uStack_80c._3_1_ = s_Failed_to_malloc_pool_stratum_sw_00066bc0[31];
          local_808._0_1_ = s_Failed_to_malloc_pool_stratum_sw_00066bc0[32];
          local_808._1_1_ = s_Failed_to_malloc_pool_stratum_sw_00066bc0[33];
          local_808._2_1_ = s_Failed_to_malloc_pool_stratum_sw_00066bc0[34];
          local_808._3_1_ = s_Failed_to_malloc_pool_stratum_sw_00066bc0[35];
          uStack_804._0_1_ = s_Failed_to_malloc_pool_stratum_sw_00066bc0[36];
          uStack_804._1_1_ = s_Failed_to_malloc_pool_stratum_sw_00066bc0[37];
          uStack_804._2_1_ = s_Failed_to_malloc_pool_stratum_sw_00066bc0[38];
          uStack_804._3_1_ = s_Failed_to_malloc_pool_stratum_sw_00066bc0[39];
          uStack_800._0_1_ = s_Failed_to_malloc_pool_stratum_sw_00066bc0[40];
          uStack_800._1_1_ = s_Failed_to_malloc_pool_stratum_sw_00066bc0[41];
          uStack_800._2_1_ = s_Failed_to_malloc_pool_stratum_sw_00066bc0[42];
          uStack_800._3_1_ = s_Failed_to_malloc_pool_stratum_sw_00066bc0[43];
          local_7fc = (undefined2)ram0x00066bec;
          local_7fa = (undefined)((uint)ram0x00066bec >> 0x10);
          FUN_0002e584(3,&local_828,1);
          FUN_0002a574(1);
          puVar8 = *(undefined4 **)(param_1[0xa9] + iVar2 * 4);
        }
        iVar2 = iVar2 + 1;
        puVar7 = *(undefined4 **)(param_2[0xa9] + iVar1);
        uVar10 = puVar7[1];
        uVar6 = puVar7[2];
        uVar11 = puVar7[3];
        *puVar8 = *puVar7;
        puVar8[1] = uVar10;
        puVar8[2] = uVar6;
        puVar8[3] = uVar11;
        uVar10 = puVar7[5];
        uVar6 = puVar7[6];
        uVar11 = puVar7[7];
        puVar8[4] = puVar7[4];
        puVar8[5] = uVar10;
        puVar8[6] = uVar6;
        puVar8[7] = uVar11;
        if (iVar9 == iVar2) break;
        pvVar3 = (void *)param_1[0xa9];
      }
    }
  }
  *param_1 = *param_2;
  uVar6 = param_2[0x1c9];
  param_1[0x1c8] = param_2[0x1c8];
  param_1[0x1c9] = uVar6;
  param_1[0x189] = param_2[0x189];
  param_1[0x18a] = param_2[0x18a];
  param_1[0x9e] = param_2[0x9e];
  param_1[0x1ab] = param_2[0x1ab];
  uVar6 = __strdup(param_2[0xa8]);
  param_1[0xa8] = uVar6;
  uVar6 = __strdup(param_2[0x99]);
  param_1[0x99] = uVar6;
  uVar11 = param_2[0x1c4];
  uVar6 = param_2[0x1c5];
  param_1[0x1c3] = param_2[0x1c3];
  param_1[0x1c4] = uVar11;
  param_1[0x1c5] = uVar6;
  memcpy(param_1 + 0x18b,param_2 + 0x18b,0x80);
  iVar2 = pthread_rwlock_unlock((pthread_rwlock_t *)(param_1 + 0x3b));
  if (iVar2 != 0) {
    piVar5 = __errno_location();
    snprintf((char *)&local_828,0x800,"WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d",*piVar5,
             "driver-btm-api.c",DAT_00033888,0x49a);
    FUN_0002e584(3,&local_828,1);
    FUN_0002a574(1);
  }
  iVar2 = pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0x35));
  if (iVar2 != 0) {
    piVar5 = __errno_location();
    snprintf((char *)&local_828,0x800,"WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",*piVar5,
             "driver-btm-api.c",DAT_00033888,0x49a);
    FUN_0002e584(3,&local_828,1);
    FUN_0002a574(1);
  }
  (*DAT_0007ecc4)();
  return;
}

