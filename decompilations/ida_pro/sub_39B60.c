int __fastcall sub_39B60(int a1)
{
  float v1; // s0
  float v2; // s1
  float v3; // s2
  int v5; // r8
  int v6; // r9
  int v7; // r5
  int v8; // r5
  unsigned int v10; // s16
  int v11; // r5
  int v12; // r0
  int v13; // r9
  unsigned int v14; // r3
  float v15; // s13
  float v16; // s12
  float v17; // s14
  char s[2096]; // [sp+18h] [bp-830h] BYREF

  v5 = sub_391F4();
  if ( (unsigned int)globalLogLevel > 4 )
  {
    snprintf(
      s,
      0x800u,
      "[DEBUG] Check if is need stop, chain = %d, hw_threshold = %.4f, nonce_rate_threshold = %.2f, nonce_rate_dec_threshold = %.2f.\n",
      a1,
      v1,
      v2,
      v3);
    logMessage(4, s, 0);
  }
  if ( dword_4FCB3C && *(_DWORD *)(dword_4FCB3C + 4) )
  {
    v6 = 4 * a1;
    v7 = 8 * sub_1E130();
    v8 = sub_1E0F0() * v7;
    if ( *(_DWORD *)(v5 + 4 * a1 + 8431696) > (unsigned int)(float)((float)v8 * v1) )
    {
      if ( (unsigned int)globalLogLevel > 3 )
      {
        snprintf(
          s,
          0x800u,
          "chain = %d, hw = %d, hw_threshold = %d, too much hw.\n",
          a1,
          *(_DWORD *)(v5 + v6 + 8431696),
          (unsigned int)(float)((float)v8 * v1));
        logMessage(3, s, 0);
      }
      return 1;
    }
    v10 = *(_DWORD *)(v5 + 4 * a1 + 8429568);
    v11 = 8 * sub_1E130();
    v12 = sub_1E0F0();
    v13 = dword_4FCB3C + v6;
    v14 = globalLogLevel;
    v15 = *(float *)(v13 + 48);
    v16 = *(float *)(v13 + 32);
    v17 = (float)v10 / (float)(v12 * v11);
    *(float *)(v13 + 32) = v17;
    if ( v15 < v17 )
      *(float *)(v13 + 48) = v17;
    if ( v14 > 3 )
    {
      snprintf(
        s,
        0x800u,
        "chain = %d, nonce_rate_curr = %.4f, nonce_rate_last = %.4f, nonce_rate_max = %.4f\n",
        a1,
        v17,
        v16,
        *(float *)(v13 + 48));
      logMessage(3, s, 0);
    }
    return 0;
  }
  else
  {
    if ( (unsigned int)globalLogLevel <= 3 )
      return 1;
    strcpy(s, "Handle is NULL.\n");
    logMessage(3, s, 0);
    return 1;
  }
}
