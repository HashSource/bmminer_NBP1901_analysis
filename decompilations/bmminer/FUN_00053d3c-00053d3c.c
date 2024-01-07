
int FUN_00053d3c(int param_1)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  
  if (param_1 == 0) {
    FUN_0005df98(2,"src/zlog.c",0x1f8,"key is null or 0");
    iVar3 = 0;
  }
  else {
    iVar1 = pthread_rwlock_rdlock((pthread_rwlock_t *)&DAT_0058de1c);
    if (iVar1 == 0) {
      if (DAT_0058de3c == 0) {
        FUN_0005df98(2,"src/zlog.c",0x201,"never call zlog_init() or dzlog_init() before");
      }
      else {
        pvVar2 = pthread_getspecific(DAT_0058de08);
        if (pvVar2 == (void *)0x0) {
          FUN_0005df98(2,"src/zlog.c",0x207,"thread not found, maybe not use zlog_put_mdc before");
        }
        else {
          iVar3 = FUN_000581b8(*(undefined4 *)((int)pvVar2 + 4),param_1);
          if (iVar3 != 0) {
            iVar1 = pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_0058de1c);
            if (iVar1 == 0) {
              return iVar3;
            }
            FUN_0005df98(2,"src/zlog.c",0x213,"pthread_rwlock_unlock fail, rc=[%d]",iVar1);
            return 0;
          }
          FUN_0005df98(2,"src/zlog.c",0x20d,"key[%s] not found in mdc",param_1);
        }
      }
      iVar3 = pthread_rwlock_unlock(DAT_00053ec4);
      if (iVar3 != 0) {
        FUN_0005df98(2,"src/zlog.c",0x21a,"pthread_rwlock_unlock fail, rc=[%d]",iVar3);
        return 0;
      }
    }
    else {
      iVar3 = 0;
      FUN_0005df98(2,"src/zlog.c",0x1fc,"pthread_rwlock_rdlock fail, rc[%d]",iVar1);
    }
  }
  return iVar3;
}

