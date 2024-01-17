
undefined4 FUN_00026670(void)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  double *pdVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  uint *puVar17;
  uint uVar18;
  uint uVar19;
  bool bVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  
  FUN_00032530();
  pvVar2 = (void *)(DAT_0007fa5c * 0x66666667);
  iVar3 = DAT_0007fa5c >> 0x1f;
  iVar8 = DAT_0007fa5c;
  if (DAT_0007fa5c % 5 == 0) {
    if (DAT_00080f58 == 1) {
      memset(&DAT_0007fa60,0,0x140);
      memset(&DAT_0007fba0,0,0x20);
      pvVar2 = memset(&DAT_0007fbc0,0,0x20);
      DAT_0007fbe0 = 0;
      DAT_0007fbe4 = 0;
      DAT_0007fbe8 = 0;
      DAT_0007fbec = 0;
      DAT_0007fbf0 = 0;
      DAT_0007fbf4 = 0;
      DAT_0007fbf8 = 0;
      DAT_0007fbfc = 0;
      DAT_00080f58 = 0;
    }
    iVar3 = FUN_00026104(pvVar2);
    dVar22 = DAT_00026b60;
    dVar23 = DAT_00026b58;
    iVar8 = iVar3 - DAT_0007fa3c;
    puVar16 = DAT_00026b70 + 8;
    iVar14 = 0;
    puVar9 = DAT_00026b70 + 0x14;
    puVar17 = DAT_00026b70;
    dVar24 = DAT_00026b50;
    DAT_0007fa3c = iVar3;
    do {
      iVar1 = FUN_0001e29c(iVar14);
      iVar3 = DAT_00026b74;
      if (iVar1 != 0) {
        uVar19 = (&DAT_0099ed9c)[iVar14 * 2];
        iVar1 = *(int *)(DAT_00026b74 + iVar14 * 4);
        iVar4 = iVar1 + 1;
        uVar15 = puVar9[iVar14];
        iVar1 = (iVar14 * 10 + iVar1) * 8;
        puVar6 = (uint *)(iVar4 * 0x66666667);
        if ((int)uVar15 < 10) {
          puVar6 = puVar9;
        }
        uVar13 = *puVar16;
        if ((int)uVar15 < 10) {
          uVar15 = uVar15 + 1;
          puVar6[iVar14] = uVar15;
        }
        iVar4 = iVar4 % 10;
        uVar5 = (&DAT_0099ed98)[iVar14 * 2];
        uVar7 = puVar17[1];
        *(int *)(iVar3 + iVar14 * 4) = iVar4;
        uVar10 = *puVar17;
        uVar18 = puVar16[1];
        *puVar17 = uVar5;
        uVar11 = uVar5 - uVar10;
        puVar17[1] = uVar19;
        iVar3 = uVar19 - (uVar7 + (uVar5 < uVar10));
        *(uint *)(&DAT_0007fa60 + iVar1) = uVar11;
        uVar19 = uVar11 + uVar13;
        *(int *)(&DAT_0007fa64 + iVar1) = iVar3;
        uVar13 = iVar3 + uVar18 + (uint)CARRY4(uVar11,uVar13);
        *puVar16 = uVar19;
        puVar16[1] = uVar13;
        dVar21 = (double)FUN_000600b4(uVar19,uVar13);
        dVar21 = (((dVar21 * dVar23) / (double)(longlong)(int)uVar15) / (double)(longlong)iVar8) /
                 dVar22;
        FUN_0001e4c0(SUB84(dVar21,0),iVar14);
        dVar24 = dVar24 + dVar21;
        uVar19 = *puVar16;
        iVar3 = (iVar14 * 10 + iVar4) * 8;
        uVar15 = *(uint *)(&DAT_0007fa60 + iVar3);
        iVar3 = *(int *)(&DAT_0007fa64 + iVar3);
        *puVar16 = uVar19 - uVar15;
        puVar16[1] = puVar16[1] - (iVar3 + (uint)(uVar19 < uVar15));
      }
      iVar14 = iVar14 + 1;
      puVar17 = puVar17 + 2;
      puVar16 = puVar16 + 2;
    } while (iVar14 != 4);
    FUN_0001e2b4(SUB84(dVar24,0));
    sprintf(&DAT_00080fb8,"%.2f",SUB84(dVar24,0),(int)((ulonglong)dVar24 >> 0x20));
    puVar17 = DAT_00026b78;
    if (DAT_00080f5c == 1) {
      *DAT_00026b78 = 0;
      puVar17[1] = 0;
      memset(puVar17 + 2,0,0xb40);
      DAT_00080748 = 0;
      DAT_00080f5c = 0;
    }
    iVar14 = FUN_00026104();
    puVar17 = DAT_00026b78;
    if ((DAT_0099ee08 | DAT_0099ee0c) == 0) {
      iVar3 = DAT_0007fa5c >> 0x1f;
      iVar8 = DAT_0007fa5c;
      DAT_0007fa40 = iVar14;
    }
    else {
      iVar3 = iVar14 - DAT_0007fa40;
      uVar15 = DAT_0099ee08 - *DAT_00026b78;
      DAT_0007fa40 = iVar14;
      dVar24 = (double)FUN_000600b4(-uVar15,(uVar15 & 0xfffffffe) +
                                            ((uint)(uVar15 * -0x80000000 < uVar15) * -2 -
                                            (DAT_0099ee0c -
                                            (DAT_00026b78[1] + (uint)(DAT_0099ee08 < *DAT_00026b78))
                                            )) + (uint)CARRY4(uVar15 * 0x7fffffff,
                                                              uVar15 * 0x7fffffff) +
                                            (uint)CARRY4(uVar15 * -2,uVar15));
      pdVar12 = DAT_00026b7c;
      dVar23 = DAT_00026b50;
      dVar24 = dVar24 / DAT_00026b60;
      dVar22 = DAT_00026b60;
      if (iVar3 != 0) {
        dVar22 = (double)(longlong)iVar3;
      }
      uVar15 = DAT_00080748 >> 3;
      uVar19 = DAT_00080748 + 1;
      iVar8 = DAT_00080748 + (uVar15 / 0x2d) * -0x168;
      if (iVar3 != 0) {
        dVar24 = dVar24 / dVar22;
      }
      DAT_00080748 = uVar19;
      (&DAT_0007fc08)[iVar8] = dVar24;
      uVar13 = 0;
      do {
        bVar20 = uVar19 == uVar13;
        uVar13 = uVar13 + 1;
        if (bVar20) goto LAB_00026a70;
        dVar22 = *pdVar12;
        pdVar12 = pdVar12 + 1;
        dVar23 = dVar23 + dVar22;
      } while (uVar13 != 0x168);
      dVar22 = DAT_00026b68;
      if (uVar19 < 0x168) {
LAB_00026a70:
        dVar22 = (double)(longlong)(int)uVar19;
      }
      DAT_00080fc8 = dVar23 / dVar22;
      FUN_0001e2d8(SUB84(DAT_00080fc8,0),uVar15 * 0x16c16c17);
      uVar15 = DAT_0099ee0c;
      iVar8 = DAT_0007fa5c;
      iVar3 = DAT_0007fa5c >> 0x1f;
      *puVar17 = DAT_0099ee08;
      puVar17[1] = uVar15;
    }
  }
  if ((iVar8 == ((iVar8 / 10 + (iVar8 >> 0x1f)) - iVar3) * 10) &&
     (iVar3 = FUN_00031d38(iVar8 * 0x66666667), iVar8 = DAT_0007fa5c, iVar3 == 2)) {
    FUN_0002d158();
    iVar8 = DAT_0007fa5c;
  }
  DAT_0007fa5c = iVar8 + 1;
  iVar3 = DAT_0007fa5c >> 0x1f;
  if (DAT_0007fa5c == (DAT_0007fa5c / 0x3c) * 0x3c) {
    FUN_0003264c();
    if (DAT_0007fa5c % 0x708 == 0) goto LAB_00026780;
  }
  else {
    if (DAT_0007fa5c % 0x708 != 0) goto LAB_00026718;
LAB_00026780:
    FUN_00026134();
  }
  iVar3 = DAT_0007fa5c >> 0x1f;
  if (DAT_0007fa5c == (DAT_0007fa5c / 0x3c) * 0x3c) {
    FUN_0002cb2c();
    FUN_0002ce20();
    iVar3 = DAT_0007fa5c >> 0x1f;
  }
LAB_00026718:
  if (DAT_0007fa5c + ((DAT_0007fa5c / 900 + (DAT_0007fa5c >> 0x1f)) - iVar3) * -900 == 0) {
    FUN_00026250();
  }
  return 0;
}

