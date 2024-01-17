
undefined4 FUN_000377d8(uint param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  int local_9d0;
  int local_9cc;
  undefined4 *local_948;
  undefined4 *local_944;
  uint local_940;
  uint local_93c;
  undefined4 *local_938;
  uint local_934;
  int local_930;
  uint local_92c;
  uint local_928;
  undefined4 *local_924;
  uint local_920;
  int local_91c;
  uint local_918;
  int local_914;
  uint local_910;
  int local_90c;
  undefined *local_908;
  uint *local_904;
  int local_900;
  int local_8fc;
  int local_8f8;
  int local_8f4;
  undefined4 local_8f0 [5];
  undefined4 local_8dc;
  undefined4 uStack_8d8;
  undefined4 uStack_8d4;
  undefined4 uStack_8d0;
  undefined4 local_8cc;
  undefined4 uStack_8c8;
  undefined4 uStack_8c4;
  undefined4 uStack_8c0;
  undefined4 local_8bc;
  uint local_8b8;
  undefined4 local_8b4;
  undefined4 uStack_8b0;
  undefined4 uStack_8ac;
  undefined4 local_8a8 [32];
  undefined2 local_828 [1026];
  
  local_904 = &DAT_0007eb9c;
  local_910 = param_1;
  FUN_000302a0(&local_900);
  if (3 < DAT_0007eb9c) {
    local_828[0] = 10;
    FUN_0002ea54(3,local_828,0);
    if (3 < *local_904) {
      snprintf((char *)local_828,0x800,">>>> Send work for chain %d.\n",local_910);
      FUN_0002e584(3,local_828,0);
      local_90c = FUN_0001e0f0();
      goto joined_r0x00037c3c;
    }
  }
  local_90c = FUN_0001e0f0();
joined_r0x00037c3c:
  if (local_90c == 0) {
    iVar10 = 0;
  }
  else {
    iVar10 = 0;
    uVar1 = 1 << (local_910 & 0xff);
    local_93c = 0;
    local_914 = 0;
    local_908 = &DAT_00202a2a;
    local_91c = local_910 * 0x1a00 + 0x80acac;
    do {
      iVar7 = *(int *)(DAT_004fcb38 + (int)(local_908 + local_914) * 4 + 4);
      local_918 = FUN_0001e130();
      if (local_918 != 0) {
        local_924 = (undefined4 *)(iVar7 + 0x14);
        local_928 = 0;
        local_920 = ~(~(local_910 << 0x19) >> 0x19) & 0xff;
        do {
          local_92c = local_928 & 3;
          local_940 = 0;
          puVar11 = local_924;
          do {
            while (uVar2 = FUN_00044ed4(), (uVar1 & uVar2) == 0) {
              iVar10 = iVar10 + 1;
              usleep(1000);
            }
            local_944 = puVar11 + -5;
            puVar5 = local_8f0;
            puVar13 = local_944;
            do {
              puVar12 = puVar13 + 4;
              uVar3 = puVar13[1];
              uVar4 = puVar13[2];
              puVar8 = puVar5 + 4;
              uVar6 = puVar13[3];
              *puVar5 = *puVar13;
              puVar5[1] = uVar3;
              puVar5[2] = uVar4;
              puVar5[3] = uVar6;
              puVar5 = puVar8;
              puVar13 = puVar12;
            } while (puVar12 != puVar11 + 7);
            uVar2 = 0;
            *puVar8 = *puVar12;
            memset((void *)((int)&local_8bc + 2),0,0x92);
            iVar7 = local_93c * 0x34 + local_91c;
            local_8dc = CONCAT31(local_8dc._1_3_,(char)local_8dc + '\x01');
            local_8b4 = puVar11[-3];
            uStack_8b0 = puVar11[-2];
            uStack_8ac = puVar11[-1];
            local_948 = &uStack_8c0;
            local_8b8 = local_93c & 0x7f | local_940;
            local_938 = local_944 + 0xc;
            local_8bc = CONCAT31(CONCAT21(local_8bc._2_2_,(undefined)local_920),1);
            do {
              if (uVar2 == local_92c) {
                uVar4 = puVar11[1];
                uVar6 = puVar11[2];
                local_8a8[uVar2 * 8] = *puVar11;
                uVar3 = puVar11[3];
                local_8a8[uVar2 * 8 + 1] = uVar4;
                local_8a8[uVar2 * 8 + 3] = uVar3;
                uVar3 = puVar11[4];
                local_8a8[uVar2 * 8 + 2] = uVar6;
                uVar4 = puVar11[5];
                uVar6 = puVar11[6];
                local_8a8[uVar2 * 8 + 4] = uVar3;
                uVar3 = puVar11[7];
                local_8a8[uVar2 * 8 + 5] = uVar4;
                local_8a8[uVar2 * 8 + 6] = uVar6;
                local_8a8[uVar2 * 8 + 7] = uVar3;
                puVar5 = local_944;
                puVar13 = (undefined4 *)(DAT_004fcb38 + iVar7);
                do {
                  puVar8 = puVar5 + 4;
                  puVar12 = puVar13 + 4;
                  uVar3 = puVar5[1];
                  uVar4 = puVar5[2];
                  uVar6 = puVar5[3];
                  *puVar13 = *puVar5;
                  puVar13[1] = uVar3;
                  puVar13[2] = uVar4;
                  puVar13[3] = uVar6;
                  puVar5 = puVar8;
                  puVar13 = puVar12;
                } while (puVar8 != local_938);
                *puVar12 = *local_938;
              }
              else {
                local_8a8[uVar2 * 8] = local_8dc;
                local_8a8[uVar2 * 8 + 1] = uStack_8d8;
                local_8a8[uVar2 * 8 + 2] = uStack_8d4;
                local_8a8[uVar2 * 8 + 3] = uStack_8d0;
                local_8a8[uVar2 * 8 + 4] = local_8cc;
                local_8a8[uVar2 * 8 + 5] = uStack_8c8;
                local_8a8[uVar2 * 8 + 6] = uStack_8c4;
                local_8a8[uVar2 * 8 + 7] = uStack_8c0;
                puVar5 = local_8f0;
                puVar13 = (undefined4 *)(DAT_004fcb38 + iVar7);
                do {
                  puVar8 = puVar5 + 4;
                  puVar12 = puVar13 + 4;
                  uVar3 = puVar5[1];
                  uVar4 = puVar5[2];
                  uVar6 = puVar5[3];
                  puVar14 = puVar5 + 4;
                  *puVar13 = *puVar5;
                  puVar13[1] = uVar3;
                  puVar13[2] = uVar4;
                  puVar13[3] = uVar6;
                  puVar5 = puVar8;
                  puVar13 = puVar12;
                } while (puVar14 != local_948);
                *puVar12 = *puVar8;
              }
              uVar2 = uVar2 + 1;
              iVar7 = iVar7 + 0x34;
            } while (uVar2 != 4);
            puVar11 = puVar11 + 0xd;
            uVar2 = local_93c + 4;
            local_934 = uVar1;
            local_930 = iVar10;
            memcpy(&local_9d0,&uStack_8ac,0x84);
            uVar9 = local_940 + 0x80;
            local_940 = uVar9;
            FUN_0001eeb8(local_8bc,local_8b8,local_8b4);
            if (0x7f < uVar2) {
              uVar2 = 0;
            }
            local_93c = uVar2;
          } while (uVar9 != 0x400);
          local_924 = local_924 + 0x68;
          local_928 = local_928 + 1;
        } while (local_918 != local_928);
      }
      local_914 = local_914 + 1;
    } while (local_90c != local_914);
  }
  FUN_000302a0(&local_8f8);
  local_9d0 = local_8f8 - local_900;
  if (local_8f4 - local_8fc < 0) {
    local_9d0 = local_9d0 + -1;
  }
  if (3 < *local_904) {
    local_9cc = iVar10;
    snprintf((char *)local_828,0x800,
             "Send work for chain %d done, time cost %lds, sleep_count = %d\n",local_910);
    FUN_0002e584(3,local_828,0);
  }
  return 0;
}

