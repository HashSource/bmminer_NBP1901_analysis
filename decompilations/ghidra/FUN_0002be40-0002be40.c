
undefined4 FUN_0002be40(uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  char acStack_828 [2052];
  
  iVar1 = FUN_0001e29c();
  if (iVar1 == 0) {
    uVar6 = 0;
    if (3 < DAT_0007eb9c) {
      snprintf(acStack_828,0x800,"Chain %d is not exist.\n",param_1);
      FUN_0002e584(3,acStack_828,0);
    }
  }
  else {
    if (param_2 == 0) {
      FUN_0001e610(param_1,0);
    }
    iVar1 = 0;
    FUN_0002bdd0();
    iVar9 = 0;
    FUN_0001ec84(param_1 & 0xff,1,0,param_2 & 0xff);
LAB_0002bec4:
    do {
      while( true ) {
        FUN_000304d4(300);
        pthread_mutex_lock((pthread_mutex_t *)&DAT_000810dc);
        iVar2 = DAT_005945c0;
        iVar1 = iVar1 + DAT_005945c0;
        if (DAT_005945c0 < 1) break;
        iVar9 = 0;
        do {
          DAT_005945c0 = DAT_005945c0 + -1;
          iVar9 = iVar9 + 1;
          uVar7 = DAT_005945bc + 1;
          DAT_005945bc = uVar7;
          if (0x1fe < uVar7) {
            DAT_005945bc = 0;
          }
          uVar8 = (&DAT_005945bc)[uVar7 * 2];
          if ((*(byte *)((int)&DAT_005945c0 + uVar7 * 8 + 3) == param_1 &&
               *(char *)((int)&DAT_005945c0 + uVar7 * 8 + 2) == '\0') &&
             (uVar7 = FUN_0001e110(), uVar7 == uVar8 >> 0x10)) {
            FUN_0001e5a0(param_1);
          }
        } while (iVar2 != iVar9);
        iVar2 = FUN_0001e0f0();
        iVar3 = FUN_0001e28c();
        iVar9 = iVar3 * iVar2 * 5;
        if (iVar1 != iVar9 && iVar1 + iVar3 * iVar2 * -5 < 0 == SBORROW4(iVar1,iVar9)) {
LAB_0002bf7c:
          pthread_mutex_unlock((pthread_mutex_t *)&DAT_000810dc);
          return 1;
        }
        iVar9 = 0;
        pthread_mutex_unlock((pthread_mutex_t *)&DAT_000810dc);
      }
      iVar4 = FUN_0001e0f0();
      iVar5 = FUN_0001e28c();
      iVar3 = iVar5 * iVar4 * 5;
      if (iVar1 != iVar3 && iVar1 + iVar5 * iVar4 * -5 < 0 == SBORROW4(iVar1,iVar3))
      goto LAB_0002bf7c;
      if (iVar2 != 0) {
        if (param_2 == 0) {
          iVar2 = FUN_0001e0f0();
          iVar3 = FUN_0001e67c(param_1);
          if (iVar2 == iVar3) goto LAB_0002bf7c;
        }
        pthread_mutex_unlock((pthread_mutex_t *)&DAT_000810dc);
        goto LAB_0002bec4;
      }
      iVar9 = iVar9 + 1;
      FUN_000304d4(100);
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_000810dc);
    } while (iVar9 != 4);
    uVar6 = 1;
  }
  return uVar6;
}

