
uint FUN_0003e8c8(int param_1,uint param_2,int *param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  
  iVar7 = 1;
  uVar2 = 0;
  iVar9 = 1;
  uVar10 = 0xffffffff;
  while (uVar6 = iVar9 + uVar2, uVar4 = uVar2, iVar9 + uVar2 < param_2) {
    while (uVar5 = uVar6, bVar1 = *(byte *)(param_1 + uVar10 + iVar9),
          *(byte *)(param_1 + uVar5) < bVar1) {
      iVar9 = 1;
      iVar7 = uVar5 - uVar10;
      uVar6 = uVar5 + 1;
      uVar4 = uVar5;
      if (param_2 <= uVar5 + 1) goto LAB_0003e918;
    }
    if (*(byte *)(param_1 + uVar5) == bVar1) {
      bVar11 = iVar9 == iVar7;
      iVar9 = iVar9 + 1;
      uVar2 = uVar4;
      if (bVar11) {
        iVar9 = 1;
        uVar2 = uVar5;
      }
    }
    else {
      iVar7 = 1;
      uVar2 = uVar4 + 1;
      iVar9 = iVar7;
      uVar10 = uVar4;
    }
  }
LAB_0003e918:
  iVar8 = 1;
  *param_3 = iVar7;
  uVar2 = 0;
  uVar6 = 0xffffffff;
  iVar9 = 1;
  while (uVar4 = iVar9 + uVar2, uVar5 = uVar2, iVar9 + uVar2 < param_2) {
    while (uVar3 = uVar4, bVar1 = *(byte *)(param_1 + uVar6 + iVar9),
          bVar1 < *(byte *)(param_1 + uVar3)) {
      iVar9 = 1;
      iVar8 = uVar3 - uVar6;
      uVar4 = uVar3 + 1;
      uVar5 = uVar3;
      if (param_2 <= uVar3 + 1) goto LAB_0003e968;
    }
    if (*(byte *)(param_1 + uVar3) == bVar1) {
      bVar11 = iVar9 == iVar8;
      iVar9 = iVar9 + 1;
      uVar2 = uVar5;
      if (bVar11) {
        iVar9 = 1;
        uVar2 = uVar3;
      }
    }
    else {
      iVar8 = 1;
      uVar2 = uVar5 + 1;
      uVar6 = uVar5;
      iVar9 = iVar8;
    }
  }
LAB_0003e968:
  uVar2 = uVar10 + 1;
  if (uVar10 + 1 <= uVar6 + 1) {
    *param_3 = iVar8;
    uVar2 = uVar6 + 1;
  }
  return uVar2;
}

