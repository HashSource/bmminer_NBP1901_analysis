
void FUN_0005c6f4(void *param_1)

{
  if (param_1 != (void *)0x0) {
    FUN_0005df98(0,"src/spec.c",0x1cd,"zlog_spec_del[%p]",param_1);
    free(param_1);
    return;
  }
  FUN_0005df98(2,"src/spec.c",0x1cc,"a_spec is null or 0");
  return;
}

