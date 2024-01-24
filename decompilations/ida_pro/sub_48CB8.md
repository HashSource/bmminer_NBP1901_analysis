```c
int __fastcall SetVoltageByN_WithPowerCheck(__int16 voltageCode)
{
  int logContext; // r6
  int openPowerStatus; // r5
  char logBuffer[2072]; // [sp+0h] [bp-818h] BYREF

  logContext = globalLogContext;
  if ( globalLogContext )
    return SetVoltageByN(dword_50517C, voltageCode);
  openPowerStatus = OpenPower();
  if ( openPowerStatus >= 0 )
    return SetVoltageByN(dword_50517C, voltageCode);
  snprintf(logBuffer, 0x800u, "%s: auto exec bitmain_power_open, but open power failed\n", "bitmain_set_voltage_by_n");
  logMessage(logContext, logBuffer, logContext);
  return openPowerStatus;
}
```