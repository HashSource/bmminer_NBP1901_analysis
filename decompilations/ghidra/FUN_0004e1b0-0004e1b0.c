
undefined4 * FUN_0004e1b0(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)FUN_0004d880(0x24);
  if (puVar1 != (undefined4 *)0x0) {
    if (DAT_005051c0 == 0) {
      FUN_0004bf2c();
    }
    puVar1[1] = 1;
    *puVar1 = 0;
    iVar2 = FUN_0004b91c(puVar1 + 2);
    if (iVar2 != 0) {
      FUN_0004d898(puVar1);
      puVar1 = (undefined4 *)0x0;
    }
  }
  return puVar1;
}

