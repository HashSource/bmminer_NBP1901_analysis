
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000389f0(int param_1)

{
  int iVar1;
  int iVar2;
  int *__s;
  pthread_t local_830 [4];
  int local_820;
  int local_81c [3];
  undefined local_810;
  
  if ((DAT_004fcb3c == 0) || (*(int *)(DAT_004fcb3c + 4) == 0)) {
    if (3 < DAT_0007eb9c) {
      local_820 = s_Handle_is_NULL__00067bc8._0_4_;
      local_81c[0] = s_Handle_is_NULL__00067bc8._4_4_;
      local_81c[1] = s_Handle_is_NULL__00067bc8._8_4_;
      local_81c[2] = s_Handle_is_NULL__00067bc8._12_4_;
      local_810 = (undefined)ram0x00067bd8;
      FUN_0002e584(3,&local_820,0);
      return;
    }
  }
  else {
    __s = &local_820;
    iVar2 = 0;
    local_830[0] = 0;
    local_830[1] = 0;
    local_830[2] = 0;
    local_830[3] = 0;
    memset(__s,0,0x30);
    do {
      iVar1 = FUN_0001e29c(iVar2);
      if ((iVar1 != 0) && (*(int *)(DAT_004fcb3c + (iVar2 + 2) * 4) == 1)) {
        *__s = iVar2;
        __s[1] = 0;
        __s[2] = param_1;
        pthread_create(local_830 + iVar2,(pthread_attr_t *)0x0,FUN_0003883c,__s);
        pthread_detach(local_830[iVar2]);
      }
      iVar2 = iVar2 + 1;
      __s = __s + 3;
    } while (iVar2 != 4);
    iVar2 = 0;
    do {
      while( true ) {
        iVar1 = FUN_0001e29c(iVar2);
        if (((iVar1 == 0) || (local_830[iVar2] == 0)) || (local_81c[iVar2 * 3] != 0)) break;
        usleep(100000);
        iVar2 = 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 != 4);
  }
  return;
}

