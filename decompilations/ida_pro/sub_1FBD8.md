```c
int __fastcall updateMinerChainIdealRate(int minerChainStatusPtr, unsigned int chainIndex)
{
  bool isInvalidChainIndex; // r2
  int *statusPtr; // r4
  int idealRateValue; // r0
  char *idealRateString; // r0
  int buffer[4]; // [sp+0h] [bp-818h] BYREF
  char logMessageBuffer[2056]; // [sp+10h] [bp-808h] BYREF

  isInvalidChainIndex = chainIndex > 3;
  if ( !minerChainStatusPtr )
    isInvalidChainIndex = true;
  memset(buffer, 0, sizeof(buffer));
  if ( isInvalidChainIndex )
  {
    if ( loggingDebug || loggingVerbose || loggingThreshold > 2 )
    {
      snprintf(logMessageBuffer, 0x800u, "%s: input bad param\n", "api_miner_chain_rate_ideal");
      return logMessage(3, logMessageBuffer, 0);
    }
  }
  else
  {
    statusPtr = (int *)minerChainStatusPtr;
    idealRateValue = calculateIdealRate(chainIndex);
    snprintf((char *)buffer, 0x10u, "%d", idealRateValue);
    idealRateString = (char *)convertToReadableString((const char *)buffer);
    return updateStatusWithIdealRate(statusPtr, "rate_ideal", idealRateString);
  }
  return minerChainStatusPtr;
}
```