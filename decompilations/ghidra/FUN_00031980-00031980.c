
void FUN_00031980(char *param_1,int param_2)

{
  int iVar1;
  size_t sVar2;
  char *__dest;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 local_83c;
  undefined4 local_838;
  undefined4 local_834;
  undefined4 local_830;
  undefined4 local_82c;
  undefined4 local_828;
  undefined auStack_824 [2048];
  
  iVar7 = 0;
  do {
    iVar8 = iVar7 + 1;
    iVar1 = FUN_0001e29c(iVar7);
    if (iVar1 != 0) {
      local_828 = 0x7b;
      memset(auStack_824,0,0x7fc);
      local_83c = 0;
      local_838 = 0;
      local_834 = 0;
      local_830 = 0;
      local_82c = 0;
      sprintf((char *)&local_83c,"Chain%d:{",iVar8);
      __dest = stpcpy((char *)((int)&local_828 + 1),(char *)&local_83c);
      iVar6 = 0;
      iVar5 = DAT_00482a60 % 0x3c + -1;
      iVar1 = iVar5 - param_2;
      do {
        iVar3 = iVar5;
        if (iVar5 < 0) {
          iVar3 = iVar5 + 0x3c;
        }
        iVar5 = iVar5 + -1;
        iVar6 = iVar6 + *(int *)(&DAT_00483aa0 + (iVar7 * 0x3c00 + iVar3) * 8);
      } while (iVar5 != iVar1);
      sprintf((char *)&local_83c,"N%d=%d",0,iVar6);
      strcpy(__dest,(char *)&local_83c);
      iVar5 = 1;
      iVar1 = FUN_0001e0f0();
      if (1 < iVar1) {
        do {
          iVar3 = 0;
          iVar6 = DAT_00482a60 % 0x3c + -1;
          iVar1 = iVar6 - param_2;
          do {
            iVar4 = iVar6;
            if (iVar6 < 0) {
              iVar4 = iVar6 + 0x3c;
            }
            iVar6 = iVar6 + -1;
            iVar3 = iVar3 + *(int *)(&DAT_00483aa0 + (iVar7 * 0x3c00 + iVar5 * 0x3c + iVar4) * 8);
          } while (iVar1 != iVar6);
          sprintf((char *)&local_83c,",N%d=%d",iVar5,iVar3);
          iVar5 = iVar5 + 1;
          strcat((char *)&local_828,(char *)&local_83c);
          iVar1 = FUN_0001e0f0();
        } while (iVar5 < iVar1);
      }
      sVar2 = strlen((char *)&local_828);
      *(undefined2 *)((int)&local_828 + sVar2) = DAT_00066858;
      auStack_824[sVar2 - 2] = DAT_0006685a;
      strcat(param_1,(char *)&local_828);
    }
    iVar7 = iVar8;
  } while (iVar8 != 4);
  sVar2 = strlen(param_1);
  param_1[sVar2 - 1] = '\0';
  return;
}

