
undefined4 FUN_0001a308(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint *puVar5;
  uint uVar6;
  uint local_824;
  char acStack_820 [2052];
  
  iVar2 = FUN_00036538(&local_824);
  if (iVar2 == 0) {
    iVar2 = 0;
    do {
      iVar3 = FUN_0001e29c(iVar2);
      if (iVar3 != 0) {
        memset(&DAT_004fbaa0 + iVar2 * 0x100,0,0x400);
        iVar3 = FUN_000183fc(iVar2,(undefined)DAT_00080fb4,&DAT_004fbaa0 + iVar2 * 0x100);
        if (iVar3 != 0) {
LAB_0001a394:
          FUN_000356c4(3,0xff);
          FUN_00031d58(0xc,"Get frequency failed!");
          return 0xffffffff;
        }
        cVar1 = FUN_0001e0f0();
        if (cVar1 != '\0') {
          uVar6 = (&DAT_004fbaa0)[iVar2 * 0x100];
          if (local_824 < uVar6) {
LAB_0001a408:
            if (3 < DAT_0007eb9c) {
              snprintf(acStack_820,0x800,"Freq(%d) > Max_freq(%d), invalid!\n",uVar6,local_824);
              FUN_0002e584(3,acStack_820,0);
            }
            goto LAB_0001a394;
          }
          puVar5 = &DAT_004fbaa4 + iVar2 * 0x100;
          while (&DAT_004fbaa4 + iVar2 * 0x100 + (uint)(byte)(cVar1 - 1) != puVar5) {
            uVar6 = *puVar5;
            puVar5 = puVar5 + 1;
            if (local_824 < uVar6) goto LAB_0001a408;
          }
        }
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 != 4);
    uVar4 = 0;
  }
  else {
    FUN_000356c4(3,0xff);
    FUN_00031d58(0xc,"Get max freq failed!");
    uVar4 = 0xffffffff;
  }
  return uVar4;
}

