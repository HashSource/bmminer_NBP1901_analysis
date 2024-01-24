int sub_323DC()
{
  int i; // r4
  int result; // r0
  int PCBVersionForChain; // r0
  int ChainBomVersion; // r0
  char s[2072]; // [sp+8h] [bp-818h] BYREF

  for ( i = 0; i != 4; ++i )
  {
    result = sub_1E29C(i);
    if ( result && (unsigned int)globalLogLevel > 3 )
    {
      PCBVersionForChain = getPCBVersionForChain(i);
      snprintf(s, 0x800u, "Chain [%d] PCB Version: 0x%04x\n", i, PCBVersionForChain);
      logMessage(3, s, 0);
      result = i;
      if ( (unsigned int)globalLogLevel > 3 )
      {
        ChainBomVersion = getChainBomVersion(i);
        snprintf(s, 0x800u, "Chain [%d] BOM Version: 0x%04x\n", i, ChainBomVersion);
        result = logMessage(3, s, 0);
      }
    }
  }
  return result;
}
