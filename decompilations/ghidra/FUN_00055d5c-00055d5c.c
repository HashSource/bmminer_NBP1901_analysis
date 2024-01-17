
void FUN_00055d5c(int param_1)

{
  if (param_1 != 0) {
    FUN_0005d890();
    FUN_0005df98(0,"src/category_table.c",0x24,"zlog_category_table_del[%p]",param_1);
    return;
  }
  FUN_0005df98(2,"src/category_table.c",0x22,"categories is null or 0");
  return;
}

