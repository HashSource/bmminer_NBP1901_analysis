int __fastcall sub_18948(int a1, int a2, int a3)
{
  int result; // r0
  int v4; // r3
  int v5; // r12
  char s[2056]; // [sp+8h] [bp-808h] BYREF

  if ( globalChainConfigs[0]
    && *(_BYTE *)(globalChainConfigs[0] + 28)
    && (v4 = *(_DWORD *)(globalChainConfigs[0] + 4 * a1)) != 0 )
  {
    v5 = *(_DWORD *)(a3 + 4);
    result = 0;
    *(_DWORD *)(v4 + 58) = *(_DWORD *)a3;
    *(_DWORD *)(v4 + 62) = v5;
    *(_BYTE *)(v4 + 66) = *(_BYTE *)(a3 + 8);
  }
  else
  {
    if ( (unsigned int)globalLogLevel > 3 )
    {
      snprintf(s, 0x800u, "Can't set work mode conf, configuration is not loaded, chain = %d, mode = %d.\n", a1, a2);
      logMessage(3, s, 0);
    }
    return -1;
  }
  return result;
}
