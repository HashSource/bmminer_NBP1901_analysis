
bool FUN_00036e7c(int param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  int iVar5;
  char acStack_810 [2048];
  
  iVar5 = *(int *)(DAT_004fcb34 + 4);
  if (4 < DAT_0007eb9c) {
    snprintf(acStack_810,0x800,"[DEBUG] Check if read reg done, chain = %d, done_threshold = %d.\n",
             param_1,1);
    FUN_0002e584(4,acStack_810,0);
  }
  iVar1 = FUN_0001e0f0();
  if (iVar1 != 0) {
    pcVar2 = (char *)(iVar5 + param_1 * 0x100);
    pcVar4 = pcVar2 + iVar1;
    iVar1 = 0;
    do {
      pcVar3 = pcVar2 + 1;
      if (*pcVar2 != '\0') {
        iVar1 = iVar1 + 1;
      }
      pcVar2 = pcVar3;
    } while (pcVar3 != pcVar4);
  }
  iVar5 = FUN_0001e0f0();
  return iVar5 == iVar1;
}

