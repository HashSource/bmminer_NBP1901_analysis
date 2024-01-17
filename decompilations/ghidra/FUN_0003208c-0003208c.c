
float FUN_0003208c(void)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  int iVar5;
  uint *puVar4;
  
  if (DAT_0007edc8 == 2) {
    iVar5 = 0;
    do {
      iVar2 = FUN_0001e29c(iVar5);
      if ((iVar2 != 0) && (iVar2 = FUN_0001e0f0(), uVar1 = DAT_00482a6c, 0 < iVar2)) {
        puVar3 = &DAT_004fbaa0 + iVar5 * 0x100;
        do {
          puVar4 = puVar3 + 1;
          *puVar3 = uVar1;
          puVar3 = puVar4;
        } while (puVar4 != &DAT_004fbaa0 + iVar2 + iVar5 * 0x100);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 != 4);
    if (DAT_0007eb74 != 0.0 && DAT_0007eb74 < 0.0 == NAN(DAT_0007eb74)) {
      FUN_0001a870(DAT_00482a70,DAT_0007edcc,DAT_00482a6c);
      if (DAT_0007eb74 == 0.0 || DAT_0007eb74 < 0.0 != NAN(DAT_0007eb74)) goto LAB_00032138;
      goto LAB_000320c4;
    }
  }
  if (DAT_0007eb74 == 0.0 || DAT_0007eb74 < 0.0 != NAN(DAT_0007eb74)) {
LAB_00032138:
    DAT_00482a6c = FUN_0001ad08(DAT_0007edd0,&DAT_004fbaa0,DAT_00482a70,1);
    return (float)(ulonglong)DAT_00482a6c;
  }
LAB_000320c4:
  return (float)(ulonglong)DAT_00482a6c;
}

