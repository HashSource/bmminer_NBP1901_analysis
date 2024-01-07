
int FUN_0002cd30(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int extraout_r1;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  
  uVar1 = FUN_0001e120();
  uVar2 = FUN_0001e150();
  iVar3 = FUN_0005faf8(uVar1,uVar2);
  uVar1 = FUN_0001e150();
  iVar4 = FUN_0005f880(param_2,uVar1);
  iVar5 = FUN_0001e100();
  uVar8 = iVar4 * iVar5;
  uVar1 = FUN_0001e150();
  FUN_0005fadc(param_2,uVar1);
  uVar9 = iVar3 * extraout_r1;
  iVar4 = FUN_0001e100();
  uVar6 = iVar4 + uVar8;
  if (uVar6 <= uVar8) {
    return 0;
  }
  iVar4 = 0;
  piVar10 = (int *)(DAT_0002cdf8 + (uVar9 + 0x404 + (uVar8 + param_1 * 0x100) * 0x400) * 4);
  do {
    if (uVar9 < iVar3 + uVar9) {
      piVar7 = piVar10;
      do {
        piVar7 = piVar7 + 1;
        iVar4 = iVar4 + *piVar7;
      } while (piVar7 != piVar10 + iVar3);
    }
    uVar8 = uVar8 + 1;
    piVar10 = piVar10 + 0x400;
  } while (uVar6 != uVar8);
  return iVar4;
}

