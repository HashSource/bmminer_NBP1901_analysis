
int FUN_000580c0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  char *__s;
  int iVar1;
  int *piVar2;
  
  __s = (char *)calloc(1,0x808);
  if (__s == (char *)0x0) {
    piVar2 = __errno_location();
    FUN_0005df98(2,"src/mdc.c",0x36,"calloc fail, errno[%d]",*piVar2);
    FUN_0005df98(2,"src/mdc.c",0x60,"zlog_mdc_kv_new failed");
    iVar1 = -1;
  }
  else {
    snprintf(__s,0x401,"%s",param_2);
    iVar1 = snprintf(__s + 0x401,0x401,"%s",param_3);
    *(int *)(__s + 0x804) = iVar1;
    iVar1 = FUN_0005dac0(*param_1,__s,__s);
    if (iVar1 != 0) {
      FUN_0005df98(2,"src/mdc.c",0x65,"zc_hashtable_put fail");
      FUN_00057e98(__s);
      iVar1 = -1;
    }
  }
  return iVar1;
}

