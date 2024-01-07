
void FUN_00053fe0(void)

{
  int iVar1;
  void *pvVar2;
  
  iVar1 = pthread_rwlock_rdlock((pthread_rwlock_t *)&DAT_0058de1c);
  if (iVar1 == 0) {
    if (DAT_0058de3c == 0) {
      FUN_0005df98(2,"src/zlog.c",0x24f,"never call zlog_init() or dzlog_init() before");
    }
    else {
      pvVar2 = pthread_getspecific(DAT_0058de08);
      if (pvVar2 == (void *)0x0) {
        FUN_0005df98(2,"src/zlog.c",0x255,"thread not found, maybe not use zlog_put_mdc before");
      }
      else {
        FUN_000581b0(*(undefined4 *)((int)pvVar2 + 4));
      }
    }
    iVar1 = pthread_rwlock_unlock(DAT_000540c4);
    if (iVar1 != 0) {
      FUN_0005df98(2,"src/zlog.c",0x25e,"pthread_rwlock_unlock fail, rc=[%d]",iVar1);
    }
    return;
  }
  FUN_0005df98(2,"src/zlog.c",0x24a,"pthread_rwlock_rdlock fail, rc[%d]",iVar1);
  return;
}

