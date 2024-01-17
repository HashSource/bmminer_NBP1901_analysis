
void FUN_0002e584(uint param_1,char *param_2,undefined4 param_3)

{
  FILE *__s;
  tm *ptVar1;
  int iVar2;
  size_t sVar3;
  byte bVar4;
  uint local_6c;
  uint local_68;
  uint local_64;
  char acStack_60 [64];
  
  local_68 = (uint)DAT_00590404;
  if (local_68 == 0) {
    local_64 = local_68;
    FUN_000302a0(&local_68);
    local_6c = local_68;
    iVar2 = (int)local_64 / 1000;
    ptVar1 = localtime((time_t *)&local_6c);
    snprintf(acStack_60,0x40," [%d-%02d-%02d %02d:%02d:%02d.%03d] ",ptVar1->tm_year + 0x76c,
             ptVar1->tm_mon + 1,ptVar1->tm_mday,ptVar1->tm_hour,ptVar1->tm_min,ptVar1->tm_sec,iVar2)
    ;
    iVar2 = fileno(stderr);
    iVar2 = isatty(iVar2);
    if (iVar2 == 0) {
      fprintf(stderr,"%s%s\n",acStack_60,param_2);
      fflush(stderr);
    }
    if ((DAT_00482130 != '\0') &&
       ((DAT_00482134 != (FILE *)0x0 ||
        (DAT_00482134 = fopen64(&DAT_00482158,(char *)&DAT_00482138), DAT_00482134 != (FILE *)0x0)))
       ) {
      __s = DAT_00482134;
      sVar3 = strlen(acStack_60);
      fwrite(acStack_60,sVar3,1,__s);
      sVar3 = strlen(param_2);
      fwrite(param_2,sVar3,1,DAT_00482134);
      fwrite("\n",1,1,DAT_00482134);
      fflush(DAT_00482134);
    }
    if (DAT_0048212c == 0) {
      DAT_0048212c = FUN_000536f4("bmminer_miner");
    }
    FUN_00054cb0(DAT_0048212c,"logging.c",9,"_applog",7,0x75,0x3c,"%s",param_2);
    if (param_1 == 3) {
      bVar4 = 0;
    }
    else {
      bVar4 = DAT_0058e350 & 1;
    }
    if (bVar4 == 0) {
      FUN_0002e92c(acStack_60,param_2,param_3);
      return;
    }
  }
  else {
    syslog(param_1 | 0x80,"%s",param_2);
    if (DAT_0048212c == 0) {
      DAT_0048212c = FUN_000536f4("bmminer_miner");
    }
    FUN_00054cb0(DAT_0048212c,"logging.c",9,"_applog",7,0x47,0x3c,"%s",param_2);
  }
  return;
}

