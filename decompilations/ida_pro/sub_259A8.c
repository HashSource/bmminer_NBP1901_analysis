void __noreturn sub_259A8()
{
  double v0; // d0
  double v1; // d9
  int v2; // r4
  double v3; // d8
  double v4; // d7
  const char *v5; // r3
  bool v6; // cc
  int v7; // r12
  int v8[4]; // [sp+10h] [bp-848h] BYREF
  char s[2104]; // [sp+20h] [bp-838h] BYREF

  memset(v8, 0, sizeof(v8));
  v1 = -1.0;
  prctl(15, "heart_beat", 0, 0, 0);
  while ( 1 )
  {
    v2 = 0;
    v3 = 0.0;
    pthread_setcancelstate(1, 0);
    do
    {
      if ( sub_1E29C(v2) )
      {
        sub_304D4();
        if ( sub_191FC((unsigned __int8)v2) )
        {
          v8[v2] = 0;
        }
        else
        {
          v6 = (unsigned int)globalLogLevel > 1;
          v7 = v8[v2] + 1;
          v8[v2] = v7;
          if ( v6 )
          {
            snprintf(s, 0x800u, "chain[%d] heart beat fail %d times.\n", v2, v7);
            logMessage(1, s, 0);
          }
        }
        sub_304D4();
        readASICVoltage(v2);
        v3 = v3 + v0;
      }
      ++v2;
    }
    while ( v2 != 4 );
    if ( sub_1E28C() )
      v3 = v3 / (double)sub_1E28C();
    if ( v1 < -0.1 )
      v1 = v3;
    if ( (unsigned int)globalLogLevel > 4 )
    {
      snprintf(s, 0x800u, "last avg = %.2f, current voltage = %.2f", v1, v3);
      logMessage(4, s, 0);
    }
    v4 = (double)(dword_482A8C / 100) * 0.75;
    if ( (v4 < v1 && v1 * 0.75 > v3 || v4 < v3 && v3 * 0.75 > v1) && (unsigned int)globalLogLevel > 3 )
    {
      v5 = "drop";
      if ( v3 - v1 > 0.0 )
        v5 = "rise";
      snprintf(s, 0x800u, "chain avg vol %s to %.2f", v5, v3);
      logMessage(3, s, 0);
    }
    v1 = v3;
    pthread_setcancelstate(0, 0);
    pthread_testcancel();
    sleep(0xAu);
  }
}
