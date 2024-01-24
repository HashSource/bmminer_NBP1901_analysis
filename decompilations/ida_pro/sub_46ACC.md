```c
int __fastcall sendPICHeartbeat(unsigned int chainIndex)
{
  int mutexLockResult; // r5
  int operationStatus; // r4
  int picResponse[2]; // [sp+8h] [bp-830h] BYREF
  __int16 responseCheck; // [sp+Ch] [bp-82Ch]
  int heartBeatPacket[4]; // [sp+10h] [bp-828h] BYREF
  char errorMsgBuffer[2072]; // [sp+20h] [bp-818h] BYREF

  if ( chainIndex > 0xF )
  {
    snprintf(errorMsgBuffer, 0x800u, "%s: Bad pic param, input chain is %d\n", "send_pic_heart_beat", chainIndex);
    operationStatus = -2147483135;
    logMessage(0, errorMsgBuffer, 0);
    return operationStatus;
  }
  if ( !chainPICInitialized[2 * chainIndex + 1] )
  {
    operationStatus = initializePIC(chainIndex);
    if ( operationStatus < 0 )
    {
      snprintf(errorMsgBuffer, 0x800u, "%s: auto exec open_pic, but chain %d open eeprom failed\n", "send_pic_heart_beat", chainIndex);
      logMessage(0, errorMsgBuffer, 0);
      return operationStatus;
    }
  }
  int picI2CHandle = chainPICInitialized[2 * chainIndex];
  operationStatus = 0;
  pthread_mutex_lock(&heartBeatMutex);
  heartBeatPacket[1] = 6656;
  heartBeatPacket[0] = 369404501; // Magic numbers specific to the heart beat packet
  heartBeatPacket[2] = 0;
  heartBeatPacket[3] = 0;
  picResponse[0] = 0;
  responseCheck = 0;
  if ( writeI2CData(picI2CHandle, (int)heartBeatPacket, 6) != 6 )
  {
    snprintf(errorMsgBuffer, 0x800u, "%s write iic err\n", "common_heartbeat_function");
    goto errorHandler;
  }
  usleep(0x493E0u);
  if ( readI2CData(picI2CHandle, picResponse, 6) != 6 )
  {
    snprintf(errorMsgBuffer, 0x800u, "%s read iic err\n", "common_heartbeat_function");
    goto errorHandler;
  }
  if ( ((unsigned char*)picResponse)[1] == 22 && ((unsigned char*)picResponse)[2] == 1 )
    goto cleanUp;
  snprintf(errorMsgBuffer, 0x800u, "%s failed!\n", "common_heartbeat_function");
  logMessage(0, errorMsgBuffer, 0);
  printDataBytes((unsigned char*)picResponse, 6);
errorHandler:
  operationStatus = -2147483136;
cleanUp:
  pthread_mutex_unlock(&heartBeatMutex);
  return operationStatus;
}
```