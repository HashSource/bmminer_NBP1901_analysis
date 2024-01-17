
void FUN_0005be70(undefined4 param_1,int param_2,undefined4 param_3)

{
  __pid_t _Var1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_2 + 8);
  if (*(int *)(iVar2 + 0x17c) == 0) {
    _Var1 = getpid();
    *(__pid_t *)(iVar2 + 0x17c) = _Var1;
    iVar2 = *(int *)(param_2 + 8);
    if (*(int *)(iVar2 + 0x17c) != *(int *)(iVar2 + 0x180)) {
      *(int *)(iVar2 + 0x180) = *(int *)(iVar2 + 0x17c);
      iVar2 = sprintf((char *)(iVar2 + 0x184),"%u");
      iVar3 = *(int *)(param_2 + 8);
      *(int *)(iVar3 + 0x1a4) = iVar2;
      FUN_0005f0d4(param_3,iVar3 + 0x184,iVar2);
      return;
    }
  }
  FUN_0005f0d4(param_3,iVar2 + 0x184,*(undefined4 *)(iVar2 + 0x1a4));
  return;
}

