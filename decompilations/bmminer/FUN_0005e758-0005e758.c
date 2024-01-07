
void ** FUN_0005e758(void *param_1,void *param_2,char *param_3)

{
  void **ppvVar1;
  void *pvVar2;
  int *piVar3;
  
  if (param_1 == (void *)0x0) {
    FUN_0005df98(2,"src/buf.c",0x5c,"buf_size_min == 0, not allowed");
    return (void **)0x0;
  }
  if ((param_2 == (void *)0x0 || param_2 <= param_1) &&
      (param_2 != (void *)0x0 && param_1 != param_2)) {
    FUN_0005df98(2,"src/buf.c",0x62,"buf_size_max[%lu] < buf_size_min[%lu] && buf_size_max != 0",
                 param_2,param_1);
    return (void **)0x0;
  }
  ppvVar1 = (void **)calloc(1,0x424);
  if (ppvVar1 == (void **)0x0) {
    piVar3 = __errno_location();
    FUN_0005df98(2,"src/buf.c",0x68,"calloc fail, errno[%d]",*piVar3);
    return (void **)0x0;
  }
  if (param_3 != (char *)0x0) {
    pvVar2 = (void *)strlen(param_3);
    if ((void *)0x400 < pvVar2) {
      FUN_0005df98(2,"src/buf.c",0x6e,"truncate_str[%s] overflow",param_3);
      goto LAB_0005e850;
    }
    memcpy(ppvVar1 + 7,param_3,(int)pvVar2 + 1);
    ppvVar1[0x108] = pvVar2;
  }
  ppvVar1[4] = param_1;
  ppvVar1[5] = param_2;
  ppvVar1[6] = param_1;
  pvVar2 = calloc(1,(size_t)param_1);
  *ppvVar1 = pvVar2;
  if (pvVar2 != (void *)0x0) {
    ppvVar1[1] = pvVar2;
    ppvVar1[3] = (void *)((int)pvVar2 + (int)param_1);
    ppvVar1[2] = (void *)((int)(void *)((int)pvVar2 + (int)param_1) + -1);
    return ppvVar1;
  }
  piVar3 = __errno_location();
  FUN_0005df98(2,"src/buf.c",0x7c,"calloc fail, errno[%d]",*piVar3);
LAB_0005e850:
  FUN_0005e70c(ppvVar1);
  return (void **)0x0;
}

