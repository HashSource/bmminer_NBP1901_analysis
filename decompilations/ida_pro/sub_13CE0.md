```c
int __fastcall updateFanSpeeds(unsigned int thresholdSpeed)
{
  unsigned int fanIndex; // r4
  int isFanSpeedValid; // r1
  int fanSpeed; // r0
  bool hasMoreFans; // cc
  int finalResult; // r0
  int readFanSpeed; // r0
  int actualFanSpeed; // r6
  char logBuffer[2080]; // [sp+8h] [bp-820h] BYREF

  for ( fanIndex = 0; ; ++fanIndex )
  {
    hasMoreFans = getNumberOfFans() > fanIndex;
    finalResult = (unsigned __int8)fanIndex;
    if ( !hasMoreFans )
      break;
    readFanSpeed = readFanSpeedByIndex((unsigned __int8)fanIndex);
    actualFanSpeed = readFanSpeed;
    if ( readFanSpeed >= 0 )
    {
      if ( (unsigned int)getGlobalLogLevel() > 4 )
      {
        snprintf(logBuffer, 0x800u, "fan[%u] speed[%u]\n", (unsigned __int8)fanIndex, readFanSpeed);
        logMessage(4, logBuffer, 0);
      }
      regulateFanSpeed((unsigned __int8)fanIndex, actualFanSpeed);
      if ( actualFanSpeed > 9999 || (isFanSpeedValid = 1, fanSpeed = (unsigned __int8)fanIndex, thresholdSpeed > actualFanSpeed) )
      {
        fanSpeed = (unsigned __int8)fanIndex;
        isFanSpeedValid = 0;
      }
      updateFanStatusOnDisplay(fanSpeed, isFanSpeedValid);
    }
  }
  return finalResult;
}
```