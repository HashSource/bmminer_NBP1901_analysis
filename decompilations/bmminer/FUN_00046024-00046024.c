
int FUN_00046024(uint param_1)

{
  int iVar1;
  uint local_18;
  undefined2 local_14;
  undefined local_12;
  undefined local_11;
  
  if (param_1 < 0x10) {
    iVar1 = *(int *)(&DAT_0099ee48 + param_1 * 8);
    if ((iVar1 == 0) || (*(int *)(&DAT_0099ee4c + param_1 * 8) == 0)) {
      local_14 = 0;
      local_12 = 4;
      local_11 = (undefined)param_1;
      local_18 = param_1;
      pthread_mutex_lock((pthread_mutex_t *)&DAT_0050514c);
      iVar1 = FUN_000493d0(&local_18);
      pthread_mutex_unlock((pthread_mutex_t *)&DAT_0050514c);
      if (-1 < iVar1) {
        *(int *)(&DAT_0099ee48 + param_1 * 8) = iVar1;
        *(undefined4 *)(&DAT_0099ee4c + param_1 * 8) = 1;
      }
    }
  }
  else {
    iVar1 = FUN_00045e80();
  }
  return iVar1;
}

