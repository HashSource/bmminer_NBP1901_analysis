```c
int __fastcall checkASICAdcVoltage(int chainIndex, int step)
{
  const char *hwVer; // r0
  const char *hwVer_2; // r0
  int domainIdx; // r7
  int domainCount; // r8
  int asicIdx; // r6
  _DWORD *adcReadyCheck; // r0
  int adcReadyStatus; // r4
  int asicCount; // r5
  int domainCount_2; // r11
  unsigned int adcD0Value; // r11
  unsigned int adcD1Value; // r0
  double *d0Ptr; // r3
  double *d1Ptr; // r4
  double d0; // d3
  double d1; // d4
  double d2; // d6
  double d3; // d5
  int domainCount_3; // r11
  _DWORD *stickyBitCheck; // r0
  int asicId; // r10
  unsigned int d0; // r4
  _DWORD *adcSampleNotReadyLog; // r0
  unsigned int d1; // r5
  int adcResult; // r0
  bool stickyBit; // zf
  double *adcVolts; // r12
  int domainCount_4; // r8
  unsigned int d2; // r5
  int adcControlStatus; // r4
  _QWORD *adcValue; // r6
  int d3Value; // r0
  int domainCount_5; // r7
  int asicCount_2; // r11
  int adcControlStatus_2; // r4
  _DWORD *adcNotReadyLog2; // r0
  int d0Value; // r5
  int d1Value; // r8
  int asicId_2; // r9
  unsigned int d2Value; // r9
  unsigned int adcControlValue; // r0
  double *adcValues; // r12
  _DWORD *adcLogging; // r0
  char *wend; // r6
  int sprintfRet; // r5
  int asicCount_3; // r8
  char *wend_2; // r4
  int logLine; // r3
  _DWORD *adcLog; // r0
  double d0Log; // [sp+0h] [bp-3110h]
  double d1Log; // [sp+8h] [bp-3108h]
  double d2Log; // [sp+10h] [bp-3100h]
  double d3Log; // [sp+18h] [bp-30F8h]
  double avgAdc; // [sp+28h] [bp-30E8h]
  char *logFormat; // [sp+38h] [bp-30D8h]
  char *logFormat_2; // [sp+38h] [bp-30D8h]
  char *decodedHWVersion; // [sp+40h] [bp-30D0h]
  char *decodedHWVersion_2; // [sp+40h] [bp-30D0h]
  int domainCount_6; // [sp+44h] [bp-30CCh]
  unsigned int chainIndex_u8; // [sp+4Ch] [bp-30C4h]
  char formatBuffer[128]; // [sp+50h] [bp-30C0h] BYREF
  _QWORD adcResults[510]; // [sp+D0h] [bp-3040h] BYREF
  _OWORD adcVoltsBuffer[516]; // [sp+10D0h] [bp-2040h] BYREF

  memset(adcVoltsBuffer, 0, sizeof(adcVoltsBuffer));
  hwVer = (const char *)getHardwareVersion();
  if ( strcmp(hwVer, "BHB28601") )
  {
    hwVer_2 = (const char *)getHardwareVersion();
    if ( strcmp(hwVer_2, "BHB28701") )
    {
      domainCount_4 = getDomainCount();
      if ( domainCount_4 )
      {
        // Code block for BHB28601/BHB28701 continues here, omitted for brevity
      }
      // Post-domain count code block continues here, omitted for brevity
    }
  }
  
  chainIndex_u8 = (unsigned __int8)chainIndex;
  pthread_mutex_lock(&globalMutex);
  sub_16330(1);
  usleep(20000); // 0x4E20 in hexadecimal
  sub_51478(chainIndex_u8);
  usleep(20000); // 0x4E20 in hexadecimal
  sub_514A4(chainIndex_u8);
  usleep(20000); // 0x4E20 in hexadecimal
  logFormat = (char *)getASICCount();
  if ( logFormat )
  {
    // Code block for executing ADC check over all domain and ASICs, omitted for brevity
  }
LABEL_15:
  domainCount_6 = getASICCount();
  if ( !domainCount_6 )
    goto LABEL_29;
  domainCount_3 = 0;
  decodedHWVersion = (char *)chainIndex;
  do
  {
    // Logging data block starts here, omitted for brevity
  }
  while ( domainCount_6 != domainCount_3 );
  chainIndex = (int)decodedHWVersion;
LABEL_29:
  sub_513FC(chainIndex_u8);
  usleep(20000); // 0x4E20 in hexadecimal
  sub_16330(0);
  usleep(20000); // 0x4E20 in hexadecimal
  pthread_mutex_unlock(&globalMutex);
LABEL_30:
  pthread_mutex_lock(&adcMutex);
  memcpy(&adcResultsStorage + 0x2000 * chainIndex, adcVoltsBuffer, sizeof(adcVoltsBuffer));
  pthread_mutex_unlock(&adcMutex);
  return 0;
}
```