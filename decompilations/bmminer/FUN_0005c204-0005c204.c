
void FUN_0005c204(undefined4 param_1,int param_2,undefined4 param_3)

{
  char *pcVar1;
  char *__s;
  int iVar2;
  
  iVar2 = *(int *)(param_2 + 8);
  __s = *(char **)(iVar2 + 0x110);
  pcVar1 = strrchr(__s,0x2f);
  iVar2 = *(int *)(iVar2 + 0x114);
  if (pcVar1 != (char *)0x0) {
    FUN_0005f0d4(param_3,pcVar1 + 1,__s + (iVar2 - (int)pcVar1) + -1);
    return;
  }
  FUN_0005f0d4(param_3,__s,iVar2);
  return;
}

