
int FUN_00057de4(int *param_1,char *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    FUN_0005df98(2,"src/level_list.c",0x84,"str is [%s], can\'t find level",param_2);
  }
  else {
    iVar4 = param_1[1];
    if (0 < iVar4) {
      piVar3 = (int *)(*param_1 + -4);
      iVar2 = 0;
      do {
        piVar3 = piVar3 + 1;
        if ((*piVar3 != 0) && (iVar1 = strcasecmp(param_2,(char *)(*piVar3 + 4)), iVar1 == 0)) {
          return iVar2;
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 != iVar4);
    }
    FUN_0005df98(2,"src/level_list.c",0x8e,"str[%s] can\'t found in level list",param_2);
  }
  return -1;
}

