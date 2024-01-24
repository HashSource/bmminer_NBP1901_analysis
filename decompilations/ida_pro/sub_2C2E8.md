```c
int __fastcall handleASICCommand(int commandType, int commandValue, int chainId, int outputBuffer)
{
  int tempVar1; // r0
  pthread_mutex_t *outputMutex; // r10
  int loopCounter; // r6
  int totalEntriesCount; // r8
  int currentEntryIndex; // r5
  int internalVar1; // r3
  int *currentEntry; // r6
  int internalVar2; // r2
  int intevalTypeId; // r10
  int tempVar2; // r0
  int tempVar3; // r0
  int tempVar4; // r1
  unsigned int responseData; // r6
  int tempVar5; // r0
  int tempVar6; // r1
  int tempVar7; // r0
  int tempVar8; // r0
  pthread_mutex_t *localMutex; // [sp+Ch] [bp-854h]
  int validResponseCount; // [sp+18h] [bp-848h]
  unsigned int timestampResponse; // [sp+1Ch] [bp-844h]
  int totalValidResponses; // [sp+20h] [bp-840h]
  int timeout; // [sp+28h] [bp-838h] BYREF
  int intervalCheck[2]; // [sp+30h] [bp-830h] BYREF
  char logMessageBuffer[2088]; // [sp+38h] [bp-828h] BYREF

  if ( verifyChainExists(chainId) )
  {
    pthread_mutex_lock(&globalLock);
    resetASICStatus();
    ASICCommandActive = 1;
    clearASICErrorStatus();
    if ( commandType == 2 )
    {
      tempVar7 = getASICCommandMultiplier();
      sendASICCommandType2((unsigned __int8)chainId, commandValue * tempVar7, 2);
    }
    else
    {
      tempVar1 = getASICCommandMultiplier();
      if ( commandType == 6 )
        sendASICCommandType6((unsigned __int8)chainId, commandValue * tempVar1);
      else
        sendASICCommandGeneric((unsigned __int8)chainId, commandValue * tempVar1, commandType);
    }
    outputMutex = &ASICCommandResultsLock;
    validResponseCount = 0;
    totalValidResponses = 0;
    usleep((__useconds_t)&defaultTimeout);
    do
    {
      pthread_mutex_lock(outputMutex);
      loopCounter = ASICResponseQueueCount;
      totalEntriesCount = ASICResponseQueueCount;
      if ( ASICResponseQueueCount > 0 )
      {
        currentEntryIndex = 0;
        localMutex = outputMutex;
        while ( 1 )
        {
          ASICResponseQueueCount = loopCounter - 1;
          ++currentEntryIndex;
          internalVar1 = ASICResponseQueueStartIndex + 1;
          currentEntry = &ASICResponseQueue[2 * ASICResponseQueueStartIndex + 2];
          if ( (unsigned int)(ASICResponseQueueStartIndex + 1) > 0x1FE )
            internalVar1 = 0;
          internalVar2 = *((unsigned __int8 *)currentEntry + 11);
          ASICResponseQueueStartIndex = internalVar1;
          if ( internalVar2 == chainId
            && *((_BYTE *)currentEntry + 10) == 64
            && (intevalTypeId = *((unsigned __int8 *)currentEntry + 9), tempVar2 = getASICCommandMultiplier(), validateASICIntervalType(intevalTypeId, tempVar2) == commandValue)
            && (timestampResponse = *((unsigned __int16 *)currentEntry + 3),
                ++validResponseCount,
                tempVar3 = getASICCommandInterval(),
                validateTimestampResponse(timestampResponse, tempVar3),
                !*(_DWORD *)(outputBuffer + 4 * tempVar4)) )
          {
            responseData = currentEntry[1];
            ++totalValidResponses;
            tempVar5 = getASICCommandInterval();
            validateTimestampResponse(HIWORD(responseData), tempVar5);
            *(_DWORD *)(outputBuffer + 4 * tempVar6) = (unsigned __int16)responseData;
            if ( totalEntriesCount == currentEntryIndex )
            {
LABEL_20:
              outputMutex = localMutex;
              pthread_mutex_unlock(localMutex);
              goto LABEL_21;
            }
          }
          else if ( totalEntriesCount == currentEntryIndex )
          {
            goto LABEL_20;
          }
          loopCounter = ASICResponseQueueCount;
        }
      }
      pthread_mutex_unlock(outputMutex);
      if ( !loopCounter )
        usleep(0x3E8u);
LABEL_21:
      getCurrentTime(intervalCheck);
    }
    while ( (int)checkTimeElapsed(intervalCheck, &timeout) <= 199 );
    if ( totalValidResponses != getASICCommandInterval() && (unsigned int)currentLogLevel > 3 )
    {
      tempVar8 = getASICCommandInterval();
      snprintf(logMessageBuffer, 0x800u, "recv core response not enough!!!, total recv::%d, valid::%d, need::%d.\n", validResponseCount, totalValidResponses, tempVar8);
      logMessage(3, logMessageBuffer, 0);
    }
    ASICCommandActive = 0;
    markASICCommandInactive();
    pthread_mutex_unlock(&globalLock);
    return 0;
  }
  else
  {
    if ( (unsigned int)currentLogLevel > 3 )
    {
      snprintf(logMessageBuffer, 0x800u, "chain::%d don't exist!!!\n", chainId);
      logMessage(3, logMessageBuffer, 0);
    }
    return -1;
  }
}
```