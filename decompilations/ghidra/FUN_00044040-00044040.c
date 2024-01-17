
void FUN_00044040(void **param_1,void *param_2,size_t param_3)

{
  void *__dest;
  
  free(*param_1);
  __dest = malloc(param_3);
  *param_1 = __dest;
  memcpy(__dest,param_2,param_3);
  return;
}

