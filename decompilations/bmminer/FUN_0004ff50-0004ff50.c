
undefined4 FUN_0004ff50(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_0005f880(0x100);
  if (iVar1 != 0) {
    iVar2 = 0;
    iVar3 = 0;
    do {
      FUN_0004feac(param_1,iVar3);
      iVar2 = iVar2 + 1;
      usleep(10000);
      iVar3 = iVar3 + param_2;
    } while (iVar2 != iVar1);
  }
  return 0;
}

