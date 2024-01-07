
void FUN_000445e0(int param_1)

{
  int iVar1;
  int local_c;
  
  FUN_00040390(0x1b,param_1);
  if (-1 < param_1) {
    FUN_00040314(0x1b,&local_c);
    return;
  }
  iVar1 = 0xbb9;
  do {
    FUN_00040314(0x1b,&local_c);
    if (-1 < local_c) {
      return;
    }
    usleep(1000);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

