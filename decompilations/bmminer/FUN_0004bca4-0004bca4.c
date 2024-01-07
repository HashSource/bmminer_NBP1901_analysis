
undefined4 FUN_0004bca4(int *param_1,char *param_2)

{
  bool bVar1;
  size_t sVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  
  sVar2 = strlen(param_2);
  uVar3 = FUN_0004b2f4(param_2,sVar2,DAT_005051c0);
  iVar10 = param_1[1];
  uVar8 = uVar3 & ~(-1 << (param_1[2] & 0xffU));
  iVar9 = iVar10 + uVar8 * 8;
  piVar4 = (int *)FUN_0004b838(param_1,iVar9,param_2,uVar3);
  if (piVar4 == (int *)0x0) {
    return 0xffffffff;
  }
  iVar5 = piVar4[1];
  iVar6 = *piVar4;
  if (piVar4 == *(int **)(iVar10 + uVar8 * 8)) {
    if (piVar4 == *(int **)(iVar9 + 4)) {
      *(int **)(iVar9 + 4) = param_1 + 3;
      *(int **)(iVar10 + uVar8 * 8) = param_1 + 3;
    }
    else {
      *(int *)(iVar10 + uVar8 * 8) = iVar5;
    }
  }
  else if (piVar4 == *(int **)(iVar9 + 4)) {
    *(int *)(iVar9 + 4) = iVar6;
  }
  *(int *)(iVar6 + 4) = iVar5;
  iVar10 = piVar4[3];
  iVar9 = piVar4[5];
  *(int *)piVar4[1] = iVar6;
  iVar5 = piVar4[2];
  *(int *)(iVar5 + 4) = iVar10;
  *(int *)piVar4[3] = iVar5;
  if ((iVar9 != 0) && (*(int *)(iVar9 + 4) != -1)) {
    piVar7 = (int *)(iVar9 + 4);
    DataMemoryBarrier(0xb);
    do {
      iVar9 = *piVar7;
      bVar1 = (bool)hasExclusiveAccess(piVar7);
    } while (!bVar1);
    *piVar7 = iVar9 + -1;
    if (iVar9 + -1 == 0) {
      FUN_0004eb6c();
    }
  }
  FUN_0004d898(piVar4);
  *param_1 = *param_1 + -1;
  return 0;
}

