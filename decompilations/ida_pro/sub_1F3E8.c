int __fastcall sub_1F3E8(int result)
{
  _DWORD *v1; // r4
  int v2; // r0
  _DWORD *v3; // r0
  char v4[2056]; // [sp+0h] [bp-808h] BYREF

  v1 = (_DWORD *)result;
  if ( result )
  {
    v2 = sub_1E28C();
    v3 = (_DWORD *)sub_4E990(v2);
    return sub_4EFD4(v1, "chain_num", v3);
  }
  else if ( loggingDebug || loggingVerbose || loggingThreshold > 2 )
  {
    snprintf(v4, 0x800u, "%s: input bad json param\n", "api_miner_chain_num");
    return logMessage(3, v4, 0);
  }
  return result;
}
