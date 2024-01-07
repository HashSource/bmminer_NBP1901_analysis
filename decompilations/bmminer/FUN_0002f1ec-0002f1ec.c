
void FUN_0002f1ec(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 auStack_30 [9];
  
  puVar1 = auStack_30;
  puVar2 = DAT_0002f248;
  do {
    puVar2 = puVar2 + 1;
    *puVar1 = *puVar2;
    puVar1 = puVar1 + 1;
  } while (puVar2 != DAT_0002f248 + 8);
  local_b8 = 0;
  local_b4 = 0;
  FUN_0002f054(&local_b8,param_1,param_2);
  FUN_0002f100(&local_b8,param_3);
  return;
}

