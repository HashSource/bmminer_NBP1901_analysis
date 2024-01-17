
uint FUN_0005e558(void **param_1,uint param_2)

{
  int *piVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *__ptr;
  uint uVar5;
  bool bVar6;
  double dVar7;
  
  pvVar4 = param_1[5];
  pvVar2 = param_1[6];
  if (pvVar4 == (void *)0x0) {
    uVar5 = 0;
    dVar7 = (double)ZEXT48(pvVar2) + (double)(ulonglong)param_2 * 1.5;
    pvVar2 = (void *)((uint)(0.0 < dVar7) * (int)(longlong)dVar7);
  }
  else {
    if (pvVar4 <= pvVar2) {
      FUN_0005df98(2,"src/buf.c",0xa9,"a_buf->size_real[%ld] >= a_buf->size_max[%ld]",pvVar2,pvVar4)
      ;
      return 1;
    }
    pvVar2 = (void *)((int)pvVar2 + param_2);
    bVar6 = pvVar4 < pvVar2;
    if (bVar6) {
      pvVar2 = pvVar4;
    }
    uVar5 = (uint)bVar6;
  }
  __ptr = *param_1;
  pvVar3 = param_1[1];
  pvVar4 = realloc(__ptr,(size_t)pvVar2);
  if (pvVar4 == (void *)0x0) {
    piVar1 = __errno_location();
    FUN_0005df98(2,"src/buf.c",0xbd,"realloc fail, errno[%d]",*piVar1);
    uVar5 = 0xffffffff;
    free(*param_1);
    *param_1 = (void *)0x0;
    param_1[1] = (void *)0x0;
    param_1[2] = (void *)0x0;
    param_1[3] = (void *)0x0;
  }
  else {
    param_1[1] = (void *)((int)pvVar4 + ((int)pvVar3 - (int)__ptr));
    *param_1 = pvVar4;
    param_1[3] = (void *)((int)pvVar4 + (int)pvVar2);
    param_1[2] = (void *)((int)(void *)((int)pvVar4 + (int)pvVar2) + -1);
    param_1[6] = pvVar2;
  }
  return uVar5;
}

