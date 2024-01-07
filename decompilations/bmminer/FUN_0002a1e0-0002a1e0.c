
void FUN_0002a1e0(void **param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  void *__ptr;
  char acStack_808 [2040];
  
  __ptr = *param_1;
  if (__ptr != (void *)0x0) {
    FUN_0002a1a4(__ptr);
    free(__ptr);
    *param_1 = (void *)0x0;
    return;
  }
  if (((DAT_00590404 == '\0') && (DAT_00482a5c == '\0')) && (DAT_0007eba0 < 3)) {
    return;
  }
  snprintf(acStack_808,0x800,"Free work called with NULL work from %s %s:%d",param_2,param_3,param_4
          );
  FUN_0002e584(3,acStack_808,0);
  return;
}

