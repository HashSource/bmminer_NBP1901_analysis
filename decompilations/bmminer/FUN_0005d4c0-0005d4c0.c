
void ** FUN_0005d4c0(void *param_1)

{
  void **__ptr;
  void *pvVar1;
  int *piVar2;
  
  __ptr = (void **)calloc(1,0x10);
  if (__ptr == (void **)0x0) {
    piVar2 = __errno_location();
    FUN_0005df98(2,"src/zc_arraylist.c",0x16,"calloc fail, errno[%d]",*piVar2);
  }
  else {
    __ptr[3] = param_1;
    __ptr[2] = (void *)0x20;
    __ptr[1] = (void *)0x0;
    pvVar1 = calloc(0x20,4);
    *__ptr = pvVar1;
    if (pvVar1 == (void *)0x0) {
      piVar2 = __errno_location();
      FUN_0005df98(2,"src/zc_arraylist.c",0x20,"calloc fail, errno[%d]",*piVar2);
      free(__ptr);
      __ptr = (void **)0x0;
    }
  }
  return __ptr;
}

