
void FUN_0005e680(void **param_1)

{
  void *__dest;
  
  __dest = (void *)((int)param_1[1] - (int)param_1[0x108]);
  if (__dest < *param_1) {
    __dest = *param_1;
  }
  memcpy(__dest,param_1 + 7,(int)param_1[1] - (int)__dest);
  return;
}

