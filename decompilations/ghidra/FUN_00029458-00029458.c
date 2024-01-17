
void FUN_00029458(void)

{
  int iVar1;
  
  DAT_00080ac0 = (char *)FUN_0002f408(0x1000,"bmminer.c",DAT_000294b4,0x3b6);
  FUN_0002935c();
  iVar1 = access(DAT_00080ac0,4);
  if (iVar1 != 0) {
    free(DAT_00080ac0);
    DAT_00080ac0 = (char *)0x0;
    return;
  }
  FUN_000288c4();
  return;
}

