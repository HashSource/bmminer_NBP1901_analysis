
void FUN_00057364(void *param_1)

{
  if (param_1 != (void *)0x0) {
    if (*(void **)((int)param_1 + 0x174) != (void *)0x0) {
      free(*(void **)((int)param_1 + 0x174));
    }
    FUN_0005df98(0,"src/event.c",0x32,"zlog_event_del[%p]",param_1);
    free(param_1);
    return;
  }
  FUN_0005df98(2,"src/event.c",0x30,"a_event is null or 0");
  return;
}

