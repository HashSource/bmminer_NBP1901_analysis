
void FUN_0004e990(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_0004d880(0x10);
  if (puVar1 == (undefined4 *)0x0) {
    return;
  }
  puVar1[2] = param_1;
  puVar1[3] = param_2;
  *puVar1 = 3;
  puVar1[1] = 1;
  return;
}

