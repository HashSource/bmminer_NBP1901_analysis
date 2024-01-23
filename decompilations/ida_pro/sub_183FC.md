```c
int __fastcall setOptimalFrequency(int chainIndex, int mode, int *optimalFreq)
{
  int workModeValue; // r2
  int freqCodeValue; // r3
  int *freqCodeTablePtr; // r4
  __int64 freqCode; // r6
  int currentFreqCode; // r0
  bool isFreqMatch; // r2
  const char *chipType; // r0
  int chipTypeCompare; // r0
  int workModeCode; // r2
  bool isExactFreqMatch; // zf
  unsigned int upper32BitDiff; // r0
  unsigned int conditionCheck; // r0
  int unknownValue; // [sp+Ch] [bp-834h]
  int workModeState; // [sp+14h] [bp-82Ch] BYREF
  char logMessageBuffer[2088]; // [sp+18h] [bp-828h] BYREF

  if ( globalChainConfigs[0] && *(_BYTE *)(globalChainConfigs[0] + 28) )
  {
    workModeValue = *(_DWORD *)(globalChainConfigs[0] + 4 * chainIndex);
    freqCodeValue = 1127301685;
    freqCodeTablePtr = &frequencyCodeTable;
    HIDWORD(freqCode) = *(unsigned __int16 *)(workModeValue + 35);
    LODWORD(freqCode) = *(unsigned __int16 *)(workModeValue + 37);
    while ( 1 )
    {
      currentFreqCode = *(freqCodeTablePtr - 1);
      if ( currentFreqCode )
      {
        isFreqMatch = currentFreqCode == HIDWORD(freqCode);
        if ( !*freqCodeTablePtr )
          isFreqMatch = 0;
        if ( *freqCodeTablePtr == (_DWORD)freqCode && isFreqMatch )
          break;
      }
LABEL_11:
      freqCodeTablePtr += 2;
      if ( &frequencyCodeTableEnd == freqCodeTablePtr )
      {
        if ( (unsigned int)globalLogLevel > 4 )
        {
          strcpy(logMessageBuffer, "freq level not match");
          logMessage(4, logMessageBuffer, 0);
        }
        return -2;
      }
    }
    unknownValue = freqCodeValue;
    chipType = (const char *)getChipType();
    chipTypeCompare = strcmp(chipType, "NBS2003");
    freqCodeValue = unknownValue;
    if ( !chipTypeCompare )
    {
      memset(logMessageBuffer, 0, 16);
      workModeState = 0;
      fetchOperatingData1(chainIndex, logMessageBuffer, 0x10u);
      fetchOperatingData2(chainIndex, &workModeState);
      freqCodeValue = unknownValue;
      if ( *(_DWORD *)logMessageBuffer == 810955078 && *(_DWORD *)&logMessageBuffer[4] == unknownValue && logMessageBuffer[8] == 49 && (unsigned int)(workModeState - 3) <= 1 )
      {
        isExactFreqMatch = (_DWORD)freqCode == 650;
        if ( (_DWORD)freqCode == 650 )
          isExactFreqMatch = HIDWORD(freqCode) == 1280;
        if ( isExactFreqMatch )
        {
          workModeCode = 600;
          goto LABEL_20;
        }
        workModeCode = 625;
        upper32BitDiff = __clz(freqCode - 625);
        if ( freqCode == 0x51400000271LL )
          workModeCode = 575;
        conditionCheck = upper32BitDiff >> 5;
        if ( freqCode == 0x51400000271LL )
        {
LABEL_20:
          if ( optimalFreq )
          {
            *optimalFreq = workModeCode;
            return 0;
          }
          goto LABEL_11;
        }
        if ( ((HIDWORD(freqCode) == 1280) & (unsigned __int8)conditionCheck) != 0 )
        {
          workModeCode = 575;
          if ( (_DWORD)freqCode == 650 )
            workModeCode = 600;
          goto LABEL_20;
        }
      }
    }
    workModeCode = freqCode;
    goto LABEL_20;
  }
  if ( (unsigned int)globalLogLevel > 4 )
  {
    snprintf(logMessageBuffer, 0x800u, "No work mode freq, chain = %d, mode = %d.\n", chainIndex, mode);
    logMessage(4, logMessageBuffer, 0);
  }
  return -1;
}
```