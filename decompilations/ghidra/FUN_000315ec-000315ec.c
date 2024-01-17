
uint FUN_000315ec(byte *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  
  if (param_2 == 0) {
    uVar5 = 1;
    uVar12 = 0x1c;
  }
  else {
    iVar11 = 0;
    iVar6 = 0;
    uVar12 = 0x80;
    uVar4 = 1;
    uVar3 = 1;
    uVar1 = 1;
    uVar5 = 1;
    uVar2 = 1;
    do {
      uVar10 = uVar2;
      uVar9 = uVar5;
      uVar8 = uVar1;
      uVar7 = uVar3;
      iVar11 = iVar11 + 1;
      iVar6 = iVar6 + 1;
      uVar3 = *param_1 & uVar12;
      uVar12 = uVar12 >> 1;
      uVar5 = uVar4;
      if (uVar3 != 0) {
        uVar5 = uVar4 ^ 1;
      }
      if (iVar11 == 8) {
        param_1 = param_1 + 1;
        iVar11 = 0;
        uVar12 = 0x80;
      }
      uVar4 = uVar8;
      uVar3 = uVar9;
      uVar1 = uVar10;
      uVar2 = uVar5 ^ uVar7;
    } while (param_2 != iVar6);
    if (uVar8 == 0) {
      uVar12 = 0;
    }
    else {
      uVar12 = 0x10;
    }
    if (uVar10 != 0) {
      uVar12 = uVar12 | 8;
    }
    if (uVar5 != uVar7) {
      uVar12 = uVar12 | 4;
    }
    if (uVar9 == 0) goto LAB_00031694;
  }
  uVar12 = uVar12 | 2;
LAB_00031694:
  if (uVar5 != 0) {
    uVar12 = uVar12 | 1;
  }
  return uVar12;
}

