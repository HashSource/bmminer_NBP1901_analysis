
undefined4 FUN_000350e8(void)

{
  short sVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  char *__s1;
  int iVar6;
  int iVar7;
  int iVar8;
  char acStack_820 [2048];
  
  uVar3 = FUN_0001572c();
  sVar1 = uVar3 - 10;
  iVar6 = (int)sVar1;
  sVar2 = sVar1;
  if ((DAT_0007ede4 == 0xff) || (sVar2 = DAT_0007ede4, DAT_0007ede4 - iVar6 < 6)) {
    DAT_0007ede4 = sVar2;
    DAT_00482a90 = 0;
  }
  else {
    DAT_00482a90 = DAT_00482a90 + 1;
  }
  if (DAT_00482a8c < 1) {
    return 0;
  }
  if (DAT_00080fb4 == 1) {
    return 0;
  }
  if ((iVar6 < 0x14) || ((1 < DAT_00482a90 && (uVar3 - 0x15 < 9)))) {
    iVar4 = FUN_00019ab4();
    iVar7 = 100;
    iVar6 = (0x14 - iVar6) * 100;
    if (iVar6 < 4000) {
      iVar7 = iVar6 / 0x28;
    }
    if (4 < DAT_0007eb9c) {
      iVar6 = (iVar4 - DAT_00482a8c) + iVar7;
      if (iVar6 < 0) {
        iVar6 = -iVar6;
      }
      snprintf(acStack_820,0x800,"curr_vol = %d, g_voltage = %d,compensate_voltage = %d, abs = %d",
               iVar4,DAT_00482a8c,iVar7,iVar6);
      FUN_0002e584(4,acStack_820,0);
    }
    iVar5 = iVar7 + DAT_00482a8c;
    iVar6 = iVar4 - iVar5;
    if (iVar6 < 0) {
      iVar6 = -iVar6;
    }
    if (iVar6 < 0x14) {
      DAT_0007ede4 = sVar1;
      return 0;
    }
    iVar6 = iVar4 + 0x31;
    if (iVar6 < iVar5) {
      do {
        iVar5 = FUN_00019ac4();
        iVar8 = iVar6 + 0x14;
        if (iVar5 <= iVar6) {
          iVar5 = iVar7 + DAT_00482a8c;
          break;
        }
        iVar4 = iVar4 + 0x14;
        FUN_000195a8(iVar4);
        usleep(200000);
        iVar5 = iVar7 + DAT_00482a8c;
        iVar6 = iVar8;
      } while (iVar8 < iVar5);
    }
    if (iVar4 == iVar5) {
      DAT_0007ede4 = sVar1;
      return 0;
    }
  }
  else if (uVar3 - 0x1e < 0x16) {
    iVar7 = FUN_00019ab4();
    iVar6 = iVar7;
    if (DAT_00482a8c < iVar7 + -0x13) {
      do {
        iVar7 = iVar6 + -0x14;
        FUN_000195a8(iVar7);
        usleep(200000);
        iVar4 = iVar6 + -0x27;
        iVar6 = iVar7;
      } while (DAT_00482a8c < iVar4);
    }
    iVar5 = DAT_00482a8c;
    if (DAT_00482a8c == iVar7) {
      DAT_0007ede4 = sVar1;
      return 0;
    }
  }
  else {
    __s1 = (char *)FUN_0001e0c0();
    iVar7 = strcmp(__s1,"NBS1902L");
    if (iVar7 != 0) {
      iVar6 = iVar6 + 10;
    }
    if (iVar6 < 0x32) {
      DAT_0007ede4 = sVar1;
      return 0;
    }
    iVar6 = FUN_00019ab4();
    iVar5 = DAT_00482a8c + -0x14;
    if (iVar5 == iVar6) {
      DAT_0007ede4 = sVar1;
      return 0;
    }
  }
  FUN_000195a8(iVar5);
  DAT_0007ede4 = sVar1;
  return 0;
}

