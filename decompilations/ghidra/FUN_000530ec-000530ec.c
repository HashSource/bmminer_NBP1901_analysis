
undefined4 FUN_000530ec(char *param_1,char *param_2)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  FUN_0005df98(0,"src/zlog.c",0xa2,"------dzlog_init start------");
  pcVar4 = "1.2.12";
  pcVar3 = "16:28:36";
  pcVar2 = "Dec  6 2022";
  FUN_0005df98(0,"src/zlog.c",0xa4,"------compile time[%s %s], version[%s]------","Dec  6 2022",
               "16:28:36","1.2.12");
  iVar1 = pthread_rwlock_wrlock((pthread_rwlock_t *)&DAT_0058de1c);
  if (iVar1 == 0) {
    if (DAT_0058de3c == 0) {
      iVar1 = FUN_00052dcc(param_1);
      if (iVar1 == 0) {
        DAT_0058de10 = FUN_00055f6c(DAT_0058de0c,param_2,*(undefined4 *)(DAT_0099eec8 + 0x2448));
        if (DAT_0058de10 != 0) {
          DAT_0058de18 = DAT_0058de18 + 1;
          DAT_0058de3c = 1;
          FUN_0005df98(0,"src/zlog.c",0xc2,"------dzlog_init success end------",pcVar2,pcVar3,pcVar4
                      );
          iVar1 = pthread_rwlock_unlock((pthread_rwlock_t *)&DAT_0058de1c);
          if (iVar1 != 0) {
            FUN_0005df98(2,"src/zlog.c",0xc5,"pthread_rwlock_unlock fail, rc=[%d]",iVar1);
            return 0xffffffff;
          }
          return 0;
        }
        FUN_0005df98(2,"src/zlog.c",0xbb,"zlog_category_table_fetch_category[%s] fail",param_2,
                     pcVar3,pcVar4);
        pcVar2 = param_2;
      }
      else {
        FUN_0005df98(2,"src/zlog.c",0xb2,"zlog_init_inner[%s] fail",param_1,pcVar3,pcVar4);
        pcVar2 = param_1;
      }
    }
    else {
      FUN_0005df98(2,"src/zlog.c",0xad,"already init, use zlog_reload pls",pcVar2,pcVar3,pcVar4);
    }
    FUN_0005df98(2,"src/zlog.c",0xca,"------dzlog_init fail end------",pcVar2,pcVar3,pcVar4);
    iVar1 = pthread_rwlock_unlock(DAT_00053310);
    if (iVar1 != 0) {
      FUN_0005df98(2,"src/zlog.c",0xcd,"pthread_rwlock_unlock fail, rc=[%d]",iVar1);
      return 0xffffffff;
    }
  }
  else {
    FUN_0005df98(2,"src/zlog.c",0xa8,"pthread_rwlock_wrlock fail, rc[%d]",iVar1,pcVar3,pcVar4);
  }
  return 0xffffffff;
}

