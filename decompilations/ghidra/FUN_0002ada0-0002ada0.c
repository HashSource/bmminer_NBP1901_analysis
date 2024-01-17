
undefined4 FUN_0002ada0(char *param_1)

{
  tm *ptVar1;
  int iVar2;
  int iVar3;
  int local_cc [2];
  char acStack_c4 [32];
  undefined auStack_a4 [32];
  char acStack_84 [40];
  char acStack_5c [64];
  
  memset(acStack_c4,0,0x20);
  memset(auStack_a4,0,0x20);
  memset(acStack_84,0,0x28);
  memset(acStack_5c,0,0x3b);
  iVar3 = 0;
  FUN_000302a0(local_cc);
  do {
    local_cc[0] = local_cc[0] - iVar3;
    iVar3 = iVar3 + 1;
    ptVar1 = localtime(local_cc);
    snprintf(acStack_84,0x28,"[%d-%02d-%02d %02d:%02d:%02d]",ptVar1->tm_year + 0x76c,
             ptVar1->tm_mon + 1,ptVar1->tm_mday,ptVar1->tm_hour,ptVar1->tm_min,ptVar1->tm_sec);
    snprintf(acStack_5c,0x3b,"%s%s","BITMAIN_OPENSOURCE",acStack_84);
    FUN_0002f1ec(acStack_5c,0x3b,auStack_a4);
    FUN_0002f1ec(auStack_a4,0x20,acStack_c4);
    iVar2 = strncmp(acStack_c4,param_1,0x20);
    if (iVar2 == 0) {
      puts("socket auth pass!!!!!!!!!!!!!!!!!!!!");
      return 1;
    }
  } while (iVar3 != 4);
  return 0;
}

