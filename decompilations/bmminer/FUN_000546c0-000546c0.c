
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_000546c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,uint param_6,undefined4 param_7,undefined4 param_8)

{
  int *__pointer;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = param_6 + 7;
  if (-1 < (int)param_6) {
    uVar2 = param_6;
  }
  uVar3 = param_6 & 7;
  if ((int)param_6 < 1) {
    uVar3 = -(-param_6 & 7);
  }
  if (((int)(uint)*(byte *)(DAT_0058de10 + ((int)uVar2 >> 3) + 0x408) >> (7 - uVar3 & 0xff) & 1U) ==
      0) {
    return;
  }
  pthread_rwlock_rdlock((pthread_rwlock_t *)&DAT_0058de1c);
  if (DAT_0058de3c == 0) {
    FUN_0005df98(2,"src/zlog.c",0x2e6,"never call zlog_init() or dzlog_init() before");
    pthread_rwlock_unlock(DAT_000549b4);
    return;
  }
  if (DAT_0058de10 == 0) {
    FUN_0005df98(2,"src/zlog.c",0x2ed,
                 "zlog_default_category is null,dzlog_init() or dzlog_set_cateogry() is not called above"
                );
    goto LAB_00054894;
  }
  __pointer = (int *)pthread_getspecific(DAT_0058de08);
  if (__pointer == (int *)0x0) {
    __pointer = (int *)FUN_0005d07c(DAT_0058de18,*(undefined4 *)(DAT_0099eec8 + 0x41c),
                                    *(undefined4 *)(DAT_0099eec8 + 0x420),
                                    *(undefined4 *)(DAT_0099eec8 + 0x244c));
    if (__pointer == (int *)0x0) {
      FUN_0005df98(2,"src/zlog.c",0x2f1,"zlog_thread_new fail");
      goto LAB_00054894;
    }
    iVar1 = pthread_setspecific(DAT_0058de08,__pointer);
    if (iVar1 != 0) {
      FUN_0005cfa8(__pointer);
      FUN_0005df98(2,"src/zlog.c",0x2f1,"pthread_setspecific fail, rd[%d]",iVar1);
      goto LAB_00054894;
    }
  }
  if (*__pointer != DAT_0058de18) {
    iVar1 = FUN_0005d290(__pointer,*(undefined4 *)(DAT_0099eec8 + 0x41c),
                         *(undefined4 *)(DAT_0099eec8 + 0x420));
    if ((iVar1 != 0) ||
       (iVar1 = FUN_0005d3b0(__pointer,*(undefined4 *)(DAT_0099eec8 + 0x244c)), iVar1 != 0)) {
      FUN_0005df98(2,"src/zlog.c",0x2f1,"zlog_thread_resize_msg_buf fail, rd[%d]",iVar1);
      goto LAB_00054894;
    }
    *__pointer = DAT_0058de18;
  }
  FUN_00057540(__pointer[2],DAT_0058de10,*(undefined4 *)(DAT_0058de10 + 0x404),param_1,param_2,
               param_3,param_4,param_5,param_6,param_7,param_8);
  iVar1 = FUN_00055c7c(DAT_0058de10,__pointer);
  if (iVar1 == 0) {
    if ((*(uint *)(DAT_0099eec8 + 0x243c) != 0) &&
       (DAT_0058de40 = DAT_0058de40 + 1, *(uint *)(DAT_0099eec8 + 0x243c) < DAT_0058de40)) {
      pthread_rwlock_unlock(DAT_000549b4);
      iVar1 = FUN_00053314(0xffffffff);
      if (iVar1 == 0) {
        return;
      }
      FUN_0005df98(2,"src/zlog.c",0x30a,
                   "reach reload-conf-period but zlog_reload fail, zlog-chk-conf [file] see detail")
      ;
      return;
    }
  }
  else {
    FUN_0005df98(2,"src/zlog.c",0x2f9,"zlog_output fail, srcfile[%s], srcline[%ld]",param_1,param_5)
    ;
  }
LAB_00054894:
  pthread_rwlock_unlock(DAT_000549b4);
  return;
}

