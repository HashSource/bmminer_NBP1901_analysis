
void FUN_0001edf0(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  uint auStack_54 [5];
  uint auStack_40 [8];
  uint local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 uStack_4;
  
  local_10 = param_1;
  local_c = param_2;
  local_8 = param_3;
  uStack_4 = param_4;
  memset(auStack_54 + 2,0,0x2c);
  iVar4 = 2;
  auStack_54[0] =
       local_10 << 0x18 | (local_10 >> 8 & 0xff) << 0x10 | (local_10 >> 0x10 & 0xff) << 8 |
       local_10 >> 0x18;
  auStack_54[1] = local_c;
  puVar1 = &local_10;
  do {
    auStack_54[iVar4] =
         (uint)*(byte *)((int)puVar1 + 9) << 0x10 | (uint)*(byte *)(puVar1 + 2) << 0x18 |
         (uint)*(byte *)((int)puVar1 + 0xb) | (uint)*(byte *)((int)puVar1 + 10) << 8;
    iVar4 = iVar4 + 1;
    puVar1 = puVar1 + 1;
  } while (iVar4 != 5);
  puVar1 = auStack_40;
  puVar2 = &local_10;
  do {
    puVar3 = puVar2 + 1;
    *puVar1 = (uint)*(byte *)((int)puVar2 + 0x15) << 0x10 | (uint)*(byte *)(puVar2 + 5) << 0x18 |
              (uint)*(byte *)((int)puVar2 + 0x17) | (uint)*(byte *)((int)puVar2 + 0x16) << 8;
    puVar1 = puVar1 + 1;
    puVar2 = puVar3;
  } while (puVar3 != (uint *)&stack0x00000010);
  FUN_0004587c(auStack_54,0x34);
  return;
}

