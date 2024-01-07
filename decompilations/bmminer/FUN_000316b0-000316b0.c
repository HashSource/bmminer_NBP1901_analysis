
void FUN_000316b0(int param_1,uint *param_2,uint param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar4;
  uint *puVar3;
  
  if (param_3 >> 2 == 0) {
    return;
  }
  puVar1 = (uint *)(param_1 + -4);
  puVar2 = param_2;
  do {
    puVar3 = puVar2 + 1;
    uVar4 = *puVar2;
    puVar1 = puVar1 + 1;
    *puVar1 = uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 |
              uVar4 >> 0x18;
    puVar2 = puVar3;
  } while (puVar3 != (uint *)((int)param_2 + (param_3 & 0xfffffffc)));
  return;
}

