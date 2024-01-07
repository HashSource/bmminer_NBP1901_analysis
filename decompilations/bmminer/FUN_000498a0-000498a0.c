
int FUN_000498a0(undefined *param_1)

{
  int iVar1;
  int local_14;
  
  iVar1 = 0x259;
  local_14 = 0;
  do {
    FUN_00040314(0xc,&local_14);
    if (-(local_14 >> 0x1f) != 0) {
      *param_1 = (char)local_14;
      return -(local_14 >> 0x1f);
    }
    usleep(5000);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return 0;
}

