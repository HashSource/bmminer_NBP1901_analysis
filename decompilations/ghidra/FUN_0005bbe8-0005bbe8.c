
uint FUN_0005bbe8(char *param_1,char *param_2)

{
  int iVar1;
  size_t sVar2;
  size_t __n;
  
  if (param_1 == (char *)0x0) {
    FUN_0005df98(2,"src/rule.c",0x3f6,"a_rule is null or 0");
    return 0xffffffff;
  }
  if (param_2 != (char *)0x0) {
    if (((*param_1 != '*') || (param_1[1] != '\0')) && (iVar1 = strcmp(param_1,param_2), iVar1 != 0)
       ) {
      sVar2 = strlen(param_1);
      if (param_1[sVar2 - 1] != '_') {
        return 0;
      }
      __n = strlen(param_2);
      if (sVar2 - 1 != __n) {
        __n = sVar2;
      }
      iVar1 = strncmp(param_1,param_2,__n);
      return (uint)(iVar1 == 0);
    }
    return 1;
  }
  FUN_0005df98(2,"src/rule.c",0x3f7,"category is null or 0");
  return 0xffffffff;
}

