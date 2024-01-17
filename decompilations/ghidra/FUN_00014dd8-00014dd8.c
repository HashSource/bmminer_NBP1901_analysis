
int FUN_00014dd8(int param_1,int param_2,uint param_3)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = FUN_0001e29c();
  if (iVar2 == 0) {
    uVar3 = 1;
  }
  else {
    uVar3 = param_3 >> 0x1f;
  }
  if (uVar3 == 0) {
    if (param_2 == 1) {
      iVar2 = FUN_00014434();
    }
    else {
      if (param_2 == 2) {
        iVar2 = FUN_00014434();
        if (iVar2 <= (int)param_3) {
          return 0xff;
        }
        iVar2 = FUN_0001e170();
        if (iVar2 == 0) {
          return 0xff;
        }
        goto LAB_00014e24;
      }
      if (param_2 != 0) goto LAB_00014e24;
      iVar2 = FUN_0001e19c();
    }
    if ((int)param_3 < iVar2) {
LAB_00014e24:
      pthread_mutex_lock((pthread_mutex_t *)&DAT_0007f7c0);
      sVar1 = *(short *)(*(int *)(*(int *)(DAT_0007f7b8 + param_1 * 4) + param_2 * 4) + param_3 * 6
                        + 2);
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_0007f7c0);
      return (int)sVar1;
    }
  }
  return 0xff;
}

