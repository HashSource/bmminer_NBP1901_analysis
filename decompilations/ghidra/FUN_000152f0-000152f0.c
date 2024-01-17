
int FUN_000152f0(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  
  pcVar3 = (char *)FUN_0001e0c0();
  iVar4 = strcmp(pcVar3,"BHB28601");
  if (iVar4 != 0) {
    pcVar3 = (char *)FUN_0001e0c0();
    iVar4 = strcmp(pcVar3,"BHB28501");
    if (iVar4 != 0) {
      iVar4 = 0;
      goto LAB_00014cc0;
    }
  }
  iVar4 = 1;
LAB_00014cc0:
  if (iVar4 == 0) {
    iVar2 = FUN_0001e19c();
    if (iVar2 <= param_2) {
      return 0xff;
    }
  }
  else {
    iVar2 = FUN_0001e170();
    if (iVar2 == 0) {
      return 0xff;
    }
    iVar2 = FUN_00014434();
    if (iVar2 <= param_2) {
      return 0xff;
    }
    if (DAT_0007f7bc == 0) {
      return 0xff;
    }
  }
  if (DAT_0007f7b8 == 0) {
    return 0xff;
  }
  pthread_mutex_lock(DAT_00014d5c);
  sVar1 = *(short *)(*(int *)(*(int *)(DAT_0007f7b8 + param_1 * 4) + iVar4 * 4) + param_2 * 6 + 2);
  pthread_mutex_unlock(DAT_00014d5c);
  return (int)sVar1;
}

