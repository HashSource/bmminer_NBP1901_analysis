
undefined4 FUN_0005df98(int param_1,undefined4 param_2,undefined4 param_3,char *param_4)

{
  __pid_t _Var1;
  FILE *__stream;
  undefined auStack_30 [24];
  
  if (DAT_0058de44 == 0) {
    DAT_0058de44 = 1;
    DAT_0058de48 = getenv("ZLOG_PROFILE_DEBUG");
    DAT_0058de4c = getenv("ZLOG_PROFILE_ERROR");
  }
  if (param_1 == 1) {
    if (DAT_0058de4c == (char *)0x0) {
      return 0;
    }
    __stream = fopen64(DAT_0058de4c,"a");
    if (__stream == (FILE *)0x0) {
      return 0xffffffff;
    }
    FUN_0005df58(auStack_30);
    _Var1 = getpid();
    fprintf(__stream,"%s WARN  (%d:%s:%ld) ",auStack_30,_Var1,param_2,param_3);
  }
  else if (param_1 == 2) {
    if (DAT_0058de4c == (char *)0x0) {
      return 0;
    }
    __stream = fopen64(DAT_0058de4c,"a");
    if (__stream == (FILE *)0x0) {
      return 0xffffffff;
    }
    FUN_0005df58(auStack_30);
    _Var1 = getpid();
    fprintf(__stream,"%s ERROR (%d:%s:%ld) ",auStack_30,_Var1,param_2,param_3);
  }
  else if (param_1 == 0) {
    if (DAT_0058de48 == (char *)0x0) {
      return 0;
    }
    __stream = fopen64(DAT_0058de48,"a");
    if (__stream == (FILE *)0x0) {
      return 0xffffffff;
    }
    FUN_0005df58(auStack_30);
    _Var1 = getpid();
    fprintf(__stream,"%s DEBUG (%d:%s:%ld) ",auStack_30,_Var1,param_2,param_3);
  }
  else {
    __stream = (FILE *)0x0;
  }
  vfprintf(__stream,param_4,&stack0x00000000);
  fputc(10,__stream);
  fclose(__stream);
  return 0;
}

