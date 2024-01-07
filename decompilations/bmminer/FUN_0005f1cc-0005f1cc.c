
void * FUN_0005f1cc(int *param_1,void *param_2,uint param_3,int param_4,int param_5,uint param_6,
                   uint param_7)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  size_t __n;
  size_t sVar4;
  
  if (*param_1 == 0) {
    FUN_0005df98(2,"src/buf.c",0x232,"pre-use of zlog_buf_resize fail, so can\'t convert");
    return (void *)0xffffffff;
  }
  pvVar1 = (void *)param_1[1];
  if (param_7 == 0 || param_3 < param_7) {
    param_7 = param_3;
  }
  if (param_6 == 0 || param_6 <= param_7) {
    sVar4 = 0;
    param_6 = param_7;
  }
  else {
    sVar4 = param_6 - param_7;
  }
  if ((uint)(param_1[2] - (int)pvVar1) < param_6) {
    iVar2 = FUN_0005e558(param_1,param_6 - (param_1[2] - (int)pvVar1));
    if (0 < iVar2) {
      FUN_0005df98(2,"src/buf.c",0x250,"conf limit to %ld, can\'t extend, so output",param_1[5]);
      pvVar1 = (void *)param_1[1];
      uVar3 = param_1[2] - (int)pvVar1;
      if (param_4 == 0) {
        if (sVar4 < uVar3) {
          __n = uVar3 - sVar4;
        }
        else {
          __n = 0;
          sVar4 = uVar3;
        }
        if (sVar4 != 0) {
          if (param_5 == 0) {
            iVar2 = 0x20;
          }
          else {
            iVar2 = 0x30;
          }
          memset(pvVar1,iVar2,sVar4);
          pvVar1 = (void *)param_1[1];
        }
        pvVar1 = memcpy((void *)((int)pvVar1 + sVar4),param_2,__n);
      }
      else {
        sVar4 = uVar3;
        if (param_7 < uVar3) {
          memset((void *)((int)pvVar1 + param_7),0x20,uVar3 - param_7);
          pvVar1 = (void *)param_1[1];
          sVar4 = param_7;
        }
        pvVar1 = memcpy(pvVar1,param_2,sVar4);
      }
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
      FUN_0005df98(2,"src/buf.c",0x270,"zlog_buf_resize fail");
      return (void *)0xffffffff;
    }
    pvVar1 = (void *)param_1[1];
  }
  if (param_4 == 0) {
    if (sVar4 != 0) {
      if (param_5 == 0) {
        iVar2 = 0x20;
      }
      else {
        iVar2 = 0x30;
      }
      memset(pvVar1,iVar2,sVar4);
      pvVar1 = (void *)param_1[1];
    }
    memcpy((void *)((int)pvVar1 + sVar4),param_2,param_7);
  }
  else {
    if (sVar4 != 0) {
      memset((void *)((int)pvVar1 + param_7),0x20,sVar4);
      pvVar1 = (void *)param_1[1];
    }
    memcpy(pvVar1,param_2,param_7);
  }
  param_1[1] = param_1[1] + param_6;
  return (void *)0x0;
}

