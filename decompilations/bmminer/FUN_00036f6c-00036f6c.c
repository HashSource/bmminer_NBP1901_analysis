
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00036f6c(undefined4 param_1,int *param_2)

{
  undefined4 *puVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  void *__s;
  uint uVar7;
  char *pcVar8;
  uint uVar9;
  undefined4 local_8c8 [34];
  uint *local_840;
  undefined4 *local_83c;
  int local_838;
  uint local_834;
  undefined local_82c;
  undefined local_82b;
  undefined local_82a;
  undefined local_828;
  byte bStack_827;
  undefined local_818 [2036];
  
  iVar3 = FUN_0003388c();
  local_840 = (uint *)((uint)(iVar3 << 0x10) >> 0x18);
  local_838 = *param_2;
  local_834 = (uint)(iVar3 << 8) >> 0x18;
  local_82c = (undefined)iVar3;
  local_82b = (undefined)((uint)iVar3 >> 8);
  local_82a = (undefined)((uint)iVar3 >> 0x10);
  if (DAT_0007eb9c < 5) {
    local_83c = (undefined4 *)&local_828;
  }
  else {
    local_83c = (undefined4 *)&local_828;
    snprintf(&local_828,0x800,"[DEBUG] Send work, max_freq = %d\n",local_838);
    FUN_0002e584(4,&local_828,0);
  }
  puVar1 = local_83c;
  iVar3 = 3;
  do {
    if (4 < DAT_0007eb9c) {
      *puVar1 = s__DEBUG__Set_start_nonce_offset_i_0006789c._0_4_;
      puVar1[1] = s__DEBUG__Set_start_nonce_offset_i_0006789c._4_4_;
      puVar1[2] = s__DEBUG__Set_start_nonce_offset_i_0006789c._8_4_;
      puVar1[3] = s__DEBUG__Set_start_nonce_offset_i_0006789c._12_4_;
      puVar1[4] = s__DEBUG__Set_start_nonce_offset_i_0006789c._16_4_;
      puVar1[5] = s__DEBUG__Set_start_nonce_offset_i_0006789c._20_4_;
      puVar1[6] = s__DEBUG__Set_start_nonce_offset_i_0006789c._24_4_;
      puVar1[7] = s__DEBUG__Set_start_nonce_offset_i_0006789c._28_4_;
      puVar1[8] = s__DEBUG__Set_start_nonce_offset_i_0006789c._32_4_;
      puVar1[9] = s__DEBUG__Set_start_nonce_offset_i_0006789c._36_4_;
      *(char *)(puVar1 + 10) = (char)unique0x10000274;
      FUN_0002e584(4,puVar1,0);
    }
    FUN_00040390(0x18,0);
    uVar4 = FUN_0004476c();
    uVar7 = 0;
    FUN_00044794(uVar4 & 0xffff70ff | 0x8400);
    do {
      iVar5 = FUN_0001e29c(uVar7);
      if (iVar5 != 0) {
        FUN_00050288(uVar7 & 0xff,1,0);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != 4);
    if (4 < DAT_0007eb9c) {
      *puVar1 = s__DEBUG__Send_null_work__000678c8._0_4_;
      puVar1[1] = s__DEBUG__Send_null_work__000678c8._4_4_;
      puVar1[2] = s__DEBUG__Send_null_work__000678c8._8_4_;
      puVar1[3] = s__DEBUG__Send_null_work__000678c8._12_4_;
      puVar1[4] = s__DEBUG__Send_null_work__000678c8._16_4_;
      puVar1[5] = s__DEBUG__Send_null_work__000678c8._20_4_;
      *(char *)(puVar1 + 6) = (char)ram0x000678e0;
      FUN_0002e584(4,puVar1,0);
    }
    uVar4 = 0;
    memset(puVar1,0,0x94);
    local_828 = 1;
    do {
      iVar5 = FUN_0001e29c(uVar4);
      if (iVar5 != 0) {
        while (uVar7 = FUN_00044ed4(), (uVar7 & 1 << (uVar4 & 0xff)) == 0) {
          FUN_000304d4(1);
        }
        bStack_827 = (byte)uVar4 | 0x80;
        memcpy(local_8c8,local_818,0x84);
        FUN_0001eeb8(*puVar1,puVar1[1],puVar1[2],puVar1[3]);
        FUN_000304d4(10);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 != 4);
    sleep(1);
    uVar4 = FUN_0004476c();
    FUN_00044794(uVar4 & 0xffff70ff | 0x8100);
    usleep(100000);
    uVar4 = local_834;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  FUN_0001f1ec(0xff,1);
  FUN_0001efe0(0xff,local_840,uVar4,1);
  FUN_00036908();
  usleep(100000);
  FUN_00036908();
  usleep(100000);
  FUN_00036908();
  usleep(100000);
  uVar7 = 0;
  do {
    iVar3 = FUN_0001e29c(uVar7);
    if (iVar3 != 0) {
      FUN_00050bd4(uVar7 & 0xff,0);
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 != 4);
  uVar7 = 0;
  do {
    iVar3 = FUN_0001e29c(uVar7);
    if (iVar3 != 0) {
      FUN_00050e78(uVar7 & 0xff);
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 != 4);
  uVar7 = 3;
  iVar3 = -((local_838 - 0xfaU) / 0x14);
  do {
    uVar9 = 0;
    do {
      iVar5 = FUN_0001e29c(uVar9);
      if (iVar5 != 0) {
        FUN_00050f80(uVar9 & 0xff,(iVar3 + 30000) / 0x14d);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 != 4);
    usleep(100000);
    uVar7 = uVar7 - 1;
  } while (uVar7 != 0);
  do {
    iVar5 = FUN_0001e29c(uVar7);
    if (iVar5 != 0) {
      FUN_00050fa4(uVar7 & 0xff,8);
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 != 4);
  iVar5 = 8;
  do {
    uVar7 = 0;
    do {
      iVar6 = FUN_0001e29c(uVar7);
      if (iVar6 != 0) {
        FUN_00050fdc(uVar7 & 0xff);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 != 4);
    usleep(iVar3 + 31000);
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  FUN_00036908();
  usleep(100000);
  FUN_00036908();
  usleep(100000);
  FUN_00036908();
  usleep(100000);
  FUN_0001efe0(0xff,local_840,uVar4,0);
  puVar1 = local_83c;
  if (DAT_0007eb9c < 5) {
    __s = *(void **)(DAT_004fcb34 + 4);
  }
  else {
    *local_83c = s__DEBUG__Get_nonce_counter__chain_000678e4._0_4_;
    local_83c[1] = s__DEBUG__Get_nonce_counter__chain_000678e4._4_4_;
    local_83c[2] = s__DEBUG__Get_nonce_counter__chain_000678e4._8_4_;
    local_83c[3] = s__DEBUG__Get_nonce_counter__chain_000678e4._12_4_;
    local_83c[4] = s__DEBUG__Get_nonce_counter__chain_000678e4._16_4_;
    local_83c[5] = s__DEBUG__Get_nonce_counter__chain_000678e4._20_4_;
    local_83c[6] = s__DEBUG__Get_nonce_counter__chain_000678e4._24_4_;
    local_83c[7] = s__DEBUG__Get_nonce_counter__chain_000678e4._28_4_;
    *(short *)(local_83c + 8) = (short)ram0x00067904;
    *(char *)((int)local_83c + 0x22) = (char)((uint)ram0x00067904 >> 0x10);
    FUN_0002e584(4,local_83c,0);
    __s = *(void **)(DAT_004fcb34 + 4);
    if (4 < DAT_0007eb9c) {
      local_8c8[0] = 1;
      snprintf((char *)puVar1,0x800,
               "[DEBUG] Read reg and wait done, reg = %d, done_threshold = %d.\n",0xe0);
      FUN_0002e584(4,puVar1,0);
    }
  }
  memset(__s,0,0x400);
  iVar3 = 5;
  FUN_0001ec84(0xff,1,0,0xe0);
  do {
    iVar5 = FUN_00036f2c();
    if (iVar5 != 0) {
      return 0;
    }
    usleep(100000);
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  local_840 = &DAT_0007eb9c;
  iVar3 = 0x5f;
  while( true ) {
    uVar4 = 0;
    do {
      iVar5 = FUN_0001e29c(uVar4);
      if ((iVar5 != 0) && (iVar5 = FUN_0001e0f0(), iVar5 != 0)) {
        iVar6 = 0;
        pcVar8 = (char *)((int)__s + uVar4 * 0x100);
        do {
          if (*pcVar8 != '\x01') {
            sVar2 = FUN_0001e160();
            FUN_0001ec84(uVar4 & 0xff,0,(int)sVar2 * (int)(short)iVar6 & 0xff,0xe0);
          }
          iVar6 = iVar6 + 1;
          pcVar8 = pcVar8 + 1;
        } while (iVar5 != iVar6);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 != 4);
    usleep(100000);
    iVar5 = FUN_00036f2c();
    puVar1 = local_83c;
    if (iVar5 != 0) break;
    iVar3 = iVar3 + -1;
    if (iVar3 == 0) {
      if (3 < *local_840) {
        snprintf((char *)local_83c,0x800,"Read REG[0x%X] done failed.\n",0xe0);
        FUN_0002e584(3,puVar1,0);
        return 0xffffffff;
      }
      return 0xffffffff;
    }
  }
  return 0;
}

