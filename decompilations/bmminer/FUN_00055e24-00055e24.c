
undefined4 FUN_00055e24(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == 0) {
    FUN_0005df98(2,"src/category_table.c",0x3e,"categories is null or 0");
    return 0xffffffff;
  }
  iVar1 = FUN_0005de60();
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    iVar2 = FUN_00055a28(*(undefined4 *)(iVar1 + 8),param_2);
    if (iVar2 != 0) break;
    iVar1 = FUN_0005dea8(param_1,iVar1);
  }
  FUN_0005df98(2,"src/category_table.c",0x42,"zlog_category_update_rules fail, try rollback");
  return 0xffffffff;
}

