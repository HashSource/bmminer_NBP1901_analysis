int sub_339EC()
{
  unsigned int v0; // r2
  int v1; // r5
  int v3; // r0
  int i; // r6
  int v5; // r0
  unsigned int v6; // r7
  char s[2072]; // [sp+8h] [bp-818h] BYREF

  v0 = globalLogLevel;
  dword_7EDC8 = 2;
  byte_482A71 = 1;
  if ( (unsigned int)globalLogLevel <= 3 || (sub_31C64(), v0 = globalLogLevel, (unsigned int)globalLogLevel <= 3) )
  {
    if ( byte_80DA0 )
      goto LABEL_3;
  }
  else
  {
    snprintf(s, 0x800u, "Miner compile time: %s type: %s\n", byte_80BA0, dest);
    logMessage(3, s, 0);
    v0 = globalLogLevel;
    if ( byte_80DA0 )
    {
      if ( (unsigned int)globalLogLevel <= 3 )
        goto LABEL_3;
      snprintf(s, 0x800u, "Miner sn: %s\n", &byte_80DA0);
      logMessage(3, s, 0);
      v0 = globalLogLevel;
    }
  }
  if ( v0 > 3 )
  {
    strcpy(s, "commit version: dd076742 2022-10-27 22:42:25, build by: jenkins 2022-12-06 16:28:38\n");
    logMessage(3, s, 0);
    if ( (unsigned int)globalLogLevel > 3 )
    {
      snprintf(s, 0x800u, "opt_multi_version     = %d\n", dword_7EB58);
      logMessage(3, s, 0);
      if ( (unsigned int)globalLogLevel > 3 )
      {
        snprintf(s, 0x800u, "opt_bitmain_ab        = %d\n", (unsigned __int8)byte_7EB5C);
        logMessage(3, s, 0);
        if ( (unsigned int)globalLogLevel > 3 )
        {
          snprintf(s, 0x800u, "mid_auto_gen          = %d\n", 0);
          logMessage(3, s, 0);
          if ( (unsigned int)globalLogLevel > 3 )
          {
            snprintf(s, 0x800u, "opt_bitmain_work_mode = %d\n", dword_80FB4);
            logMessage(3, s, 0);
            if ( sub_3FD74() )
              return 0;
            goto LABEL_16;
          }
        }
      }
    }
  }
LABEL_3:
  if ( sub_3FD74() )
    return 0;
LABEL_16:
  checkFrontFanStatus();
  turnOnRearFan();
  sub_42728();
  sub_42778();
  byte_7EB5C = 1;
  sub_24364();
  sub_25284();
  if ( sub_1B4AC() )
    return 0;
  sub_3345C();
  setFanPWM(100);
  sub_32BD0();
  sub_45B74();
  sub_324A8();
  if ( sub_1E28C() )
  {
    if ( loggingDebug || loggingVerbose || loggingThreshold > 4 )
    {
      v3 = sub_1E28C();
      snprintf(s, 0x800u, "chain num = %d", v3);
      logMessage(5, s, 0);
    }
    for ( i = 0; i != 4; ++i )
    {
      v5 = i;
      v6 = (unsigned __int8)i;
      if ( sub_1E29C(v5) )
        sub_4FA0C(v6);
    }
    sub_17EF8();
    if ( sub_17F7C() )
      goto LABEL_32;
    if ( dword_7EDC8 != 1 )
    {
      sub_356C4(3, 255);
      if ( (unsigned int)globalLogLevel > 3 )
      {
LABEL_31:
        strcpy(s, "Fixture data load failed, exit.\n");
        logMessage(3, s, 0);
      }
LABEL_32:
      v1 = dword_7EDC8;
      if ( !dword_7EDC8 && sub_36218() && !sub_17F90() && (unsigned int)globalLogLevel > 3 )
      {
        strcpy(s, "Miner data load failed, exit.\n");
        logMessage(3, s, 0);
        return v1;
      }
      return 0;
    }
    if ( (unsigned int)globalLogLevel > 3 )
      goto LABEL_31;
    return 0;
  }
  v1 = -1;
  if ( (unsigned int)globalLogLevel > 3 )
  {
    strcpy(s, "No chain exist, exit.\n");
    logMessage(3, s, 0);
  }
  return v1;
}
