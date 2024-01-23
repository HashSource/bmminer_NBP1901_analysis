int sub_16A04()
{
  unsigned int v0; // r4
  int v1; // r8
  int v3; // r6
  int v4; // r1
  size_t v5; // r2
  int v6; // r9
  int v7; // r7
  size_t v8; // r3
  const void *v9; // r1
  size_t v10; // r6
  unsigned int v11; // r6
  unsigned int v12; // r7
  char s[256]; // [sp+8h] [bp-928h] BYREF
  char v14[2088]; // [sp+108h] [bp-828h] BYREF

  if ( globalChainConfigs[0] && *(_BYTE *)(globalChainConfigs[0] + 28) )
  {
    v0 = 0;
    v1 = 0;
    do
    {
      if ( sub_1E29C(v0) )
      {
        memset(s, 0, sizeof(s));
        v3 = *(_DWORD *)(globalChainConfigs[0] + 4 * v0);
        if ( (unsigned int)globalLogLevel > 3 )
        {
          snprintf(v14, 0x800u, "[chain %d] Update miner info in eeprom.\n", v0);
          logMessage(3, v14, 0);
        }
        v4 = *(unsigned __int8 *)(v3 + 1);
        v5 = *(unsigned __int8 *)(v3 + 56);
        v6 = 57 - v4;
        v7 = v4 + 5;
        v8 = v5 - (57 - v4);
        v9 = (const void *)(v3 + v4);
        v10 = v8 + 7;
        memcpy(s, v9, v5);
        v11 = v10 & 0xFFFFFFF8;
        v12 = (v7 & 0xFFFFFFF8) + 2;
        sub_18E48(&s[v6], v11, 1);
        if ( (int)(256 - v12) >= (int)(v6 + v11) )
        {
          sub_44200(v0, v12 & 0xFE, (int)s, v6 + v11);
        }
        else
        {
          v1 = -1;
          if ( (unsigned int)globalLogLevel > 3 )
          {
            snprintf(v14, 0x800u, "[chain %d] Update miner info Failed, EEPROM does not have enough space.\n", v0);
            logMessage(3, v14, 0);
          }
        }
      }
      ++v0;
    }
    while ( v0 != 4 );
    return v1;
  }
  if ( (unsigned int)globalLogLevel <= 3 )
    return -1;
  strcpy(v14, "No fixture configuration for flush.\n");
  logMessage(3, v14, 0);
  return -1;
}
