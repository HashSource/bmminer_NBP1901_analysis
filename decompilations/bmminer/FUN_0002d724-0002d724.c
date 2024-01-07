
undefined4 *
FUN_0002d724(undefined4 param_1,undefined4 param_2,int param_3,int param_4,undefined param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 *puVar1;
  pthread_mutex_t *__mutex;
  int iVar2;
  int *piVar3;
  char acStack_820 [2048];
  
  if (param_3 < 1) {
    snprintf(acStack_820,0x800,"Invalid new list %s with allocate %d must be > 0 in %s %s():%d",
             param_1,param_3,"klist.c",DAT_0002d9d0,100);
    FUN_0002e584(3,acStack_820,1);
    FUN_0002a574(1);
  }
  if (param_4 < 0) {
    snprintf(acStack_820,0x800,"Invalid new list %s with limit %d must be >= 0 in %s %s():%d",
             param_1,param_4,"klist.c",DAT_0002d9d0,0x67);
    FUN_0002e584(3,acStack_820,1);
    FUN_0002a574(1);
  }
  puVar1 = (undefined4 *)calloc(1,0x40);
  if (puVar1 == (undefined4 *)0x0) {
    snprintf(acStack_820,0x800,"Failed to calloc list %s in %s %s():%d",param_1,"klist.c",
             DAT_0002d9d0,0x6b);
    FUN_0002e584(3,acStack_820,1);
    FUN_0002a574(1);
  }
  *(undefined *)(puVar1 + 1) = 0;
  __mutex = (pthread_mutex_t *)calloc(1,0x38);
  puVar1[2] = __mutex;
  if (__mutex == (pthread_mutex_t *)0x0) {
    snprintf(acStack_820,0x800,"Failed to calloc lock for list %s in %s %s():%d",param_1,"klist.c",
             DAT_0002d9d0,0x71);
    FUN_0002e584(3,acStack_820,1);
    FUN_0002a574(1);
    __mutex = (pthread_mutex_t *)puVar1[2];
  }
  iVar2 = pthread_mutex_init(__mutex,(pthread_mutexattr_t *)0x0);
  if (iVar2 != 0) {
    piVar3 = __errno_location();
    snprintf(acStack_820,0x800,"Failed to pthread_mutex_init errno=%d in %s %s():%d",*piVar3,
             "klist.c",DAT_0002d9d0,0x73);
    FUN_0002e584(3,acStack_820,1);
    FUN_0002a574(1);
  }
  iVar2 = pthread_rwlock_init((pthread_rwlock_t *)(__mutex + 1),(pthread_rwlockattr_t *)0x0);
  if (iVar2 != 0) {
    piVar3 = __errno_location();
    snprintf(acStack_820,0x800,"Failed to pthread_rwlock_init errno=%d in %s %s():%d",*piVar3,
             "klist.c",DAT_0002d9d0,0x73);
    FUN_0002e584(3,acStack_820,1);
    FUN_0002a574(1);
  }
  *puVar1 = param_1;
  puVar1[5] = param_2;
  puVar1[9] = param_3;
  puVar1[10] = param_4;
  *(undefined *)(puVar1 + 0xb) = param_5;
  FUN_0002d340(puVar1,param_6,param_7,param_8);
  return puVar1;
}

