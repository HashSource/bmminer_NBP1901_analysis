```c
int checkMinerPowerStatus()
{
  int isLoggingEnabled; // r5
  int openPowerStatus; // r6
  int powerStatusRequestData; // [sp+8h] [bp-820h] BYREF
  __int16 powerStatusRequestSize; // [sp+Ch] [bp-81Ch]
  int powerStatusResponseData; // [sp+10h] [bp-818h] BYREF
  int powerStatusResponseSize; // [sp+14h] [bp-814h]
  char logBuffer[2064]; // [sp+18h] [bp-810h] BYREF

  isLoggingEnabled = loggingFlag;
  if ( loggingFlag || (openPowerStatus = openPower(), openPowerStatus >= 0) )
  {
    powerStatusResponseSize = 0;
    powerStatusResponseData = 0;
    powerStatusRequestData = 168077909;
    powerStatusRequestSize = 14;
    if ( sendPowerStatusCommand(socketDescriptor, (unsigned __int8 *)&powerStatusRequestData, 6u, (unsigned __int8 *)&powerStatusResponseData, 8u) )
    {
      strcpy(logBuffer, "get power status failed\n");
      writeToLog(0, logBuffer, 0);
      strcpy(logBuffer, "can nont get power status\n");
      writeToLog(0, logBuffer, 0);
      return -2147482880;
    }
    return (unsigned __int16)powerStatusResponseSize;
  }
  else
  {
    snprintf(logBuffer, 0x800u, "%s: auto exec bitmain_power_open, but open power failed\n", "bitmain_get_power_status");
    writeToLog(isLoggingEnabled, logBuffer, isLoggingEnabled);
  }
  return openPowerStatus;
}
```