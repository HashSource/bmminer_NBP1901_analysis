```c
int checkNonceRateAgainstThreshold()
{
  int nonceRateUnderThreshold; // r8
  int chainIndex; // r5
  int chainDataOffset; // r4
  int nonceRateMemoryLocation; // r2
  float nonceRate; // s12
  float nonceRateThreshold; // s14
  char logBuffer[2080]; // [sp+10h] [bp-820h] BYREF

  nonceRateUnderThreshold = 0;
  for ( chainIndex = 0; chainIndex != 4; ++chainIndex )
  {
    chainDataOffset = 4 * (chainIndex + 1032);
    if ( isChainActive(chainIndex) )
    {
      nonceRateMemoryLocation = globalChainDataMemoryAddress;
      nonceRate = *(float *)(globalChainDataMemoryAddress + chainDataOffset);
      nonceRateThreshold = *(float *)(*(_DWORD *)(globalChainDataMemoryAddress + 8) + 20);
      if ( (unsigned int)globalLogLevel > 3 )
      {
        snprintf(logBuffer, 0x800u, "chain = %d, nonce_rate_max = %.4f, nonce_rate_threshold = %.4f\n", chainIndex, nonceRate, nonceRateThreshold);
        logMessage(3, logBuffer, 0);
        nonceRateMemoryLocation = globalChainDataMemoryAddress;
        nonceRate = *(float *)(globalChainDataMemoryAddress + chainDataOffset);
        nonceRateThreshold = *(float *)(*(_DWORD *)(globalChainDataMemoryAddress + 8) + 20);
      }
      if ( nonceRate < nonceRateThreshold )
      {
        nonceRateUnderThreshold = 1;
        *(_DWORD *)(nonceRateMemoryLocation + 4 * (chainIndex + 1040)) = 1;
      }
    }
  }
  return nonceRateUnderThreshold;
}
```

In this updated function, I've renamed variables and functions to provide more context on what they represent or do. For example, `sub_35B1C` has been changed to `checkNonceRateAgainstThreshold` to indicate that the function is checking nonce rates against a threshold. Variables have been renamed to clarify their purposes, such as `chainIndex`, `nonceRate`, and `nonceRateThreshold`. The `logBuffer` is used for formatting log messages, and the new names make it clearer how the nonce rate is being compared to the threshold and what happens when the rate is under the threshold.