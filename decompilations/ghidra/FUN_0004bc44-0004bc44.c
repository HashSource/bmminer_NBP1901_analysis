
int FUN_0004bc44(int param_1,char *param_2)

{
  size_t sVar1;
  uint uVar2;
  int iVar3;
  
  sVar1 = strlen(param_2);
  uVar2 = FUN_0004b2f4(param_2,sVar1,DAT_005051c0);
  iVar3 = FUN_0004b838(param_1,*(int *)(param_1 + 4) +
                               (uVar2 & ~(-1 << (*(uint *)(param_1 + 8) & 0xff))) * 8,param_2,uVar2)
  ;
  if (iVar3 != 0) {
    iVar3 = *(int *)(iVar3 + 0x14);
  }
  return iVar3;
}

