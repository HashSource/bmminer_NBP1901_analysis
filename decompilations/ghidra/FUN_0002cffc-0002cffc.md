```c
void PrintAsicNonces(int chainIndex, int asicIndex)
{
  uint totalCores;
  uint coreCounter;
  uint debugLevel;
  uint coresPerLineCounter;
  undefined2 buffer[1024]; // Temporary buffer for strings

  debugLevel = GlobalDebugLevel; // Assume GlobalDebugLevel holds the current debug level
  
  // This checks if the debug level is less than 4 to control the verbosity
  if (debugLevel < 4) {
    totalCores = GetTotalCores(); // Assume GetTotalCores() returns the total number of ASIC cores
    coresPerLineCounter = debugLevel;
  }
  else {
    snprintf((char *)buffer, 0x800, "\n ASIC nonce number for chain[%d] ASIC[%d]...\n", chainIndex, asicIndex);
    LogMessage(3, buffer, 0); // Log the formatted message, assume LogMessage(level, message, option)
    totalCores = GetTotalCores();
    coresPerLineCounter = debugLevel;
  }
  
  debugLevel = GlobalDebugLevel; // Update the debug level just in case it changed

  if (0 < (int)totalCores) {
    coreCounter = 0;
    do {
      // This might be intended to limit the output rate of the logging
      while (coresPerLineCounter < 4) {
        coreCounter++;
        if (totalCores == coreCounter) goto EndOfCoreLoop;
      }
      coresPerLineCounter = coreCounter + 1;
      snprintf((char *)buffer, 0x800, "core[%03d]=%-8d", coreCounter,
               (&NonceCounts)[coreCounter + (asicIndex + chainIndex * 0x100) * 0x400]);
      LogMessage(3, buffer, 0); // Assume NonceCounts holds the nonce counts per core
      coresPerLineCounter = GlobalDebugLevel;
      if ((coresPerLineCounter % 10 != 0) || (GlobalDebugLevel < 4)) continue; // Every 10 cores or at low debug level
      buffer[0] = 10; // newline character to buffer
      LogMessage(3, buffer, 0); // Log a newline
      coreCounter = coresPerLineCounter;
      coresPerLineCounter = GlobalDebugLevel;
    } while (totalCores != coresPerLineCounter);
  }

EndOfCoreLoop:
  // If the debug level is still high, print a final newline
  if (3 < coresPerLineCounter) {
    buffer[0] = 10; // newline character to buffer
    LogMessage(3, buffer, 0);
  }
  return;
}
```