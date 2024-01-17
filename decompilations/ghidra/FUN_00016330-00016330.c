
void FUN_00016330(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = FUN_0001e29c(0);
  while( true ) {
    if (iVar1 != 0) {
      FUN_000162c4(iVar2,param_1);
    }
    iVar2 = iVar2 + 1;
    if (iVar2 == 4) break;
    iVar1 = FUN_0001e29c(iVar2);
  }
  return;
}

