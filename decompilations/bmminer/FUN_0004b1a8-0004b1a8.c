
undefined4 FUN_0004b1a8(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined auStack_1c [12];
  
  iVar1 = FUN_0004d954(auStack_1c);
  if (iVar1 == 0) {
    iVar1 = FUN_0004b130(param_1,&LAB_0004a4e8,auStack_1c,param_2);
    uVar2 = 0;
    if (iVar1 == 0) {
      FUN_0004d9c8(auStack_1c);
      uVar2 = FUN_0004d8fc();
    }
    FUN_0004d988(auStack_1c);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

