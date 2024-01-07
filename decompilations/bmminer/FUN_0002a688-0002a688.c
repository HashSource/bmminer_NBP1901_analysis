
void FUN_0002a688(void)

{
  undefined4 uVar1;
  FILE *pFVar2;
  size_t sVar3;
  char *pcVar4;
  char *pcVar5;
  char cVar6;
  char cVar7;
  char acStack_918 [256];
  char acStack_818 [2052];
  
  pFVar2 = fopen64(DAT_00080970,"rb");
  memset(acStack_918,0,0x100);
  if (pFVar2 == (FILE *)0x0) {
    if (((DAT_00590404 != '\0') || (DAT_00482a5c != '\0')) || (2 < DAT_0007eba0)) {
      snprintf(acStack_818,0x800,"Open miner version file %s error",DAT_00080970);
      FUN_0002e584(3,acStack_818,0);
    }
  }
  else {
    sVar3 = fread(acStack_918,1,0x100,pFVar2);
    if ((int)sVar3 < 1) {
      if (((DAT_00590404 != '\0') || (DAT_00482a5c != '\0')) || (2 < DAT_0007eba0)) {
        snprintf(acStack_818,0x800,"Read miner version file %s error %d",DAT_00080970,sVar3);
        FUN_0002e584(3,acStack_818,0);
      }
    }
    else {
      pcVar4 = strchr(acStack_918,10);
      uVar1 = DAT_0002ab38;
      if (pcVar4 == (char *)0x0) {
        strcpy(DAT_0002ab3c,acStack_918);
      }
      else {
        FUN_00030ea8(DAT_0002ab3c,acStack_918,(int)pcVar4 - (int)acStack_918,"bmminer.c",
                     DAT_0002ab38,0x5eb);
        pcVar4 = stpcpy(acStack_918,pcVar4 + 1);
        pcVar5 = strchr(acStack_918,10);
        if (pcVar5 == (char *)0x0) {
          memcpy(DAT_0002ab40,acStack_918,(size_t)(pcVar4 + (1 - (int)acStack_918)));
        }
        else {
          FUN_00030ea8(DAT_0002ab40,acStack_918,(int)pcVar5 - (int)acStack_918,"bmminer.c",uVar1,
                       0x5f4);
        }
      }
      sVar3 = strlen(DAT_0002ab3c);
      pcVar4 = DAT_0002ab3c;
      cVar6 = *(char *)((int)&DAT_00080b9c + sVar3 + 3);
      if (cVar6 == '\n') {
        *(undefined *)((int)&DAT_00080b9c + sVar3 + 3) = 0;
        sVar3 = strlen(pcVar4);
        cVar6 = *(char *)((int)&DAT_00080b9c + sVar3 + 3);
      }
      if (cVar6 == '\r') {
        *(undefined *)((int)&DAT_00080b9c + sVar3 + 3) = 0;
      }
      sVar3 = strlen(DAT_0002ab40);
      pcVar4 = DAT_0002ab40;
      cVar6 = (&DAT_00080c9f)[sVar3];
      if (cVar6 == '\n') {
        (&DAT_00080c9f)[sVar3] = 0;
        sVar3 = strlen(pcVar4);
        cVar6 = (&DAT_00080c9f)[sVar3];
      }
      if (cVar6 == '\r') {
        (&DAT_00080c9f)[sVar3] = 0;
      }
    }
  }
  pFVar2 = fopen64("/config/sn","rb");
  if (pFVar2 == (FILE *)0x0) {
    if (((DAT_00590404 != '\0') || (DAT_00482a5c != '\0')) || (cVar6 = '\0', 2 < DAT_0007eba0)) {
      snprintf(acStack_818,0x800,"Open miner sn file %s error","/config/sn");
      FUN_0002e584(3,acStack_818,0);
      cVar6 = DAT_00590404;
    }
  }
  else {
    memset(acStack_918,0,0x100);
    sVar3 = fread(acStack_918,1,0xfa,pFVar2);
    if ((int)sVar3 < 1) {
      if (((DAT_00590404 != '\0') || (DAT_00482a5c != '\0')) || (2 < DAT_0007eba0)) {
        snprintf(acStack_818,0x800,"Read miner sn file %s error %d","/config/sn",sVar3);
        FUN_0002e584(3,acStack_818,0);
      }
    }
    else {
      pcVar4 = strstr(acStack_918,"\r\n");
      if (pcVar4 == (char *)0x0) {
        strcpy(DAT_0002ab44,acStack_918);
      }
      else {
        FUN_00030ea8(DAT_0002ab44,acStack_918,(int)pcVar4 - (int)acStack_918,"bmminer.c",
                     DAT_0002ab38,0x624);
      }
    }
    fclose(pFVar2);
    cVar6 = DAT_00590404;
  }
  pcVar4 = DAT_0002ab44;
  sVar3 = strlen(DAT_0002ab44);
  cVar7 = (&DAT_00080d9f)[sVar3];
  if (cVar7 == '\n') {
    (&DAT_00080d9f)[sVar3] = 0;
    sVar3 = strlen(pcVar4);
    cVar7 = (&DAT_00080d9f)[sVar3];
  }
  if (cVar7 == '\r') {
    (&DAT_00080d9f)[sVar3] = 0;
  }
  if (((cVar6 != '\0') || (DAT_00482a5c != '\0')) || (2 < DAT_0007eba0)) {
    snprintf(acStack_818,0x800,"Miner compile time: %s type: %s sn :%s",DAT_0002ab40 + -0x100,
             DAT_0002ab40,pcVar4);
    FUN_0002e584(3,acStack_818,0);
  }
  return;
}

