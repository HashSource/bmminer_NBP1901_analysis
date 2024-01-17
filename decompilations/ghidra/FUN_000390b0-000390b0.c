
void FUN_000390b0(byte *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = DAT_005945b8;
  uVar3 = DAT_005945b8 + 1;
  iVar1 = uVar3 * 8;
  (&DAT_005945bc)[uVar3 * 2] = *(undefined4 *)(param_1 + 4);
  *(byte *)(&DAT_005945c0 + uVar3 * 2) = (byte)(((uint)param_1[3] << 0x1b) >> 0x1b);
  *(byte *)((int)&DAT_005945c0 + iVar1 + 1) = param_1[2];
  *(byte *)((int)&DAT_005945c0 + iVar1 + 2) = param_1[1];
  if (uVar2 < 0x1fe) {
    DAT_005945b8 = uVar3;
  }
  *(byte *)((int)&DAT_005945c0 + iVar1 + 3) = (byte)(((uint)*param_1 << 0x1c) >> 0x1c);
  if (0x1fd < uVar2) {
    DAT_005945b8 = 0;
  }
  if (DAT_005945c0 < 0x1ff) {
    DAT_005945c0 = DAT_005945c0 + 1;
  }
  else {
    DAT_005945c0 = 0x1ff;
  }
  return;
}

