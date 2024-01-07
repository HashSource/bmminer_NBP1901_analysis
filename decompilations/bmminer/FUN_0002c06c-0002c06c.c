
uint FUN_0002c06c(uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int local_830;
  int local_82c;
  char acStack_828 [2052];
  
  local_82c = 5;
  pthread_mutex_lock(DAT_0002c2e4);
  do {
    local_830 = 8;
    FUN_0002bdd0();
    FUN_0001ec84(param_3 & 0xff,0,param_2 & 0xff,param_1 & 0xff);
    do {
      FUN_000304d4(10);
      pthread_mutex_lock((pthread_mutex_t *)&DAT_000810dc);
      iVar2 = DAT_005945c0;
      if (DAT_005945c0 != 0) {
        iVar5 = 0;
        do {
          DAT_005945c0 = DAT_005945c0 + -1;
          iVar5 = iVar5 + 1;
          uVar4 = DAT_005945bc + 1;
          if (0x1fe < uVar4) {
            DAT_005945bc = 0;
          }
          iVar1 = uVar4 * 8;
          if (uVar4 < 0x1ff) {
            DAT_005945bc = uVar4;
          }
          uVar3 = (uint)*(byte *)((int)&DAT_005945c0 + iVar1 + 3);
          if (((uVar3 == param_3) && (*(byte *)((int)&DAT_005945c0 + iVar1 + 1) == param_2)) &&
             (*(byte *)((int)&DAT_005945c0 + iVar1 + 2) == param_1)) {
            if (param_1 == 0x1c) {
              uVar4 = (&DAT_005945bc)[uVar4 * 2];
              if ((uVar4 & 0xe0000000) != 0) {
                uVar4 = 0;
              }
              pthread_mutex_unlock((pthread_mutex_t *)&DAT_000810dc);
              FUN_0002bdd0();
              pthread_mutex_unlock(DAT_0002c2e4);
              return uVar4;
            }
            pthread_mutex_unlock((pthread_mutex_t *)&DAT_000810dc);
            FUN_0002bdd0();
            pthread_mutex_unlock(DAT_0002c2e4);
            return (&DAT_005945bc)[uVar4 * 2];
          }
          if (3 < DAT_0007eb9c) {
            snprintf(acStack_828,0x800,
                     "read asic reg error: expect chain = %d, chip = %d, reg = %d, got chain = %d, chip = %d, reg = %d\n"
                     ,param_3,param_2,param_1,uVar3,
                     (uint)*(byte *)((int)&DAT_005945c0 + uVar4 * 8 + 1),
                     (uint)*(byte *)((int)&DAT_005945c0 + uVar4 * 8 + 2));
            FUN_0002e584(3,acStack_828,0);
          }
        } while (iVar2 != iVar5);
      }
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_000810dc);
      local_830 = local_830 + -1;
    } while (local_830 != 0);
    local_82c = local_82c + -1;
    if (local_82c == 0) {
      if (4 < DAT_0007eb9c) {
        snprintf(acStack_828,0x800,"read asic reg timeout: expect chain = %d, chip = %d, reg = %d\n"
                 ,param_3,param_2,param_1);
        FUN_0002e584(4,acStack_828,0);
      }
      FUN_0002bdd0();
      pthread_mutex_unlock(DAT_0002c2e4);
      return 0;
    }
  } while( true );
}

