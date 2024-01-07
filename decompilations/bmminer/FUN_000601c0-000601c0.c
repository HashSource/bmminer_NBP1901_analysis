
undefined8 FUN_000601c0(uint param_1,uint param_2,uint param_3,uint param_4,uint *param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  bool bVar12;
  
  bVar12 = param_4 <= param_2;
  if (param_2 == param_4) {
    bVar12 = param_3 <= param_1;
  }
  if (bVar12) {
    iVar10 = LZCOUNT(param_4);
    if (param_4 == 0) {
      iVar10 = LZCOUNT(param_3) + 0x20;
    }
    iVar3 = LZCOUNT(param_2);
    if (param_2 == 0) {
      iVar3 = LZCOUNT(param_1) + 0x20;
    }
    uVar11 = iVar10 - iVar3;
    uVar8 = uVar11 - 0x20;
    uVar9 = 0x20 - uVar11;
    uVar5 = param_3 << (uVar11 & 0xff);
    uVar6 = param_4 << (uVar11 & 0xff) | param_3 << (uVar8 & 0xff) | param_3 >> (uVar9 & 0xff);
    bVar12 = uVar6 <= param_2;
    if (param_2 == uVar6) {
      bVar12 = uVar5 <= param_1;
    }
    if (bVar12) {
      bVar12 = param_1 < uVar5;
      param_1 = param_1 - uVar5;
      uVar1 = 1 << (uVar11 & 0xff);
      param_2 = (param_2 - uVar6) - (uint)bVar12;
      uVar2 = 1 << (uVar8 & 0xff) | 1U >> (uVar9 & 0xff);
    }
    else {
      uVar1 = 0;
      uVar2 = uVar1;
    }
    if (uVar11 != 0) {
      uVar7 = uVar6 >> 1;
      uVar6 = (uint)((uVar6 & 1) != 0) << 0x1f | uVar5 >> 1;
      uVar5 = uVar11;
      do {
        while( true ) {
          bVar12 = uVar7 <= param_2;
          if (param_2 == uVar7) {
            bVar12 = uVar6 <= param_1;
          }
          if (bVar12) break;
          bVar12 = CARRY4(param_1,param_1);
          param_1 = param_1 * 2;
          param_2 = param_2 * 2 + (uint)bVar12;
          uVar5 = uVar5 - 1;
          uVar4 = param_2;
          if (uVar5 == 0) goto LAB_0006026a;
        }
        bVar12 = param_1 < uVar6;
        uVar4 = param_1 - uVar6;
        param_1 = uVar4 * 2 + 1;
        param_2 = ((param_2 - uVar7) - (uint)bVar12) * 2 + (uint)CARRY4(uVar4,uVar4) +
                  (uint)(0xfffffffe < uVar4 * 2);
        uVar5 = uVar5 - 1;
        uVar4 = param_2;
      } while (uVar5 != 0);
LAB_0006026a:
      param_2 = uVar4 >> (uVar11 & 0xff);
      bVar12 = CARRY4(uVar1,param_1);
      uVar5 = uVar1 + param_1;
      param_1 = param_1 >> (uVar11 & 0xff) | uVar4 << (uVar9 & 0xff) | uVar4 >> (uVar8 & 0xff);
      uVar6 = param_1 << (uVar11 & 0xff);
      uVar1 = uVar5 - uVar6;
      uVar2 = ((uVar4 + uVar2 + bVar12) -
              (param_2 << (uVar11 & 0xff) | param_1 << (uVar11 - 0x20 & 0xff) |
              param_1 >> (0x20 - uVar11 & 0xff))) - (uint)(uVar5 < uVar6);
    }
  }
  else {
    uVar1 = 0;
    uVar2 = uVar1;
  }
  if (param_5 != (uint *)0x0) {
    *param_5 = param_1;
    param_5[1] = param_2;
  }
  return CONCAT44(uVar2,uVar1);
}

