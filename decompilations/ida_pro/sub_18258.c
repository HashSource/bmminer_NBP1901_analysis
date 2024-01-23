int __fastcall sub_18258(int a1, _DWORD *a2)
{
  int v2; // r3
  int result; // r0
  char v4[2056]; // [sp-808h] [bp-808h] BYREF

  if ( globalChainConfigs[0] && *(_BYTE *)(globalChainConfigs[0] + 28) )
  {
    if ( a2 )
    {
      v2 = *(_DWORD *)(globalChainConfigs[0] + 4 * a1);
      result = 0;
      *a2 = *(unsigned __int8 *)(v2 + 46);
    }
    else
    {
      return -2;
    }
  }
  else
  {
    if ( (unsigned int)globalLogLevel > 3 )
    {
      snprintf(v4, 0x800u, "No test standard, chain = %d.\n", a1);
      logMessage(3, v4, 0);
    }
    return -1;
  }
  return result;
}
