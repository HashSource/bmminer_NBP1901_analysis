
void ** FUN_00043fa4(void *param_1,void *param_2)

{
  void **__ptr;
  void *__dest;
  
  __ptr = (void **)malloc(8);
  if (__ptr != (void **)0x0) {
    __ptr[1] = param_2;
    __dest = malloc((size_t)param_2);
    *__ptr = __dest;
    if (__dest == (void *)0x0) {
      free(__ptr);
      __ptr = (void **)0x0;
    }
    else {
      memcpy(__dest,param_1,(size_t)param_2);
    }
  }
  return __ptr;
}

