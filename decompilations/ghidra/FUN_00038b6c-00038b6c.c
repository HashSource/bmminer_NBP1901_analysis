
float FUN_00038b6c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  double unaff_d8;
  
  iVar1 = FUN_0001e0f0();
  if (iVar1 < 1) {
    iVar4 = 0;
  }
  else {
    piVar3 = (int *)(&DAT_00808ffc + param_2 + param_1 * 0x400);
    iVar4 = 0;
    do {
      piVar3 = piVar3 + 1;
      iVar4 = iVar4 + *piVar3;
    } while (piVar3 != (int *)(&DAT_00808ffc + (iVar1 + param_1 * 0x100) * 4 + param_2));
  }
  uVar2 = FUN_0001e0f0();
  iVar1 = FUN_0005faf8(iVar4,uVar2);
  iVar4 = FUN_0001e0f0();
  if (iVar4 < 1) {
    FUN_0001e0f0();
    return DAT_00038c6c;
  }
  piVar3 = (int *)(&DAT_00808ffc + param_2 + param_1 * 0x400);
  iVar5 = 0;
  do {
    piVar3 = piVar3 + 1;
    iVar5 = (*piVar3 - iVar1) * (*piVar3 - iVar1) + iVar5;
  } while (piVar3 != (int *)(&DAT_00808ffc + (iVar4 + param_1 * 0x100) * 4 + param_2));
  uVar2 = FUN_0001e0f0();
  iVar1 = FUN_0005faf8(iVar5,uVar2);
  if ((float)(longlong)iVar1 < 0.0) {
    sqrt(unaff_d8);
  }
  return SQRT((float)(longlong)iVar1);
}

