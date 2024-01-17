
void FUN_00055f14(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    FUN_0005df98(2,"src/category_table.c",0x5b,"categories is null or 0");
    return;
  }
  iVar1 = FUN_0005de60();
  if (iVar1 == 0) {
    return;
  }
  do {
    FUN_00055ba0(*(undefined4 *)(iVar1 + 8));
    iVar1 = FUN_0005dea8(param_1,iVar1);
  } while (iVar1 != 0);
  return;
}

