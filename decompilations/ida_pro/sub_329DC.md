```c
int InitializeChains()
{
  int chainIndex;          // r4
  int attemptCount;        // r5
  int foundASICs;          // r8
  int finalASICCount;      // r5
  int initializationResult; // [sp+Ch] [bp-82Ch]
  char logBuffer[2088];    // [sp+10h] [bp-828h] BYREF

  chainIndex = 0;
  initializationResult = 0;
  do
  {
    if ( IsChainPresent(chainIndex) )
    {
      attemptCount = 0;
      do
      {
        ResetPIC(chainIndex);
        sleep(3u);
        EnableASICs((unsigned __int8)chainIndex);
        SyncChainWithPIC();
        if ( someGlobalCheck )
        {
          if ( (unsigned int)GetLogLevel() > 3 )
          {
            snprintf(logBuffer, 0x800u, "pic enabled for chain %d, press anykey to continue...", chainIndex);
            LogMessage(3, logBuffer, 0);
          }
          IO_getc((_IO_FILE *)stdin);
        }
        DisablePIC(chainIndex);
        SyncChainWithPIC();
        ResetPIC(chainIndex);
        sleep(1u);
        DisablePIC(chainIndex);
        SyncChainWithPIC();
        SetChainToIdle(chainIndex, 0);
        foundASICs = ScanForASICs(chainIndex);
        if ( (unsigned int)GetLogLevel() > 3 )
        {
          snprintf(logBuffer, 0x800u, "Chain[%d]: find %d asic, times %d\n", chainIndex, foundASICs, attemptCount);
          LogMessage(3, logBuffer, 0);
        }
        ++attemptCount;
        if ( foundASICs == GetExpectedASICCount() )
          break;
        DisableASICs((unsigned __int8)chainIndex);
      }
      while ( attemptCount != 3 );
      finalASICCount = ScanForASICs(chainIndex);
      if ( GetExpectedASICCount() != finalASICCount )
      {
        if ( (unsigned int)GetLogLevel() > 3 )
        {
          snprintf(logBuffer, 0x800u, "Chain %d only find %d asic, will power off hash board %d\n", chainIndex, finalASICCount, chainIndex);
          LogMessage(3, logBuffer, 0);
        }
        initializationResult = -1;
        DisableASICs((unsigned __int8)chainIndex);
        PowerOffChain(chainIndex, 0);
      }
    }
    ++chainIndex;
  }
  while ( chainIndex != 4 );
  return initializationResult;
}
```