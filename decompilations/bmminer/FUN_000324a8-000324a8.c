
void FUN_000324a8(void)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint local_13c [74];
  
  FUN_0003fe98(local_13c);
  FUN_00031720(local_13c);
  if (local_13c[0] != 0) {
    puVar4 = local_13c;
    uVar5 = 0;
    uVar1 = local_13c[0];
    do {
      if (puVar4[2] != 0) {
        puVar3 = puVar4 + 2;
        uVar2 = 0;
        do {
          puVar3 = puVar3 + 1;
          FUN_0001e200(*puVar3,1);
          uVar2 = uVar2 + 1;
          uVar1 = local_13c[0];
        } while (uVar2 < puVar4[2]);
      }
      uVar5 = uVar5 + 1;
      puVar4 = puVar4 + 0x12;
    } while (uVar5 < uVar1);
  }
  return;
}

