
void FUN_000584a4(int param_1)

{
  if (param_1 != 0) {
    FUN_0005d890();
    FUN_0005df98(0,"src/record_table.c",0x24,"zlog_record_table_del[%p]",param_1);
    return;
  }
  FUN_0005df98(2,"src/record_table.c",0x22,"records is null or 0");
  return;
}

