int sub_35344()
{
  int v0; // r7
  int v1; // r5
  int v2; // r6
  int result; // r0
  int v4; // r2
  int v5; // r2
  int v6; // r3
  int v7; // r8
  bool v8; // cc
  int v9; // r0
  unsigned __int8 v10; // r4
  int v11; // r4
  int v12; // r0
  unsigned __int8 v13; // r4
  int v14; // r0
  char s[2080]; // [sp+18h] [bp-820h] BYREF

  if ( (byte_99EDBC & 2) != 0 && (unsigned __int8)byte_99EDC2 <= 0x64u )
  {
    result = sub_13FB0((unsigned __int8)byte_99EDC2);
    if ( !dword_482A94 )
    {
      if ( (unsigned int)globalLogLevel > 3 )
      {
        snprintf(s, 0x800u, "fan_etf: Set fixed fan speed=%d\n", (unsigned __int8)byte_99EDC2);
        result = logMessage(3, s, 0);
      }
      dword_482A94 = 1;
    }
    return result;
  }
  v0 = sub_1572C();
  v1 = sub_15508();
  v2 = sub_155C4();
  result = v1 - sub_1572C();
  if ( dword_7EDE8 == 255 )
  {
    v5 = dword_482A98;
LABEL_25:
    dword_482A9C = v5 > 1;
    dword_482A98 = (v5 - 1) & ~((v5 - 1) >> 31);
    goto LABEL_10;
  }
  v4 = dword_7EDE8 - v0;
  if ( dword_7EDE8 - v0 < 0 )
    v4 = v0 - dword_7EDE8;
  v8 = v4 <= 4;
  v5 = dword_482A98;
  if ( v8 )
    goto LABEL_25;
  v6 = dword_482A98 + 1;
  if ( dword_482A98 + 1 >= 2 )
    v6 = 2;
  dword_482A98 = v6;
  dword_482A9C = v5 > 0;
LABEL_10:
  dword_7EDE8 = v0;
  if ( v1 > 72 )
    goto LABEL_14;
  v7 = abs32(result);
  v8 = v7 <= 32;
  if ( v7 <= 32 )
    v8 = v0 <= 50;
  if ( !v8 || dword_482A9C )
  {
LABEL_14:
    if ( !dword_482A94 )
    {
      if ( (unsigned int)globalLogLevel > 4 )
      {
        snprintf(
          s,
          0x800u,
          "min pic temp = %d max pic temp = %d pic diff = %d, max chip temp = %d, last diff continuous_time = %d",
          v0,
          v1,
          result,
          v2,
          dword_482A98);
        logMessage(4, s, 0);
      }
      dword_482A94 = 1;
    }
    return sub_13FB0(100);
  }
  else
  {
    dword_482A94 = 0;
    if ( v7 > 27 )
    {
      v10 = (unsigned int)(float)((float)((float)((float)v7 - 25.0) / 25.0) * 10.0);
      if ( v10 + sub_1E4B0() <= 99 )
        v11 = (unsigned __int8)(v10 + sub_1E4B0());
      else
        v11 = 100;
      if ( (unsigned int)globalLogLevel > 4 )
      {
        v12 = sub_1E4B0();
        snprintf(s, 0x800u, "max temp = %04d, diff = %04d, + pwm form %04d to %04d\n", v1, v7, v12, v11);
        logMessage(4, s, 0);
      }
      return sub_13FB0(v11);
    }
    if ( v7 > 22 )
    {
      if ( (unsigned int)globalLogLevel > 4 )
      {
        v9 = sub_1E4B0();
        snprintf(s, 0x800u, "max temp = %04d, diff = %04d, = pwm %04d\n", v1, v7, v9);
        return logMessage(4, s, 0);
      }
      return result;
    }
    v13 = (unsigned int)(float)((float)((float)(25.0 - (float)v7) / 25.0) * 10.0);
    result = sub_1E4B0() - v13;
    if ( result > 39 )
    {
      result = sub_1E4B0();
      v11 = (unsigned __int8)(result - v13);
    }
    else
    {
      v11 = 40;
    }
    if ( (unsigned int)globalLogLevel > 4 )
    {
      v14 = sub_1E4B0();
      snprintf(s, 0x800u, "max temp = %04d, diff = %04d, - pwm form %04d to %04d\n", v1, v7, v14, v11);
      result = logMessage(4, s, 0);
    }
    if ( v1 <= 67 )
      return sub_13FB0(v11);
  }
  return result;
}
