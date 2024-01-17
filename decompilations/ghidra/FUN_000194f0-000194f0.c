
void FUN_000194f0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char acStack_810 [2052];
  
  iVar3 = 1;
  sleep(1);
  do {
    do {
      iVar3 = iVar3 + 1;
      sleep(1);
    } while (iVar3 < 0x1e);
    iVar1 = FUN_00015508();
    iVar2 = FUN_0001572c();
    iVar1 = iVar1 - iVar2;
    if (iVar1 < 0) {
      iVar1 = -iVar1;
    }
  } while ((5 < iVar1) && (iVar3 != 0xb4));
  if (3 < DAT_0007eb9c) {
    iVar1 = FUN_00015508();
    iVar2 = FUN_0001572c();
    iVar1 = iVar1 - iVar2;
    if (iVar1 < 0) {
      iVar1 = -iVar1;
    }
    snprintf(acStack_810,0x800,"Slept %d seconds, diff = %d.\n",iVar3,iVar1);
    FUN_0002e584(3,acStack_810,0);
  }
  return;
}

