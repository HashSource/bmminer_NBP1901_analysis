
undefined4
FUN_0002e4f0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char acStack_810 [2052];
  
  if (*(char *)(param_1 + 1) == '\0') {
    snprintf(acStack_810,0x800,"Store %s can\'t %s() the list - from %s %s() line %d in %s %s():%d",
             *param_1,DAT_0002e580,param_2,param_3,param_4,"klist.c",DAT_0002e580,0x1a8);
    FUN_0002e584(3,acStack_810,1);
    FUN_0002a574(1);
  }
  free(param_1);
  return 0;
}

