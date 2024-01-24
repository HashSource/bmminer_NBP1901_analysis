```c
int initTemperatureMonitoring()
{
  int sensorCount; // r4
  int maxSensorCount; // r6
  int adjustedSize; // r8
  char *dynamicBuffer1; // r9
  _DWORD *dynamicBuffer2; // r4
  char *sensorDataArray; // r0
  _DWORD *tempBuffer; // r3
  int index; // r2
  char *bufferOffset; // r4
  _DWORD *tempIter; // r6
  char *currentSensorData; // r1
  int dataSize; // r12
  int i; // r4
  int sensorReading; // r0
  int sensorIdx; // r6
  int sensorInfoCount; // r0
  int j; // r4
  pthread_attr_t threadAttributes[57]; // [sp+0h] [bp-820h] BYREF

  sensorCount = getSensorCount1();
  if ( sensorCount <= getSensorCount2() )
    maxSensorCount = getSensorCount2();
  else
    maxSensorCount = getSensorCount1();
  if ( (unsigned int)globalLogLevel > 3 )
  {
    snprintf(threadAttributes[0].__size, 0x800u, "max sensor num = %d", maxSensorCount);
    logMessage(3, threadAttributes[0].__size, 0);
  }
  adjustedSize = 72 * maxSensorCount;
  dynamicBuffer1 = (char *)malloc(0x10u);
  globalDynamicBuffer1 = (int)dynamicBuffer1;
  dynamicBuffer2 = malloc(0x30u);
  sensorDataArray = (char *)calloc(72 * maxSensorCount, 1u);
  tempBuffer = dynamicBuffer2;
  index = 6 * maxSensorCount;
  bufferOffset = dynamicBuffer1 - 4;
  tempIter = tempBuffer + 12;
  currentSensorData = sensorDataArray;
  do
  {
    *((_DWORD *)bufferOffset + 1) = tempBuffer;
    bufferOffset += 4;
    dataSize = (int)&currentSensorData[index + index];
    *tempBuffer = currentSensorData;
    tempBuffer[1] = &currentSensorData[index];
    tempBuffer[2] = dataSize;
    tempBuffer += 3;
    currentSensorData = (char *)(index + dataSize);
  }
  while ( tempIter != tempBuffer );
  i = 0;
  globalDynamicBuffer4 = (int)&sensorDataArray[adjustedSize];
  sensorReading = getSensorCount1();
  globalDynamicBuffer2 = (int)malloc(4 * sensorReading);
  while ( getSensorCount1() > i )
  {
    sensorIdx = globalDynamicBuffer2;
    *(_DWORD *)(sensorIdx + 4 * i) = getSensorReading1(i);
    ++i;
  }
  sensorInfoCount = getSensorCount2();
  j = 0;
  globalDynamicBuffer3 = (int)malloc(sensorInfoCount);
  while ( getSensorCount2() > j )
  {
    *(_BYTE *)(globalDynamicBuffer3 + j) = getSensorReading2(j);
    ++j;
  }
  pthread_attr_init(threadAttributes);
  pthread_attr_setstacksize(threadAttributes, 0x100000u);
  globalThreadFlag = 1;
  pthread_create(&monitoringThreadHandle, threadAttributes, (void *(*)(void *))monitorTemperatureThread, 0);
  return pthread_detach(monitoringThreadHandle);
}
```