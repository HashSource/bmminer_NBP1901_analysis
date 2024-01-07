
undefined4 FUN_000433d0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    return 0;
  }
  iVar1 = FUN_00043804(*param_1);
  if (iVar1 != 0) {
    FUN_00044000(*(undefined4 *)(iVar1 + 0x14),param_3);
    return 1;
  }
  return 0;
}

