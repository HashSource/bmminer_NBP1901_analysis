```c
int logChainVersions()
{
  int chainIndex; // r4
  int lastResult; // r0
  int pcbVersion; // r0
  int bomVersion; // r0
  char logBuffer[2072]; // [sp+8h] [bp-818h] BYREF

  for ( chainIndex = 0; chainIndex != 4; ++chainIndex )
  {
    lastResult = isChainConnected(chainIndex);
    if ( lastResult && (unsigned int)globalLogLevel > 3 )
    {
      pcbVersion = getPCBVersionForChain(chainIndex);
      snprintf(logBuffer, sizeof(logBuffer), "Chain [%d] PCB Version: 0x%04x\n", chainIndex, pcbVersion);
      logMessage(3, logBuffer, 0);
      lastResult = chainIndex;
      if ( (unsigned int)globalLogLevel > 3 )
      {
        bomVersion = getChainBomVersion(chainIndex);
        snprintf(logBuffer, sizeof(logBuffer), "Chain [%d] BOM Version: 0x%04x\n", chainIndex, bomVersion);
        lastResult = logMessage(3, logBuffer, 0);
      }
    }
  }
  return lastResult;
}
```