
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0002b05c(void *param_1,void *param_2,int param_3)

{
  char cVar1;
  void *pvVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  size_t sVar12;
  undefined4 *puVar13;
  undefined4 local_828;
  undefined4 uStack_824;
  undefined4 uStack_820;
  undefined4 uStack_81c;
  undefined4 local_818;
  undefined4 uStack_814;
  undefined4 uStack_810;
  undefined4 uStack_80c;
  undefined2 local_808;
  
  memcpy(param_1,param_2,0x738);
  sVar12 = *(size_t *)((int)param_1 + 0x624);
  iVar9 = sVar12 + 0x738;
  pvVar2 = calloc(1,sVar12);
  pvVar2 = memcpy(pvVar2,(void *)((int)param_2 + 0x738),sVar12);
  *(void **)((int)param_1 + 0x620) = pvVar2;
  iVar3 = FUN_0002f408(*(int *)((int)param_1 + 0x6ac) * 4 + 1,"bmminer.c",DAT_0002b2e8,0x88e);
  *(int *)((int)param_1 + 0x2a4) = iVar3;
  if (0 < *(int *)((int)param_1 + 0x6ac)) {
    iVar11 = 0;
    puVar10 = (undefined4 *)((int)param_2 + iVar9);
    while( true ) {
      uVar4 = FUN_0002f408(0x20,"bmminer.c",DAT_0002b2e8,0x891);
      *(undefined4 *)(iVar3 + iVar11 * 4) = uVar4;
      iVar9 = sVar12 + 0x758 + iVar11 * 0x20;
      puVar8 = *(undefined4 **)(*(int *)((int)param_1 + 0x2a4) + iVar11 * 4);
      if (puVar8 == (undefined4 *)0x0) {
        local_828._0_1_ = s_Failed_to_malloc_local_merkle_bi_00063c04[0];
        local_828._1_1_ = s_Failed_to_malloc_local_merkle_bi_00063c04[1];
        local_828._2_1_ = s_Failed_to_malloc_local_merkle_bi_00063c04[2];
        local_828._3_1_ = s_Failed_to_malloc_local_merkle_bi_00063c04[3];
        uStack_824._0_1_ = s_Failed_to_malloc_local_merkle_bi_00063c04[4];
        uStack_824._1_1_ = s_Failed_to_malloc_local_merkle_bi_00063c04[5];
        uStack_824._2_1_ = s_Failed_to_malloc_local_merkle_bi_00063c04[6];
        uStack_824._3_1_ = s_Failed_to_malloc_local_merkle_bi_00063c04[7];
        uStack_820._0_1_ = s_Failed_to_malloc_local_merkle_bi_00063c04[8];
        uStack_820._1_1_ = s_Failed_to_malloc_local_merkle_bi_00063c04[9];
        uStack_820._2_1_ = s_Failed_to_malloc_local_merkle_bi_00063c04[10];
        uStack_820._3_1_ = s_Failed_to_malloc_local_merkle_bi_00063c04[11];
        uStack_81c._0_1_ = s_Failed_to_malloc_local_merkle_bi_00063c04[12];
        uStack_81c._1_1_ = s_Failed_to_malloc_local_merkle_bi_00063c04[13];
        uStack_81c._2_1_ = s_Failed_to_malloc_local_merkle_bi_00063c04[14];
        uStack_81c._3_1_ = s_Failed_to_malloc_local_merkle_bi_00063c04[15];
        local_818._0_1_ = s_Failed_to_malloc_local_merkle_bi_00063c04[16];
        local_818._1_1_ = s_Failed_to_malloc_local_merkle_bi_00063c04[17];
        local_818._2_1_ = s_Failed_to_malloc_local_merkle_bi_00063c04[18];
        local_818._3_1_ = s_Failed_to_malloc_local_merkle_bi_00063c04[19];
        uStack_814._0_1_ = s_Failed_to_malloc_local_merkle_bi_00063c04[20];
        uStack_814._1_1_ = s_Failed_to_malloc_local_merkle_bi_00063c04[21];
        uStack_814._2_1_ = s_Failed_to_malloc_local_merkle_bi_00063c04[22];
        uStack_814._3_1_ = s_Failed_to_malloc_local_merkle_bi_00063c04[23];
        uStack_810._0_1_ = s_Failed_to_malloc_local_merkle_bi_00063c04[24];
        uStack_810._1_1_ = s_Failed_to_malloc_local_merkle_bi_00063c04[25];
        uStack_810._2_1_ = s_Failed_to_malloc_local_merkle_bi_00063c04[26];
        uStack_810._3_1_ = s_Failed_to_malloc_local_merkle_bi_00063c04[27];
        uStack_80c._0_1_ = s_Failed_to_malloc_local_merkle_bi_00063c04[28];
        uStack_80c._1_1_ = s_Failed_to_malloc_local_merkle_bi_00063c04[29];
        uStack_80c._2_1_ = s_Failed_to_malloc_local_merkle_bi_00063c04[30];
        uStack_80c._3_1_ = s_Failed_to_malloc_local_merkle_bi_00063c04[31];
        local_808 = (undefined2)ram0x00063c24;
        FUN_0002e584(3,&local_828,1);
        puVar8 = *(undefined4 **)(*(int *)((int)param_1 + 0x2a4) + iVar11 * 4);
      }
      iVar11 = iVar11 + 1;
      uVar4 = puVar10[1];
      uVar6 = puVar10[2];
      uVar7 = puVar10[3];
      *puVar8 = *puVar10;
      puVar8[1] = uVar4;
      puVar8[2] = uVar6;
      puVar8[3] = uVar7;
      uVar4 = puVar10[5];
      uVar6 = puVar10[6];
      uVar7 = puVar10[7];
      puVar8[4] = puVar10[4];
      puVar8[5] = uVar4;
      puVar8[6] = uVar6;
      puVar8[7] = uVar7;
      if (*(int *)((int)param_1 + 0x6ac) <= iVar11) break;
      iVar3 = *(int *)((int)param_1 + 0x2a4);
      puVar10 = puVar10 + 8;
    }
  }
  pcVar5 = (char *)__strdup((int)param_2 + iVar9);
  sVar12 = strlen(pcVar5);
  *(char **)((int)param_1 + 0x2a0) = pcVar5;
  iVar9 = sVar12 + 1 + iVar9;
  pcVar5 = (char *)__strdup((int)param_2 + iVar9);
  sVar12 = strlen(pcVar5);
  iVar9 = iVar9 + sVar12;
  *(char **)((int)param_1 + 0x264) = pcVar5;
  cVar1 = DAT_00482a5d;
  puVar10 = DAT_0002b2ec;
  puVar8 = (undefined4 *)((int)param_2 + iVar9 + 1);
  uVar4 = puVar8[1];
  puVar13 = (undefined4 *)((int)param_2 + iVar9 + 9);
  *DAT_0002b2ec = *puVar8;
  puVar10[1] = uVar4;
  puVar10 = DAT_0002b2f0;
  uVar4 = puVar13[1];
  *DAT_0002b2f0 = *puVar13;
  puVar10[1] = uVar4;
  if ((cVar1 != '\0') && (((DAT_00590404 != '\0' || (DAT_00482a5c != '\0')) || (6 < DAT_0007eba0))))
  {
    snprintf((char *)&local_828,0x800,"parse job buf len:%d\n",iVar9 + 0x11);
    FUN_0002e584(7,&local_828,0);
  }
  if (iVar9 + 0x11 != param_3) {
    local_828._0_1_ = s_ERR__data_trans_recv_unmathced__00063c40[0];
    local_828._1_1_ = s_ERR__data_trans_recv_unmathced__00063c40[1];
    local_828._2_1_ = s_ERR__data_trans_recv_unmathced__00063c40[2];
    local_828._3_1_ = s_ERR__data_trans_recv_unmathced__00063c40[3];
    uStack_824._0_1_ = s_ERR__data_trans_recv_unmathced__00063c40[4];
    uStack_824._1_1_ = s_ERR__data_trans_recv_unmathced__00063c40[5];
    uStack_824._2_1_ = s_ERR__data_trans_recv_unmathced__00063c40[6];
    uStack_824._3_1_ = s_ERR__data_trans_recv_unmathced__00063c40[7];
    uStack_820._0_1_ = s_ERR__data_trans_recv_unmathced__00063c40[8];
    uStack_820._1_1_ = s_ERR__data_trans_recv_unmathced__00063c40[9];
    uStack_820._2_1_ = s_ERR__data_trans_recv_unmathced__00063c40[10];
    uStack_820._3_1_ = s_ERR__data_trans_recv_unmathced__00063c40[11];
    uStack_81c._0_1_ = s_ERR__data_trans_recv_unmathced__00063c40[12];
    uStack_81c._1_1_ = s_ERR__data_trans_recv_unmathced__00063c40[13];
    uStack_81c._2_1_ = s_ERR__data_trans_recv_unmathced__00063c40[14];
    uStack_81c._3_1_ = s_ERR__data_trans_recv_unmathced__00063c40[15];
    local_818._0_1_ = s_ERR__data_trans_recv_unmathced__00063c40[16];
    local_818._1_1_ = s_ERR__data_trans_recv_unmathced__00063c40[17];
    local_818._2_1_ = s_ERR__data_trans_recv_unmathced__00063c40[18];
    local_818._3_1_ = s_ERR__data_trans_recv_unmathced__00063c40[19];
    uStack_814._0_1_ = s_ERR__data_trans_recv_unmathced__00063c40[20];
    uStack_814._1_1_ = s_ERR__data_trans_recv_unmathced__00063c40[21];
    uStack_814._2_1_ = s_ERR__data_trans_recv_unmathced__00063c40[22];
    uStack_814._3_1_ = s_ERR__data_trans_recv_unmathced__00063c40[23];
    uStack_810._0_1_ = s_ERR__data_trans_recv_unmathced__00063c40[24];
    uStack_810._1_1_ = s_ERR__data_trans_recv_unmathced__00063c40[25];
    uStack_810._2_1_ = s_ERR__data_trans_recv_unmathced__00063c40[26];
    uStack_810._3_1_ = s_ERR__data_trans_recv_unmathced__00063c40[27];
    uStack_80c._0_1_ = s_ERR__data_trans_recv_unmathced__00063c40[28];
    uStack_80c._1_1_ = s_ERR__data_trans_recv_unmathced__00063c40[29];
    uStack_80c._2_1_ = s_ERR__data_trans_recv_unmathced__00063c40[30];
    uStack_80c._3_1_ = s_ERR__data_trans_recv_unmathced__00063c40[31];
    FUN_0002e584(3,&local_828,1);
  }
  return;
}

