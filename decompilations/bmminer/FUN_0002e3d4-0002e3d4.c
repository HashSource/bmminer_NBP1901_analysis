
undefined4
FUN_0002e3d4(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  pthread_mutex_t *__mutex;
  char acStack_810 [2052];
  
  if (*(char *)(param_1 + 1) != '\0') {
    snprintf(acStack_810,0x800,"List %s can\'t %s() a store - from %s %s() line %d in %s %s():%d",
             *param_1,DAT_0002e4ec,param_2,param_3,param_4,"klist.c",DAT_0002e4ec,400);
    FUN_0002e584(3,acStack_810,1);
    FUN_0002a574(1);
  }
  if (0 < (int)param_1[0xc]) {
    iVar2 = 0;
    do {
      iVar1 = iVar2 * 4;
      iVar2 = iVar2 + 1;
      free(*(void **)(param_1[0xd] + iVar1));
    } while (iVar2 < (int)param_1[0xc]);
  }
  free((void *)param_1[0xd]);
  if (0 < (int)param_1[0xe]) {
    iVar2 = 0;
    do {
      iVar1 = iVar2 * 4;
      iVar2 = iVar2 + 1;
      free(*(void **)(param_1[0xf] + iVar1));
    } while (iVar2 < (int)param_1[0xe]);
  }
  free((void *)param_1[0xf]);
  __mutex = (pthread_mutex_t *)param_1[2];
  pthread_rwlock_destroy((pthread_rwlock_t *)(__mutex + 1));
  pthread_mutex_destroy(__mutex);
  free((void *)param_1[2]);
  free(param_1);
  return 0;
}

