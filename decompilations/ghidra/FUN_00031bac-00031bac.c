
uint FUN_00031bac(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint local_814;
  char acStack_810 [2048];
  
  uVar3 = 0;
  iVar2 = 0;
  do {
    iVar1 = FUN_0001e29c(iVar2);
    if (((iVar1 != 0) &&
        (iVar1 = FUN_00018654(iVar2,(undefined)DAT_00080fb4,&local_814), iVar1 == 0)) &&
       (uVar3 < local_814)) {
      uVar3 = local_814;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 4);
  if (4 < DAT_0007eb9c) {
    snprintf(acStack_810,0x800,"max voltage in eeprom = %d\n",uVar3);
    FUN_0002e584(4,acStack_810,0);
  }
  if (uVar3 == 0) {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

