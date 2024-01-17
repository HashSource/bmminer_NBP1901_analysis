
int FUN_00049844(void)

{
  int iVar1;
  int local_14 [2];
  
  iVar1 = 0x259;
  local_14[0] = 0;
  do {
    FUN_00040314(0xc,local_14);
    if (-(local_14[0] >> 0x1f) != 0) {
      return -(local_14[0] >> 0x1f);
    }
    usleep(5000);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return 0;
}

