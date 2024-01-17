
void FUN_00045788(int param_1,int param_2)

{
  uint uVar1;
  uint local_14 [2];
  
  pthread_mutex_lock(DAT_000457dc);
  FUN_00040314(0x1b,local_14);
  uVar1 = local_14[0] & 0xfff0ffff | param_1 << 0x10;
  if (param_2 == 0) {
    uVar1 = uVar1 & 0xffbfffff | 0x800000;
  }
  else {
    uVar1 = uVar1 | 0xc00000;
  }
  FUN_000445e0(uVar1);
  pthread_mutex_unlock(DAT_000457dc);
  return;
}

