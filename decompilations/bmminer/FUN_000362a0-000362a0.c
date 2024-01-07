
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000362a0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  char *pcVar9;
  undefined auStack_820 [8];
  undefined4 local_818;
  undefined4 uStack_814;
  undefined4 uStack_810;
  undefined4 uStack_80c;
  undefined4 local_808;
  undefined4 uStack_804;
  undefined4 local_800;
  undefined4 uStack_7fc;
  undefined4 local_7f8;
  
  puVar8 = &local_818;
  iVar1 = FUN_00036218();
  if (iVar1 != 0) {
    if (3 < DAT_0007eb9c) {
      local_818._0_1_ = s_Sweep_already_done__exit__00067538[0];
      local_818._1_1_ = s_Sweep_already_done__exit__00067538[1];
      local_818._2_1_ = s_Sweep_already_done__exit__00067538[2];
      local_818._3_1_ = s_Sweep_already_done__exit__00067538[3];
      uStack_814._0_1_ = s_Sweep_already_done__exit__00067538[4];
      uStack_814._1_1_ = s_Sweep_already_done__exit__00067538[5];
      uStack_814._2_1_ = s_Sweep_already_done__exit__00067538[6];
      uStack_814._3_1_ = s_Sweep_already_done__exit__00067538[7];
      uStack_810._0_1_ = s_Sweep_already_done__exit__00067538[8];
      uStack_810._1_1_ = s_Sweep_already_done__exit__00067538[9];
      uStack_810._2_1_ = s_Sweep_already_done__exit__00067538[10];
      uStack_810._3_1_ = s_Sweep_already_done__exit__00067538[11];
      uStack_80c._0_1_ = s_Sweep_already_done__exit__00067538[12];
      uStack_80c._1_1_ = s_Sweep_already_done__exit__00067538[13];
      uStack_80c._2_1_ = s_Sweep_already_done__exit__00067538[14];
      uStack_80c._3_1_ = s_Sweep_already_done__exit__00067538[15];
      local_808._0_1_ = s_Sweep_already_done__exit__00067538[16];
      local_808._1_1_ = s_Sweep_already_done__exit__00067538[17];
      local_808._2_1_ = s_Sweep_already_done__exit__00067538[18];
      local_808._3_1_ = s_Sweep_already_done__exit__00067538[19];
      uStack_804._0_1_ = s_Sweep_already_done__exit__00067538[20];
      uStack_804._1_1_ = s_Sweep_already_done__exit__00067538[21];
      uStack_804._2_1_ = s_Sweep_already_done__exit__00067538[22];
      uStack_804._3_1_ = s_Sweep_already_done__exit__00067538[23];
      FUN_0002e584(3,&local_818,0);
      return 0;
    }
    return 0;
  }
  FUN_000302a0(auStack_820);
  DAT_004fcb30 = 2;
  if (DAT_0007eb9c < 5) {
    if (1 < param_1 - 0xa0U) {
LAB_00036360:
      FUN_000356c4(0x14,0xff);
      if (DAT_0007eb9c < 4) {
        DAT_004fcb30 = 1;
        return 0xffffffff;
      }
      pcVar9 = "Sweep type error, exit.\n";
      goto LAB_00036490;
    }
  }
  else {
    snprintf((char *)&local_818,0x800,"[DEBUG] Sweep init, sweep_type = 0x%X.\n",param_1);
    FUN_0002e584(4,&local_818,0);
    if (1 < param_1 - 0xa0U) goto LAB_00036360;
    if (4 < DAT_0007eb9c) {
      local_818._0_1_ = s__DEBUG__Allocate_memory_for_swee_00067598[0];
      local_818._1_1_ = s__DEBUG__Allocate_memory_for_swee_00067598[1];
      local_818._2_1_ = s__DEBUG__Allocate_memory_for_swee_00067598[2];
      local_818._3_1_ = s__DEBUG__Allocate_memory_for_swee_00067598[3];
      uStack_814._0_1_ = s__DEBUG__Allocate_memory_for_swee_00067598[4];
      uStack_814._1_1_ = s__DEBUG__Allocate_memory_for_swee_00067598[5];
      uStack_814._2_1_ = s__DEBUG__Allocate_memory_for_swee_00067598[6];
      uStack_814._3_1_ = s__DEBUG__Allocate_memory_for_swee_00067598[7];
      uStack_810._0_1_ = s__DEBUG__Allocate_memory_for_swee_00067598[8];
      uStack_810._1_1_ = s__DEBUG__Allocate_memory_for_swee_00067598[9];
      uStack_810._2_1_ = s__DEBUG__Allocate_memory_for_swee_00067598[10];
      uStack_810._3_1_ = s__DEBUG__Allocate_memory_for_swee_00067598[11];
      uStack_80c._0_1_ = s__DEBUG__Allocate_memory_for_swee_00067598[12];
      uStack_80c._1_1_ = s__DEBUG__Allocate_memory_for_swee_00067598[13];
      uStack_80c._2_1_ = s__DEBUG__Allocate_memory_for_swee_00067598[14];
      uStack_80c._3_1_ = s__DEBUG__Allocate_memory_for_swee_00067598[15];
      local_808._0_1_ = s__DEBUG__Allocate_memory_for_swee_00067598[16];
      local_808._1_1_ = s__DEBUG__Allocate_memory_for_swee_00067598[17];
      local_808._2_1_ = s__DEBUG__Allocate_memory_for_swee_00067598[18];
      local_808._3_1_ = s__DEBUG__Allocate_memory_for_swee_00067598[19];
      uStack_804._0_1_ = s__DEBUG__Allocate_memory_for_swee_00067598[20];
      uStack_804._1_1_ = s__DEBUG__Allocate_memory_for_swee_00067598[21];
      uStack_804._2_1_ = s__DEBUG__Allocate_memory_for_swee_00067598[22];
      uStack_804._3_1_ = s__DEBUG__Allocate_memory_for_swee_00067598[23];
      local_800._0_1_ = s__DEBUG__Allocate_memory_for_swee_00067598[24];
      local_800._1_1_ = s__DEBUG__Allocate_memory_for_swee_00067598[25];
      local_800._2_1_ = s__DEBUG__Allocate_memory_for_swee_00067598[26];
      local_800._3_1_ = s__DEBUG__Allocate_memory_for_swee_00067598[27];
      uStack_7fc._0_1_ = s__DEBUG__Allocate_memory_for_swee_00067598[28];
      uStack_7fc._1_1_ = s__DEBUG__Allocate_memory_for_swee_00067598[29];
      uStack_7fc._2_1_ = s__DEBUG__Allocate_memory_for_swee_00067598[30];
      uStack_7fc._3_1_ = s__DEBUG__Allocate_memory_for_swee_00067598[31];
      local_7f8._0_1_ = s__DEBUG__Allocate_memory_for_swee_00067598[32];
      local_7f8._1_1_ = s__DEBUG__Allocate_memory_for_swee_00067598[33];
      local_7f8._2_1_ = s__DEBUG__Allocate_memory_for_swee_00067598[34];
      local_7f8._3_1_ = s__DEBUG__Allocate_memory_for_swee_00067598[35];
      FUN_0002e584(4,&local_818,0);
    }
  }
  if ((DAT_004fcb28 != (int *)0x0) ||
     (DAT_004fcb28 = (int *)calloc(0x107c,1), DAT_004fcb28 != (int *)0x0)) {
    piVar5 = DAT_004fcb28;
    *DAT_004fcb28 = param_1;
    iVar1 = 0;
    piVar5[1] = 0x477fff00;
    do {
      iVar2 = FUN_0001e29c(iVar1);
      if ((iVar2 != 0) && (iVar2 = FUN_0001e0f0(), 0 < iVar2)) {
        piVar5 = DAT_004fcb28 + iVar2 + iVar1 * 0x100 + 2;
        piVar7 = DAT_004fcb28 + iVar1 * 0x100 + 2;
        do {
          piVar7 = piVar7 + 1;
          *piVar7 = 300;
        } while (piVar7 != piVar5);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 != 4);
    FUN_000356c4(0xf,0xff);
    if (DAT_0007eb9c < 4) {
      DAT_004fcb30 = 1;
      return 0xffffffff;
    }
    snprintf((char *)&local_818,0x800,"Unknown miner type(%d).\n",2);
    FUN_0002e584(3,&local_818,0);
    DAT_004fcb30 = 1;
    return 0xffffffff;
  }
  FUN_000356c4(0xd,0xff);
  if (DAT_0007eb9c < 4) {
    DAT_004fcb30 = 1;
    return 0xffffffff;
  }
  local_818._0_1_ = s_Fail_to_allocate_memory_for_swee_000675bc[0];
  local_818._1_1_ = s_Fail_to_allocate_memory_for_swee_000675bc[1];
  local_818._2_1_ = s_Fail_to_allocate_memory_for_swee_000675bc[2];
  local_818._3_1_ = s_Fail_to_allocate_memory_for_swee_000675bc[3];
  uStack_814._0_1_ = s_Fail_to_allocate_memory_for_swee_000675bc[4];
  uStack_814._1_1_ = s_Fail_to_allocate_memory_for_swee_000675bc[5];
  uStack_814._2_1_ = s_Fail_to_allocate_memory_for_swee_000675bc[6];
  uStack_814._3_1_ = s_Fail_to_allocate_memory_for_swee_000675bc[7];
  uStack_810._0_1_ = s_Fail_to_allocate_memory_for_swee_000675bc[8];
  uStack_810._1_1_ = s_Fail_to_allocate_memory_for_swee_000675bc[9];
  uStack_810._2_1_ = s_Fail_to_allocate_memory_for_swee_000675bc[10];
  uStack_810._3_1_ = s_Fail_to_allocate_memory_for_swee_000675bc[11];
  uStack_80c._0_1_ = s_Fail_to_allocate_memory_for_swee_000675bc[12];
  uStack_80c._1_1_ = s_Fail_to_allocate_memory_for_swee_000675bc[13];
  uStack_80c._2_1_ = s_Fail_to_allocate_memory_for_swee_000675bc[14];
  uStack_80c._3_1_ = s_Fail_to_allocate_memory_for_swee_000675bc[15];
  pcVar9 = " memory for sweep ctxt.\n";
  puVar8 = &local_808;
LAB_00036490:
  uVar3 = *(undefined4 *)((int)pcVar9 + 4);
  uVar4 = *(undefined4 *)((int)pcVar9 + 8);
  uVar6 = *(undefined4 *)((int)pcVar9 + 0xc);
  *puVar8 = *(undefined4 *)pcVar9;
  puVar8[1] = uVar3;
  puVar8[2] = uVar4;
  puVar8[3] = uVar6;
  uVar3 = *(undefined4 *)((int)pcVar9 + 0x14);
  uVar4 = *(undefined4 *)((int)pcVar9 + 0x18);
  puVar8[4] = *(undefined4 *)((int)pcVar9 + 0x10);
  puVar8[5] = uVar3;
  *(char *)(puVar8 + 6) = (char)uVar4;
  FUN_0002e584(3,&local_818,0);
  DAT_004fcb30 = 1;
  return 0xffffffff;
}

