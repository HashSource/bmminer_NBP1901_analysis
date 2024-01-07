
void FUN_0001a470(float param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 *puVar1;
  undefined2 *puVar2;
  byte *pbVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  size_t sVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  undefined2 *puVar11;
  uint uVar12;
  size_t sVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  size_t local_9e4;
  uint local_9e0;
  byte local_9c4 [4];
  undefined4 local_9c0;
  undefined4 local_9bc;
  undefined2 local_9b8;
  undefined local_9b6 [2];
  undefined4 local_9b4 [97];
  undefined4 local_830;
  undefined4 uStack_82c;
  
  if (3 < DAT_0007eb9c) {
    pcVar10 = "false";
    if (param_4 != 0) {
      pcVar10 = "true";
    }
    snprintf((char *)&local_830,0x800,"chain = %d, freq = %g, is_higher_voltage = %s\n",param_2,
             (double)param_1,pcVar10);
    FUN_0002e584(3,&local_830,0);
  }
  FUN_0001f0e0(param_2,1,0,param_3);
  local_9c0 = 0;
  local_9bc = 0;
  memset(&local_9b8,0,0x188);
  FUN_000502c0(param_1,&local_9c0,local_9c4,0);
  local_9e0 = local_9c0 & 0xff;
  uVar16 = (uint)local_9c4[0];
  uVar8 = local_9c0 >> 8;
  local_9bc._0_3_ = CONCAT12(local_9c4[0],(undefined2)local_9bc);
  uVar9 = DAT_0007eb9c;
  if (local_9e0 < 8) {
    local_9e4 = 0;
    uVar6 = uVar8;
    uVar15 = local_9e0;
    do {
      while (uVar5 = uVar6 & 0xff, uVar5 <= uVar15) {
        if (uVar16 < 2) {
          puVar11 = &local_9b8 + local_9e4 * 4;
          iVar14 = uVar5 * local_9e0 * uVar16;
          uVar12 = uVar16;
          do {
            *(char *)puVar11 = (char)uVar15;
            *(char *)((int)puVar11 + 1) = (char)uVar6;
            *(char *)(puVar11 + 1) = (char)uVar12;
            *(int *)(puVar11 + 2) = iVar14;
            if (4 < uVar9) {
              snprintf((char *)&local_830,0x800,
                       "post_div1 = %d, post_div2 = %d, user_div = %d, div_ret = %d\n",local_9e0,
                       uVar5,uVar12,iVar14);
              FUN_0002e584(4,&local_830,0);
              uVar9 = DAT_0007eb9c;
            }
            uVar12 = uVar12 + 1;
            puVar11 = puVar11 + 4;
            iVar14 = iVar14 + uVar5 * local_9e0;
          } while ((uVar12 & 0xff) < 2);
          local_9e4 = local_9e4 + (1 - uVar16 & 0xff) + 1;
        }
        uVar6 = uVar5 + 1;
      }
      local_9e0 = local_9e0 + 1;
      uVar15 = local_9e0 & 0xff;
      uVar6 = uVar8;
    } while (uVar15 < 8);
  }
  else {
    local_9e4 = 0;
  }
  if (4 < uVar9) {
    local_830._0_2_ = 10;
    FUN_0002e584(4,&local_830,0);
    if (4 < DAT_0007eb9c) {
      local_830._0_1_ = s_sorted_000616ec[0];
      local_830._1_1_ = s_sorted_000616ec[1];
      local_830._2_1_ = s_sorted_000616ec[2];
      local_830._3_1_ = s_sorted_000616ec[3];
      uStack_82c._0_1_ = s_sorted_000616ec[4];
      uStack_82c._1_1_ = s_sorted_000616ec[5];
      uStack_82c._2_1_ = s_sorted_000616ec[6];
      uStack_82c._3_1_ = s_sorted_000616ec[7];
      FUN_0002e584(4,&local_830,0);
    }
  }
  qsort(&local_9b8,local_9e4,8,FUN_00019d50);
  if (local_9e4 != 0) {
    sVar7 = 0;
    puVar11 = &local_9b8;
    do {
      while (sVar13 = sVar7, 4 < DAT_0007eb9c) {
        puVar1 = (undefined4 *)(puVar11 + 2);
        puVar2 = puVar11 + 1;
        pbVar3 = (byte *)((int)puVar11 + 1);
        bVar4 = *(byte *)puVar11;
        puVar11 = puVar11 + 4;
        snprintf((char *)&local_830,0x800,
                 "[%d] post_div1 = %d, post_div2 = %d, user_div = %d, div_ret = %d\n",sVar13,
                 (uint)bVar4,(uint)*pbVar3,(uint)*(byte *)puVar2,*puVar1);
        FUN_0002e584(4,&local_830,0);
        sVar7 = sVar13 + 1;
        if (sVar13 + 1 == local_9e4) goto LAB_0001a6d8;
      }
      puVar11 = puVar11 + 4;
      sVar7 = sVar13 + 1;
    } while (sVar13 + 1 != local_9e4);
LAB_0001a6d8:
    iVar14 = 0;
    puVar11 = &local_9b8;
    do {
      local_9bc._0_3_ = CONCAT12(*(byte *)(puVar11 + 1),(undefined2)local_9bc);
      local_9c0 = CONCAT22(local_9c0._2_2_,*puVar11);
      uVar8 = FUN_0001f080(local_9c0,local_9bc);
      if (DAT_0007edcc < uVar8) {
        if (3 < DAT_0007eb9c) {
          snprintf((char *)&local_830,0x800,
                   "[%d] _POSTDIV1 = %d, _POSTDIV2 = %d, USER_DIV = %d, freq = %d\n",iVar14,
                   local_9c0 & 0xff,local_9c0 >> 8 & 0xff,local_9bc >> 0x10 & 0xff,uVar8);
          FUN_0002e584(3,&local_830,0);
        }
        FUN_0001f164(param_2,1,0,param_3);
        usleep(1000000);
      }
      iVar14 = iVar14 + 1;
      puVar11 = puVar11 + 4;
    } while (iVar14 != sVar13 + 1);
  }
  return;
}

