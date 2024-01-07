
uint FUN_0004c5cc(int param_1,undefined4 param_2)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  int *piVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  byte *pbVar11;
  int iVar12;
  bool bVar13;
  bool bVar14;
  longlong lVar15;
  char *local_30;
  undefined4 uStack_2c;
  
  iVar12 = param_1 + 0x28;
  FUN_0004d9b4(iVar12);
  if (*(int *)(param_1 + 0x3c) == 0x100) {
    FUN_0004d898(*(undefined4 *)(param_1 + 0x40));
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
  }
  do {
    uVar10 = *(uint *)(param_1 + 0x14);
    if (uVar10 == 0) {
      uVar10 = FUN_0004c3b8(param_1,param_2);
    }
    uVar8 = uVar10 - 9;
    bVar14 = 0x1f < uVar10;
    bVar13 = uVar10 == 0x20;
    if (!bVar13) {
      bVar14 = uVar8 != 0;
    }
    bVar2 = uVar8 == 1;
    if (!bVar14 || (bVar13 || bVar2)) {
      uVar8 = 1;
    }
    if (bVar14 && (!bVar13 && !bVar2)) {
      uVar8 = 0;
    }
  } while ((!bVar14 || (bVar13 || bVar2)) || (uVar10 == 0xd));
  if (uVar10 == 0xffffffff) {
    *(uint *)(param_1 + 0x3c) = uVar8;
    return uVar8;
  }
  if (uVar10 == 0xfffffffe) {
LAB_0004c714:
    *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
    return 0xffffffff;
  }
  FUN_0004dab0(iVar12,uVar10 & 0xff);
  if ((((uVar10 & 0xffffffdf) - 0x5b & 0xfffffffd) == 0) || (uVar10 == 0x2c || uVar10 == 0x3a)) {
LAB_0004c740:
    *(uint *)(param_1 + 0x3c) = uVar10;
    return uVar10;
  }
  if (uVar10 == 0x22) {
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
LAB_0004c77c:
    do {
      uVar10 = FUN_0004c540(param_1,param_2);
      while( true ) {
        if (uVar10 == 0x22) {
          pbVar5 = (byte *)FUN_0004d880(*(int *)(param_1 + 0x2c) + 1);
          if (pbVar5 == (byte *)0x0) goto LAB_0004c808;
          *(byte **)(param_1 + 0x40) = pbVar5;
          iVar12 = FUN_0004d9c8(iVar12);
          pbVar11 = (byte *)(iVar12 + 1);
          goto LAB_0004cab0;
        }
        if (uVar10 == 0xfffffffe) goto LAB_0004c808;
        if (uVar10 == 0xffffffff) {
          FUN_0004c0cc(param_2,param_1,6,"premature end of input");
          goto LAB_0004c808;
        }
        if (uVar10 < 0x20) {
          FUN_0004c580(param_1,uVar10);
          if (uVar10 == 10) {
            FUN_0004c0cc(param_2,param_1,8,"unexpected newline");
          }
          else {
            FUN_0004c0cc(param_2,param_1,8,"control character 0x%x",uVar10);
          }
          goto LAB_0004c808;
        }
        if (uVar10 != 0x5c) goto LAB_0004c77c;
        uVar10 = FUN_0004c540(param_1,param_2);
        if (uVar10 != 0x75) break;
        uVar10 = FUN_0004c540(param_1,param_2);
        iVar9 = 4;
        do {
          uVar8 = (uVar10 & 0xffffffdf) - 0x41;
          bVar13 = 4 < uVar8;
          bVar14 = uVar8 == 5;
          if (5 < uVar8) {
            bVar13 = 8 < uVar10 - 0x30;
            bVar14 = uVar10 - 0x30 == 9;
          }
          if (bVar13 && !bVar14) goto LAB_0004c7f0;
          uVar10 = FUN_0004c540(param_1,param_2);
          iVar9 = iVar9 + -1;
        } while (iVar9 != 0);
      }
    } while (((uVar10 == 0x5c || (uVar10 & 0xffffffbf) == 0x22) || (uVar10 == 0x2f)) ||
            (((uVar10 & 0xfffffff7) == 0x66 || ((uVar10 - 0x72 & 0xfffffffd) == 0))));
LAB_0004c7f0:
    FUN_0004c0cc(param_2,param_1,8,"invalid escape");
LAB_0004c808:
    FUN_0004d898(*(undefined4 *)(param_1 + 0x40));
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
    return *(uint *)(param_1 + 0x3c);
  }
  bVar14 = 0x2c < uVar10;
  if (uVar10 != 0x2d) {
    bVar14 = 8 < uVar10 - 0x30;
  }
  if (bVar14 && (uVar10 != 0x2d && uVar10 - 0x30 != 9)) {
    if ((uVar10 & 0xffffffdf) - 0x41 < 0x1a) {
      do {
        uVar10 = FUN_0004c540(param_1,param_2);
      } while ((uVar10 & 0xffffffdf) - 0x41 < 0x1a);
      FUN_0004c580(param_1,uVar10);
      pcVar3 = (char *)FUN_0004d9c8(iVar12);
      iVar12 = strcmp(pcVar3,"true");
      if (iVar12 == 0) {
        *(undefined4 *)(param_1 + 0x3c) = 0x103;
        return 0x103;
      }
      iVar12 = strcmp(pcVar3,"false");
      if (iVar12 == 0) {
        uVar10 = 0x104;
        goto LAB_0004c740;
      }
      iVar12 = strcmp(pcVar3,"null");
      if (iVar12 == 0) {
        *(undefined4 *)(param_1 + 0x3c) = 0x105;
        return 0x105;
      }
    }
    else {
      cVar1 = *(char *)(param_1 + *(int *)(param_1 + 0x10) + 8);
      while (cVar1 != '\0') {
        FUN_0004dab0(iVar12);
        iVar9 = *(int *)(param_1 + 0x10) + 1;
        *(int *)(param_1 + 0x10) = iVar9;
        *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
        cVar1 = *(char *)(param_1 + iVar9 + 8);
      }
    }
    goto LAB_0004c714;
  }
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  if (uVar10 == 0x2d) {
    uVar10 = FUN_0004c540(param_1,param_2);
    if (uVar10 == 0x30) goto LAB_0004cbac;
    if (uVar10 - 0x30 < 10) goto LAB_0004c83c;
LAB_0004cbc8:
    FUN_0004c580(param_1,uVar10);
    uVar10 = *(uint *)(param_1 + 0x3c);
  }
  else {
    if (uVar10 == 0x30) {
LAB_0004cbac:
      uVar10 = FUN_0004c540(param_1,param_2);
      if (uVar10 - 0x30 < 10) goto LAB_0004cbc8;
    }
    else {
LAB_0004c83c:
      do {
        uVar10 = FUN_0004c540(param_1,param_2);
      } while (uVar10 - 0x30 < 10);
    }
    if (((*(uint *)(param_1 + 0x34) & 8) == 0) && (uVar10 != 0x2e && uVar10 != 0x45)) {
      if (uVar10 != 0x65) {
        FUN_0004c580(param_1,uVar10);
        pcVar3 = (char *)FUN_0004d9c8(iVar12);
        piVar4 = __errno_location();
        *piVar4 = 0;
        lVar15 = strtoll(pcVar3,&local_30,10);
        if (*piVar4 == 0x22) {
          if (lVar15 < 0) {
            pcVar3 = "too big negative integer";
          }
          else {
            pcVar3 = "too big integer";
          }
          FUN_0004c0cc(param_2,param_1,0xf,pcVar3);
          return *(uint *)(param_1 + 0x3c);
        }
        if (local_30 == pcVar3 + *(int *)(param_1 + 0x2c)) {
          *(longlong *)(param_1 + 0x40) = lVar15;
          *(undefined4 *)(param_1 + 0x3c) = 0x101;
          return 0x101;
        }
                    /* WARNING: Subroutine does not return */
        __assert_fail("end == saved_text + lex->saved_text.length","load.c",0x21d,DAT_0004cde0);
      }
LAB_0004c968:
      uVar10 = FUN_0004c540(param_1,param_2);
      if ((uVar10 - 0x2b & 0xfffffffd) == 0) {
        uVar10 = FUN_0004c540(param_1,param_2);
      }
      if (9 < uVar10 - 0x30) goto LAB_0004cbc8;
      do {
        uVar10 = FUN_0004c540(param_1,param_2);
      } while (uVar10 - 0x30 < 10);
    }
    else {
      if (uVar10 == 0x2e) {
        uVar10 = *(uint *)(param_1 + 0x14);
        if (uVar10 == 0) {
          uVar10 = FUN_0004c3b8(param_1,param_2);
        }
        if (9 < uVar10 - 0x30) {
          FUN_0004c2fc(param_1);
          return *(uint *)(param_1 + 0x3c);
        }
        FUN_0004dab0(iVar12,uVar10 & 0xff);
        do {
          uVar10 = FUN_0004c540(param_1,param_2);
        } while (uVar10 - 0x30 < 10);
      }
      if ((uVar10 & 0xffffffdf) == 0x45) goto LAB_0004c968;
    }
    FUN_0004c580(param_1,uVar10);
    iVar12 = FUN_0004db00(iVar12,&local_30);
    if (iVar12 == 0) {
      uVar10 = 0x102;
      *(undefined4 *)(param_1 + 0x3c) = 0x102;
      *(char **)(param_1 + 0x40) = local_30;
      *(undefined4 *)(param_1 + 0x44) = uStack_2c;
    }
    else {
      FUN_0004c0cc(param_2,param_1,0xf,"real number overflow");
      uVar10 = *(uint *)(param_1 + 0x3c);
    }
  }
  return uVar10;
LAB_0004cab0:
  while( true ) {
    bVar7 = *pbVar11;
    if (bVar7 == 0x22) {
      *pbVar5 = 0;
      *(undefined4 *)(param_1 + 0x3c) = 0x100;
      *(int *)(param_1 + 0x44) = (int)pbVar5 - *(int *)(param_1 + 0x40);
      return 0x100;
    }
    if (bVar7 == 0x5c) break;
    *pbVar5 = bVar7;
    pbVar5 = pbVar5 + 1;
    pbVar11 = pbVar11 + 1;
  }
  bVar7 = pbVar11[1];
  if (bVar7 == 0x75) {
    iVar12 = FUN_0004c268();
    pbVar6 = pbVar11;
    if (iVar12 < 0) {
LAB_0004ccd8:
      FUN_0004c0cc(param_2,param_1,8,"invalid Unicode escape \'%.6s\'",pbVar6);
      goto LAB_0004c808;
    }
    pbVar6 = pbVar11 + 6;
    if (iVar12 - 0xd800U < 0x400) {
      if ((pbVar11[6] == 0x5c) && (pbVar11[7] == 0x75)) {
        iVar9 = FUN_0004c268(pbVar11 + 7);
        if (iVar9 < 0) goto LAB_0004ccd8;
        pbVar6 = pbVar11 + 0xc;
        if (0x3ff < iVar9 - 0xdc00U) {
          FUN_0004c0cc(param_2,param_1,8,"invalid Unicode \'\\u%04X\\u%04X\'",iVar12,iVar9);
          goto LAB_0004c808;
        }
        iVar12 = (iVar9 - 0xdc00U) + (iVar12 - 0xd800U) * 0x400 + 0x10000;
LAB_0004cb88:
        iVar12 = FUN_0004dd30(iVar12,pbVar5,&local_30);
        if (iVar12 != 0) {
                    /* WARNING: Subroutine does not return */
          __assert_fail("0","load.c",0x1c4,DAT_0004cddc);
        }
        pbVar5 = pbVar5 + (int)local_30;
        pbVar11 = pbVar6;
        goto LAB_0004cab0;
      }
    }
    else if (0x3ff < iVar12 - 0xdc00U) goto LAB_0004cb88;
    FUN_0004c0cc(param_2,param_1,8,"invalid Unicode \'\\u%04X\'",iVar12);
    goto LAB_0004c808;
  }
  if (bVar7 == 0x62) {
    *pbVar5 = 8;
  }
  else if (bVar7 < 99) {
    if (((bVar7 != 0x2f) && (bVar7 != 0x5c)) && (bVar7 != 0x22)) goto LAB_0004cc3c;
LAB_0004cc14:
    *pbVar5 = bVar7;
  }
  else if (bVar7 == 0x6e) {
    *pbVar5 = 10;
  }
  else {
    if (bVar7 < 0x6f) {
      if (bVar7 != 0x66) {
LAB_0004cc3c:
                    /* WARNING: Subroutine does not return */
        __assert_fail("0","load.c",0x1d0,DAT_0004cddc);
      }
      bVar7 = 0xc;
      goto LAB_0004cc14;
    }
    if (bVar7 == 0x72) {
      *pbVar5 = 0xd;
    }
    else {
      if (bVar7 != 0x74) goto LAB_0004cc3c;
      *pbVar5 = 9;
    }
  }
  pbVar5 = pbVar5 + 1;
  pbVar11 = pbVar11 + 2;
  goto LAB_0004cab0;
}

