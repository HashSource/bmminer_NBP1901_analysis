```c
int powerOffHashboard()
{
  int boardIndex; // r4
  char logMessage[2056]; // [sp+0h] [bp-808h] BYREF

  // If the global log level is greater than debug level (3), log the power-off message
  if (globalLogLevel > 3)
  {
    strcpy(logMessage, "****power off hashboard****\n");
    log(3, logMessage, 0);
  }

  // Loop through each hash board (there are 4 in total)
  for (boardIndex = 0; boardIndex < 4; ++boardIndex)
  {
    // If the current hash board is online, power it off
    if (isBoardOnline(boardIndex))
      powerOffBoard((unsigned char)boardIndex);
  }

  // Perform additional power-off cleanup
  additionalPowerOffCleanup();

  // Final steps in powering off and perhaps returning status
  return finalizePowerOff();
}
```