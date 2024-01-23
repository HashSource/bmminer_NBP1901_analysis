int __fastcall sub_1FB14(int result, unsigned int a2)
{
  _BOOL4 v2; // r3
  _DWORD *v3; // r4
  int v4; // r0
  _DWORD *v5; // r0
  char v6[2056]; // [sp+0h] [bp-808h] BYREF

  v2 = a2 > 3;
  if ( !result )
    v2 = 1;
  if ( v2 )
  {
    if ( loggingDebug || loggingVerbose || loggingThreshold > 2 )
    {
      snprintf(v6, 0x800u, "%s: input bad param\n", "api_miner_chain_frequency");
      return logMessage(3, v6, 0);
    }
  }
  else
  {
    v3 = (_DWORD *)result;
    v4 = sub_1A2E0(a2);
    v5 = (_DWORD *)sub_4E990(v4);
    return sub_4EFD4(v3, "freq_avg", v5);
  }
  return result;
}
