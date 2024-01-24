```c
int initializeMiner()
{
  unsigned int logLevel; // r2
  int operationStatus; // r5
  int chainCount; // r0
  int i; // r6
  int chainIndex; // r0
  unsigned int chainId; // r7
  char logBuffer[2072]; // [sp+8h] [bp-818h] BYREF

  logLevel = globalLogLevel;
  minerOperationMode = 2;
  isSerialNumberValid = 1;
  if ( (unsigned int)globalLogLevel <= 3 || (loadMinerConfiguration(), logLevel = globalLogLevel, (unsigned int)globalLogLevel <= 3) )
  {
    if ( serialNumber )
      goto LOG_BASIC_INFO;
  }
  else
  {
    snprintf(logBuffer, 0x800u, "Miner compile time: %s type: %s\n", compileTime, hardwareType);
    logMessage(3, logBuffer, 0);
    logLevel = globalLogLevel;
    if ( serialNumber )
    {
      if ( (unsigned int)globalLogLevel <= 3 )
        goto LOG_BASIC_INFO;
      snprintf(logBuffer, 0x800u, "Miner sn: %s\n", serialNumber);
      logMessage(3, logBuffer, 0);
      logLevel = globalLogLevel;
    }
  }
  if ( logLevel > 3 )
  {
    strcpy(logBuffer, "commit version: dd076742 2022-10-27 22:42:25, build by: jenkins 2022-12-06 16:28:38\n");
    logMessage(3, logBuffer, 0);
    if ( (unsigned int)globalLogLevel > 3 )
    {
      snprintf(logBuffer, 0x800u, "opt_multi_version     = %d\n", optMultiVersion);
      logMessage(3, logBuffer, 0);
      if ( (unsigned int)globalLogLevel > 3 )
      {
        snprintf(logBuffer, 0x800u, "opt_bitmain_ab        = %d\n", (unsigned __int8)optBitmainAB);
        logMessage(3, logBuffer, 0);
        if ( (unsigned int)globalLogLevel > 3 )
        {
          snprintf(logBuffer, 0x800u, "mid_auto_gen          = %d\n", 0);
          logMessage(3, logBuffer, 0);
          if ( (unsigned int)globalLogLevel > 3 )
          {
            snprintf(logBuffer, 0x800u, "opt_bitmain_work_mode = %d\n", optBitmainWorkMode);
            logMessage(3, logBuffer, 0);
            if ( isValidFixtureData() )
              return 0;
            goto CHECK_HARDWARE_STATUS;
          }
        }
      }
    }
  }
LOG_BASIC_INFO:
  if ( isValidFixtureData() )
    return 0;
CHECK_HARDWARE_STATUS:
  monitorFrontFan();
  startRearFan();
  initializeASICs();
  configureASICs();
  optBitmainAB = 1;
  resetErrorStatus();
  initializeNetwork();
  if ( detectChain() )
    return 0;
  configureFrequency();
  setFanSpeedToMax();
  initializeASICChips();
  checkSoftwareVersion();
  configureTemperatureControl();
  if ( countActiveChains() )
  {
    if ( isLoggingDebug() || isLoggingVerbose() || logLevel > 4 )
    {
      chainCount = countActiveChains();
      snprintf(logBuffer, 0x800u, "chain num = %d", chainCount);
      logMessage(5, logBuffer, 0);
    }
    for ( i = 0; i != 4; ++i )
    {
      chainIndex = i;
      chainId = (unsigned __int8)i;
      if ( isChainActive(chainIndex) )
        initializeChain(chainId);
    }
    finalizeASICSetup();
    if ( isTestModeEnabled() )
      goto CHECK_CHAIN_ERROR;
    if ( minerOperationMode != 1 )
    {
      loadFixtureData(3, 255);
      if ( (unsigned int)globalLogLevel > 3 )
      {
FAILURE_LOAD_FIXTURE:
        strcpy(logBuffer, "Fixture data load failed, exit.\n");
        logMessage(3, logBuffer, 0);
      }
CHECK_CHAIN_ERROR:
      operationStatus = minerOperationMode;
      if ( !minerOperationMode && loadMinerData() && !isMaxErrorsReached() && (unsigned int)globalLogLevel > 3 )
      {
        strcpy(logBuffer, "Miner data load failed, exit.\n");
        logMessage(3, logBuffer, 0);
        return operationStatus;
      }
      return 0;
    }
    if ( (unsigned int)globalLogLevel > 3 )
      goto FAILURE_LOAD_FIXTURE;
    return 0;
  }
  operationStatus = -1;
  if ( (unsigned int)globalLogLevel > 3 )
  {
    strcpy(logBuffer, "No chain exist, exit.\n");
    logMessage(3, logBuffer, 0);
  }
  return operationStatus;
}
```