
void FUN_0004bdc4(undefined4 *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  FUN_0004b8ac();
  puVar2 = param_1 + 3;
  uVar1 = param_1[2];
  if (1 << (uVar1 & 0xff) != 0) {
    puVar3 = (undefined4 *)param_1[1];
    puVar4 = puVar3;
    do {
      puVar4[1] = puVar2;
      puVar5 = puVar4 + 2;
      *puVar4 = puVar2;
      puVar4 = puVar5;
    } while (puVar5 != (undefined4 *)((int)puVar3 + (8 << (uVar1 & 0xff))));
  }
  param_1[4] = puVar2;
  param_1[3] = puVar2;
  param_1[6] = param_1 + 5;
  param_1[5] = param_1 + 5;
  *param_1 = 0;
  return;
}

