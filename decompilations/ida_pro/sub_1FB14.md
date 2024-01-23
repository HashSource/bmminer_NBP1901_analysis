```c
int __fastcall updateMinerChainFrequency(int minerChain, unsigned int frequencyIndex)
{
  _BOOL4 isInvalidFrequency; // r3
  _DWORD *minerChainPtr; // r4
  int apiCommandResult; // r0
  _DWORD *frequencyValuePtr; // r0
  char logBuffer[2056]; // [sp+0h] [bp-808h] BYREF

  isInvalidFrequency = frequencyIndex > 3;
  if ( !minerChain )
    isInvalidFrequency = 1;
  if ( isInvalidFrequency )
  {
    if ( loggingDebug || loggingVerbose || loggingThreshold > 2 )
    {
      snprintf(logBuffer, 0x800u, "%s: input bad param\n", "api_miner_chain_frequency");
      return logMessage(3, logBuffer, 0);
    }
  }
  else
  {
    minerChainPtr = (_DWORD *)minerChain;
    apiCommandResult = getApiCommandResult(frequencyIndex);
    frequencyValuePtr = (_DWORD *)getFrequencyValue(apiCommandResult);
    return setMinerChainValue(minerChainPtr, "freq_avg", frequencyValuePtr);
  }
  return minerChain;
}
```