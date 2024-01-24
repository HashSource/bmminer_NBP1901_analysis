```c
int __fastcall VerifyFrequencyThreshold(int chainIndex)
{
  unsigned int avgFrequency;    // r6
  unsigned int minFrequency;    // r8
  unsigned int maxFrequency;    // r7
  unsigned int maxRuntimeFreq;  // r0
  int freqConfigPointer;        // r3
  unsigned int freqThreshold;   // r1
  char logBuffer[2072];         // [sp+10h] [bp-818h] BYREF

  avgFrequency = GetAverageFrequency(chainIndex, dword_4FCB44 + 4);
  minFrequency = GetMinimumFrequency(chainIndex, dword_4FCB44 + 4);
  maxFrequency = GetMaximumFrequency(chainIndex, dword_4FCB44 + 4);
  maxRuntimeFreq = GetMaxRuntimeFrequency(chainIndex, dword_4FCB44 + 4116);
  freqConfigPointer = *(_DWORD *)dword_4FCB44;
  freqThreshold = *(_DWORD *)(*(_DWORD *)dword_4FCB44 + 20);
  if ( freqThreshold > avgFrequency )
  {
    if ( *(_DWORD *)(freqConfigPointer + 28) > maxFrequency - minFrequency )
    {
      if ( freqThreshold >= maxRuntimeFreq )
        return 0;
      if ( (unsigned int)globalLogLevel <= 3 )
        return 1;
      snprintf(logBuffer, 0x800u, "chain = %d, freq_max_runtime = %d, freq_threshold = %d, max freq enough\n", chainIndex, maxRuntimeFreq, freqThreshold);
    }
    else
    {
      if ( (unsigned int)globalLogLevel <= 3 )
        return 1;
      snprintf(
        logBuffer,
        0x800u,
        "chain = %d, freq_max = %d, freq_min = %d, freq_diff = %d, freq_diff_threshold = %d, freq diff enough\n",
        chainIndex,
        maxFrequency,
        minFrequency,
        maxFrequency - minFrequency,
        *(_DWORD *)(freqConfigPointer + 28));
    }
LABEL_13:
    logMessage(3, logBuffer, 0);
    return 1;
  }
  if ( (unsigned int)globalLogLevel > 3 )
  {
    snprintf(logBuffer, 0x800u, "chain = %d, freq_avg = %d, freq_threshold = %d, avg freq enough\n", chainIndex, avgFrequency, freqThreshold);
    goto LABEL_13;
  }
  return 1;
}
```