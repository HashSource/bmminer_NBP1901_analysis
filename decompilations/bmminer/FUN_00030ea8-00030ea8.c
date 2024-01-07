
void FUN_00030ea8(void *param_1,void *param_2,size_t param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  char *__format;
  char acStack_810 [2048];
  
  if ((int)(param_3 - 1) < 0) {
    if (((DAT_00590404 == '\0') && (DAT_00482a5c == '\0')) && (DAT_0007eba0 < 3)) {
      return;
    }
    __format = "ERR: Asked to memcpy %u bytes from %s %s():%d";
  }
  else if (param_1 == (void *)0x0) {
    if (((DAT_00590404 == '\0') && (DAT_00482a5c == '\0')) && (DAT_0007eba0 < 3)) {
      return;
    }
    __format = "ERR: Asked to memcpy %u bytes to NULL from %s %s():%d";
  }
  else {
    if (param_2 != (void *)0x0) {
      memcpy(param_1,param_2,param_3);
      return;
    }
    if (((DAT_00590404 == '\0') && (DAT_00482a5c == '\0')) && (DAT_0007eba0 < 3)) {
      return;
    }
    __format = "ERR: Asked to memcpy %u bytes from NULL from %s %s():%d";
  }
  snprintf(acStack_810,0x800,__format,param_3,param_4,param_5,param_6);
  FUN_0002e584(3,acStack_810,0);
  return;
}

