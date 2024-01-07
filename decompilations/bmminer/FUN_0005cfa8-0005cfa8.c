
void FUN_0005cfa8(void *param_1)

{
  if (param_1 != (void *)0x0) {
    if (*(int *)((int)param_1 + 4) != 0) {
      FUN_00057f94();
    }
    if (*(int *)((int)param_1 + 8) != 0) {
      FUN_00057364();
    }
    if (*(int *)((int)param_1 + 0xc) != 0) {
      FUN_0005e70c();
    }
    if (*(int *)((int)param_1 + 0x10) != 0) {
      FUN_0005e70c();
    }
    if (*(int *)((int)param_1 + 0x14) != 0) {
      FUN_0005e70c();
    }
    if (*(int *)((int)param_1 + 0x18) != 0) {
      FUN_0005e70c();
    }
    if (*(int *)((int)param_1 + 0x1c) != 0) {
      FUN_0005e70c();
    }
    FUN_0005df98(0,"src/thread.c",0x3b,"zlog_thread_del[%p]",param_1);
    free(param_1);
    return;
  }
  FUN_0005df98(2,"src/thread.c",0x2b,"a_thread is null or 0");
  return;
}

