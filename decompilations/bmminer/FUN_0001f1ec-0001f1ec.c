
void FUN_0001f1ec(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  iVar1 = FUN_0001e29c(0);
  while( true ) {
    if (iVar1 != 0) {
      FUN_000508dc(uVar2 & 0xff);
      if (param_2 == 0) {
        FUN_00050f28(uVar2 & 0xff);
      }
      else {
        FUN_00050ed0();
      }
    }
    uVar2 = uVar2 + 1;
    if (uVar2 == 4) break;
    iVar1 = FUN_0001e29c(uVar2);
  }
  return;
}

