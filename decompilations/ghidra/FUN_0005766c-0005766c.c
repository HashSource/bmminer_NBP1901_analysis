
void FUN_0005766c(void *param_1)

{
  if (param_1 != (void *)0x0) {
    if (*(int *)((int)param_1 + 0x2004) != 0) {
      FUN_0005d580();
    }
    FUN_0005df98(0,"src/format.c",0x31,"zlog_format_del[%p]",param_1);
    free(param_1);
    return;
  }
  FUN_0005df98(2,"src/format.c",0x2d,"a_format is null or 0");
  return;
}

