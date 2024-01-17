
void FUN_0001ed08(void)

{
  undefined uVar1;
  int iVar2;
  uint uVar3;
  char acStack_810 [2052];
  
  if ((DAT_00482a5d != '\0') &&
     (((DAT_00590404 != '\0' || (DAT_00482a5c != '\0')) || (6 < DAT_0007eba0)))) {
    snprintf(acStack_810,0x800,"--- %s\n","dhash_chip_set_addr_all");
    FUN_0002e584(7,acStack_810,0);
  }
  uVar3 = 0;
  do {
    iVar2 = FUN_0001e29c(uVar3);
    if (iVar2 != 0) {
      thunk_FUN_0004fe70(uVar3 & 0xff);
      FUN_000304d4(0x1e);
      uVar1 = FUN_0001e160();
      FUN_0004ff50(uVar3 & 0xff,uVar1);
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 != 4);
  FUN_000304d4(10);
  return;
}

