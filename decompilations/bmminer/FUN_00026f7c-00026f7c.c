
float FUN_00026f7c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  double unaff_d8;
  
  iVar1 = FUN_0001e0f0();
  if (iVar1 < 1) {
    iVar6 = 0;
  }
  else {
    iVar6 = 0;
    iVar4 = 0;
    piVar3 = (int *)(param_2 + param_1 * 0x400 + -4);
    do {
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 1;
      iVar6 = iVar6 + *piVar3;
    } while (iVar1 != iVar4);
  }
  uVar2 = FUN_0001e0f0();
  iVar1 = FUN_0005faf8(iVar6,uVar2);
  iVar6 = FUN_0001e0f0();
  if (iVar6 < 1) {
    FUN_0001e0f0();
    return DAT_00027054;
  }
  iVar5 = 0;
  iVar4 = 0;
  piVar3 = (int *)(param_2 + param_1 * 0x400 + -4);
  do {
    piVar3 = piVar3 + 1;
    iVar4 = iVar4 + 1;
    iVar5 = (*piVar3 - iVar1) * (*piVar3 - iVar1) + iVar5;
  } while (iVar6 != iVar4);
  uVar2 = FUN_0001e0f0();
  iVar1 = FUN_0005faf8(iVar5,uVar2);
  if ((float)(longlong)iVar1 < 0.0) {
    sqrt(unaff_d8);
  }
  return SQRT((float)(longlong)iVar1);
}

