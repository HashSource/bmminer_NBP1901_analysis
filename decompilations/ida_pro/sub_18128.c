int __fastcall sub_18128(int a1)
{
  char v2[2056]; // [sp-808h] [bp-808h] BYREF

  if ( globalChainConfigs[0] && *(_BYTE *)(globalChainConfigs[0] + 28) )
    return *(unsigned __int8 *)(*(_DWORD *)(globalChainConfigs[0] + 4 * a1) + 30) | (*(unsigned __int8 *)(*(_DWORD *)(globalChainConfigs[0] + 4 * a1) + 29) << 8);
  if ( (unsigned int)globalLogLevel > 3 )
  {
    snprintf(v2, 0x800u, "No bom version, chain = %d.\n", a1);
    logMessage(3, v2, 0);
  }
  return 0xFFFF;
}
