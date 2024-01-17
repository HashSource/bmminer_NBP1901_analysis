
void FUN_0001e9cc(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  iVar1 = FUN_0001e29c(0);
  while( true ) {
    if (iVar1 != 0) {
      FUN_0004ffe8(uVar2 & 0xff,param_1);
    }
    uVar2 = uVar2 + 1;
    if (uVar2 == 4) break;
    iVar1 = FUN_0001e29c(uVar2);
  }
  return;
}

