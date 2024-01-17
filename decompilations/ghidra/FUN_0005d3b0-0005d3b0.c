
undefined4 FUN_0005d3b0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1 == 0) {
    FUN_0005df98(2,"src/thread.c",0xa7,"a_thread is null or 0");
    return 0xffffffff;
  }
  iVar1 = FUN_000573d8(param_2);
  if (iVar1 != 0) {
    FUN_00057364(*(undefined4 *)(param_1 + 8));
    *(int *)(param_1 + 8) = iVar1;
    return 0;
  }
  FUN_0005df98(2,"src/thread.c",0xab,"zlog_event_new fail");
  return 0xffffffff;
}

