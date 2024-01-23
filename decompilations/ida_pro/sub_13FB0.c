int __fastcall sub_13FB0(int a1)
{
  int result; // r0
  char v3[2064]; // [sp+0h] [bp-810h] BYREF

  result = dword_7F7A8;
  if ( !dword_7F7A8 )
  {
    result = sub_4101C(dword_7F7A8);
    dword_7F7A8 = result;
  }
  if ( result < 0 )
  {
    if ( loggingDebug || loggingVerbose || loggingThreshold > 2 )
    {
      strcpy(v3, "pwm for fan init error");
      return logMessage(3, v3, 0);
    }
  }
  else if ( a1 != dword_7F7AC )
  {
    if ( (unsigned int)globalLogLevel > 4 )
    {
      snprintf(v3, 0x800u, "set pwm = %d", a1);
      logMessage(4, v3, 0);
      result = dword_7F7A8;
    }
    sub_4110C(result, a1);
    result = sub_1E49C(a1);
    dword_7F7AC = a1;
  }
  return result;
}
