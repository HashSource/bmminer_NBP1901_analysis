int __fastcall sub_1FBD8(int result, unsigned int a2)
{
  _BOOL4 v2; // r2
  _DWORD *v3; // r4
  int v4; // r0
  char *v5; // r0
  int v6[4]; // [sp+0h] [bp-818h] BYREF
  char s[2056]; // [sp+10h] [bp-808h] BYREF

  v2 = a2 > 3;
  if ( !result )
    v2 = 1;
  memset(v6, 0, sizeof(v6));
  if ( v2 )
  {
    if ( loggingDebug || loggingVerbose || loggingThreshold > 2 )
    {
      snprintf(s, 0x800u, "%s: input bad param\n", "api_miner_chain_rate_ideal");
      return logMessage(3, s, 0);
    }
  }
  else
  {
    v3 = (_DWORD *)result;
    v4 = sub_19DE4(a2);
    snprintf((char *)v6, 0x10u, "%d", v4);
    v5 = (char *)sub_4E744((const char *)v6);
    return sub_4EFD4(v3, "rate_ideal", v5);
  }
  return result;
}
