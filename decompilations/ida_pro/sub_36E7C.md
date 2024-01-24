```c
bool checkIfReadRegDone(int chainIndex)
{
  int baseAddress; // r4
  int totalCount; // r5
  unsigned __int8 *currentBytePtr; // r0
  unsigned __int8 *endPtr; // r2
  char logBuffer[2064]; // [sp+8h] [bp-810h] BYREF

  baseAddress = *(_DWORD *)(dword_4FCB34 + 4);
  if ((unsigned int)globalLogLevel > 4)
  {
    snprintf(logBuffer, 0x800u, "[DEBUG] Check if read reg done, chain = %d, done_threshold = %d.\n", chainIndex, 1);
    logMessage(4, logBuffer, 0);
  }
  totalCount = readTotalCount();
  if (totalCount)
  {
    currentBytePtr = (unsigned __int8 *)(baseAddress + (chainIndex << 8));
    endPtr = &currentBytePtr[totalCount];
    totalCount = 0;
    do
    {
      if (*currentBytePtr++)
        ++totalCount;
    }
    while (currentBytePtr != endPtr);
  }
  return readTotalCount() == totalCount;
}
```