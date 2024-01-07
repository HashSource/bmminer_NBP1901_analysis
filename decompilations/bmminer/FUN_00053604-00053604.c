
void FUN_00053604(void)

{
  int iVar1;
  
  FUN_0005df98(0,"src/zlog.c",0x130,"------zlog_fini start------");
  iVar1 = pthread_rwlock_wrlock((pthread_rwlock_t *)&DAT_0058de1c);
  if (iVar1 == 0) {
    if (DAT_0058de3c == 0) {
      FUN_0005df98(2,"src/zlog.c",0x138,"before finish, must zlog_init() or dzlog_init() fisrt");
    }
    else {
      FUN_00052d68();
      DAT_0058de3c = 0;
    }
    FUN_0005df98(0,"src/zlog.c",0x140,"------zlog_fini end------");
    iVar1 = pthread_rwlock_unlock(DAT_000536f0);
    if (iVar1 != 0) {
      FUN_0005df98(2,"src/zlog.c",0x143,"pthread_rwlock_unlock fail, rc=[%d]",iVar1);
    }
    return;
  }
  FUN_0005df98(2,"src/zlog.c",0x133,"pthread_rwlock_wrlock fail, rc[%d]",iVar1);
  return;
}

