```c
int __fastcall updateMinerChainNumber(int jsonResult)
{
  int *minerData; // r4
  int configData; // r0
  int *chainNumberData; // r0
  char logBuffer[2056]; // [sp+0h] [bp-808h] BYREF

  minerData = (int *)jsonResult;
  if ( jsonResult )
  {
    configData = getConfigValue();
    chainNumberData = (int *)getChainNumber(configData);
    return setMinerChainNumber(minerData, "chain_num", chainNumberData);
  }
  else if ( loggingDebug || loggingVerbose || loggingThreshold > 2 )
  {
    snprintf(logBuffer, 0x800u, "%s: input bad json param\n", "api_miner_chain_num");
    return logMessage(3, logBuffer, 0);
  }
  return jsonResult;
}
```