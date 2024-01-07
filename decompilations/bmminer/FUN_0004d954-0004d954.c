
undefined4 FUN_0004d954(undefined4 *param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  
  param_1[2] = 0x10;
  param_1[1] = 0;
  puVar1 = (undefined *)FUN_0004d880();
  *param_1 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    *puVar1 = 0;
    uVar2 = 0;
  }
  return uVar2;
}

