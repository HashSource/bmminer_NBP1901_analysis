
uint FUN_00051f28(byte *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  if (param_2 != 0) {
    cVar4 = '\0';
    uVar12 = 0;
    uVar7 = 0x80;
    uVar5 = 1;
    uVar1 = 1;
    uVar2 = 1;
    uVar3 = 1;
    uVar9 = 1;
    do {
      uVar6 = uVar9;
      uVar11 = uVar3;
      uVar10 = uVar2;
      uVar9 = uVar1;
      uVar8 = uVar5;
      cVar4 = cVar4 + '\x01';
      uVar12 = uVar12 + 1 & 0xff;
      uVar5 = *param_1 & uVar7;
      uVar7 = uVar7 >> 1;
      if (uVar5 != 0) {
        uVar6 = uVar6 ^ 1;
      }
      if (cVar4 == '\b') {
        param_1 = param_1 + 1;
        cVar4 = '\0';
        uVar7 = 0x80;
      }
      uVar5 = uVar10;
      uVar1 = uVar11;
      uVar2 = uVar6;
      uVar3 = uVar6 ^ uVar8;
    } while (uVar12 < param_2);
    if (uVar9 == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = 0x10;
    }
    if (uVar11 != 0) {
      uVar7 = uVar7 | 8;
    }
    if (uVar6 != uVar8) {
      uVar7 = uVar7 | 4;
    }
    if (uVar10 != 0) {
      uVar7 = uVar7 | 2;
    }
    if (uVar6 != 0) {
      uVar7 = uVar7 | 1;
    }
    return uVar7;
  }
  return 0x1f;
}

