
int FUN_000156cc(undefined4 param_1)

{
  short sVar1;
  char *pcVar2;
  int iVar3;
  
  pcVar2 = (char *)FUN_0001e0c0();
  iVar3 = strcmp(pcVar2,"BHB28601");
  if (iVar3 != 0) {
    pcVar2 = (char *)FUN_0001e0c0();
    iVar3 = strcmp(pcVar2,"BHB28501");
    if (iVar3 != 0) {
      sVar1 = FUN_00015610(param_1,0);
      return (int)sVar1;
    }
  }
  sVar1 = FUN_00015610(param_1,1);
  return (int)sVar1;
}

