
void FUN_0001eb1c(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  do {
    while( true ) {
      uVar3 = uVar2 + 1;
      iVar1 = FUN_0001e29c(uVar2);
      if (iVar1 == 0) break;
      FUN_000508e4(uVar2 & 0xff,1,(undefined)DAT_0007eb58,param_1);
      uVar2 = uVar3;
      if (uVar3 == 4) {
        return;
      }
    }
    uVar2 = uVar3;
  } while (uVar3 != 4);
  return;
}

