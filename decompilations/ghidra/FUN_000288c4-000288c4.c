
char * FUN_000288c4(char *param_1)

{
  int *piVar1;
  size_t sVar2;
  size_t sVar3;
  int iVar4;
  char *pcVar5;
  bool bVar6;
  undefined auStack_114 [92];
  char acStack_b8 [164];
  
  pcVar5 = &DAT_00080768;
  if (DAT_00080ac0 == 0) {
    DAT_00080ac0 = __strdup();
  }
  iVar4 = DAT_00080ac4 + 1;
  bVar6 = DAT_00080ac4 + -9 < 0;
  DAT_00080ac4 = iVar4;
  if (10 < iVar4) {
    pcVar5 = (char *)0x368c;
  }
  if (iVar4 != 10 && bVar6 == SBORROW4(iVar4,10)) {
    pcVar5 = (char *)((uint)pcVar5 & 0xffff | 0x60000);
  }
  if (iVar4 != 10 && bVar6 == SBORROW4(iVar4,10)) {
    return pcVar5;
  }
  piVar1 = (int *)FUN_0004d6e4(param_1,0,auStack_114);
  if ((piVar1 != (int *)0x0) && (*piVar1 == 0)) {
    pcVar5 = (char *)FUN_000289b8(piVar1,1);
    return pcVar5;
  }
  sVar2 = strlen(param_1);
  sVar3 = strlen(acStack_b8);
  sVar2 = sVar2 + sVar3 + 0x23;
  pcVar5 = (char *)FUN_0002f408(sVar2,"bmminer.c",DAT_000289b4,0x386);
  snprintf(pcVar5,sVar2,"JSON decode of file \'%s\' failed\n %s",param_1,acStack_b8);
  return pcVar5;
}

