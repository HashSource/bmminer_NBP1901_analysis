```c
void logMinerSettings()
{
  unsigned int currentLogLevel; // r3
  const char *increasedFrequencyWithHighVoltage; // r6
  const char *increasedFrequencyWithHighVoltageRuntime; // r12
  char logBuffer[2072]; // [sp+8h] [bp-818h] BYREF

  if (globalLogLevel <= DEBUG)
    return;
  
  snprintf(logBuffer, sizeof(logBuffer), "%-40s : %d\n", "voltage", **(int **)minerConfigAddress);
  logMessage(DEBUG, logBuffer, 0);
  
  if (globalLogLevel > DEBUG)
  {
    snprintf(logBuffer, sizeof(logBuffer), "%-40s : %d\n", "freq_base", *(int *)(*(int *)minerConfigAddress + 4));
    logMessage(DEBUG, logBuffer, 0);
    
    if (globalLogLevel <= DEBUG)
      return;
    
    snprintf(logBuffer, sizeof(logBuffer), "%-40s : %d\n", "freq_threshold", *(int *)(*(int *)minerConfigAddress + 8));
    logMessage(DEBUG, logBuffer, 0);
    
    if (globalLogLevel <= DEBUG)
      goto EndLog;
    
    snprintf(logBuffer, sizeof(logBuffer), "%-40s : %d\n", "freq_serial_threshold", *(int *)(*(int *)minerConfigAddress + 12));
    logMessage(DEBUG, logBuffer, 0);
    
    if (globalLogLevel <= DEBUG)
      return;
    
    snprintf(logBuffer, sizeof(logBuffer), "%-40s : %d\n", "freq_step", *(int *)(*(int *)minerConfigAddress + 16));
    logMessage(DEBUG, logBuffer, 0);
  }
  
  currentLogLevel = globalLogLevel;
  
  if (globalLogLevel <= DEBUG)
  {
    goto CheckNonceRateThreshold;
  }
  
  increasedFrequencyWithHighVoltage = "false";
  if (*(_BYTE *)(*(int *)minerConfigAddress + 20))
    increasedFrequencyWithHighVoltageRuntime = "true";
  else
    increasedFrequencyWithHighVoltageRuntime = "false";
  
  snprintf(logBuffer, sizeof(logBuffer), "%-40s : %s\n", "is_inc_freq_with_high_vol", increasedFrequencyWithHighVoltageRuntime);
  logMessage(DEBUG, logBuffer, 0);
  
  if (globalLogLevel > DEBUG)
  {
    if (*(_BYTE *)(*(int *)minerConfigAddress + 21))
      increasedFrequencyWithHighVoltage = "true";

    snprintf(logBuffer, sizeof(logBuffer), "%-40s : %s\n", "is_inc_freq_with_high_vol_runtime", increasedFrequencyWithHighVoltage);
    logMessage(DEBUG, logBuffer, 0);
    
    EndLog:
    if (globalLogLevel <= DEBUG)
      return;

    snprintf(logBuffer, sizeof(logBuffer), "%-40s : %d\n", "is_board_init_with_power_off", *(int *)(*(int *)minerConfigAddress + 24));
    logMessage(DEBUG, logBuffer, 0);
    
    if (globalLogLevel <= DEBUG)
      return;

    snprintf(logBuffer, sizeof(logBuffer), "%-40s : %.4f\n", "hw_threshold", *(float *)(*(int *)minerConfigAddress + 28));
    logMessage(DEBUG, logBuffer, 0);
    
    currentLogLevel = globalLogLevel;

    CheckNonceRateThreshold:
    if (currentLogLevel > DEBUG)
    {
      snprintf(logBuffer, sizeof(logBuffer), "%-40s : %.2f\n", "nonce_rate_threshold", *(float *)(*(int *)minerConfigAddress + 32));
      logMessage(DEBUG, logBuffer, 0);
      
      if (globalLogLevel > DEBUG)
      {
        snprintf(logBuffer, sizeof(logBuffer), "%-40s : %.2f\n", "nonce_rate_dec_threshold", *(float *)(*(int *)minerConfigAddress + 36));
        logMessage(DEBUG, logBuffer, 0);
      }
    }
    return;
  }
}
```

Here I've renamed the function and variables to give them more meaningful names:
- `sub_3AF1C` is renamed to `logMinerSettings` because it seems to log configuration settings of the miner.
- `v0`, `v1`, and `v2` are renamed based on their respective uses.
- `s` is renamed to `logBuffer` to indicate its usage for storing log messages.
- `dword_4FCB40` is assumed to be `minerConfigAddress` which is a global pointer to the miner's configuration data.
- `sub_2EA54` is renamed to `logMessage` which seems to be a function to log messages.
- The logging level (`3`) is assumed and labeled as `DEBUG` (as a macro) based on context for readability.