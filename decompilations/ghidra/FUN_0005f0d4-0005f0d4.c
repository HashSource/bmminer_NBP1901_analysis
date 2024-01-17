
void * FUN_0005f0d4(int param_1,void *param_2,size_t param_3)

{
  int iVar1;
  void *pvVar2;
  size_t __n;
  uint uVar3;
  bool bVar4;
  
  pvVar2 = *(void **)(param_1 + 4);
  uVar3 = (int)pvVar2 + param_3;
  if (*(uint *)(param_1 + 8) < uVar3) {
    iVar1 = FUN_0005e558(param_1,param_3 - (*(uint *)(param_1 + 8) - (int)pvVar2));
    if (0 < iVar1) {
      FUN_0005df98(2,"src/buf.c",0x20d,"conf limit to %ld, can\'t extend, so output",
                   *(undefined4 *)(param_1 + 0x14));
      __n = *(int *)(param_1 + 8) - (int)*(void **)(param_1 + 4);
      pvVar2 = memcpy(*(void **)(param_1 + 4),param_2,__n);
      bVar4 = *(char *)(param_1 + 0x1c) == '\0';
      if (bVar4) {
        pvVar2 = (void *)0x1;
      }
      *(size_t *)(param_1 + 4) = *(int *)(param_1 + 4) + __n;
      if (bVar4) {
        return pvVar2;
      }
      FUN_0005e680(param_1);
      return (void *)0x1;
    }
    if (iVar1 != 0) {
      FUN_0005df98(2,"src/buf.c",0x215,"zlog_buf_resize fail");
      return (void *)0xffffffff;
    }
    pvVar2 = *(void **)(param_1 + 4);
    uVar3 = (int)pvVar2 + param_3;
  }
  memcpy(pvVar2,param_2,param_3);
  *(uint *)(param_1 + 4) = uVar3;
  return (void *)0x0;
}

