int __fastcall sub_1A870(unsigned int a1, unsigned int a2, unsigned int a3)
{
  float v3; // s0
  int i; // r4
  unsigned int v6; // r3
  unsigned int v7; // r6
  float v8; // s19
  float v9; // s17
  float v10; // s15
  float v11; // s16
  int j; // r4
  int k; // r4
  int result; // r0
  unsigned int v17; // [sp+1Ch] [bp-84Ch]
  char v18[4]; // [sp+24h] [bp-844h] BYREF
  int v19; // [sp+28h] [bp-840h] BYREF
  int v20; // [sp+2Ch] [bp-83Ch]
  char s[2104]; // [sp+30h] [bp-838h] BYREF

  if ( (unsigned int)globalLogLevel > 4 )
  {
    snprintf(s, 0x800u, "fixed step freq_start = %d, freq_end = %d, freq_step = %.2f\n", a2, a3, v3);
    logMessage(4, s, 0);
  }
  for ( i = 0; i != 4; ++i )
  {
    if ( sub_1E29C(i) )
      sub_1F0E0(i, 1, 0, a1);
  }
  if ( a2 < a3 )
    v6 = a3 - a2;
  else
    v6 = a2;
  if ( a2 >= a3 )
    v6 -= a3;
  v17 = (unsigned int)(((float)((float)v6 + v3) - 0.01) / v3);
  if ( v17 )
  {
    v7 = 1;
    v8 = (float)a2;
    v9 = (float)a3;
    do
    {
      v10 = (float)v7;
      v19 = 0;
      v20 = 0;
      if ( a2 >= a3 )
      {
        v11 = v8 - (float)(v10 * v3);
        if ( v9 > v11 )
          v11 = (float)a3;
      }
      else
      {
        v11 = v8 + (float)(v10 * v3);
        if ( v9 < v11 )
          v11 = (float)a3;
      }
      for ( j = 0; j != 4; ++j )
      {
        if ( sub_1E29C(j) )
        {
          sub_502C0((int)&v19, v18, 0);
          BYTE2(v20) = v18[0];
          sub_1F164(j, 1, 0, a1, v19, v20);
          if ( (unsigned int)globalLogLevel > 4 )
          {
            snprintf(s, 0x800u, "chain = %d set freq to %.2f", j, v11);
            logMessage(4, s, 0);
          }
          ChainFrequencyBoundary[j] = (int)v11;
          dword_7F8E0[j] = (int)v11;
        }
      }
      ++v7;
      usleep((__useconds_t)&loc_186A0);
    }
    while ( v17 >= v7 );
  }
  for ( k = 0; k != 4; ++k )
  {
    result = sub_1E29C(k);
    if ( result )
    {
      ChainFrequencyBoundary[k] = a3;
      dword_7F8E0[k] = a3;
    }
  }
  return result;
}
