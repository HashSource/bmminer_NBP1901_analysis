int __fastcall sub_181C4(int a1, _DWORD *a2)
{
  int result; // r0
  int v3; // r3
  char v4[2056]; // [sp-808h] [bp-808h] BYREF

  if ( globalChainConfigs[0] && *(_BYTE *)(globalChainConfigs[0] + 28) )
  {
    v3 = *(_DWORD *)(globalChainConfigs[0] + 4 * a1);
    result = 0;
    *a2 = *(unsigned __int8 *)(v3 + 43);
  }
  else
  {
    if ( (unsigned int)globalLogLevel > 4 )
    {
      snprintf(v4, 0x800u, "No temp, chain = %d.\n", a1);
      logMessage(4, v4, 0);
    }
    return -1;
  }
  return result;
}
