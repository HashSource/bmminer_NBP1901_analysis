
void FUN_00055b28(int param_1)

{
  if (param_1 == 0) {
    FUN_0005df98(2,"src/category.c",0xb0,"a_category is null or 0");
    return;
  }
  if (*(int *)(param_1 + 0x44c) != 0) {
    FUN_0005d580();
    *(undefined4 *)(param_1 + 0x44c) = 0;
    memset((void *)(param_1 + 0x428),0,0x20);
    return;
  }
  FUN_0005df98(1,"src/category.c",0xb2,"a_category->fit_rules_backup is NULL, never update before");
  return;
}

