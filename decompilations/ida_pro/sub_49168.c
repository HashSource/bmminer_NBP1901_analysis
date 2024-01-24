void sub_49168()
{
  int v0; // r6
  int v1; // [sp+8h] [bp-820h] BYREF
  __int16 v2; // [sp+Ch] [bp-81Ch]
  int v3[2]; // [sp+10h] [bp-818h] BYREF
  char s[2064]; // [sp+18h] [bp-810h] BYREF

  v0 = global_logContext;
  if ( global_logContext || sub_48ABC() >= 0 )
  {
    v3[1] = 0;
    v3[0] = 0;
    v1 = 50637397;
    v2 = 7;
    if ( SendPowerCommandWithRetries(dword_50517C, (unsigned __int8 *)&v1, 6u, (unsigned __int8 *)v3, 8u) )
    {
      strcpy(s, "get AD conversion N failed\n");
      logMessage(0, s, 0);
      strcpy(s, "can nont get voltage\n");
      logMessage(0, s, 0);
    }
    else
    {
      sub_48F9C();
    }
  }
  else
  {
    snprintf(s, 0x800u, "%s: auto exec bitmain_power_open, but open power failed\n", "bitmain_get_voltage");
    logMessage(v0, s, v0);
  }
}
