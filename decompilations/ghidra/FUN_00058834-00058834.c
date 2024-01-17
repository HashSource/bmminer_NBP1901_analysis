
pthread_mutex_t * FUN_00058834(char *param_1)

{
  pthread_mutex_t *__mutex;
  int iVar1;
  int *piVar2;
  
  if (param_1 == (char *)0x0) {
    FUN_0005df98(2,"src/rotater.c",0x56,"lock_file is null or 0");
    __mutex = (pthread_mutex_t *)0x0;
  }
  else {
    __mutex = (pthread_mutex_t *)calloc(1,0x444);
    if (__mutex == (pthread_mutex_t *)0x0) {
      piVar2 = __errno_location();
      FUN_0005df98(2,"src/rotater.c",0x5a,"calloc fail, errno[%d]",*piVar2);
    }
    else {
      iVar1 = pthread_mutex_init(__mutex,(pthread_mutexattr_t *)0x0);
      if (iVar1 == 0) {
        iVar1 = open64(param_1,0x42,0x1b6);
        if (iVar1 < 0) {
          piVar2 = __errno_location();
          FUN_0005df98(2,"src/rotater.c",0x6c,"open file[%s] fail, errno[%d]",param_1,*piVar2);
          FUN_00058750(__mutex);
          __mutex = (pthread_mutex_t *)0x0;
        }
        else {
          *(int *)((int)__mutex + 0x1c) = iVar1;
          __mutex[1].__data.__lock = (int)param_1;
        }
      }
      else {
        piVar2 = __errno_location();
        FUN_0005df98(2,"src/rotater.c",0x5f,"pthread_mutex_init fail, errno[%d]",*piVar2);
        free(__mutex);
        __mutex = (pthread_mutex_t *)0x0;
      }
    }
  }
  return __mutex;
}

