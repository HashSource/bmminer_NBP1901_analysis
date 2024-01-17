
void FUN_00053ec8(int param_1)

{
  int iVar1;
  void *pvVar2;
  
  if (param_1 == 0) {
    FUN_0005df98(2,"src/zlog.c",0x225,"key is null or 0");
    return;
  }
  iVar1 = pthread_rwlock_rdlock((pthread_rwlock_t *)&DAT_0058de1c);
  if (iVar1 == 0) {
    if (DAT_0058de3c == 0) {
      FUN_0005df98(2,"src/zlog.c",0x22e,"never call zlog_init() or dzlog_init() before");
    }
    else {
      pvVar2 = pthread_getspecific(DAT_0058de08);
      if (pvVar2 == (void *)0x0) {
        FUN_0005df98(2,"src/zlog.c",0x234,"thread not found, maybe not use zlog_put_mdc before");
      }
      else {
        FUN_00058238(*(undefined4 *)((int)pvVar2 + 4),param_1);
      }
    }
    iVar1 = pthread_rwlock_unlock(DAT_00053fdc);
    if (iVar1 != 0) {
      FUN_0005df98(2,"src/zlog.c",0x23d,"pthread_rwlock_unlock fail, rc=[%d]",iVar1);
    }
    return;
  }
  FUN_0005df98(2,"src/zlog.c",0x229,"pthread_rwlock_rdlock fail, rc[%d]",iVar1);
  return;
}

