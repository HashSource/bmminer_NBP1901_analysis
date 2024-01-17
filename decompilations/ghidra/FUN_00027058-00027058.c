
void FUN_00027058(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  
  iVar3 = DAT_00482a6c;
  iVar4 = 0;
  uVar1 = DAT_0007eb64 + (uint)(DAT_0007eb70 * (DAT_00482a6c - DAT_0007eb64)) / 100;
  DAT_00482a8c = (((DAT_0007eb70 * (DAT_00482a8c - DAT_0007eb60)) / 100 + DAT_0007eb60) / 10) * 10;
  DAT_00482a6c = uVar1 / 5 + ((uint)((ulonglong)uVar1 * 0xcccccccd >> 0x20) & 0xfffffffc);
  do {
    iVar2 = FUN_0001e29c(iVar4);
    if (iVar2 != 0) {
      FUN_0001aae4(DAT_0007edd0,iVar4,DAT_00482a70,iVar3,DAT_00482a6c,0);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 != 4);
  iVar3 = FUN_00019ab4();
  uVar1 = DAT_00482a8c - iVar3;
  if ((int)uVar1 < 0) {
    uVar1 = -uVar1;
  }
  if (uVar1 / 0x14 < 2) {
    iVar4 = 0;
  }
  else {
    uVar5 = 1;
    do {
      uVar6 = uVar5 + 1;
      iVar4 = uVar5 * -0x14;
      if (iVar3 < DAT_00482a8c) {
        iVar4 = uVar5 * 0x14;
      }
      iVar4 = iVar3 + iVar4;
      FUN_000195a8(iVar4);
      usleep(200000);
      uVar5 = uVar6;
    } while (uVar1 / 0x14 != uVar6);
  }
  if (DAT_00482a8c != iVar4) {
    FUN_000195a8();
  }
  FUN_0001ead4(0xf);
  return;
}

