
undefined4 *
FUN_0005d7b8(size_t param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  undefined4 *__ptr;
  void *pvVar1;
  int *piVar2;
  
  __ptr = (undefined4 *)calloc(1,0x1c);
  if (__ptr == (undefined4 *)0x0) {
    piVar2 = __errno_location();
    FUN_0005df98(2,"src/zc_hashtable.c",0x26,"calloc fail, errno[%d]",*piVar2);
  }
  else {
    pvVar1 = calloc(param_1,4);
    __ptr[1] = pvVar1;
    if (pvVar1 == (void *)0x0) {
      piVar2 = __errno_location();
      FUN_0005df98(2,"src/zc_hashtable.c",0x2c,"calloc fail, errno[%d]",*piVar2);
      free(__ptr);
      __ptr = (undefined4 *)0x0;
    }
    else {
      __ptr[2] = param_1;
      __ptr[3] = param_2;
      __ptr[4] = param_3;
      __ptr[5] = param_4;
      __ptr[6] = param_5;
      *__ptr = 0;
    }
  }
  return __ptr;
}

