
void FUN_00024264(char *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *__s;
  
  iVar6 = 0;
  iVar5 = 0;
  uVar1 = FUN_00019ab4();
  iVar2 = 0;
  __s = param_1;
  do {
    iVar4 = iVar2 + 1;
    iVar2 = FUN_0001e29c(iVar2);
    if (iVar2 != 0) {
      iVar2 = sprintf(__s,"chain%d_voltage=%d;",iVar4,uVar1);
      iVar6 = iVar6 + 1;
      iVar3 = sprintf(param_1 + iVar2 + iVar5,"chain%d_voladded=%d;",iVar4,0);
      iVar3 = iVar2 + iVar5 + iVar3;
      iVar2 = sprintf(param_1 + iVar3,"chain%d_basefreq=%d;",iVar4,300);
      iVar3 = iVar3 + iVar2;
      iVar5 = sprintf(param_1 + iVar3,"chain%d_badcore=%d;",iVar4,0);
      iVar5 = iVar3 + iVar5;
      __s = param_1 + iVar5;
    }
    iVar2 = iVar4;
  } while (iVar4 != 4);
  iVar2 = sprintf(__s,"chainnum=%d;",iVar6);
  sprintf(param_1 + iVar5 + iVar2,"version=%s;",&DAT_00080ba0);
  return;
}

