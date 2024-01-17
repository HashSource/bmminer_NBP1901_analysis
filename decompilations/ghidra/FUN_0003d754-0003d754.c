
char * FUN_0003d754(uint *param_1,size_t *param_2)

{
  size_t sVar1;
  char *__s;
  int iVar2;
  int *piVar3;
  uint uVar4;
  
  *param_1 = 0;
  if (DAT_0099ee24 == 0) {
LAB_0003d7ec:
    __s = (char *)0x0;
  }
  else {
    piVar3 = DAT_0099ee1c;
    if (DAT_0099ee1c[1] == 8) {
      iVar2 = 0x1c;
      uVar4 = 1;
      do {
        *param_1 = uVar4;
        if (DAT_0099ee24 <= uVar4) goto LAB_0003d7ec;
        piVar3 = (int *)((int)DAT_0099ee1c + iVar2);
        iVar2 = iVar2 + 0x1c;
        uVar4 = uVar4 + 1;
      } while (piVar3[1] == 8);
    }
    __s = (char *)(*piVar3 + 1);
    sVar1 = strcspn(__s,"|= ");
    *param_2 = sVar1;
  }
  return __s;
}

