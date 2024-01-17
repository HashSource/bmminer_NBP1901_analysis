
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00025c08(void)

{
  int iVar1;
  int iVar2;
  uint *__ptr;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  undefined8 uVar9;
  undefined4 local_820;
  undefined4 uStack_81c;
  undefined4 uStack_818;
  undefined4 uStack_814;
  undefined4 uStack_810;
  undefined4 local_80c;
  undefined4 uStack_808;
  
  iVar1 = FUN_0001e0e0();
  iVar2 = FUN_0001e150();
  iVar2 = iVar2 * iVar1;
  __ptr = (uint *)malloc(iVar2 * 4);
  if (__ptr == (uint *)0x0) {
    if (3 < DAT_0007eb9c) {
      local_820._0_1_ = s_failed_alloc_memory__00061864[0];
      local_820._1_1_ = s_failed_alloc_memory__00061864[1];
      local_820._2_1_ = s_failed_alloc_memory__00061864[2];
      local_820._3_1_ = s_failed_alloc_memory__00061864[3];
      uStack_81c._0_1_ = s_failed_alloc_memory__00061864[4];
      uStack_81c._1_1_ = s_failed_alloc_memory__00061864[5];
      uStack_81c._2_1_ = s_failed_alloc_memory__00061864[6];
      uStack_81c._3_1_ = s_failed_alloc_memory__00061864[7];
      uStack_818._0_1_ = s_failed_alloc_memory__00061864[8];
      uStack_818._1_1_ = s_failed_alloc_memory__00061864[9];
      uStack_818._2_1_ = s_failed_alloc_memory__00061864[10];
      uStack_818._3_1_ = s_failed_alloc_memory__00061864[11];
      uStack_814._0_1_ = s_failed_alloc_memory__00061864[12];
      uStack_814._1_1_ = s_failed_alloc_memory__00061864[13];
      uStack_814._2_1_ = s_failed_alloc_memory__00061864[14];
      uStack_814._3_1_ = s_failed_alloc_memory__00061864[15];
      uStack_810._0_1_ = s_failed_alloc_memory__00061864[16];
      uStack_810._1_1_ = s_failed_alloc_memory__00061864[17];
      uStack_810._2_1_ = s_failed_alloc_memory__00061864[18];
      uStack_810._3_1_ = s_failed_alloc_memory__00061864[19];
      local_80c = CONCAT22(local_80c._2_2_,(short)ram0x00061878);
      FUN_0002e584(3,&local_820,0);
    }
  }
  else {
    iVar1 = 0;
    do {
      iVar3 = FUN_0001e29c(iVar1);
      if ((iVar3 != 0) && (iVar2 != 0)) {
        puVar5 = __ptr + -1;
        uVar6 = 0;
        iVar7 = 0;
        iVar3 = 0;
        do {
          uVar4 = FUN_0002cd30(iVar1,iVar3);
          iVar3 = iVar3 + 1;
          bVar8 = CARRY4(uVar6,uVar4);
          uVar6 = uVar6 + uVar4;
          iVar7 = iVar7 + (uint)bVar8;
          puVar5 = puVar5 + 1;
          *puVar5 = uVar4;
        } while (iVar2 - iVar3 != 0);
        uVar9 = FUN_00060120(uVar6,iVar7,iVar2,0);
        uVar6 = (uint)((ulonglong)uVar9 >> 0x20);
        uVar4 = (uint)uVar9;
        if ((uVar6 != 0 || 0x1386 < uVar4) && (uVar6 != 0 || uVar4 != 4999)) {
          uVar6 = uVar6 >> 1;
          uVar4 = (uint)((byte)((ulonglong)uVar9 >> 0x20) & 1) << 0x1f | uVar4 >> 1;
          bVar8 = uVar6 == 0;
          if (uVar6 == 0) {
            bVar8 = uVar4 <= *__ptr;
          }
          if (!bVar8) {
LAB_00025d0c:
            if (3 < DAT_0007eb9c) {
              local_820._0_1_ = s_Domain_unbalance_happened__000630b4[0];
              local_820._1_1_ = s_Domain_unbalance_happened__000630b4[1];
              local_820._2_1_ = s_Domain_unbalance_happened__000630b4[2];
              local_820._3_1_ = s_Domain_unbalance_happened__000630b4[3];
              uStack_81c._0_1_ = s_Domain_unbalance_happened__000630b4[4];
              uStack_81c._1_1_ = s_Domain_unbalance_happened__000630b4[5];
              uStack_81c._2_1_ = s_Domain_unbalance_happened__000630b4[6];
              uStack_81c._3_1_ = s_Domain_unbalance_happened__000630b4[7];
              uStack_818._0_1_ = s_Domain_unbalance_happened__000630b4[8];
              uStack_818._1_1_ = s_Domain_unbalance_happened__000630b4[9];
              uStack_818._2_1_ = s_Domain_unbalance_happened__000630b4[10];
              uStack_818._3_1_ = s_Domain_unbalance_happened__000630b4[11];
              uStack_814._0_1_ = s_Domain_unbalance_happened__000630b4[12];
              uStack_814._1_1_ = s_Domain_unbalance_happened__000630b4[13];
              uStack_814._2_1_ = s_Domain_unbalance_happened__000630b4[14];
              uStack_814._3_1_ = s_Domain_unbalance_happened__000630b4[15];
              uStack_810._0_1_ = s_Domain_unbalance_happened__000630b4[16];
              uStack_810._1_1_ = s_Domain_unbalance_happened__000630b4[17];
              uStack_810._2_1_ = s_Domain_unbalance_happened__000630b4[18];
              uStack_810._3_1_ = s_Domain_unbalance_happened__000630b4[19];
              local_80c._0_1_ = s_Domain_unbalance_happened__000630b4[20];
              local_80c._1_1_ = s_Domain_unbalance_happened__000630b4[21];
              local_80c._2_1_ = s_Domain_unbalance_happened__000630b4[22];
              local_80c._3_1_ = s_Domain_unbalance_happened__000630b4[23];
              uStack_808._0_1_ = s_Domain_unbalance_happened__000630b4[24];
              uStack_808._1_1_ = s_Domain_unbalance_happened__000630b4[25];
              uStack_808._2_1_ = s_Domain_unbalance_happened__000630b4[26];
              uStack_808._3_1_ = s_Domain_unbalance_happened__000630b4[27];
              FUN_0002e584(3,&local_820,0);
            }
            free(__ptr);
            return 1;
          }
          iVar7 = 0;
          puVar5 = __ptr;
          while (iVar7 = iVar7 + 1, iVar7 != iVar3) {
            puVar5 = puVar5 + 1;
            bVar8 = uVar6 == 0;
            if (uVar6 == 0) {
              bVar8 = uVar4 <= *puVar5;
            }
            if (!bVar8) goto LAB_00025d0c;
          }
        }
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 != 4);
    free(__ptr);
  }
  return 0;
}

