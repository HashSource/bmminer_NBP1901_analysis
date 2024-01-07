
uint FUN_0003204c(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = 0;
  uVar4 = 0;
  do {
    iVar1 = FUN_0001e29c(iVar3);
    if (iVar1 != 0) {
      uVar2 = FUN_00032010(iVar3);
      uVar4 = uVar4 | uVar2;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 4);
  return uVar4;
}

