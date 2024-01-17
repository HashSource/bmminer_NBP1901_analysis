
int FUN_00048abc(void)

{
  int iVar1;
  int iVar2;
  undefined4 local_18;
  undefined4 local_14;
  
  local_14 = 0x20001;
  local_18 = 0;
  pthread_mutex_lock((pthread_mutex_t *)&DAT_00505164);
  iVar1 = FUN_000493d0(&local_18);
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_00505164);
  if (-1 < iVar1) {
    DAT_00505180 = 1;
    DAT_0050517c = iVar1;
    iVar2 = FUN_00048910();
    if (iVar2 < 0) {
      if ((DAT_0050517c == 0) || (iVar1 = iVar2, DAT_00505180 == 0)) {
        FUN_000488a4();
        return iVar2;
      }
    }
    else {
      iVar1 = 0;
      DAT_00505184 = iVar2;
    }
  }
  return iVar1;
}

