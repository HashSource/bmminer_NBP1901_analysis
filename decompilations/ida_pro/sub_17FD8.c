size_t __fastcall sub_17FD8(size_t result, char *a2, size_t a3)
{
  const char *v5; // r6
  char v6[2064]; // [sp+0h] [bp-810h] BYREF

  if ( globalChainConfigs[0] && *(_BYTE *)(globalChainConfigs[0] + 28) )
  {
    if ( a2 )
    {
      v5 = *(const char **)(*(_DWORD *)(globalChainConfigs[0] + 4 * result) + 3);
      result = strlen(v5) + 1;
      if ( result <= a3 )
        return snprintf(a2, a3, "%s", v5);
    }
  }
  else if ( (unsigned int)globalLogLevel > 3 )
  {
    snprintf(v6, 0x800u, "No hash board sn, chain = %d.\n", result);
    return logMessage(3, v6, 0);
  }
  return result;
}
