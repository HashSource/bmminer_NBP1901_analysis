
undefined4 FUN_000540c8(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  memset((void *)(param_1 + 0x408),0,0x20);
  uVar2 = param_2 + 7;
  if (-1 < (int)param_2) {
    uVar2 = param_2;
  }
  uVar3 = param_2 & 7;
  iVar1 = (int)uVar2 >> 3;
  if ((int)param_2 < 1) {
    uVar3 = -(-param_2 & 7);
  }
  *(byte *)(param_1 + iVar1 + 0x408) =
       ~(byte)(0xff << (8 - uVar3 & 0xff)) | *(byte *)(param_1 + iVar1 + 0x408);
  memset((void *)((int)(void *)(param_1 + 0x408) + iVar1 + 1),0xff,0x1f - iVar1);
  return 0;
}

