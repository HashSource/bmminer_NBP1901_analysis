
char * FUN_0003d320(char *param_1,undefined *param_2)

{
  int iVar1;
  size_t sVar2;
  char *__s;
  
  iVar1 = strcasecmp(param_1,"yes");
  if ((iVar1 == 0) || (iVar1 = strcasecmp(param_1,"true"), iVar1 == 0)) {
    *param_2 = 1;
    return (char *)0x0;
  }
  iVar1 = strcasecmp(param_1,"no");
  if ((iVar1 != 0) && (iVar1 = strcasecmp(param_1,"false"), iVar1 != 0)) {
    sVar2 = strlen(param_1);
    __s = (char *)malloc(sVar2 + 0x16);
    sprintf(__s,"Invalid argument \'%s\'",param_1);
    return __s;
  }
  *param_2 = 0;
  return (char *)0x0;
}

