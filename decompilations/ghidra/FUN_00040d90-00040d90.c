
undefined4 FUN_00040d90(void)

{
  int iVar1;
  code **__ptr;
  code **__ptr_00;
  code *pcVar2;
  undefined4 uVar3;
  byte local_29;
  code *local_28;
  uint local_24;
  
  prctl(0xf,&DAT_00061ae0,0,0,0);
  do {
    if (DAT_00504ce0 == 0) {
      return 0;
    }
    iVar1 = pthread_mutex_lock((pthread_mutex_t *)&DAT_00504cac);
    if (iVar1 == 0) {
      __ptr = (code **)FUN_00043440(DAT_00504cc4);
      iVar1 = (**__ptr)();
      while (iVar1 != 0) {
        pcVar2 = __ptr[5];
        __ptr_00 = (code **)(*__ptr[2])();
        uVar3 = *(undefined4 *)**(undefined4 **)(pcVar2 + 0x10);
        local_29 = 0;
        iVar1 = FUN_00040c28(uVar3,&local_29);
        if (iVar1 != 0) {
          free(__ptr_00);
          break;
        }
        if (__ptr_00[1] != (code *)(uint)local_29) {
          (**__ptr_00)(uVar3,(code *)(uint)local_29);
          local_28 = *__ptr_00;
          local_24 = (uint)local_29;
          (*__ptr[1])(__ptr,&local_28,8);
        }
        free(__ptr_00);
        iVar1 = (**__ptr)(__ptr);
      }
      free(__ptr);
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_00504cac);
    }
    usleep(200000);
  } while( true );
}

