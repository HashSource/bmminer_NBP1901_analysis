
undefined4 FUN_0002c2e8(uint param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  undefined uVar2;
  undefined2 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int extraout_r1;
  int extraout_r1_00;
  uint uVar7;
  int iVar8;
  int local_848;
  int local_840;
  undefined auStack_838 [8];
  undefined auStack_830 [8];
  char acStack_828 [2052];
  
  iVar4 = FUN_0001e29c(param_3);
  if (iVar4 != 0) {
    uVar7 = param_3 & 0xff;
    pthread_mutex_lock((pthread_mutex_t *)&DAT_000810f4);
    FUN_0001629c();
    DAT_0008110c = 1;
    FUN_0002bdd0();
    if (param_1 == 2) {
      iVar4 = FUN_0001e160();
      FUN_00050dc4(uVar7,param_2 * iVar4,2);
    }
    else if (param_1 == 6) {
      iVar4 = FUN_0001e160();
      FUN_00050da8(uVar7,param_2 * iVar4);
    }
    else {
      iVar4 = FUN_0001e160();
      FUN_0005193c(uVar7,param_2 * iVar4,param_1 & 0xff);
    }
    local_848 = 0;
    local_840 = 0;
    usleep(100000);
    do {
      pthread_mutex_lock((pthread_mutex_t *)&DAT_000810dc);
      iVar4 = DAT_005945c0;
      if (DAT_005945c0 < 1) {
        pthread_mutex_unlock((pthread_mutex_t *)&DAT_000810dc);
        if (iVar4 == 0) {
          usleep(1000);
        }
      }
      else {
        iVar8 = 0;
        do {
          DAT_005945c0 = DAT_005945c0 + -1;
          iVar8 = iVar8 + 1;
          uVar7 = DAT_005945bc + 1;
          iVar1 = uVar7 * 8;
          DAT_005945bc = uVar7;
          if (0x1fe < uVar7) {
            DAT_005945bc = 0;
          }
          if ((*(byte *)((int)&DAT_005945c0 + iVar1 + 3) == param_3) &&
             (*(char *)((int)&DAT_005945c0 + iVar1 + 2) == '@')) {
            uVar2 = *(undefined *)((int)&DAT_005945c0 + iVar1 + 1);
            uVar5 = FUN_0001e160();
            iVar6 = FUN_0005faf8(uVar2,uVar5);
            if (iVar6 == param_2) {
              uVar3 = *(undefined2 *)((int)&DAT_005945bc + iVar1 + 2);
              local_848 = local_848 + 1;
              uVar5 = FUN_0001e120();
              FUN_0005fadc(uVar3,uVar5);
              if (*(int *)(param_4 + extraout_r1 * 4) == 0) {
                uVar7 = (&DAT_005945bc)[uVar7 * 2];
                local_840 = local_840 + 1;
                uVar5 = FUN_0001e120();
                FUN_0005fadc(uVar7 >> 0x10,uVar5);
                *(uint *)(param_4 + extraout_r1_00 * 4) = uVar7 & 0xffff;
              }
            }
          }
        } while (iVar4 != iVar8);
        pthread_mutex_unlock((pthread_mutex_t *)&DAT_000810dc);
      }
      FUN_000302a0(auStack_830);
      iVar4 = FUN_00030578(auStack_830,auStack_838);
    } while (iVar4 < 200);
    iVar4 = FUN_0001e120();
    if ((local_840 != iVar4) && (3 < DAT_0007eb9c)) {
      uVar5 = FUN_0001e120();
      snprintf(acStack_828,0x800,
               "recv core response not enough!!!, total recv::%d, valid::%d, need::%d.\n",local_848,
               local_840,uVar5);
      FUN_0002e584(3,acStack_828,0);
    }
    DAT_0008110c = 0;
    FUN_000162b0();
    pthread_mutex_unlock(DAT_0002c5e4);
    return 0;
  }
  if (3 < DAT_0007eb9c) {
    snprintf(acStack_828,0x800,"chain::%d don\'t exist!!!\n",param_3);
    FUN_0002e584(3,acStack_828,0);
    return 0xffffffff;
  }
  return 0xffffffff;
}

