
void FUN_00057f94(int *param_1)

{
  if (param_1 != (int *)0x0) {
    if (*param_1 != 0) {
      FUN_0005d890();
    }
    FUN_0005df98(0,"src/mdc.c",0x25,"zlog_mdc_del[%p]",param_1);
    free(param_1);
    return;
  }
  FUN_0005df98(2,"src/mdc.c",0x23,"a_mdc is null or 0");
  return;
}

