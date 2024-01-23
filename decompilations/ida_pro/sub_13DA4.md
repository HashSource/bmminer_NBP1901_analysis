```c
int __fastcall checkFanStatus(unsigned int fanFlag, int checkContinuous)
{
  int continuousCheckCounter; // r4
  int remainingCheckAttempts; // r4
  int currentFanSpeed; // r5
  int lastFanSpeed; // r4
  int totalActiveFans; // r5
  int *fanCheckCounter; // r6
  int activeFanIndex; // r5
  int fanID; // r9
  int fanSpeed; // r0
  int detectedFanSpeed; // r4
  int errorFanSpeed; // r4
  int fanErrorCode; // r0
  int fanCounter; // r4
  int fanIndex; // r5
  int measuredFanSpeed; // r0
  char outputBuffer[2080]; // [sp+8h] [bp-820h] BYREF

  continuousCheckCounter = checkContinuous;
  if ( checkContinuous )
  {
    remainingCheckAttempts = 10;
    do
    {
      resetFanErrorFlag(fanFlag);
      currentFanSpeed = getFanSpeed();
      if ( currentFanSpeed >= getRequiredFanSpeed() )
        break;
      sleepForWhile();
      --remainingCheckAttempts;
    }
    while ( remainingCheckAttempts );
    lastFanSpeed = getFanSpeed();
    if ( lastFanSpeed >= getRequiredFanSpeed() )
    {
      setFanStatusFlag(0);
      return 0;
    }
  }
  else
  {
    resetFanErrorFlag(fanFlag);
    totalActiveFans = getFanSpeed();
    fanCheckCounter = (int *)&continuousCheckCount;
    if ( totalActiveFans < getRequiredFanSpeed() )
    {
      ++*fanCheckCounter;
      while ( 1 )
      {
        activeFanIndex = (unsigned __int8)continuousCheckCounter++;
        if ( activeFanIndex >= getRequiredFanSpeed() )
          break;
        if ( (unsigned int)currentLogLevel > 3 )
        {
          fanID = *fanCheckCounter;
          fanSpeed = getIndividualFanSpeed(activeFanIndex);
          snprintf(outputBuffer, 0x800u, "conti_check_count:%d, fan_id = %d, fan_speed = %d\n", fanID, activeFanIndex, fanSpeed);
          logMessage(3, outputBuffer, 0);
        }
      }
    }
    else
    {
      *fanCheckCounter = 0;
    }
    detectedFanSpeed = getFanSpeed();
    if ( detectedFanSpeed >= getRequiredFanSpeed() || (unsigned int)*fanCheckCounter <= 9 )
    {
      setFanStatusFlag(0);
      return 0;
    }
  }
  if ( (unsigned int)currentLogLevel > 1 )
  {
    errorFanSpeed = getFanSpeed();
    fanErrorCode = getRequiredFanSpeed();
    snprintf(outputBuffer, 0x800u, "Error, fan lost, only find %d (< %d)\n", errorFanSpeed, fanErrorCode);
    logMessage(1, outputBuffer, 0);
  }
  fanCounter = 0;
  while ( 1 )
  {
    fanIndex = (unsigned __int8)fanCounter++;
    if ( fanIndex >= getRequiredFanSpeed() )
      break;
    if ( (unsigned int)currentLogLevel > 3 )
    {
      measuredFanSpeed = getIndividualFanSpeed(fanIndex);
      snprintf(outputBuffer, 0x800u, "fan_id = %d, fan_speed = %d\n", fanIndex, measuredFanSpeed);
      logMessage(3, outputBuffer, 0);
    }
  }
  triggerAlarm(10, 255);
  setFanStatusFlag(1);
  reportError(7u, "fan lost");
  return -1;
}
```