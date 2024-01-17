
void * FUN_0005ef24(int *param_1,uint param_2,uint param_3)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  size_t __n;
  char *__src;
  uint __n_00;
  size_t __n_01;
  uint uVar4;
  char local_22 [6];
  
  if (*param_1 == 0) {
    FUN_0005df98(2,"src/buf.c",0x1b2,"pre-use of zlog_buf_resize fail, so can\'t convert");
    return (void *)0xffffffff;
  }
  __src = local_22 + 1;
  do {
    uVar3 = param_2 & 0xf;
    param_2 = param_2 >> 4;
    __src = __src + -1;
    *__src = "0123456789abcdef"[uVar3];
  } while (param_2 != 0);
  __n_00 = (int)(local_22 + 1) - (int)__src;
  pvVar1 = (void *)param_1[1];
  uVar3 = param_1[2];
  if (__n_00 < param_3) {
    uVar4 = (int)pvVar1 + param_3;
    __n = param_3 - __n_00;
    if (uVar3 < uVar4) goto LAB_0005efd4;
  }
  else {
    uVar4 = (int)pvVar1 + __n_00;
    __n = 0;
    param_3 = __n_00;
    if (uVar4 <= uVar3) goto LAB_0005efb0;
LAB_0005efd4:
    iVar2 = FUN_0005e558(param_1,param_3 - (uVar3 - (int)pvVar1));
    if (0 < iVar2) {
      FUN_0005df98(2,"src/buf.c",0x1d9,"conf limit to %ld, can\'t extend, so output",param_1[5]);
      pvVar1 = (void *)param_1[1];
      uVar3 = param_1[2] - (int)pvVar1;
      if (__n < uVar3) {
        __n_01 = uVar3 - __n;
      }
      else {
        __n_01 = 0;
        __n = uVar3;
      }
      if (__n != 0) {
        memset(pvVar1,0x30,__n);
        pvVar1 = (void *)param_1[1];
      }
      pvVar1 = memcpy((void *)((int)pvVar1 + __n),__src,__n_01);
      if (*(char *)(param_1 + 7) == '\0') {
        pvVar1 = (void *)0x1;
      }
      param_1[1] = param_1[1] + uVar3;
      if (*(char *)(param_1 + 7) == '\0') {
        return pvVar1;
      }
      FUN_0005e680(param_1);
      return (void *)0x1;
    }
    if (iVar2 != 0) {
      FUN_0005df98(2,"src/buf.c",0x1e9,"zlog_buf_resize fail");
      return (void *)0xffffffff;
    }
    pvVar1 = (void *)param_1[1];
    uVar4 = (int)pvVar1 + param_3;
  }
  if (__n != 0) {
    memset(pvVar1,0x30,__n);
    pvVar1 = (void *)param_1[1];
  }
LAB_0005efb0:
  memcpy((void *)((int)pvVar1 + __n),__src,__n_00);
  param_1[1] = uVar4;
  return (void *)0x0;
}

