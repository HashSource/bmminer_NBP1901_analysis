
undefined4 FUN_0005d290(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == 0) {
    FUN_0005df98(2,"src/thread.c",0x83,"a_thread is null or 0");
    return 0xffffffff;
  }
  if ((*(int *)(*(int *)(param_1 + 0x1c) + 0x10) == param_2) &&
     (*(int *)(*(int *)(param_1 + 0x1c) + 0x14) == param_3)) {
    FUN_0005df98(0,"src/thread.c",0x87,"buf size not changed, no need rebuild");
    return 0;
  }
  iVar1 = FUN_0005e758(param_2,param_3,"...\n");
  if (iVar1 == 0) {
    FUN_0005df98(2,"src/thread.c",0x8d,"zlog_buf_new fail");
    return 0xffffffff;
  }
  iVar2 = FUN_0005e758(param_2,param_3,"...\n");
  if (iVar2 != 0) {
    FUN_0005e70c(*(undefined4 *)(param_1 + 0x18));
    *(int *)(param_1 + 0x18) = iVar1;
    FUN_0005e70c(*(undefined4 *)(param_1 + 0x1c));
    *(int *)(param_1 + 0x1c) = iVar2;
    return 0;
  }
  FUN_0005df98(2,"src/thread.c",0x93,"zlog_buf_new fail");
  FUN_0005e70c(iVar1);
  return 0xffffffff;
}

