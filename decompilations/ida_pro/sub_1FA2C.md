```c
int __fastcall updateFanSpeeds(int minerConfiguration)
{
  uint32_t *fanSpeedsArray; // r7
  uint32_t *firmwareInfo; // r5
  int numberOfFans; // r6
  int fanIndex; // r4
  int fanSpeedValue; // r0
  int retrievedSpeed; // r0
  uint32_t *fanSpeedPointer; // r0
  char logBuffer[2072]; // [sp+0h] [bp-818h] BYREF

  fanSpeedsArray = (uint32_t *)minerConfiguration;
  if ( minerConfiguration )
  {
    firmwareInfo = getFirmwareInfo();
    numberOfFans = getNumberOfFans();
    if ( numberOfFans > 0 )
    {
      fanIndex = 0;
      do
      {
        fanSpeedValue = fanIndex++;
        retrievedSpeed = getFanSpeed(fanSpeedValue);
        fanSpeedPointer = (uint32_t *)fetchFanSpeed(retrievedSpeed);
        updateFirmwareFanSpeedInfo(firmwareInfo, fanSpeedPointer);
      }
      while ( numberOfFans != fanIndex );
    }
    return sendFanSpeedUpdate(fanSpeedsArray, "fan", firmwareInfo);
  }
  else if ( loggingDebug || loggingVerbose || loggingThreshold > 2 )
  {
    snprintf(logBuffer, 0x800u, "%s: input bad json param\n", "api_miner_fan_speed");
    return logMessage(3, logBuffer, 0);
  }
  return minerConfiguration;
}
```