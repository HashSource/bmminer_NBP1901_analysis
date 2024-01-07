
undefined4 FUN_00035b1c(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  char acStack_820 [2052];
  
  uVar4 = 0;
  iVar3 = 0;
  do {
    iVar2 = FUN_0001e29c(iVar3);
    iVar1 = (iVar3 + 0x408) * 4;
    if (iVar2 != 0) {
      fVar5 = *(float *)(DAT_004fcb28 + iVar1);
      fVar6 = *(float *)(*(int *)(DAT_004fcb28 + 8) + 0x14);
      if (3 < DAT_0007eb9c) {
        snprintf(acStack_820,0x800,
                 "chain = %d, nonce_rate_max = %.4f, nonce_rate_threshold = %.4f\n",iVar3,
                 (double)fVar5,(double)fVar6);
        FUN_0002e584(3,acStack_820,0);
        fVar5 = *(float *)(DAT_004fcb28 + iVar1);
        fVar6 = *(float *)(*(int *)(DAT_004fcb28 + 8) + 0x14);
      }
      if (fVar5 < fVar6) {
        uVar4 = 1;
        *(undefined4 *)(DAT_004fcb28 + (iVar3 + 0x410) * 4) = 1;
      }
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 4);
  return uVar4;
}

