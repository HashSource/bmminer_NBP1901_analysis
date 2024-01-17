
int FUN_00015508(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = 0;
  iVar3 = 0xff;
  do {
    iVar1 = FUN_000154a8(iVar2);
    iVar4 = iVar3;
    if ((iVar1 != 0xff) && (iVar4 = iVar1, iVar3 != 0xff)) {
      if (iVar3 <= iVar1) {
        iVar3 = iVar1;
      }
      iVar4 = (int)(short)iVar3;
    }
    iVar2 = iVar2 + 1;
    iVar3 = iVar4;
  } while (iVar2 != 4);
  return iVar4;
}

