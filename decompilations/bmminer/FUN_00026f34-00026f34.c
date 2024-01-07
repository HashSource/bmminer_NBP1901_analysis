
int FUN_00026f34(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar1 = FUN_0001e0f0();
  if (0 < iVar1) {
    iVar2 = 0;
    iVar4 = 0;
    piVar3 = (int *)(param_2 + param_1 * 0x400 + -4);
    do {
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 1;
      iVar2 = iVar2 + *piVar3;
    } while (iVar1 != iVar4);
    return iVar2;
  }
  return 0;
}

