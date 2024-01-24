```c
int __fastcall ReadASICRegister(int reg, int chip, int chain)
{
  int currentCount; // r2
  int totalCount; // r9
  int iteration; // r5
  unsigned int index; // r3
  int *dataPointer; // r1
  int dataValue; // r4
  int *resultPointer; // [sp+1Ch] [bp-844h]
  char regLocal; // [sp+24h] [bp-83Ch]
  char chipLocal; // [sp+28h] [bp-838h]
  int chainLocal; // [sp+2Ch] [bp-834h]
  int retryCount; // [sp+30h] [bp-830h]
  int readAttempts; // [sp+34h] [bp-82Ch]
  char debugBuffer[2088]; // [sp+38h] [bp-828h] BYREF

  regLocal = reg;
  chipLocal = chip;
  chainLocal = (unsigned __int8)chain;
  retryCount = 5;
  pthread_mutex_lock(&asicReadMutex);
  while ( 2 )
  {
    readAttempts = 8;
    AsyncOperation();
    IssueASICRead(chainLocal, 0, chipLocal, regLocal);
    do
    {
      PrepareNextASICRead();
      pthread_mutex_lock(&asicDataMutex);
      currentCount = globalDataCount;
      if ( globalDataCount )
      {
        totalCount = globalDataCount;
        iteration = 0;
        while ( 1 )
        {
          ++iteration;
          globalDataCount = currentCount - 1;
          index = globalDataIndex + 1;
          if ( index > 0x1FE )
            globalDataIndex = 0;
          dataPointer = &asicDataArray[2 * index];
          if ( index <= 0x1FE )
            globalDataIndex = index;
          if ( *((unsigned __int8 *)dataPointer + 11) == chain
            && *((unsigned __int8 *)dataPointer + 9) == chip
            && *((unsigned __int8 *)dataPointer + 10) == reg )
          {
            break;
          }
          if ( globalLogLevel > 3 )
          {
            snprintf(
              debugBuffer,
              0x800u,
              "read asic reg error: expect chain = %d, chip = %d, reg = %d, got chain = %d, chip = %d, reg = %d\n",
              chain,
              chip,
              reg,
              *((unsigned __int8 *)dataPointer + 11),
              BYTE1(asicDataArray[2 * index + 2]),
              BYTE2(asicDataArray[2 * index + 2]));
            logMessage(3, debugBuffer, 0);
            if ( totalCount == iteration )
              goto LABEL_20;
          }
          else if ( totalCount == iteration )
          {
            goto LABEL_20;
          }
          currentCount = globalDataCount;
        }
        if ( reg == 28 )
        {
          dataValue = dataPointer[1];
          if ( (dataValue & 0xE0000000) != 0 )
            dataValue = 0;
          pthread_mutex_unlock(&asicDataMutex);
          AsyncOperation();
          pthread_mutex_unlock(&asicReadMutex);
          return dataValue;
        }
        else
        {
          resultPointer = &asicDataArray[2 * index];
          pthread_mutex_unlock(&asicDataMutex);
          AsyncOperation();
          pthread_mutex_unlock(&asicReadMutex);
          return resultPointer[1];
        }
      }
LABEL_20:
      pthread_mutex_unlock(&asicDataMutex);
      --readAttempts;
    }
    while ( readAttempts );
    if ( --retryCount )
      continue;
    break;
  }
  if ( globalLogLevel > 4 )
  {
    snprintf(debugBuffer, 0x800u, "read asic reg timeout: expect chain = %d, chip = %d, reg = %d\n", chain, chip, reg);
    logMessage(4, debugBuffer, 0);
  }
  AsyncOperation();
  pthread_mutex_unlock(&asicReadMutex);
  return 0;
}
```