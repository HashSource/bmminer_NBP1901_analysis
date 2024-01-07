
/* WARNING: Restarted to delay deadcode elimination for space: ram */

void FUN_00054140(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,uint param_7,undefined4 param_8,
                 undefined4 param_9)

{
  int *__pointer;
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = param_7 + 7;
  if (-1 < (int)param_7) {
    uVar3 = param_7;
  }
  uVar2 = param_7 & 7;
  if ((int)param_7 < 1) {
    uVar2 = -(-param_7 & 7);
  }
  if (((int)(uint)*(byte *)(param_1 + ((int)uVar3 >> 3) + 0x408) >> (7 - uVar2 & 0xff) & 1U) == 0) {
    return;
  }
  pthread_rwlock_rdlock((pthread_rwlock_t *)&DAT_0058de1c);
  if (DAT_0058de3c == 0) {
    FUN_0005df98(2,"src/zlog.c",0x287,"never call zlog_init() or dzlog_init() before");
    goto LAB_00054304;
  }
  __pointer = (int *)pthread_getspecific(DAT_0058de08);
  if (__pointer == (int *)0x0) {
    __pointer = (int *)FUN_0005d07c(DAT_0058de18,*(undefined4 *)(DAT_0099eec8 + 0x41c),
                                    *(undefined4 *)(DAT_0099eec8 + 0x420),
                                    *(undefined4 *)(DAT_0099eec8 + 0x244c));
    if (__pointer == (int *)0x0) {
      FUN_0005df98(2,"src/zlog.c",0x28b,"zlog_thread_new fail");
      goto LAB_00054304;
    }
    iVar1 = pthread_setspecific(DAT_0058de08,__pointer);
    if (iVar1 != 0) {
      FUN_0005cfa8(__pointer);
      FUN_0005df98(2,"src/zlog.c",0x28b,"pthread_setspecific fail, rd[%d]",iVar1);
      goto LAB_00054304;
    }
  }
  if (*__pointer != DAT_0058de18) {
    iVar1 = FUN_0005d290(__pointer,*(undefined4 *)(DAT_0099eec8 + 0x41c),
                         *(undefined4 *)(DAT_0099eec8 + 0x420));
    if ((iVar1 != 0) ||
       (iVar1 = FUN_0005d3b0(__pointer,*(undefined4 *)(DAT_0099eec8 + 0x244c)), iVar1 != 0)) {
      FUN_0005df98(2,"src/zlog.c",0x28b,"zlog_thread_resize_msg_buf fail, rd[%d]",iVar1);
      goto LAB_00054304;
    }
    *__pointer = DAT_0058de18;
  }
  FUN_00057540(__pointer[2],param_1,*(undefined4 *)(param_1 + 0x404),param_2,param_3,param_4,param_5
               ,param_6,param_7,param_8,param_9);
  iVar1 = FUN_00055c7c(param_1,__pointer);
  if (iVar1 == 0) {
    if ((*(uint *)(DAT_0099eec8 + 0x243c) != 0) &&
       (DAT_0058de40 = DAT_0058de40 + 1, *(uint *)(DAT_0099eec8 + 0x243c) < DAT_0058de40)) {
      pthread_rwlock_unlock(DAT_000543fc);
      iVar1 = FUN_00053314(0xffffffff);
      if (iVar1 == 0) {
        return;
      }
      FUN_0005df98(2,"src/zlog.c",0x2a4,
                   "reach reload-conf-period but zlog_reload fail, zlog-chk-conf [file] see detail")
      ;
      return;
    }
  }
  else {
    FUN_0005df98(2,"src/zlog.c",0x293,"zlog_output fail, srcfile[%s], srcline[%ld]",param_2,param_6)
    ;
  }
LAB_00054304:
  pthread_rwlock_unlock(DAT_000543fc);
  return;
}

