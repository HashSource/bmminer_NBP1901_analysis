
int FUN_00055388(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  if (param_1 == 0) {
    FUN_0005df98(2,"src/zlog.c",0x3d2,"rname is null or 0");
    iVar4 = -1;
  }
  else if (param_2 == 0) {
    FUN_0005df98(2,"src/zlog.c",0x3d3,"record_output is null or 0");
    iVar4 = -1;
  }
  else {
    iVar2 = pthread_rwlock_wrlock((pthread_rwlock_t *)&DAT_0058de1c);
    if (iVar2 == 0) {
      if (DAT_0058de3c == 0) {
        FUN_0005df98(2,"src/zlog.c",0x3dc,"never call zlog_init() or dzlog_init() before");
        iVar4 = 0;
      }
      else {
        iVar2 = FUN_00058304(param_1,param_2);
        if (iVar2 == 0) {
          FUN_0005df98(2,"src/zlog.c",0x3e3,"zlog_record_new fail");
          iVar4 = -1;
        }
        else {
          iVar4 = FUN_0005dac0(DAT_0058de14,iVar2,iVar2);
          if (iVar4 == 0) {
            piVar3 = *(int **)(DAT_0099eec8 + 0x2448);
            if (0 < piVar3[1]) {
              iVar2 = 0;
              do {
                iVar1 = iVar2 * 4;
                iVar2 = iVar2 + 1;
                FUN_0005bccc(*(undefined4 *)(*piVar3 + iVar1),DAT_0058de14);
                piVar3 = *(int **)(DAT_0099eec8 + 0x2448);
              } while (iVar2 < piVar3[1]);
            }
          }
          else {
            FUN_000582a0(iVar2);
            FUN_0005df98(2,"src/zlog.c",0x3ea,"zc_hashtable_put fail");
          }
        }
      }
      iVar2 = pthread_rwlock_unlock(DAT_00055564);
      if (iVar2 != 0) {
        iVar4 = -1;
        FUN_0005df98(2,"src/zlog.c",0x3f5,"pthread_rwlock_unlock fail, rd=[%d]",iVar2);
      }
    }
    else {
      iVar4 = -1;
      FUN_0005df98(2,"src/zlog.c",0x3d7,"pthread_rwlock_rdlock fail, rd[%d]",iVar2);
    }
  }
  return iVar4;
}

