
void * FUN_0004d8b0(void *param_1,size_t param_2)

{
  void *__dest;
  
  __dest = (void *)(param_2 + 1);
  if ((__dest != (void *)0x0) && (__dest = (void *)(*DAT_0007f568)(__dest), __dest != (void *)0x0))
  {
    memcpy(__dest,param_1,param_2);
    *(undefined *)((int)__dest + param_2) = 0;
  }
  return __dest;
}

