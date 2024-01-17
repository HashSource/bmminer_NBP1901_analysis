
undefined4 * FUN_0004ea14(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  double dVar2;
  
  if ((!NAN((double)CONCAT44(param_2,param_1)) && !NAN((double)CONCAT44(param_2,param_1))) &&
     (dVar2 = ABS((double)CONCAT44(param_2,param_1)),
     dVar2 == DAT_0004ea68 || dVar2 < DAT_0004ea68 != (NAN(dVar2) || NAN(DAT_0004ea68)))) {
    puVar1 = (undefined4 *)FUN_0004d880(0x10);
    if (puVar1 != (undefined4 *)0x0) {
      puVar1[2] = param_1;
      puVar1[3] = param_2;
      *puVar1 = 4;
      puVar1[1] = 1;
    }
    return puVar1;
  }
  return (undefined4 *)0x0;
}

