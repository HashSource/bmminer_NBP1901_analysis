
int FUN_0001427c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 8;
  do {
    iVar1 = FUN_0002c06c(0x1c,param_1,param_2);
    if (iVar1 != 0) {
      return iVar1;
    }
    usleep(1000);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return 0;
}

