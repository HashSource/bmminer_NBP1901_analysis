
void FUN_000582a0(void *param_1)

{
  if (param_1 != (void *)0x0) {
    FUN_0005df98(0,"src/record.c",0x16,"zlog_record_del[%p]",param_1);
    free(param_1);
    return;
  }
  FUN_0005df98(2,"src/record.c",0x15,"a_record is null or 0");
  return;
}

