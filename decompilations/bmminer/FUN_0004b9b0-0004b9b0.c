
undefined4 FUN_0004b9b0(uint *param_1,char *param_2,uint *param_3)

{
  bool bVar1;
  uint **ppuVar2;
  size_t sVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  uint **ppuVar7;
  uint **ppuVar8;
  uint **ppuVar9;
  int *piVar10;
  uint **ppuVar11;
  uint uVar12;
  uint **ppuVar13;
  
  uVar12 = param_1[2];
  if (*param_1 >> (uVar12 & 0xff) == 0) {
    ppuVar2 = (uint **)param_1[1];
    uVar12 = ~(-1 << (uVar12 & 0xff));
  }
  else {
    uVar12 = uVar12 + 1;
    iVar5 = 8 << (uVar12 & 0xff);
    ppuVar2 = (uint **)FUN_0004d880(iVar5);
    if (ppuVar2 == (uint **)0x0) {
      return 0xffffffff;
    }
    FUN_0004d898(param_1[1]);
    param_1[1] = (uint)ppuVar2;
    param_1[2] = uVar12;
    ppuVar7 = (uint **)(param_1 + 3);
    if (1 << (uVar12 & 0xff) != 0) {
      ppuVar9 = ppuVar2;
      do {
        ppuVar9[1] = (uint *)ppuVar7;
        ppuVar11 = ppuVar9 + 2;
        *ppuVar9 = (uint *)ppuVar7;
        ppuVar9 = ppuVar11;
      } while ((uint **)(iVar5 + (int)ppuVar2) != ppuVar11);
    }
    ppuVar9 = (uint **)param_1[4];
    param_1[3] = (uint)ppuVar7;
    uVar12 = ~(-1 << (uVar12 & 0xff));
    param_1[4] = (uint)ppuVar7;
    if (ppuVar9 != ppuVar7) {
      do {
        while( true ) {
          ppuVar13 = (uint **)ppuVar9[1];
          ppuVar8 = (uint **)ppuVar2[((uint)ppuVar9[4] & uVar12) * 2];
          ppuVar11 = ppuVar2 + ((uint)ppuVar9[4] & uVar12) * 2;
          if ((ppuVar8 != ppuVar7) || (ppuVar7 != (uint **)ppuVar11[1])) break;
          puVar4 = (uint *)param_1[3];
          ppuVar9[1] = (uint *)ppuVar7;
          *ppuVar9 = puVar4;
          *(uint ***)(param_1[3] + 4) = ppuVar9;
          param_1[3] = (uint)ppuVar9;
          ppuVar11[1] = (uint *)ppuVar9;
          *ppuVar11 = (uint *)ppuVar9;
          ppuVar9 = ppuVar13;
          if (ppuVar13 == ppuVar7) goto LAB_0004bac0;
        }
        puVar4 = *ppuVar8;
        ppuVar9[1] = (uint *)ppuVar8;
        *ppuVar9 = puVar4;
        (*ppuVar8)[1] = (uint)ppuVar9;
        *ppuVar8 = (uint *)ppuVar9;
        *ppuVar11 = (uint *)ppuVar9;
        ppuVar9 = ppuVar13;
      } while (ppuVar13 != ppuVar7);
LAB_0004bac0:
      ppuVar2 = (uint **)param_1[1];
      uVar12 = ~(-1 << (param_1[2] & 0xff));
    }
  }
  sVar3 = strlen(param_2);
  puVar4 = (uint *)FUN_0004b2f4(param_2,sVar3,DAT_005051c0);
  ppuVar2 = ppuVar2 + (uVar12 & (uint)puVar4) * 2;
  iVar5 = FUN_0004b838(param_1,ppuVar2,param_2,puVar4);
  if (iVar5 != 0) {
    iVar6 = *(int *)(iVar5 + 0x14);
    if ((iVar6 != 0) && (*(int *)(iVar6 + 4) != -1)) {
      piVar10 = (int *)(iVar6 + 4);
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar10;
        bVar1 = (bool)hasExclusiveAccess(piVar10);
      } while (!bVar1);
      *piVar10 = iVar6 + -1;
      if (iVar6 + -1 == 0) {
        FUN_0004eb6c();
      }
    }
    *(uint **)(iVar5 + 0x14) = param_3;
    return 0;
  }
  ppuVar7 = (uint **)FUN_0004d880(sVar3 + 0x19);
  if (ppuVar7 == (uint **)0x0) {
    return 0xffffffff;
  }
  ppuVar7[4] = puVar4;
  strncpy((char *)(ppuVar7 + 6),param_2,sVar3 + 1);
  ppuVar11 = (uint **)*ppuVar2;
  ppuVar9 = ppuVar7 + 2;
  ppuVar7[5] = param_3;
  ppuVar7[1] = (uint *)ppuVar7;
  *ppuVar7 = (uint *)ppuVar7;
  ppuVar7[3] = (uint *)ppuVar9;
  ppuVar7[2] = (uint *)ppuVar9;
  if ((ppuVar11 == (uint **)(param_1 + 3)) && (ppuVar11 == (uint **)ppuVar2[1])) {
    *ppuVar7 = (uint *)param_1[3];
    ppuVar7[1] = (uint *)ppuVar11;
    *(uint ***)(param_1[3] + 4) = ppuVar7;
    param_1[3] = (uint)ppuVar7;
    ppuVar2[1] = (uint *)ppuVar7;
    *ppuVar2 = (uint *)ppuVar7;
  }
  else {
    *ppuVar7 = *ppuVar11;
    ppuVar7[1] = (uint *)ppuVar11;
    (*ppuVar11)[1] = (uint)ppuVar7;
    *ppuVar11 = (uint *)ppuVar7;
    *ppuVar2 = (uint *)ppuVar7;
  }
  puVar4 = (uint *)param_1[5];
  uVar12 = *param_1;
  ppuVar7[3] = param_1 + 5;
  ppuVar7[2] = puVar4;
  *(uint ***)(param_1[5] + 4) = ppuVar9;
  param_1[5] = (uint)ppuVar9;
  *param_1 = uVar12 + 1;
  return 0;
}

