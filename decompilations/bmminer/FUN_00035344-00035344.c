
void FUN_00035344(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;
  float fVar10;
  char acStack_820 [2052];
  
  if ((((byte)DAT_0099edbc & 2) != 0) && (DAT_0099edc0._2_1_ < 0x65)) {
    FUN_00013fb0();
    if (DAT_00482a94 != 0) {
      return;
    }
    if (3 < DAT_0007eb9c) {
      snprintf(acStack_820,0x800,"fan_etf: Set fixed fan speed=%d\n",(uint)DAT_0099edc0._2_1_);
      FUN_0002e584(3,acStack_820,0);
    }
    DAT_00482a94 = 1;
    return;
  }
  iVar1 = FUN_0001572c();
  iVar2 = FUN_00015508();
  uVar3 = FUN_000155c4();
  iVar4 = FUN_0001572c();
  uVar5 = iVar2 - iVar4;
  if (DAT_0007ede8 != 0xff) {
    iVar4 = DAT_0007ede8 - iVar1;
    if (iVar4 < 0) {
      iVar4 = -iVar4;
    }
    if (4 < iVar4) {
      uVar6 = DAT_00482a98 + 1;
      if (1 < (int)uVar6) {
        uVar6 = 2;
      }
      bVar8 = (int)DAT_00482a98 < 1;
      DAT_00482a98 = uVar6;
      goto LAB_000353e4;
    }
  }
  bVar8 = (int)DAT_00482a98 < 2;
  DAT_00482a98 = DAT_00482a98 - 1 & ~((int)(DAT_00482a98 - 1) >> 0x1f);
LAB_000353e4:
  DAT_00482a9c = (uint)!bVar8;
  DAT_0007ede8 = iVar1;
  if (iVar2 < 0x49) {
    iVar7 = (uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f);
    bVar9 = SBORROW4(iVar7,0x20);
    iVar4 = iVar7 + -0x20;
    bVar8 = iVar7 == 0x20;
    if (iVar7 < 0x21) {
      bVar9 = SBORROW4(iVar1,0x32);
      iVar4 = iVar1 + -0x32;
      bVar8 = iVar1 == 0x32;
    }
    if ((bVar8 || iVar4 < 0 != bVar9) && (DAT_00482a9c == 0)) {
      DAT_00482a94 = DAT_00482a9c;
      if (iVar7 < 0x1c) {
        if (0x16 < iVar7) {
          if (DAT_0007eb9c < 5) {
            return;
          }
          uVar3 = FUN_0001e4b0();
          snprintf(acStack_820,0x800,"max temp = %04d, diff = %04d, = pwm %04d\n",iVar2,iVar7,uVar3)
          ;
          FUN_0002e584(4,acStack_820,0);
          return;
        }
        iVar1 = FUN_0001e4b0();
        fVar10 = ((25.0 - (float)(longlong)iVar7) / 25.0) * 10.0;
        uVar5 = (uint)(0.0 < fVar10) * (int)fVar10 & 0xff;
        if ((int)(iVar1 - uVar5) < 0x28) {
          uVar5 = 0x28;
        }
        else {
          iVar1 = FUN_0001e4b0();
          uVar5 = iVar1 - uVar5 & 0xff;
        }
        if (4 < DAT_0007eb9c) {
          uVar3 = FUN_0001e4b0();
          snprintf(acStack_820,0x800,"max temp = %04d, diff = %04d, - pwm form %04d to %04d\n",iVar2
                   ,iVar7,uVar3,uVar5);
          FUN_0002e584(4,acStack_820,0);
        }
        if (0x43 < iVar2) {
          return;
        }
      }
      else {
        iVar1 = FUN_0001e4b0();
        fVar10 = (((float)(longlong)iVar7 - 25.0) / 25.0) * 10.0;
        uVar5 = (uint)(0.0 < fVar10) * (int)fVar10 & 0xff;
        if ((int)(uVar5 + iVar1) < 100) {
          iVar1 = FUN_0001e4b0();
          uVar5 = uVar5 + iVar1 & 0xff;
        }
        else {
          uVar5 = 100;
        }
        if (4 < DAT_0007eb9c) {
          uVar3 = FUN_0001e4b0();
          snprintf(acStack_820,0x800,"max temp = %04d, diff = %04d, + pwm form %04d to %04d\n",iVar2
                   ,iVar7,uVar3,uVar5);
          FUN_0002e584(4,acStack_820,0);
        }
      }
      FUN_00013fb0(uVar5);
      return;
    }
  }
  if (DAT_00482a94 == 0) {
    if (4 < DAT_0007eb9c) {
      snprintf(acStack_820,0x800,
               "min pic temp = %d max pic temp = %d pic diff = %d, max chip temp = %d, last diff continuous_time = %d"
               ,iVar1,iVar2,uVar5,uVar3,DAT_00482a98);
      FUN_0002e584(4,acStack_820,0);
    }
    DAT_00482a94 = 1;
  }
  FUN_00013fb0(100);
  return;
}

