
int FUN_0003ff08(uint param_1)

{
  int iVar1;
  uint local_18;
  uint local_14 [2];
  
  local_18 = 0;
  iVar1 = 6;
  FUN_00040314(0,local_14);
  local_14[0] = local_14[0] & 0xffff;
  do {
    FUN_00040314(1,&local_18);
    if ((local_18 << 0x15) >> 0x1d == param_1) {
      if (local_14[0] == 0xb025) {
        iVar1 = (local_18 & 0xff) * 0xf0;
      }
      else {
        iVar1 = (local_18 & 0xff) * 0x78;
      }
      return iVar1;
    }
    usleep(10000);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return -1;
}

