
void FUN_000323dc(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  char acStack_818 [2052];
  
  iVar3 = 0;
  do {
    iVar1 = FUN_0001e29c(iVar3);
    if ((iVar1 != 0) && (3 < DAT_0007eb9c)) {
      uVar2 = FUN_00018094(iVar3);
      snprintf(acStack_818,0x800,"Chain [%d] PCB Version: 0x%04x\n",iVar3,uVar2);
      FUN_0002e584(3,acStack_818,0);
      if (3 < DAT_0007eb9c) {
        uVar2 = FUN_00018128(iVar3);
        snprintf(acStack_818,0x800,"Chain [%d] BOM Version: 0x%04x\n",iVar3,uVar2);
        FUN_0002e584(3,acStack_818,0);
      }
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 4);
  return;
}

