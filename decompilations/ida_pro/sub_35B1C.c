int sub_35B1C()
{
  int v0; // r8
  int i; // r5
  int v2; // r4
  int v3; // r2
  float v4; // s12
  float v5; // s14
  char s[2080]; // [sp+10h] [bp-820h] BYREF

  v0 = 0;
  for ( i = 0; i != 4; ++i )
  {
    v2 = 4 * (i + 1032);
    if ( sub_1E29C(i) )
    {
      v3 = dword_4FCB28;
      v4 = *(float *)(dword_4FCB28 + v2);
      v5 = *(float *)(*(_DWORD *)(dword_4FCB28 + 8) + 20);
      if ( (unsigned int)globalLogLevel > 3 )
      {
        snprintf(s, 0x800u, "chain = %d, nonce_rate_max = %.4f, nonce_rate_threshold = %.4f\n", i, v4, v5);
        logMessage(3, s, 0);
        v3 = dword_4FCB28;
        v4 = *(float *)(dword_4FCB28 + v2);
        v5 = *(float *)(*(_DWORD *)(dword_4FCB28 + 8) + 20);
      }
      if ( v4 < v5 )
      {
        v0 = 1;
        *(_DWORD *)(v3 + 4 * (i + 1040)) = 1;
      }
    }
  }
  return v0;
}
