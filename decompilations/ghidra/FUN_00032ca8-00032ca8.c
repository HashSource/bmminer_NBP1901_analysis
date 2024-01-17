
void FUN_00032ca8(void)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  sysinfo local_948;
  char acStack_908 [256];
  char acStack_808 [2048];
  
  FUN_000302a0(DAT_00032cbc);
  iVar1 = sysinfo(&local_948);
  if (iVar1 != 0) {
    piVar2 = __errno_location();
    iVar1 = *piVar2;
    pcVar3 = strerror(iVar1);
    sprintf(acStack_908,"Failed to get sysinfo, errno:%u, reason:%s\n",iVar1,pcVar3);
    DAT_0058e344 = time((time_t *)0x0);
    DAT_005903f8 = DAT_0058e344 + 1;
    return;
  }
  DAT_005903f8 = local_948.uptime + 1;
  DAT_0058e344 = local_948.uptime;
  sprintf(acStack_908,"set_start_time_point total_tv_start_sys=%ld total_tv_end_sys=%ld\n",
          local_948.uptime,DAT_005903f8);
  if (((DAT_00590404 != '\0') || (DAT_00482a5c != '\0')) || (4 < DAT_0007eba0)) {
    snprintf(acStack_808,0x800,"%s",acStack_908);
    FUN_0002e584(5,acStack_808,0);
  }
  return;
}

