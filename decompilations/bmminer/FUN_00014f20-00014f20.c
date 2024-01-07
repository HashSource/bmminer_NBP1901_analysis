
undefined4 FUN_00014f20(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  do {
    uVar1 = FUN_0001e29c(uVar4);
    if (uVar1 != 0) {
      for (iVar3 = 0; iVar2 = FUN_00014434(uVar1), iVar3 < iVar2; iVar3 = iVar3 + 1) {
        iVar2 = FUN_0001e170();
        uVar1 = uVar4 & 0xff;
        if (iVar2 != 0) {
          FUN_00051164(uVar4 & 0xff,
                       (int)(short)*(undefined4 *)(DAT_0007f7b4 + iVar3 * 4) *
                       (int)(short)DAT_0007f7b0 & 0xff);
          uVar1 = usleep(10000);
        }
      }
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 != 4);
  return 0;
}

