
void FUN_0001eeb8(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  uint auStack_bc [5];
  uint auStack_a8 [33];
  uint local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 uStack_4;
  
  puVar3 = &local_10;
  local_10 = param_1;
  local_c = param_2;
  local_8 = param_3;
  uStack_4 = param_4;
  memset(auStack_bc + 2,0,0x8c);
  iVar6 = 2;
  auStack_bc[0] =
       local_10 << 0x18 | (local_10 >> 8 & 0xff) << 0x10 | (local_10 >> 0x10 & 0xff) << 8 |
       local_10 >> 0x18;
  auStack_bc[1] = local_c;
  puVar1 = puVar3;
  do {
    auStack_bc[iVar6] =
         (uint)*(byte *)((int)puVar1 + 9) << 0x10 | (uint)*(byte *)(puVar1 + 2) << 0x18 |
         (uint)*(byte *)((int)puVar1 + 0xb) | (uint)*(byte *)((int)puVar1 + 10) << 8;
    iVar6 = iVar6 + 1;
    puVar1 = puVar1 + 1;
  } while (iVar6 != 5);
  puVar1 = auStack_a8;
  do {
    puVar5 = puVar3 + 8;
    puVar2 = puVar1;
    puVar4 = puVar3;
    do {
      puVar3 = puVar4 + 1;
      *puVar2 = (uint)*(byte *)((int)puVar4 + 0x15) << 0x10 | (uint)*(byte *)(puVar4 + 5) << 0x18 |
                (uint)*(byte *)((int)puVar4 + 0x17) | (uint)*(byte *)((int)puVar4 + 0x16) << 8;
      puVar2 = puVar2 + 1;
      puVar4 = puVar3;
    } while (puVar3 != puVar5);
    puVar1 = puVar1 + 8;
  } while (puVar3 != (uint *)&stack0x00000070);
  FUN_0004587c(auStack_bc,0x94);
  return;
}

