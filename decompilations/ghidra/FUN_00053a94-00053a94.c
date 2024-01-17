
undefined4 FUN_00053a94(int param_1,int param_2)

{
  int iVar1;
  int *__pointer;
  
  if (param_1 == 0) {
    FUN_0005df98(2,"src/zlog.c",0x1ce,"key is null or 0");
    return 0xffffffff;
  }
  if (param_2 == 0) {
    FUN_0005df98(2,"src/zlog.c",0x1cf,"value is null or 0");
    return 0xffffffff;
  }
  iVar1 = pthread_rwlock_rdlock((pthread_rwlock_t *)&DAT_0058de1c);
  if (iVar1 != 0) {
    FUN_0005df98(2,"src/zlog.c",0x1d3,"pthread_rwlock_wrlock fail, rc[%d]",iVar1);
    return 0xffffffff;
  }
  if (DAT_0058de3c == 0) {
    FUN_0005df98(2,"src/zlog.c",0x1d8,"never call zlog_init() or dzlog_init() before");
    goto LAB_00053af0;
  }
  __pointer = (int *)pthread_getspecific(DAT_0058de08);
  if (__pointer == (int *)0x0) {
    __pointer = (int *)FUN_0005d07c(DAT_0058de18,*(undefined4 *)(DAT_0099eec8 + 0x41c),
                                    *(undefined4 *)(DAT_0099eec8 + 0x420),
                                    *(undefined4 *)(DAT_0099eec8 + 0x244c));
    if (__pointer == (int *)0x0) {
      FUN_0005df98(2,"src/zlog.c",0x1dc,"zlog_thread_new fail");
      goto LAB_00053af0;
    }
    iVar1 = pthread_setspecific(DAT_0058de08,__pointer);
    if (iVar1 != 0) {
      FUN_0005cfa8(__pointer);
      FUN_0005df98(2,"src/zlog.c",0x1dc,"pthread_setspecific fail, rd[%d]",iVar1);
      goto LAB_00053af0;
    }
  }
  if (*__pointer != DAT_0058de18) {
    iVar1 = FUN_0005d290(__pointer,*(undefined4 *)(DAT_0099eec8 + 0x41c),
                         *(undefined4 *)(DAT_0099eec8 + 0x420));
    if ((iVar1 != 0) ||
       (iVar1 = FUN_0005d3b0(__pointer,*(undefined4 *)(DAT_0099eec8 + 0x244c)), iVar1 != 0)) {
      FUN_0005df98(2,"src/zlog.c",0x1dc,"zlog_thread_resize_msg_buf fail, rd[%d]",iVar1);
      goto LAB_00053af0;
    }
    *__pointer = DAT_0058de18;
  }
  iVar1 = FUN_000580c0(__pointer[1],param_1,param_2);
  if (iVar1 == 0) {
    iVar1 = pthread_rwlock_unlock(DAT_00053d38);
    if (iVar1 == 0) {
      return 0;
    }
    FUN_0005df98(2,"src/zlog.c",0x1e5,"pthread_rwlock_unlock fail, rc=[%d]",iVar1);
    return 0xffffffff;
  }
  FUN_0005df98(2,"src/zlog.c",0x1df,"zlog_mdc_put fail, key[%s], value[%s]",param_1,param_2);
LAB_00053af0:
  iVar1 = pthread_rwlock_unlock(DAT_00053d38);
  if (iVar1 == 0) {
    return 0xffffffff;
  }
  FUN_0005df98(2,"src/zlog.c",0x1ec,"pthread_rwlock_unlock fail, rc=[%d]",iVar1);
  return 0xffffffff;
}

