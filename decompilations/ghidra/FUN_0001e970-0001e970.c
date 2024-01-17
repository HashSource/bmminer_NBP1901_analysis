
void FUN_0001e970(void)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  iVar1 = FUN_0001e29c(0);
  while( true ) {
    if (iVar1 != 0) {
      FUN_00050c38(uVar2 & 0xff,0);
    }
    uVar2 = uVar2 + 1;
    if (uVar2 == 4) break;
    iVar1 = FUN_0001e29c(uVar2);
  }
  return;
}

