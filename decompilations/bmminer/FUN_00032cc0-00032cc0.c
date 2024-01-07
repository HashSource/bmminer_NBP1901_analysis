
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

size_t FUN_00032cc0(void **param_1,int param_2,undefined4 param_3)

{
  undefined2 uVar1;
  void *__s;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  size_t __n;
  size_t __size;
  void *pvVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int *piVar10;
  int *piVar11;
  bool bVar13;
  undefined4 local_890;
  undefined4 uStack_88c;
  undefined2 local_888 [2];
  int local_884;
  undefined local_880;
  byte local_87f;
  undefined local_87e;
  undefined4 local_87c;
  undefined auStack_878 [4];
  undefined auStack_874 [32];
  undefined auStack_854 [4];
  undefined auStack_850 [4];
  undefined2 local_84c;
  undefined2 local_84a;
  undefined2 local_848;
  undefined2 local_846;
  undefined4 local_840;
  undefined4 uStack_83c;
  undefined local_838;
  undefined4 local_834;
  undefined4 uStack_830;
  undefined4 local_828;
  undefined4 uStack_824;
  undefined4 uStack_820;
  undefined4 uStack_81c;
  undefined4 local_818;
  undefined4 uStack_814;
  undefined local_810;
  int *piVar12;
  
  local_87f = local_87f & 0xfe | *(byte *)(param_2 + 0x2a8) & 1 | 2;
  local_880 = (undefined)DAT_00482a80;
  local_888[0] = 0x52;
  local_890 = 0;
  uStack_88c = 0;
  local_87e = 0xf;
  if (DAT_00482a88 != '\0') {
    local_838 = *(undefined *)(param_2 + 0x284);
    local_834 = *(undefined4 *)(param_2 + 0x288);
    uStack_830 = *(undefined4 *)(param_2 + 0x28c);
  }
  local_87c = param_3;
  FUN_0002f724(auStack_878,param_2 + 0x6f4);
  FUN_0002f724(auStack_874,param_2 + 0x6b0,0x20);
  FUN_0002f724(auStack_850,param_2 + 0x700,4);
  FUN_0002f724(auStack_854,param_2 + 0x70c,4);
  pvVar6 = *(void **)(param_2 + 0x620);
  __n = *(size_t *)(param_2 + 0x624);
  puVar3 = (undefined4 *)((int)pvVar6 + *(int *)(param_2 + 0x628));
  local_84a = (undefined2)*(int *)(param_2 + 0x628);
  local_84c = (undefined2)__n;
  local_848 = (undefined2)*(size_t *)(param_2 + 0x278);
  local_840 = *puVar3;
  uStack_83c = puVar3[1];
  local_890 = *(undefined4 *)(param_2 + 0x270);
  uStack_88c = *(undefined4 *)(param_2 + 0x274);
  memcpy(&local_840,&local_890,*(size_t *)(param_2 + 0x278));
  iVar7 = *(int *)(param_2 + 0x6ac);
  local_846 = (undefined2)iVar7;
  iVar8 = __n + iVar7 * 0x20;
  __size = iVar8 + 0x62;
  __s = malloc(__size);
  if (__s == (void *)0x0) {
    local_828._0_1_ = s_Failed_to_malloc_tmp_buf_00066ab8[0];
    local_828._1_1_ = s_Failed_to_malloc_tmp_buf_00066ab8[1];
    local_828._2_1_ = s_Failed_to_malloc_tmp_buf_00066ab8[2];
    local_828._3_1_ = s_Failed_to_malloc_tmp_buf_00066ab8[3];
    uStack_824._0_1_ = s_Failed_to_malloc_tmp_buf_00066ab8[4];
    uStack_824._1_1_ = s_Failed_to_malloc_tmp_buf_00066ab8[5];
    uStack_824._2_1_ = s_Failed_to_malloc_tmp_buf_00066ab8[6];
    uStack_824._3_1_ = s_Failed_to_malloc_tmp_buf_00066ab8[7];
    uStack_820._0_1_ = s_Failed_to_malloc_tmp_buf_00066ab8[8];
    uStack_820._1_1_ = s_Failed_to_malloc_tmp_buf_00066ab8[9];
    uStack_820._2_1_ = s_Failed_to_malloc_tmp_buf_00066ab8[10];
    uStack_820._3_1_ = s_Failed_to_malloc_tmp_buf_00066ab8[11];
    uStack_81c._0_1_ = s_Failed_to_malloc_tmp_buf_00066ab8[12];
    uStack_81c._1_1_ = s_Failed_to_malloc_tmp_buf_00066ab8[13];
    uStack_81c._2_1_ = s_Failed_to_malloc_tmp_buf_00066ab8[14];
    uStack_81c._3_1_ = s_Failed_to_malloc_tmp_buf_00066ab8[15];
    local_818._0_1_ = s_Failed_to_malloc_tmp_buf_00066ab8[16];
    local_818._1_1_ = s_Failed_to_malloc_tmp_buf_00066ab8[17];
    local_818._2_1_ = s_Failed_to_malloc_tmp_buf_00066ab8[18];
    local_818._3_1_ = s_Failed_to_malloc_tmp_buf_00066ab8[19];
    uStack_814._0_1_ = s_Failed_to_malloc_tmp_buf_00066ab8[20];
    uStack_814._1_1_ = s_Failed_to_malloc_tmp_buf_00066ab8[21];
    uStack_814._2_1_ = s_Failed_to_malloc_tmp_buf_00066ab8[22];
    uStack_814._3_1_ = s_Failed_to_malloc_tmp_buf_00066ab8[23];
    local_810 = (undefined)ram0x00066ad0;
    FUN_0002e584(3,&local_828,1);
    FUN_0002a574(1);
    iVar7 = *(int *)(param_2 + 0x6ac);
    pvVar6 = *(void **)(param_2 + 0x620);
    __n = *(size_t *)(param_2 + 0x624);
  }
  local_884 = iVar8 + 0x5a;
  memset(__s,0,__size);
  memcpy(__s,local_888,0x60);
  memcpy((void *)((int)__s + 0x60),pvVar6,__n);
  if (0 < iVar7) {
    piVar10 = *(int **)(param_2 + 0x2a4);
    puVar3 = (undefined4 *)((int)__s + __n + 0x60);
    piVar11 = piVar10;
    do {
      piVar12 = piVar11 + 1;
      puVar5 = (undefined4 *)*piVar11;
      uVar9 = puVar5[1];
      uVar2 = puVar5[2];
      uVar4 = puVar5[3];
      *puVar3 = *puVar5;
      puVar3[1] = uVar9;
      puVar3[2] = uVar2;
      puVar3[3] = uVar4;
      uVar9 = puVar5[5];
      uVar2 = puVar5[6];
      uVar4 = puVar5[7];
      puVar3[4] = puVar5[4];
      puVar3[5] = uVar9;
      puVar3[6] = uVar2;
      puVar3[7] = uVar4;
      puVar3 = puVar3 + 8;
      piVar11 = piVar12;
    } while (piVar12 != piVar10 + iVar7);
  }
  uVar1 = FUN_00031590(__s,iVar8 + 0x60U & 0xffff);
  *(undefined2 *)((int)__s + iVar8 + 0x60) = uVar1;
  bVar13 = 0xfffffffe < DAT_00482a80;
  DAT_00482a80 = DAT_00482a80 + 1;
  DAT_00482a84 = DAT_00482a84 + (uint)bVar13;
  pvVar6 = malloc(__size);
  *param_1 = pvVar6;
  memcpy(pvVar6,__s,__size);
  free(__s);
  return __size;
}

