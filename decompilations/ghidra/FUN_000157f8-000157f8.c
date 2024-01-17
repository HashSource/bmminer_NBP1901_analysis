
int FUN_000157f8(int param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  
  pcVar2 = (char *)FUN_0001e0c0();
  iVar3 = strcmp(pcVar2,"BHB28601");
  if (iVar3 != 0) {
    pcVar2 = (char *)FUN_0001e0c0();
    iVar3 = strcmp(pcVar2,"BHB28501");
    if (iVar3 != 0) {
      iVar3 = 0;
      goto LAB_00014d60;
    }
  }
  iVar3 = 1;
LAB_00014d60:
  pthread_mutex_lock(DAT_00014dd4);
  if (iVar3 == 0) {
    iVar1 = FUN_0001e19c();
  }
  else {
    iVar1 = FUN_00014434();
  }
  if ((param_1 < 4) && (param_2 < iVar1)) {
    iVar3 = (int)*(short *)(*(int *)(*(int *)(DAT_0007f7b8 + param_1 * 4) + iVar3 * 4) + param_2 * 6
                           + 4);
  }
  else {
    iVar3 = 0;
  }
  pthread_mutex_unlock(DAT_00014dd4);
  return iVar3;
}

