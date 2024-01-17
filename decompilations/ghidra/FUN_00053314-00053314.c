
/* WARNING: Restarted to delay deadcode elimination for space: ram */

undefined4 FUN_00053314(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  
  FUN_0005df98(0,"src/zlog.c",0xdb,"------zlog_reload start------");
  iVar2 = pthread_rwlock_wrlock((pthread_rwlock_t *)&DAT_0058de1c);
  if (iVar2 == 0) {
    uVar5 = 0;
    if (DAT_0058de3c == 0) {
      FUN_0005df98(2,"src/zlog.c",0xe3,"never call zlog_init() or dzlog_init() before");
    }
    else {
      if (param_1 == 0) {
        param_1 = DAT_0099eec8;
      }
      if ((param_1 != -1) ||
         (param_1 = DAT_0099eec8, *(uint *)(DAT_0099eec8 + 0x243c) < DAT_0058de40)) {
        iVar4 = 0;
        DAT_0058de40 = 0;
        iVar2 = FUN_00056eb8(param_1);
        if (iVar2 == 0) {
          FUN_0005df98(2,"src/zlog.c",0xfa,"zlog_conf_new fail");
          FUN_0005df98(1,"src/zlog.c",0x118,"zlog_reload fail, use old conf file, still working");
        }
        else {
          piVar3 = *(int **)(iVar2 + 0x2448);
          if (0 < piVar3[1]) {
            do {
              iVar1 = iVar4 * 4;
              iVar4 = iVar4 + 1;
              FUN_0005bccc(*(undefined4 *)(*piVar3 + iVar1),DAT_0058de14);
              piVar3 = *(int **)(iVar2 + 0x2448);
            } while (iVar4 < piVar3[1]);
          }
          iVar4 = FUN_00055e24(DAT_0058de0c);
          if (iVar4 == 0) {
            DAT_0058de18 = DAT_0058de18 + 1;
            FUN_00055ebc(DAT_0058de0c);
            FUN_00056e0c(DAT_0099eec8);
            DAT_0099eec8 = iVar2;
            FUN_0005df98(0,"src/zlog.c",0x10f,
                         "------zlog_reload success, total init verison[%d] ------",DAT_0058de18);
            iVar2 = pthread_rwlock_unlock(DAT_00053600);
            if (iVar2 == 0) {
              return 0;
            }
            FUN_0005df98(2,"src/zlog.c",0x112,"pthread_rwlock_unlock fail, rc=[%d]",iVar2);
            return 0xffffffff;
          }
          FUN_0005df98(2,"src/zlog.c",0x104,"zlog_category_table_update fail");
          FUN_0005df98(1,"src/zlog.c",0x118,"zlog_reload fail, use old conf file, still working");
          FUN_00056e0c(iVar2);
        }
        FUN_0005df98(2,"src/zlog.c",0x11b,"------zlog_reload fail, total init version[%d] ------",
                     DAT_0058de18);
        iVar2 = pthread_rwlock_unlock(DAT_00053600);
        if (iVar2 != 0) {
          FUN_0005df98(2,"src/zlog.c",0x11e,"pthread_rwlock_unlock fail, rc=[%d]",iVar2);
          return 0xffffffff;
        }
        return 0xffffffff;
      }
    }
    FUN_0005df98(0,"src/zlog.c",0x123,"------zlog_reload do nothing------");
    iVar2 = pthread_rwlock_unlock(DAT_00053600);
    if (iVar2 != 0) {
      uVar5 = 0xffffffff;
      FUN_0005df98(2,"src/zlog.c",0x126,"pthread_rwlock_unlock fail, rc=[%d]",iVar2);
    }
  }
  else {
    uVar5 = 0xffffffff;
    FUN_0005df98(2,"src/zlog.c",0xde,"pthread_rwlock_wrlock fail, rc[%d]",iVar2);
  }
  return uVar5;
}

