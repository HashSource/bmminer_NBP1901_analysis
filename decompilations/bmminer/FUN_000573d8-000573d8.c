
void * FUN_000573d8(size_t param_1)

{
  void *__ptr;
  void *pvVar1;
  int iVar2;
  size_t sVar3;
  pthread_t pVar4;
  long lVar5;
  int *piVar6;
  
  __ptr = calloc(1,0x21c);
  if (__ptr == (void *)0x0) {
    piVar6 = __errno_location();
    FUN_0005df98(2,"src/event.c",0x3d,"calloc fail, errno[%d]",*piVar6);
  }
  else {
    pvVar1 = calloc(param_1,0x100c);
    *(void **)((int)__ptr + 0x174) = pvVar1;
    if (pvVar1 == (void *)0x0) {
      piVar6 = __errno_location();
      FUN_0005df98(2,"src/event.c",0x43,"calloc fail, errno[%d]",*piVar6);
      free(__ptr);
      __ptr = (void *)0x0;
    }
    else {
      *(size_t *)((int)__ptr + 0x178) = param_1;
      iVar2 = gethostname((char *)((int)__ptr + 8),0x100);
      if (iVar2 == 0) {
        sVar3 = strlen((char *)((int)__ptr + 8));
        *(size_t *)((int)__ptr + 0x10c) = sVar3;
        pVar4 = pthread_self();
        *(pthread_t *)((int)__ptr + 0x1a8) = pVar4;
        iVar2 = sprintf((char *)((int)__ptr + 0x1ac),"%lu");
        *(int *)((int)__ptr + 0x1cc) = iVar2;
        iVar2 = sprintf((char *)((int)__ptr + 0x1d0),"%x",*(undefined4 *)((int)__ptr + 0x1a8));
        *(int *)((int)__ptr + 0x1f0) = iVar2;
        lVar5 = syscall(0xe0);
        *(long *)((int)__ptr + 500) = lVar5;
        iVar2 = sprintf((char *)((int)__ptr + 0x1f8),"%u");
        *(int *)((int)__ptr + 0x218) = iVar2;
      }
      else {
        piVar6 = __errno_location();
        FUN_0005df98(2,"src/event.c",0x4e,"gethostname fail, errno[%d]",*piVar6);
        FUN_00057364(__ptr);
        __ptr = (void *)0x0;
      }
    }
  }
  return __ptr;
}

