
void FUN_00055870(void *param_1)

{
  if (param_1 != (void *)0x0) {
    if (*(int *)((int)param_1 + 0x448) != 0) {
      FUN_0005d580();
    }
    FUN_0005df98(0,"src/category.c",0x28,"zlog_category_del[%p]",param_1);
    free(param_1);
    return;
  }
  FUN_0005df98(2,"src/category.c",0x26,"a_category is null or 0");
  return;
}

