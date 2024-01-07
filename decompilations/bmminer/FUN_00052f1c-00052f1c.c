
undefined4 FUN_00052f1c(char *param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  FUN_0005df98(0,"src/zlog.c",0x77,"------zlog_init start------");
  pcVar4 = "1.2.12";
  pcVar3 = "16:28:36";
  pcVar2 = "Dec  6 2022";
  FUN_0005df98(0,"src/zlog.c",0x78,"------compile time[%s %s], version[%s]------","Dec  6 2022",
               "16:28:36","1.2.12");
  iVar1 = pthread_rwlock_wrlock((pthread_rwlock_t *)&DAT_0058de1c);
  if (iVar1 == 0) {
    if (DAT_0058de3c == 0) {
      iVar1 = FUN_00052dcc(param_1);
      if (iVar1 == 0) {
        DAT_0058de18 = DAT_0058de18 + 1;
        DAT_0058de3c = 1;
        FUN_0005df98(0,"src/zlog.c",0x8e,"------zlog_init success end------",pcVar2,pcVar3,pcVar4);
        iVar1 = pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_0058de1c);
        if (iVar1 != 0) {
          FUN_0005df98(2,"src/zlog.c",0x91,"pthread_rwlock_unlock fail, rc=[%d]",iVar1);
          return 0xffffffff;
        }
        return 0;
      }
      FUN_0005df98(2,"src/zlog.c",0x87,"zlog_init_inner[%s] fail",param_1,pcVar3,pcVar4);
      pcVar2 = param_1;
    }
    else {
      FUN_0005df98(2,"src/zlog.c",0x81,"already init, use zlog_reload pls",pcVar2,pcVar3,pcVar4);
    }
    FUN_0005df98(2,"src/zlog.c",0x96,"------zlog_init fail end------",pcVar2,pcVar3,pcVar4);
    iVar1 = pthread_rwlock_unlock(DAT_000530e8);
    if (iVar1 != 0) {
      FUN_0005df98(2,"src/zlog.c",0x99,"pthread_rwlock_unlock fail, rc=[%d]",iVar1);
      return 0xffffffff;
    }
  }
  else {
    FUN_0005df98(2,"src/zlog.c",0x7c,"pthread_rwlock_wrlock fail, rc[%d]",iVar1,pcVar3,pcVar4);
  }
  return 0xffffffff;
}

