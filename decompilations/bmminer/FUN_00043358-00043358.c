
undefined4 FUN_00043358(undefined4 *param_1)

{
  void *__ptr;
  void *local_c;
  
  if (param_1 != (undefined4 *)0x0) {
    __ptr = (void *)FUN_00043ae8(*param_1);
    if (__ptr != (void *)0x0) {
      FUN_00044000(*(undefined4 *)((int)__ptr + 0x10),&local_c);
      free(local_c);
      FUN_00044074(*(undefined4 *)((int)__ptr + 0x10));
      FUN_00044000(*(undefined4 *)((int)__ptr + 0x14),&local_c);
      free(local_c);
      FUN_00044074(*(undefined4 *)((int)__ptr + 0x14));
      free(__ptr);
    }
    return 0;
  }
  return 0x1f5;
}

