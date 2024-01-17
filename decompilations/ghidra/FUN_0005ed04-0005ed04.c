
void * FUN_0005ed04(int *param_1,undefined4 param_2,uint param_3,int param_4,uint param_5)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  size_t __n;
  undefined4 uVar5;
  char *__src;
  char *pcVar6;
  uint __n_00;
  size_t __n_01;
  uint uVar7;
  longlong lVar8;
  char local_25 [9];
  
  lVar8 = CONCAT44(param_4,param_3);
  if (*param_1 == 0) {
    FUN_0005df98(2,"src/buf.c",0x156,"pre-use of zlog_buf_resize fail, so can\'t convert");
    return (void *)0xffffffff;
  }
  pcVar6 = local_25 + 1;
  __src = pcVar6;
  if ((param_4 != 0 || 0xfffffffe < param_3) && (param_4 != 0 || param_3 != 0xffffffff)) {
    do {
      uVar5 = (undefined4)((ulonglong)lVar8 >> 0x20);
      cVar4 = '\n';
      FUN_00060120((int)lVar8,uVar5,10,0);
      __src = __src + -1;
      *__src = cVar4 + '0';
      lVar8 = FUN_00060120((int)lVar8,uVar5,10,0);
    } while (lVar8 != 0);
  }
  else {
    do {
      uVar3 = param_3 / 10;
      __src = __src + -1;
      *__src = (char)(param_3 % 10) + '0';
      param_3 = uVar3;
    } while (uVar3 != 0);
  }
  __n_00 = (int)pcVar6 - (int)__src;
  pvVar1 = (void *)param_1[1];
  uVar3 = param_1[2];
  if (__n_00 < param_5) {
    uVar7 = (int)pvVar1 + param_5;
    __n = param_5 - __n_00;
    if (uVar3 < uVar7) goto LAB_0005ee24;
  }
  else {
    uVar7 = (int)pvVar1 + __n_00;
    if (uVar7 <= uVar3) {
      __n = 0;
      goto LAB_0005eda4;
    }
    __n = 0;
    param_5 = __n_00;
LAB_0005ee24:
    iVar2 = FUN_0005e558(param_1,param_5 - (uVar3 - (int)pvVar1));
    if (0 < iVar2) {
      FUN_0005df98(2,"src/buf.c",0x189,"conf limit to %ld, can\'t extend, so output",param_1[5]);
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
      FUN_0005df98(2,"src/buf.c",0x199,"zlog_buf_resize fail");
      return (void *)0xffffffff;
    }
    pvVar1 = (void *)param_1[1];
    uVar7 = (int)pvVar1 + param_5;
  }
  if (__n != 0) {
    memset(pvVar1,0x30,__n);
    pvVar1 = (void *)param_1[1];
  }
LAB_0005eda4:
  memcpy((void *)((int)pvVar1 + __n),__src,__n_00);
  param_1[1] = uVar7;
  return (void *)0x0;
}

