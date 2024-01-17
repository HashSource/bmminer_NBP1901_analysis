
void FUN_00026094(void)

{
  int *piVar1;
  char *pcVar2;
  int __errnum;
  char acStack_808 [2048];
  
  if (3 < DAT_0007eb9c) {
    piVar1 = __errno_location();
    __errnum = *piVar1;
    pcVar2 = strerror(__errnum);
    snprintf(acStack_808,0x800,"Failed to get sysinfo, errno = %u, reason = %s.\n",__errnum,pcVar2);
    FUN_0002e584(3,acStack_808,0);
  }
  time((time_t *)0x0);
  return;
}

