
int FUN_00015564(void)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = 0;
  iVar4 = 0xff;
  do {
    sVar1 = FUN_000153ec(iVar3,1);
    iVar2 = (int)sVar1;
    iVar5 = iVar4;
    if (((iVar2 != 0xff) && (iVar5 = iVar2, iVar4 != 0xff)) && (iVar5 = iVar4, iVar4 <= iVar2)) {
      iVar5 = iVar2;
    }
    iVar3 = iVar3 + 1;
    iVar4 = iVar5;
  } while (iVar3 != 4);
  return iVar5;
}

