
void FUN_00057b24(int param_1)

{
  if (param_1 != 0) {
    FUN_0005d580();
    FUN_0005df98(0,"src/level_list.c",0x27,"zc_level_list_del[%p]",param_1);
    return;
  }
  FUN_0005df98(2,"src/level_list.c",0x25,"levels is null or 0");
  return;
}

