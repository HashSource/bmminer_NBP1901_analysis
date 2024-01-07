
void FUN_0005c358(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  size_t sVar2;
  char *__s;
  tm *__tp;
  int local_1c;
  
  iVar1 = *(int *)(param_2 + 8);
  local_1c = *(int *)(iVar1 + 0x13c);
  __tp = (tm *)(iVar1 + 0x148);
  __s = (char *)(*(int *)(param_1 + 0x100c) * 0x100c + *(int *)(iVar1 + 0x174));
  if (local_1c == 0) {
    gettimeofday((timeval *)(iVar1 + 0x13c),(__timezone_ptr_t)0x0);
    iVar1 = *(int *)(param_2 + 8);
    local_1c = *(int *)(iVar1 + 0x13c);
  }
  if (*(int *)(iVar1 + 0x144) != local_1c) {
    localtime_r(&local_1c,__tp);
    *(int *)(*(int *)(param_2 + 8) + 0x144) = local_1c;
  }
  if (*(int *)(__s + 0x1008) == local_1c) {
    sVar2 = *(size_t *)(__s + 0x1004);
  }
  else {
    sVar2 = strftime(__s,0x1001,(char *)(param_1 + 8),__tp);
    *(size_t *)(__s + 0x1004) = sVar2;
    *(int *)(__s + 0x1008) = local_1c;
  }
  FUN_0005f0d4(param_3,__s,sVar2);
  return;
}

