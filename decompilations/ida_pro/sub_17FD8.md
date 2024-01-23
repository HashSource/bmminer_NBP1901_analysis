```c
size_t __fastcall GetChainSerialNumber(size_t chainIndex, char *serialNumberBuffer, size_t bufferLength)
{
  const char *serialNumber; // r6
  char logBuffer[2064]; // [sp+0h] [bp-810h] BYREF

  if ( globalChainConfigs[0] && *(_BYTE *)(globalChainConfigs[0] + 28) )
  {
    if ( serialNumberBuffer )
    {
      serialNumber = *(const char **)(*(_DWORD *)(globalChainConfigs[0] + 4 * chainIndex) + 3);
      chainIndex = strlen(serialNumber) + 1;
      if ( chainIndex <= bufferLength )
        return snprintf(serialNumberBuffer, bufferLength, "%s", serialNumber);
    }
  }
  else if ( (unsigned int)globalLogLevel > 3 )
  {
    snprintf(logBuffer, 0x800u, "No hash board serial number, chain = %d.\n", chainIndex);
    return logMessage(3, logBuffer, 0);
  }
  return chainIndex;
}
```