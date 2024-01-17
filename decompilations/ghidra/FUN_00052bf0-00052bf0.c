
undefined4 FUN_00052bf0(int param_1,void *param_2,size_t param_3,int *param_4)

{
  int iVar1;
  ssize_t sVar2;
  undefined4 uVar3;
  pthread_mutex_t *__mutex;
  int local_160;
  int local_15c;
  int local_158;
  int local_154;
  int local_150;
  int local_14c;
  int local_148;
  int local_144;
  int local_140;
  int local_13c;
  int local_138;
  int local_134;
  int local_130;
  int local_12c;
  int local_128;
  int local_124;
  int local_120;
  int local_11c;
  int local_118;
  undefined auStack_114 [252];
  
  if (DAT_005859e8 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    __mutex = *(pthread_mutex_t **)(param_1 + 0x80);
    if (__mutex == (pthread_mutex_t *)0x0) {
      uVar3 = 0xfffffffe;
    }
    else {
      iVar1 = pthread_mutex_trylock(__mutex);
      if (iVar1 == 0) {
        sVar2 = send(*(int *)((int)__mutex + 0x20),param_2,param_3,0);
        if (sVar2 < 1) {
          uVar3 = 0xfffffffc;
          pthread_mutex_unlock(__mutex);
        }
        else {
          local_118 = iVar1;
          memset(auStack_114,0,0xfc);
          sVar2 = recv(*(int *)((int)__mutex + 0x20),&local_118,0x100,0);
          local_160 = iVar1;
          local_15c = iVar1;
          local_158 = iVar1;
          local_154 = iVar1;
          local_150 = iVar1;
          local_14c = iVar1;
          local_148 = iVar1;
          local_144 = iVar1;
          local_140 = iVar1;
          local_13c = iVar1;
          local_138 = iVar1;
          local_134 = iVar1;
          local_130 = iVar1;
          local_12c = iVar1;
          local_128 = iVar1;
          local_124 = iVar1;
          local_120 = iVar1;
          local_11c = iVar1;
          if (0 < sVar2) {
            __isoc99_sscanf(&local_118,&DAT_0006af6c,&local_160,&local_15c,&local_158,&local_138);
          }
          if (param_4 != (int *)0x0) {
            *param_4 = local_15c;
          }
          pthread_mutex_unlock(__mutex);
          uVar3 = 0;
        }
      }
      else {
        uVar3 = 0xfffffffd;
      }
    }
  }
  return uVar3;
}

