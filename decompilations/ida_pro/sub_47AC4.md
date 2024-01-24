```c
int __fastcall upgradePIC(unsigned int chainIndex, const char *firmwarePath) {
  int result; // r4
  int chainID; // r5
  FILE *file; // r0
  FILE *firmwareFile; // r6
  _OWORD *wordPtr; // r4
  __int16 byteData; // r0
  int programmingCounter; // r4
  int *tempPtr; // r3
  int temp; // r0
  int temp1; // r1
  int temp2; // r2
  int temp3; // r3
  int *temp4; // r0
  int *temp5; // r2
  __int16 calculatedSum; // r3
  __int16 tempSum; // t1
  __int16 i2cResponse; // [sp+Ch] [bp-1BE4h] BYREF
  char line[4]; // [sp+10h] [bp-1BE0h] BYREF
  char i2cBuffer; // [sp+14h] [bp-1BDCh]
  char programmingBuffer; // [sp+17h] [bp-1BD9h] BYREF
  int dataBlock0; // [sp+18h] [bp-1BD8h]
  int dataBlock1; // [sp+1Ch] [bp-1BD4h]
  int dataBlock2; // [sp+20h] [bp-1BD0h]
  int dataBlock3; // [sp+24h] [bp-1BCCh] BYREF
  int i2cCommand; // [sp+28h] [bp-1BC8h] BYREF
  int i2cData[4]; // [sp+2Ch] [bp-1BC4h] BYREF
  char checkSumLowByte; // [sp+3Ch] [bp-1BB4h]
  char checkSumHighByte; // [sp+3Dh] [bp-1BB3h]
  int checkSumPadding0; // [sp+3Eh] [bp-1BB2h]
  int checkSumPadding1; // [sp+42h] [bp-1BAEh]
  __int16 combinedChecksum; // [sp+46h] [bp-1BAAh]
  char message[8]; // [sp+48h] [bp-1BA8h] BYREF
  _OWORD firmwareData[314]; // [sp+848h] [bp-13A8h] BYREF

  if (chainIndex > 0xF) {
    result = -2147483135;
    snprintf((char *)firmwareData, 0x800u, "%s: Bad pic param, input chain is %d\n", "upgrade_pic", chainIndex);
    logMessage(0, (const char *)firmwareData, 0);
    return result;
  }
  if (!globalChainData[2 * chainIndex + 1]) {
    chainID = openEEPROM(chainIndex);
    if (chainID < 0) {
      snprintf((char *)firmwareData, 0x800u, "%s: auto exec open_pic, but chain %d open eeprom failed\n", "upgrade_pic", chainIndex);
      logMessage(0, (const char *)firmwareData, 0);
      return chainID;
    }
  }
  memset(firmwareData, 0, 0x1388u);
  dataBlock1 = 0;
  dataBlock2 = 0;
  dataBlock3 = 0;
  chainID = globalChainData[2 * chainIndex];
  dataBlock0 = 0;
  *(_DWORD *)line = 0;
  i2cBuffer = 0;
  snprintf(message, 0x800u, "%s\n", "_update_pic_app_program_1704");
  logMessage(2, message, 0);
  file = (FILE *)fopen64(firmwarePath, "r");
  firmwareFile = file;
  if (!file) {
    snprintf(message, 0x800u, "%s: open %s failed\n", "_update_pic_app_program_1704", firmwarePath);
    result = -2147483136;
    logMessage(0, message, 0);
    return result;
  }
  fseek(file, 0, 0);
  wordPtr = firmwareData;
  memset(firmwareData, 0, 0x1388u);
  snprintf(message, 0x800u, "%s: pic_flash_length = %d\n", "_update_pic_app_program_1704", 2432);
  logMessage(2, message, 0);
  do {
    wordPtr = (_OWORD *)((char *)wordPtr + 2);
    fgets(line, 1023, firmwareFile);
    byteData = strtoul(line, 0, 16);
    *((_BYTE *)wordPtr - 1) = byteData;
    *((_BYTE *)wordPtr - 2) = HIBYTE(byteData);
  } while (firmwareData + 304 != wordPtr);
  fclose(firmwareFile);
  result = resetPIC(chainIndex);
  if (result) {
    goto logResetError;
  }
  result = setFlashPointer(chainID);
  if (result) {
    snprintf(message, 0x800u, "%s set 1704 flash pointer err\n", "_erase_pic_app");
    logMessage(0, message, 0);
    snprintf(message, 0x800u, "%s: erase app flash error!\n\n", "_update_pic_app_program_1704");
    logMessage(0, message, 0);
    return result;
  }
  pthread_mutex_lock(&mutex);
  i2cCommand = 67414613; // IIC erase command
  i2cData[0] = 2048; // Command parameter
  i2cResponse = 0;
  if (writeI2C(chainID, &i2cCommand, 6) != 6) {
    snprintf(message, 0x800u, "%s write iic err\n", "_bitmain_pic_erase_1704");
    goto logEraseError;
  }
  usleep(0x493E0u);
  if (readI2C(chainID, &i2cResponse, 2) != 2) {
    snprintf(message, 0x800u, "%s read iic err\n", "_bitmain_pic_erase_1704");
    goto logEraseError;
  }
  usleep(0x493E0u);
  if ((unsigned __int8)i2cResponse != 4 || HIBYTE(i2cResponse) != 1) {
    snprintf(
      message,
      0x800u,
      "%s failed! read_back_data[0] = 0x%02x, read_back_data[1] = 0x%02x\n\n",
      "_bitmain_pic_erase_1704",
      (unsigned __int8)i2cResponse,
      HIBYTE(i2cResponse));
logEraseError:
    logMessage(0, message, 0);
  }
  pthread_mutex_unlock(&mutex);
  result = setFlashPointer(chainID);
  if (result) {
    snprintf(message, 0x800u, aSSet1704FlashP_0, "_update_pic_app_program_1704");
    logMessage(0, message, 0);
    return result;
  }
  programmingCounter = 0;
  do {
    tempPtr = (int *)&firmwareData[programmingCounter];
    temp = *tempPtr;
    temp1 = tempPtr[1];
    temp2 = tempPtr[2];
    temp3 = tempPtr[3];
    dataBlock0 = temp;
    dataBlock1 = temp1;
    dataBlock2 = temp2;
    dataBlock3 = temp3;
    snprintf(message, 0x800u, "send pic program time: %d", programmingCounter);
    logMessage(2, message, 0);
    pthread_mutex_lock(&mutex);
    temp4 = i2cData;
    temp5 = (int *)&programmingBuffer;
    calculatedSum = 22;
    checkSumPadding0 = 0;
    i2cResponse = 0;
    checkSumPadding1 = 0;
    combinedChecksum = 0;
    memset(i2cData, 0, sizeof(i2cData));
    i2cCommand = 34908757; // IIC programming command
    do {
      tempSum = *((unsigned __int8 *)temp5 + 1);
      temp5 = (int *)((char *)temp5 + 1);
      calculatedSum += tempSum;
      *(_BYTE *)temp4 = tempSum;
      temp4 = (int *)((char *)temp4 + 1);
    } while (((char *)&dataBlock3 + 3) != (char *)temp5);
    checkSumLowByte = HIBYTE(calculatedSum);
    checkSumHighByte = calculatedSum;
    if (writeI2C(chainID, &i2cCommand, 22) == 22) {
      usleep(0x493E0u);
      if (readI2C(chainID, &i2cResponse, 2) == 2) {
        if ((unsigned __int8)i2cResponse == 2 && HIBYTE(i2cResponse) == 1) {
          i2cCommand = 84191829; // IIC finish programming command
          i2cData[0] = 2304; // Command parameter
          if (writeI2C(chainID, &i2cCommand, 6) == 6) {
            usleep(0x493E0u);
            if (readI2C(chainID, &i2cResponse, 2) == 2) {
              if ((unsigned __int8)i2cResponse == 5 && HIBYTE(i2cResponse) == 1) {
                snprintf(message, 0x800u, "%s  success write to pic flash\n", "_bitmain_pic_write_1704");
                logMessage(2, message, 0);
                goto lockAndContinue;
              }
              snprintf(
                message,
                0x800u,
                "%s failed 2! read_back_data[0] = 0x%02x, read_back_data[1] = 0x%02x\n\n",
                "_bitmain_pic_write_1704",
                (unsigned __int8)i2cResponse,
                HIBYTE(i2cResponse));
            }
            else
            {
              snprintf(message, 0x800u, "%s read iic 2 err\n", "_bitmain_pic_write_1704");
            }
          }
          else {
            snprintf(message, 0x800u, "%s write iic 2 err\n", "_bitmain_pic_write_1704");
          }
        }
        else {
          snprintf(
            message,
            0x800u,
            "%s failed 1! read_back_data[0] = 0x%02x, read_back_data[1] = 0x%02x\n\n",
            "_bitmain_pic_write_1704",
            (unsigned __int8)i2cResponse,
            HIBYTE(i2cResponse));
        }
      }
      else {
        snprintf(message, 0x800u, "%s read iic 1 err\n", "_bitmain_pic_write_1704");
      }
    }
    else {
      snprintf(message, 0x800u, "%s write iic 1 err\n", "_bitmain_pic_write_1704");
    }
    logMessage(0, message, 0);
lockAndContinue:
    ++programmingCounter;
    pthread_mutex_unlock(&mutex);
  } while (programmingCounter != 304);
  result = resetPIC(chainIndex);
  if (result) {
logResetError:
    snprintf(message, 0x800u, "%s: reset pic error!\n\n", "_update_pic_app_program_1704");
    logMessage(0, message, 0);
  }
  return result;
}
```