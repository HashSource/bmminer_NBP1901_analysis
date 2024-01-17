
void FUN_0005521c(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = pthread_rwlock_rdlock((pthread_rwlock_t *)&DAT_0058de1c);
  if (iVar1 != 0) {
    FUN_0005df98(2,"src/zlog.c",0x3b4,"pthread_rwlock_wrlock fail, rc[%d]",iVar1);
    return;
  }
  FUN_0005df98(1,"src/zlog.c",0x3b7,"------zlog_profile start------ ");
  FUN_0005df98(1,"src/zlog.c",0x3b8,"is init:[%d]",DAT_0058de3c);
  uVar2 = DAT_0058de18;
  FUN_0005df98(1,"src/zlog.c",0x3b9,"init version:[%d]",DAT_0058de18);
  FUN_00056b38(DAT_0099eec8,1);
  FUN_00058414(DAT_0058de14,1);
  FUN_00055ccc(DAT_0058de0c,1);
  if (DAT_0058de10 != 0) {
    FUN_0005df98(1,"src/zlog.c",0x3be,"-default_category-",uVar2);
    FUN_000557c4(DAT_0058de10,1);
  }
  FUN_0005df98(1,"src/zlog.c",0x3c1,"------zlog_profile end------ ");
  iVar1 = pthread_rwlock_unlock(DAT_00055384);
  if (iVar1 == 0) {
    return;
  }
  FUN_0005df98(2,"src/zlog.c",0x3c4,"pthread_rwlock_unlock fail, rc=[%d]",iVar1);
  return;
}

