int __fastcall sub_15210(int a1)
{
  int result; // r0
  int v3; // r4
  char v4[2064]; // [sp+0h] [bp-810h] BYREF

  result = sub_1E170();
  if ( result )
  {
    v3 = 0;
    pthread_mutex_lock(&stru_7F7C0);
    calibrationFactor = a1;
    sub_14F20();
    while ( !sub_1E29C(v3) || !configureTemperatureSensor(v3) )
    {
      if ( ++v3 == 4 )
      {
        dword_7F7BC = 1;
        pthread_mutex_unlock(&stru_7F7C0);
        return 0;
      }
    }
    if ( (unsigned int)globalLogLevel > 3 )
    {
      snprintf(v4, 0x800u, "calibration sensor on chain %d failed", v3);
      logMessage(3, v4, 0);
    }
    dword_7F7BC = 1;
    pthread_mutex_unlock(&stru_7F7C0);
    return -1;
  }
  return result;
}
