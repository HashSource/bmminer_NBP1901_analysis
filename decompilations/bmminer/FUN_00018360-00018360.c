
undefined4 FUN_00018360(int param_1,char *param_2,uint param_3)

{
  size_t sVar1;
  char *__s;
  char acStack_808 [2040];
  
  if ((DAT_0007f814 == 0) || (*(char *)(DAT_0007f814 + 0x1c) == '\0')) {
    if (DAT_0007eb9c < 4) {
      return 0xffffffff;
    }
    snprintf(acStack_808,0x800,"No ft ver, chain = %d\n",param_1);
    FUN_0002e584(3,acStack_808,0);
    return 0xffffffff;
  }
  if (param_2 == (char *)0x0) {
    return 0xfffffffe;
  }
  __s = *(char **)(*(int *)(DAT_0007f814 + param_1 * 4) + 0x10);
  sVar1 = strlen(__s);
  if (sVar1 < param_3) {
    snprintf(param_2,param_3,"%s",__s);
    return 0;
  }
  return 0xfffffffe;
}

