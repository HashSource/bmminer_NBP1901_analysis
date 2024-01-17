
void FUN_0002ea54(uint param_1,char *param_2,undefined4 param_3)

{
  char cVar1;
  FILE *pFVar2;
  size_t sVar3;
  size_t sVar4;
  int iVar5;
  char *pcVar6;
  byte bVar7;
  
  sVar3 = strlen(&DAT_00482258);
  sVar4 = strlen(param_2);
  if (0x7ff < sVar3 + sVar4 + 1) {
    if (DAT_00590404 == '\0') {
      iVar5 = fileno(stderr);
      iVar5 = isatty(iVar5);
      if (iVar5 == 0) {
        fputs(&DAT_00482258,stderr);
        fflush(stderr);
      }
      if ((DAT_00482130 != '\0') &&
         ((DAT_00482134 != (FILE *)0x0 ||
          (DAT_00482134 = fopen64(DAT_0002ee24 + 0x20,DAT_0002ee24), DAT_00482134 != (FILE *)0x0))))
      {
        pFVar2 = DAT_00482134;
        sVar3 = strlen(DAT_0002ee20);
        fwrite(DAT_0002ee20,sVar3,1,pFVar2);
        fflush(DAT_00482134);
      }
      if (DAT_00482a58 == 0) {
        DAT_00482a58 = FUN_000536f4("bmminer_miner");
      }
      FUN_00054cb0(DAT_00482a58,"logging.c",9,DAT_0002ee1c,10,0xc3,0x3c,"%s",&DAT_00482258);
      if (param_1 == 3) {
        bVar7 = 0;
      }
      else {
        bVar7 = DAT_0058e350 & 1;
      }
      if (bVar7 == 0) {
        FUN_0002e92c("",DAT_0002ee20,param_3);
      }
    }
    else {
      syslog(param_1 | 0x80,"%s",&DAT_00482258);
      if (DAT_00482a58 == 0) {
        DAT_00482a58 = FUN_000536f4("bmminer_miner");
      }
      FUN_00054cb0(DAT_00482a58,"logging.c",9,DAT_0002ee1c,10,0xa7,0x3c,"%s",&DAT_00482258);
    }
    DAT_00482258 = 0;
  }
  strcat(DAT_0002ee20,param_2);
  pcVar6 = DAT_0002ee20;
  do {
    cVar1 = *pcVar6;
    if (cVar1 == '\r' || cVar1 == '\n') {
      if (DAT_00590404 == '\0') {
        iVar5 = fileno(stderr);
        iVar5 = isatty(iVar5);
        if (iVar5 == 0) {
          fputs(DAT_0002ee20,stderr);
          fflush(stderr);
        }
        if ((DAT_00482130 != '\0') &&
           ((DAT_00482134 != (FILE *)0x0 ||
            (DAT_00482134 = fopen64(DAT_0002ee24 + 0x20,DAT_0002ee24), DAT_00482134 != (FILE *)0x0))
           )) {
          pFVar2 = DAT_00482134;
          sVar3 = strlen(DAT_0002ee20);
          fwrite(DAT_0002ee20,sVar3,1,pFVar2);
          fflush(DAT_00482134);
        }
        if (DAT_00482a58 == 0) {
          DAT_00482a58 = FUN_000536f4("bmminer_miner");
        }
        FUN_00054cb0(DAT_00482a58,"logging.c",9,DAT_0002ee1c,10,0xe9,0x3c,"%s",&DAT_00482258);
        if (param_1 == 3) {
          bVar7 = 0;
        }
        else {
          bVar7 = DAT_0058e350 & 1;
        }
        if (bVar7 == 0) {
          FUN_0002e92c("",DAT_0002ee20,param_3);
        }
      }
      else {
        syslog(param_1 | 0x80,"%s",DAT_0002ee20);
        if (DAT_00482a58 == 0) {
          DAT_00482a58 = FUN_000536f4("bmminer_miner");
        }
        FUN_00054cb0(DAT_00482a58,"logging.c",9,DAT_0002ee1c,10,0xcd,0x3c,"%s",&DAT_00482258);
      }
      DAT_00482258 = 0;
      return;
    }
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  return;
}

