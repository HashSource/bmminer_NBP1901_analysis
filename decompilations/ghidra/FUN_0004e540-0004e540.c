
undefined4 * FUN_0004e540(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_0004d880(0x14);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 1;
    puVar1[1] = 1;
    puVar1[3] = 0;
    puVar1[2] = 8;
    iVar2 = FUN_0004d880(0x20);
    puVar1[4] = iVar2;
    if (iVar2 == 0) {
      FUN_0004d898(puVar1);
      puVar1 = (undefined4 *)0x0;
    }
  }
  return puVar1;
}

