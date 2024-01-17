
void FUN_0001ef94(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  iVar1 = FUN_0001e29c(0);
  while( true ) {
    if (iVar1 != 0) {
      FUN_0005161c(uVar2 & 0xff,param_2,0);
    }
    uVar2 = uVar2 + 1;
    if (uVar2 == 4) break;
    iVar1 = FUN_0001e29c(uVar2);
  }
  return;
}

