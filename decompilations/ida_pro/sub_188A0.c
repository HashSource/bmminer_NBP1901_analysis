int __fastcall sub_188A0(int a1, int a2, _DWORD *a3)
{
  int v3; // r3
  int result; // r0
  char s[2056]; // [sp+8h] [bp-808h] BYREF

  if ( globalChainConfigs[0] && *(_BYTE *)(globalChainConfigs[0] + 28) )
  {
    if ( a3 )
    {
      v3 = *(_DWORD *)(globalChainConfigs[0] + 4 * a1);
      result = 0;
      *a3 = *(unsigned __int16 *)(v3 + 60);
    }
    else
    {
      return 0;
    }
  }
  else
  {
    if ( (unsigned int)globalLogLevel > 3 )
    {
      snprintf(s, 0x800u, "No work mode hash rate, chain = %d, mode = %d.\n", a1, a2);
      logMessage(3, s, 0);
    }
    return 0xFFFF;
  }
  return result;
}
