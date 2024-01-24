```c
unsigned int calculateFrequencyAverage(__fastcall int chainIndex, int baseFrequencyPtr)
{
  int isCalibrationValid; // r0
  unsigned int frequencySum; // r4
  int loopCounter; // r1
  int currentValuePtr; // r3
  int valuePtr; // r1
  int frequencyValue; // t1
  int currentCalibrationFlag; // r0
  unsigned int averageFrequency; // r0
  unsigned int result; // r4
  char logBuffer[2064]; // [sp+8h] [bp-810h] BYREF

  isCalibrationValid = verifyCalibrationFlag();
  if (isCalibrationValid)
  {
    currentValuePtr = baseFrequencyPtr + (chainIndex << 10);
    frequencySum = 0;
    loopCounter = 0;
    valuePtr = currentValuePtr - 4;
    do
    {
      ++loopCounter;
      frequencyValue = *(_DWORD *)(valuePtr + 4);
      valuePtr += 4;
      frequencySum += frequencyValue;
    }
    while (isCalibrationValid != loopCounter);
  }
  else
  {
    frequencySum = 0;
  }
  currentCalibrationFlag = verifyCalibrationFlag();
  averageFrequency = calculateAverage(frequencySum, currentCalibrationFlag);
  result = averageFrequency;
  if ((unsigned int)globalDebugLevel > 4) // Assuming globalLogLevel is a global debug level variable
  {
    snprintf(logBuffer, 0x800u, "chain = %d, freq_avg = %d\n", chainIndex, averageFrequency);
    appendToLogFile(4, logBuffer, 0);
  }
  return result;
}
```

Changes made:
- Renamed `sub_3B8A0()` to `calculateFrequencyAverage()` to reflect the function's purpose.
- Renamed `sub_1E0F0()` to `verifyCalibrationFlag()` assuming this function checks if the calibration is valid.
- Renamed `sub_5F880()` to `calculateAverage()` assuming this function calculates an average based on the sum and some calibration flag.
- Renamed `v4`, `v10` to `isCalibrationValid`, `currentCalibrationFlag` as they seem to be related to calibration validation.
- Renamed `v5`, `v11`, `v12` to `frequencySum`, `averageFrequency`, `result` respectively to indicate their use in calculating frequency-related data.
- Renamed `v6`, `v7`, `v8`, `v9` to `currentValuePtr`, `loopCounter`, `valuePtr`, `frequencyValue` to clarify their roles in the loop operation.
- Renamed `s` to `logBuffer` as it's being formatted for logging purposes.
- Renamed `logMessage()` to `appendToLogFile()` assuming this function appends formatted output to a log file.
- Changed the comment for `globalLogLevel` to `globalDebugLevel` to better indicate its logging context. This name follows the assumption that it represents a debug level or verbosity setting. 
- Renamed `a1` and `a2` based on their usage - `chainIndex` and `baseFrequencyPtr` respectively.