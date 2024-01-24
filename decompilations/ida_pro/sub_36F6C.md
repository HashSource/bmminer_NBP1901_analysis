```c
int __fastcall initializeAndConfigureASIC(int maxFreqValue, int *logLevelPointer)
{
  int pulseAndDelayConfig; // r0
  unsigned int logLevelGlobal; // r3
  int logLevel; // r1
  int v6; // r10
  int chipIndex; // r6
  char *debugMsgPtr; // r8
  int v9; // r0
  int chainIndex; // r4
  int v11; // r4
  int v12; // r0
  char startupNonceOffset; // r10
  int i; // r4
  int v15; // r4
  signed int timeout; // r5
  int j; // r8
  __useconds_t usleepDuration; // r5
  int v19; // r6
  int k; // r4
  char *chainResponse; // r7
  int v22; // r4
  int v23; // r9
  char *v24; // r11
  int m; // r4
  char *v27; // r4
  int dataCount; // r7
  char *registerReadPointer; // r6
  int n; // r5
  int v31; // t1
  char v32; // r0
  char *debugMsgStartPtr; // r5
  char *debugMsgEndPtr; // r12
  int buffer[34]; // [sp+0h] [bp-8C8h] BYREF
  unsigned int *ptrLogLevelGlobal; // [sp+88h] [bp-840h]
  char *debugString; // [sp+8Ch] [bp-83Ch]
  int maxFreqValueCopy; // [sp+90h] [bp-838h]
  int startupNonceOffsetCopy; // [sp+94h] [bp-834h]
  __int16 pulseAndDelay; // [sp+9Ch] [bp-82Ch]
  char v41; // [sp+9Eh] [bp-82Ah]
  char debugBuffer[16]; // [sp+A0h] [bp-828h] BYREF
  char noncesBuffer[132]; // [sp+B0h] [bp-818h] BYREF

  pulseAndDelayConfig = configurePulseAndDelays();
  logLevelGlobal = *logLevelPointer;
  logLevel = *logLevelPointer;
  v6 = BYTE2(pulseAndDelayConfig);
  pulseAndDelay = pulseAndDelayConfig;
  ptrLogLevelGlobal = (unsigned int *)BYTE1(pulseAndDelayConfig);
  maxFreqValueCopy = logLevel;
  startupNonceOffset = BYTE2(pulseAndDelayConfig);
  debugString = debugBuffer;
  if ( logLevelGlobal > 4 )
  {
    snprintf(debugBuffer, 0x800u, "[DEBUG] Send work, max_freq = %d\n", maxFreqValueCopy);
    logMessage(4, debugBuffer, 0);
    logLevelGlobal = *logLevelPointer;
  }
  chipIndex = 3;
  startupNonceOffsetCopy = v6;
  debugMsgPtr = debugString;
  if ( logLevelGlobal > 4 )
    goto LABEL_15;
  while ( 1 )
  {
    setNullWork(24, 0);
    v9 = readControlRegister();
    chainIndex = 0;
    writeControlRegister(v9 & 0xFFFF70FF | 0x8400);
    do
    {
      if ( isChainAlive(chainIndex) )
        setWorkStatus((unsigned __int8)chainIndex, 1, 0);
      ++chainIndex;
    }
    while ( chainIndex != 4 );
    if ( logLevelGlobal > 4 )
    {
      strcpy(debugMsgPtr, "[DEBUG] Send null work.\n");
      logMessage(4, debugMsgPtr, 0);
    }
    v11 = 0;
    memset(debugMsgPtr, 0, 0x94u);
    debugBuffer[0] = 1;
    do
    {
      if ( isChainAlive(v11) )
      {
        while ( (readHashCount() & (1 << v11)) == 0 )
          waitSomeTime();
        debugBuffer[1] = v11 | 0x80;
        memcpy(buffer, noncesBuffer, 0x84u);
        writeRegisterBuffer(
          *(_DWORD *)debugMsgPtr,
          // ... skipping variables for brevity
          buffer[28]);
        waitSomeTime();
      }
      ++v11;
    }
    while ( v11 != 4 );
    sleep(1u);
    v12 = readControlRegister();
    writeControlRegister(v12 & 0xFFFF70FF | 0x8100);
    usleep((__useconds_t)&loc_186A0);
    if ( !--chipIndex )
      break;
    if ( logLevelGlobal > 4 )
    {
LABEL_15:
      strcpy(debugMsgPtr, "[DEBUG] Set start nonce offset invalid.\n");
      logMessage(4, debugMsgPtr, 0);
    }
  }
  startupNonceOffset = startupNonceOffsetCopy;
  resetASIC(255, 1);
  configureASIC(255, (char)ptrLogLevelGlobal, startupNonceOffset, 1);
  executeBIST();
  usleep(0x186A0u);
  executeBIST();
  usleep(0x186A0u);
  executeBIST();
  usleep(0x186A0u);
  do
  {
    if ( isChainAlive(chipIndex) )
      resetQueue((unsigned __int8)chipIndex, 0);
    ++chipIndex;
  }
  while ( chipIndex != 4 );
  for ( i = 0; i != 4; ++i )
  {
    if ( isChainAlive(i) )
      enableASIC((unsigned __int8)i);
  }
  v15 = 3;
  timeout = 30000 - (maxFreqValueCopy - 250) / 0x14u;
  do
  {
    for ( j = 0; j != 4; ++j )
    {
      if ( isChainAlive(j) )
        setASICFrequency((unsigned __int8)j, timeout / 333);
    }
    usleep((__useconds_t)&loc_186A0);
    --v15;
  }
  while ( v15 );
  do
  {
    if ( isChainAlive(v15) )
      updateASICFrequency((unsigned __int8)v15, 8);
    ++v15;
  }
  while ( v15 != 4 );
  usleepDuration = timeout + 1000;
  v19 = 8;
  do
  {
    for ( k = 0; k != 4; ++k )
    {
      if ( isChainAlive(k) )
        updateASICFrequency((unsigned __int8)k);
    }
    usleep(usleepDuration);
    --v19;
  }
  while ( v19 );
  executeBIST();
  usleep(0x186A0u);
  executeBIST();
  usleep(0x186A0u);
  executeBIST();
  usleep(0x186A0u);
  configureASIC(255, (char)ptrLogLevelGlobal, startupNonceOffset, 0);
  if ( logLevelGlobal > 4 )
  {
    debugMsgStartPtr = debugString;
    debugMsgEndPtr = debugString;
    *(_DWORD *)debugString = *(_DWORD *)"[DEBUG] Get nonce counter, chain.\n";
    strcpy(debugMsgEndPtr + 4, "UG] Get nonce counter, chain.\n");
    logMessage(4, debugMsgStartPtr, 0);
    chainResponse = *(char **)(ptrGlobalVar + 4);
    if ( logLevelGlobal > 4 )
    {
      snprintf(debugMsgStartPtr, 0x800u, "[DEBUG] Read reg and wait done, reg = %d, done_threshold = %d.\n", 224, 1);
      logMessage(4, debugMsgStartPtr, 0);
    }
  }
  else
  {
    chainResponse = *(char **)(ptrGlobalVar + 4);
  }
  memset(chainResponse, 0, 0x400u);
  v22 = 5;
  forceNonceRead(255, 1, 0, 224);
  while ( !checkASICResponse() )
  {
    usleep((__useconds_t)&loc_186A0);
    if ( !--v22 )
    {
      ptrLogLevelGlobal = &logLevelGlobal;
      v23 = 95;
      v24 = chainResponse;
      while ( 1 )
      {
        for ( m = 0; m != 4; ++m )
        {
          if ( isChainAlive(m) )
          {
            dataCount = getChainDataCount();
            if ( dataCount )
            {
              registerReadPointer = &v24[256 * m];
              for ( n = 0; n != dataCount; ++n )
              {
                v31 = (unsigned __int8)*registerReadPointer++;
                if ( v31 != 1 )
                {
                  v32 = interpretNonceData();
                  forceNonceRead((unsigned __int8)m, 0, v32 * n, 224);
                }
              }
            }
          }
        }
        usleep((__useconds_t)&loc_186A0);
        if ( checkASICResponse() )
          break;
        if ( !--v23 )
        {
          if ( *ptrLogLevelGlobal > 3 )
          {
            v27 = debugString;
            snprintf(debugString, 0x800u, "Read REG[0x%X] done failed.\n", 224);
            logMessage(3, v27, 0);
          }
          return -1;
        }
      }
      return 0;
    }
  }
  return 0;
}
```