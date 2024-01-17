
void FUN_000444b8(void)

{
  int iVar1;
  uint local_14;
  
  iVar1 = 10;
  local_14 = 0;
  FUN_00040314(0x23,&local_14);
  FUN_00040390(0x23,local_14 & 0xffffffbf);
  do {
    usleep(1000);
    local_14 = 0;
    FUN_00040314(0x23,&local_14);
    if ((local_14 & 0x40) == 0) {
      return;
    }
    local_14 = 0;
    FUN_00040314(0x23,&local_14);
    FUN_00040390(0x23,local_14 & 0xffffffbf);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}

