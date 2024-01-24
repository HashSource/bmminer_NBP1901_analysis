int sub_2A578()
{
  int result; // r0
  int v1; // r4
  char *v2; // r0
  struct sysinfo v3; // [sp+0h] [bp-948h] BYREF
  char s[256]; // [sp+40h] [bp-908h] BYREF
  char v5[2056]; // [sp+140h] [bp-808h] BYREF

  if ( sysinfo(&v3) )
  {
    v1 = *_errno_location();
    v2 = strerror(v1);
    sprintf(s, "Failed to get sysinfo, errno:%u, reason:%s\n", v1, v2);
    result = time(0);
    dword_58E344 = result;
    dword_5903F8 = result + 1;
  }
  else
  {
    dword_58E344 = v3.uptime;
    dword_5903F8 = v3.uptime + 1;
    result = sprintf(s, "set_start_time_point total_tv_start_sys=%ld total_tv_end_sys=%ld\n", v3.uptime, v3.uptime + 1);
    if ( loggingDebug || loggingVerbose || loggingThreshold > 4 )
    {
      snprintf(v5, 0x800u, "%s", s);
      return logMessage(5, v5, 0);
    }
  }
  return result;
}
