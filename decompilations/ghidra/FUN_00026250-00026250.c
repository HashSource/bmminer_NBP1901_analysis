
void FUN_00026250(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  double dVar9;
  undefined8 uVar10;
  char acStack_828 [2052];
  
  if (DAT_00080f60 == 1) {
    memset(DAT_00026478,0,0x20);
    DAT_00080f60 = 0;
  }
  iVar2 = FUN_00026104();
  iVar5 = iVar2 - DAT_0007fa38;
  puVar4 = &DAT_0007fa18;
  iVar3 = 0;
  DAT_0007fa38 = iVar2;
  do {
    while( true ) {
      iVar2 = FUN_0001e29c(iVar3);
      uVar1 = DAT_0007f8f0;
      if (iVar2 != 0) break;
LAB_000263e0:
      iVar3 = iVar3 + 1;
      puVar4 = puVar4 + 2;
      if (iVar3 == 4) goto LAB_000263f0;
    }
    uVar6 = (&DAT_0099ed98)[iVar3 * 2];
    uVar7 = (&DAT_0099ed9c)[iVar3 * 2];
    uVar8 = uVar6 - *puVar4;
    uVar10 = FUN_00060120(-uVar8,(uVar8 & 0xfffffffe) +
                                 ((uint)(uVar8 * -0x80000000 < uVar8) * -2 -
                                 (uVar7 - (puVar4[1] + (uint)(uVar6 < *puVar4)))) +
                                 (uint)CARRY4(uVar8 * 0x7fffffff,uVar8 * 0x7fffffff) +
                                 (uint)CARRY4(uVar8 * -2,uVar8),iVar5,iVar5 >> 0x1f);
    FUN_00060120((int)uVar10,(int)((ulonglong)uVar10 >> 0x20),DAT_00026470,DAT_00026474);
    dVar9 = (double)FUN_000600b4();
    *puVar4 = uVar6;
    puVar4[1] = uVar7;
    *(double *)(&DAT_0058e040 + (iVar3 * 0x18 + uVar1 % 0x18) * 8) = dVar9;
    if (((uVar1 < 2) ||
        (*(double *)(&DAT_0058e040 + (iVar3 * 0x18 + (uVar1 - 1) % 0x18) * 8) * 0.75 <= dVar9)) ||
       (DAT_0007eb9c < 4)) goto LAB_000263e0;
    snprintf(acStack_828,0x800,"chain %d hash rate %.2f low in %ld mins",iVar3,dVar9,iVar5 / 0x3c);
    iVar3 = iVar3 + 1;
    FUN_0002e584(3,acStack_828,0);
    puVar4 = puVar4 + 2;
  } while (iVar3 != 4);
LAB_000263f0:
  DAT_0007f8f0 = DAT_0007f8f0 + 1;
  return;
}

