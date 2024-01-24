int __fastcall sub_195A8(int a1)
{
  int result; // r0
  char s[2064]; // [sp+8h] [bp-810h] BYREF

  if ( (unsigned int)globalLogLevel > 3 )
  {
    snprintf(s, 0x800u, "%s to %d.\n", "set_voltage_by_steps", a1);
    logMessage(3, s, 0);
  }
  if ( sub_48F00() < 0 )
  {
    if ( (unsigned int)globalLogLevel > 3 )
    {
      strcpy(s, "bitmain_set_voltage failed");
      logMessage(3, s, 0);
    }
    return -1;
  }
  else
  {
    result = 0;
    dword_7F8BC = a1;
    dword_7F8C0 = a1;
  }
  return result;
}
