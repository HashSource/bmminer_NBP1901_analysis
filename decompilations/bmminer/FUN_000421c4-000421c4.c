
undefined4 FUN_000421c4(void)

{
  int iVar1;
  code **__ptr;
  int *__ptr_00;
  int local_24;
  int local_20;
  int local_1c;
  
  prctl(0xf,&DAT_000694ac,0,0,0);
  while (DAT_00504fe8 != 0) {
    iVar1 = pthread_mutex_lock((pthread_mutex_t *)&DAT_00504fec);
    if (iVar1 == 0) {
      __ptr = (code **)FUN_00043440(DAT_00505004);
      iVar1 = (**__ptr)();
      while (iVar1 != 0) {
        __ptr_00 = (int *)(*__ptr[2])();
        iVar1 = __ptr_00[1];
        if (iVar1 == 0) {
          FUN_00040ed4(*(undefined4 *)**(undefined4 **)(__ptr[5] + 0x10),
                       *(undefined *)(__ptr_00 + 2));
          local_24 = *__ptr_00;
          local_1c = __ptr_00[2] + -1;
          if (local_1c != 0) {
            local_1c = 1;
          }
          __ptr_00[2] = local_1c;
          iVar1 = local_24;
        }
        else {
          local_24 = *__ptr_00;
          local_1c = __ptr_00[2];
        }
        local_20 = iVar1 + -200;
        __ptr_00[1] = local_20;
        (*__ptr[1])(__ptr,&local_24);
        free(__ptr_00);
        iVar1 = (**__ptr)(__ptr);
      }
      free(__ptr);
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_00504fec);
    }
    usleep(200000);
  }
  return 0;
}

