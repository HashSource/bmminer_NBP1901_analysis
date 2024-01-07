
int FUN_0001a014(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint local_824;
  char acStack_820 [2052];
  
  if (DAT_0007edc8 == 2) {
    iVar3 = 0;
    iVar1 = 0;
    iVar4 = FUN_0001e29c(0);
    while( true ) {
      if (iVar4 != 0) {
        iVar7 = (&DAT_0007f8c4)[iVar1];
        iVar4 = FUN_0001e0f0();
        iVar2 = FUN_0001e130();
        iVar3 = iVar2 * iVar4 * iVar7 + iVar3;
      }
      iVar1 = iVar1 + 1;
      if (iVar1 == 4) break;
      iVar4 = FUN_0001e29c(iVar1);
    }
  }
  else {
    iVar3 = 0;
    uVar5 = 0;
    do {
      iVar1 = FUN_0001e29c(iVar3);
      uVar6 = uVar5;
      if ((((iVar1 != 0) &&
           (iVar1 = FUN_000183fc(iVar3,(undefined)DAT_00080fb4,&local_824), iVar1 == 0)) &&
          (uVar6 = local_824, uVar5 != 0)) && (uVar6 = uVar5, local_824 <= uVar5)) {
        uVar6 = local_824;
      }
      iVar3 = iVar3 + 1;
      uVar5 = uVar6;
    } while (iVar3 != 4);
    iVar3 = 0;
    iVar1 = 0;
    do {
      iVar4 = iVar1 + 1;
      iVar1 = FUN_0001e29c(iVar1);
      if (iVar1 != 0) {
        iVar1 = FUN_0001e0f0();
        iVar2 = FUN_0001e130();
        iVar3 = iVar2 * uVar6 * iVar1 + iVar3;
      }
      iVar1 = iVar4;
    } while (iVar4 != 4);
  }
  DAT_0007f8d8 = iVar3 / 1000;
  if (4 < DAT_0007eb9c) {
    snprintf(acStack_820,0x800,"ideal_hash_rate = %d\n",DAT_0007f8d8);
    FUN_0002e584(4,acStack_820,0);
  }
  return DAT_0007f8d8;
}

