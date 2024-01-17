
void FUN_00017fd8(int param_1,char *param_2,uint param_3)

{
  size_t sVar1;
  char *__s;
  char acStack_810 [2048];
  
  if ((DAT_0007f814 == 0) || (*(char *)(DAT_0007f814 + 0x1c) == '\0')) {
    if (3 < DAT_0007eb9c) {
      snprintf(acStack_810,0x800,"No hash board sn, chain = %d.\n",param_1);
      FUN_0002e584(3,acStack_810,0);
      return;
    }
  }
  else if (param_2 != (char *)0x0) {
    __s = *(char **)(*(int *)(DAT_0007f814 + param_1 * 4) + 3);
    sVar1 = strlen(__s);
    if (sVar1 + 1 <= param_3) {
      snprintf(param_2,param_3,"%s",__s);
    }
  }
  return;
}

