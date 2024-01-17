
undefined4 * FUN_0004e144(int param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  
  if ((param_1 != 0) && ((param_3 != 0 || (param_1 = FUN_0004d8b0(), param_1 != 0)))) {
    puVar1 = (undefined4 *)FUN_0004d880(0x10);
    if (puVar1 != (undefined4 *)0x0) {
      puVar1[2] = param_1;
      puVar1[3] = param_2;
      *puVar1 = 2;
      puVar1[1] = 1;
      return puVar1;
    }
    FUN_0004d898(param_1);
    return (undefined4 *)0x0;
  }
  return (undefined4 *)0x0;
}

