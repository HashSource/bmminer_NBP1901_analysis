
undefined4 FUN_00043414(undefined4 *param_1)

{
  undefined4 uVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00043d9c(*param_1);
    free(param_1);
  }
  return uVar1;
}

