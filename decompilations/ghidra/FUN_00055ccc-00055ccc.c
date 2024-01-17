
void FUN_00055ccc(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (param_1 == 0) {
    FUN_0005df98(2,"src/category_table.c",0x15,"categories is null or 0");
    return;
  }
  FUN_0005df98(param_2,"src/category_table.c",0x16,"-category_table[%p]-",param_1);
  for (iVar1 = FUN_0005de60(param_1); iVar1 != 0; iVar1 = FUN_0005dea8(param_1,iVar1)) {
    FUN_000557c4(*(undefined4 *)(iVar1 + 8),param_2);
  }
  return;
}

