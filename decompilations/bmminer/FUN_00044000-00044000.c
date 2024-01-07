
undefined4 FUN_00044000(void **param_1,void **param_2)

{
  void *__dest;
  void *__size;
  
  __size = param_1[1];
  __dest = malloc((size_t)__size);
  *param_2 = __dest;
  if (__dest != (void *)0x0) {
    memcpy(__dest,*param_1,(size_t)__size);
    return 0;
  }
  return 3;
}

