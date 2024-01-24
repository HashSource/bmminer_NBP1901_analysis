int sub_24F04()
{
  int v0; // r0
  int v1; // r0
  int v2; // r4
  int result; // r0
  socklen_t addr_len; // [sp+Ch] [bp-84Ch] BYREF
  struct sockaddr addr; // [sp+10h] [bp-848h] BYREF
  struct sockaddr v6; // [sp+20h] [bp-838h] BYREF
  char s[2088]; // [sp+30h] [bp-828h] BYREF

  prctl(15, "http", 0);
  do
  {
    v0 = socket(2, 1, 6);
    dword_7E2EC = v0;
    if ( v0 < 0 )
    {
      if ( loggingDebug || loggingVerbose || loggingThreshold > 4 )
      {
        strcpy(s, "socket creating failed, try again after 10s...");
        logMessage(5, s, 0);
      }
      sleep(0xAu);
    }
    else
    {
      *(_DWORD *)&addr.sa_family = -1407778814;
      memset(&addr.sa_data[2], 0, 12);
      if ( bind(v0, &addr, 0x10u) < 0 )
      {
        if ( loggingDebug || loggingVerbose || loggingThreshold > 4 )
        {
          strcpy(s, "http port bind failed! try again after 10s...");
          logMessage(5, s, 0);
        }
      }
      else
      {
        if ( listen(dword_7E2EC, 100) >= 0 )
          break;
        if ( loggingDebug || loggingVerbose || loggingThreshold > 4 )
        {
          strcpy(s, "http listen failed! try again after 10s...");
          logMessage(5, s, 0);
        }
      }
      close(dword_7E2EC);
      dword_7E2EC = -1;
      sleep(0xAu);
    }
  }
  while ( !byte_7F9F8 );
  if ( loggingDebug || loggingVerbose || loggingThreshold > 4 )
  {
    strcpy(s, "start listen on 6060 ...");
    logMessage(5, s, 0);
  }
  if ( !byte_7F9F8 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        usleep(0x2710u);
        addr_len = 16;
        v1 = accept(dword_7E2EC, &v6, &addr_len);
        v2 = v1;
        if ( v1 != -1 )
          break;
        if ( byte_7F9F8 )
          goto LABEL_19;
      }
      if ( byte_7F9F8 )
        break;
      if ( logEnabled && (loggingDebug || loggingVerbose || loggingThreshold > 6) )
      {
        snprintf(s, 0x800u, "one client connected sock=%d", v1);
        logMessage(7, s, 0);
      }
      sub_24398(v2);
      if ( byte_7F9F8 )
        goto LABEL_19;
    }
    close(v1);
  }
LABEL_19:
  close(dword_7E2EC);
  result = 0;
  dword_7E2EC = -1;
  return result;
}
