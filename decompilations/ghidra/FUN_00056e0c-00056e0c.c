
void FUN_00056e0c(void *param_1)

{
  if (param_1 != (void *)0x0) {
    if (*(int *)((int)param_1 + 0x1428) != 0) {
      FUN_00058750();
    }
    if (*(int *)((int)param_1 + 0x2440) != 0) {
      FUN_00057b24();
    }
    if (*(int *)((int)param_1 + 0x2430) != 0) {
      FUN_0005766c();
    }
    if (*(int *)((int)param_1 + 0x2444) != 0) {
      FUN_0005d580();
    }
    if (*(int *)((int)param_1 + 0x2448) != 0) {
      FUN_0005d580();
    }
    free(param_1);
    FUN_0005df98(0,"src/conf.c",0x5a,"zlog_conf_del[%p]");
    return;
  }
  FUN_0005df98(2,"src/conf.c",0x53,"a_conf is null or 0");
  return;
}

