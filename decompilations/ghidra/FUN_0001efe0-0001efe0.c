
void FUN_0001efe0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  iVar1 = FUN_0001e29c(0);
  while( true ) {
    if (iVar1 != 0) {
      FUN_00051694(uVar2 & 0xff,param_2,param_3,param_4);
    }
    uVar2 = uVar2 + 1;
    if (uVar2 == 4) break;
    iVar1 = FUN_0001e29c(uVar2);
  }
  return;
}

