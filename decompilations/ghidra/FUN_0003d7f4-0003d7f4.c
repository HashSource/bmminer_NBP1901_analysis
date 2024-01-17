
char * FUN_0003d7f4(int param_1,size_t *param_2)

{
  byte bVar1;
  size_t sVar2;
  char *__s;
  
  bVar1 = *(byte *)(param_1 + *param_2);
  if ((bVar1 & 0xdf) == 0 || bVar1 == 0x3d) {
    __s = (char *)0x0;
  }
  else {
    __s = (char *)(param_1 + *param_2 + 2);
    sVar2 = strcspn(__s,"|= ");
    *param_2 = sVar2;
  }
  return __s;
}

