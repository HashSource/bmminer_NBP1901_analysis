```c
int __fastcall main(int argc, char **argv, char **envp)
{
  char *progName; // r7
  FILE *procFile; // r8
  size_t strLen; // r0
  size_t tokenPos; // r5
  int numInstances; // r6
  int *pidBuffer; // r8
  size_t pos; // r4
  const unsigned __int16 **ctypes; // r0
  int pid; // t1
  int pidInt; // r3
  void *minerConfigStruct; // r5
  _DWORD *minerBasicStruct; // r4
  _DWORD *minerWorkInfo; // r0
  int minerHardwarePtr; // r4
  char *threadDataPtr; // r10
  char *c5StructPtr; // r5
  int tokenValue; // r4
  int tempVar; // r2
  int socketVar; // r8
  int socketRes; // r6
  __int64 socketTime; // r10
  int c5Index; // r7
  int tmpVar; // r3
  unsigned int *nonceCountPtr; // r4
  int nonceTmpVar; // r2
  int jobVar; // r1
  int jobRes; // r0
  int apiThreadRes; // r0
  int apiThreadVar; // r6
  void **chainInfo; // r10
  __int64 poolDiff; // r0
  __int64 currentDiff; // r6
  int apiValue; // r1
  int apiReq; // r0
  unsigned __int64 apiTmpValue; // r2
  __int64 hashVar; // r0
  __int64 hashCalcVal; // r6
  int hashCalcVar; // r1
  int hashReq; // r0
  unsigned __int64 hashTmpCalc; // r2
  int hashResVar; // r1
  int hashResTmp; // r2
  int hashResData; // r3
  int hashesVar; // r1
  int hashesTmpVar; // r2
  int hashesData; // r3
  int nonceTmpData; // r1
  int nonceResData; // r2
  int *nonceDataBuffer; // r2
  void ***chainDataPtr; // r1
  unsigned int chainData; // t1
  unsigned __int64 workDiffVal; // r2
  int *chainTmpVar; // r3
  int debugRes; // r0
  int debugVar; // r6
  unsigned int debugTmpVar; // r0
  char debugChar; // r0
  unsigned int debugValue; // r1
  int *debugTmpRes; // r0
  int *debugTmpVar; // r0
  int *debugNonceVar; // r0
  int *debugTmpDebug; // r0
  int debugTmp; // [sp+20h] [bp-A88h]
  unsigned int debugValues1; // [sp+28h] [bp-A80h]
  double poolDiffDouble; // [sp+28h] [bp-A80h]
  double currentDiffDouble; // [sp+28h] [bp-A80h]
  pthread_mutex_t *mutexPtr; // [sp+34h] [bp-A74h]
  int *chainInfoPtr; // [sp+3Ch] [bp-A6Ch]
  __int64 debugTime; // [sp+40h] [bp-A68h]
  unsigned int chainNumInstances; // [sp+4Ch] [bp-A5Ch]
  __int64 nonceDebugCalc; // [sp+58h] [bp-A50h]
  void **chainDebugPtr; // [sp+68h] [bp-A40h] BYREF
  int chainDebugValues[6]; // [sp+6Ch] [bp-A3Ch] BYREF
  unsigned int workDebugValues; // [sp+84h] [bp-A24h]
  int workDebugNonce; // [sp+88h] [bp-A20h] BYREF
  char nonceBuffer[32]; // [sp+8Ch] [bp-A1Ch] BYREF
  char commandBuffer[64]; // [sp+ACh] [bp-9FCh] BYREF
  struct sigaction sigactStruct; // [sp+ECh] [bp-9BCh] BYREF
  int pidBufferArray[64]; // [sp+178h] [bp-930h] BYREF
  int chainDebugInfo[510]; // [sp+278h] [bp-830h] BYREF

  sigactStruct.sa_handler = (__sighandler_t)signalHandler;
  sigactStruct.sa_flags = 0;
  sigemptyset(&sigactStruct.sa_mask);
  sigaction(SIGTERM, &sigactStruct, &oldSigTermAct);
  sigaction(SIGINT, &sigactStruct, &oldSigIntAct);
  sigaction(SIGABRT, &sigactStruct, &oldSigAbrtAct);
  sem_init(&semaphore, 0, 0);
  logFunctionCall((int)&logStructure, "main", 2771);
  progName = *argv;
  memset(pidBufferArray, 0, sizeof(pidBufferArray));
  memset(commandBuffer, 0, sizeof(commandBuffer));
  snprintf(commandBuffer, 0x40u, "pidof %s", progName);
  procFile = popen(commandBuffer, "r");
  if ( procFile )
  {
    while ( true )
    {
      while ( true )
      {
        do
        {
          if ( !fgets((char *)pidBufferArray, 256, procFile) )
          {
            tokenPos = 0;
            numInstances = 0;
            pclose(procFile);
            pidBuffer = pidBufferArray;
            for ( pos = 1; strlen((const char *)pidBufferArray) >= pos; ++pos )
            {
              memset(nonceBuffer, 0, sizeof(nonceBuffer));
              ctypes = _ctype_b_loc();
              pid = *(unsigned __int8 *)pidBuffer;
              pidBuffer = (int *)((char *)pidBuffer + 1);
              if ( ((*ctypes)[pid] & 0x2000) != 0 )
              {
                // Code omitted for brevity
              }
            }
            if ( numInstances )
            {
              // Code omitted for brevity
            }
            goto LABEL_30;
          }
        }
        while ( !logEnabled );
        if ( loggingDebug || loggingVerbose || logLevel > 6 )
          break;
LABEL_9:
        if ( loggingVerbose || logLevel > 6 )
        {
LABEL_11:
          strLen = strlen((const char *)pidBufferArray);
          snprintf((char *)chainDebugInfo, 0x800u, "strlen is: %d\n", strLen);
          logMessage(7, (const char *)chainDebugInfo, 0);
        }
      }
      snprintf((char *)chainDebugInfo, 0x800u, "pidof %s command result is: %s\n", progName, (const char *)pidBufferArray);
      logMessage(7, (const char *)chainDebugInfo, 0);
      if ( logEnabled )
      {
        if ( loggingDebug )
          goto LABEL_11;
        goto LABEL_9;
      }
    }
  }
  if ( logEnabled && (loggingDebug || loggingVerbose || logLevel > 6) )
  {
    snprintf((char *)chainDebugInfo, 0x800u, " app-service:%s Not Found!!!", progName);
    logMessage(7, (const char *)chainDebugInfo, 0);
  }
LABEL_30:
  // Here, many initialization and configuration routines are called, please refer to the actual code to rename variables

  // Core loop for mining and processing work
  threadDataPtr = miningDataArray;
  while ( true )
  {
    c5StructPtr = threadDataPtr;
LABEL_49:
    if ( !*(_BYTE *)(minerBasicStruct + 364) )
    {
      chainInfoPtr = (int *)minerWorkInfo;
      socketVar = *(_DWORD *)(*(_DWORD *)(minerWorkInfo + 36) + 20);
      mutexPtr = (pthread_mutex_t *)socketVar;
      pthread_mutex_lock(&globalMutex);
      if ( pthread_mutex_lock(mutexPtr) )
      {
        // Code omitted for brevity
      }
      // Here, the primary mining operations such as nonce calculation and pool communication are processed

          // Additional mining logic is processed based on the obtained work
          // Submit found block to the mining pool and process the result
          // Log various statistics and debug information if enabled
          // Release lock and clean up
        }
        break;
    }
    break;
  }
  sem_destroy(&semaphore);
  cleanUpResources();
  return 0;
}
```