
void FUN_0005f474(void *param_1)

{
  if (param_1 != (void *)0x0) {
    FUN_0005df98(0,"src/level.c",0x22,"zlog_level_del[%p]",param_1);
    free(param_1);
    return;
  }
  FUN_0005df98(2,"src/level.c",0x21,"a_level is null or 0");
  return;
}

