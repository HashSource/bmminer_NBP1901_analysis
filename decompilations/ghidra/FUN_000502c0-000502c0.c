
undefined4 FUN_000502c0(float param_1,undefined *param_2,undefined *param_3,float *param_4)

{
  undefined uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  float fVar14;
  int iVar15;
  float fVar16;
  
  iVar12 = 2;
  iVar7 = 0;
  iVar8 = 0;
  uVar9 = 0;
  iVar5 = 2;
  uVar10 = 0;
  iVar11 = 0;
  fVar14 = 10.0;
  while( true ) {
    uVar4 = 1;
    do {
      iVar2 = uVar4 * uVar4;
      uVar6 = uVar4;
      uVar13 = uVar4 & 0xff;
      do {
        iVar15 = (int)(longlong)
                      (((float)(longlong)(int)uVar6 * (float)(longlong)(int)uVar4 * param_1 *
                       (float)(longlong)iVar5) / 25.0 + 0.5);
        if (((iVar15 - 0x10U < 0xeb) &&
            (((fVar16 = (float)(longlong)iVar15 * (25.0 / (float)(longlong)iVar5), iVar5 != 1 ||
              (fVar16 == DAT_000504e4 || fVar16 < DAT_000504e4 != (NAN(fVar16) || NAN(DAT_000504e4))
              )) && (fVar16 == DAT_000504dc ||
                     fVar16 < DAT_000504dc != (NAN(fVar16) || NAN(DAT_000504dc)))))) &&
           ((DAT_000504e0 <= fVar16 &&
            (fVar16 = ABS(param_1 - fVar16 / (float)(longlong)iVar2), fVar16 < fVar14)))) {
          iVar8 = 1;
          iVar7 = iVar15;
          uVar9 = uVar4 & 0xff;
          uVar10 = uVar13;
          iVar11 = iVar5;
          fVar14 = fVar16;
        }
        uVar6 = uVar6 + 1;
        iVar2 = iVar2 + uVar4;
        uVar13 = uVar6 & 0xff;
      } while (uVar13 != 8);
      uVar4 = uVar4 + 1;
    } while (uVar4 != 8);
    iVar5 = 1;
    if (iVar12 == 1) break;
    iVar12 = 1;
  }
  if (iVar7 == 0) {
    puts("find div fail, use default value");
    uVar3 = 0xffffffff;
  }
  else {
    if (param_4 != (float *)0x0) {
      *param_4 = ((25.0 / (float)(longlong)iVar11) * (float)(longlong)iVar7) /
                 (float)(longlong)(iVar8 * (int)(short)uVar10 * (int)(short)uVar9);
    }
    printf("final refdiv: %d, fbdiv: %d, postdiv1: %d, postdiv2: %d, usr divider: %d, min diff value: %f\n"
           ,iVar11,iVar7,uVar10,uVar9,iVar8,(double)fVar14);
    printf("Want freq: %f, Real freq: %f\n");
    uVar3 = 0;
    *param_2 = (char)uVar10;
    param_2[1] = (char)uVar9;
    param_2[2] = (char)iVar11;
    *(short *)(param_2 + 4) = (short)iVar7;
    uVar1 = (undefined)iVar8;
    *param_3 = uVar1;
    param_3[1] = uVar1;
    param_3[2] = uVar1;
    param_3[3] = uVar1;
  }
  return uVar3;
}

