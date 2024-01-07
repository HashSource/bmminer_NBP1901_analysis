
void FUN_0005e70c(void **param_1)

{
  if (*param_1 != (void *)0x0) {
    free(*param_1);
  }
  FUN_0005df98(0,"src/buf.c",0x52,"zlog_buf_del[%p]",param_1);
  free(param_1);
  return;
}

