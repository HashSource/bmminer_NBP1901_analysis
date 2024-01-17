
undefined4 FUN_00044698(int param_1,int param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_3 != 0) {
    puVar1 = (undefined *)(DAT_00505108 + param_1 * 0x40 + 0x1f);
    puVar2 = (undefined *)(param_2 + -1);
    do {
      puVar1 = puVar1 + 1;
      puVar2 = puVar2 + 1;
      *puVar2 = *puVar1;
    } while (puVar2 != (undefined *)(param_2 + param_3 + -1));
  }
  return 0;
}

