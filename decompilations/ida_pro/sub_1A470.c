void __fastcall sub_1A470(int a1, unsigned int a2, int a3)
{
  float v3; // s0
  const char *v4; // r3
  unsigned int v5; // r11
  unsigned int v6; // r8
  unsigned int v7; // r2
  unsigned int v8; // r6
  unsigned int v9; // r5
  _QWORD *v10; // r4
  int v11; // r7
  _QWORD *v12; // r4
  unsigned __int8 *v13; // r6
  int v14; // r5
  int v15; // lr
  int v16; // r3
  int v17; // r1
  int v18; // r0
  int v19; // r12
  int v20; // r6
  char v21; // r3
  char v22; // r1
  char v23; // r2
  unsigned int v24; // r3
  size_t nmemb; // [sp+14h] [bp-9E4h]
  int v26; // [sp+18h] [bp-9E0h]
  unsigned int v27; // [sp+24h] [bp-9D4h]
  char v30[4]; // [sp+34h] [bp-9C4h] BYREF
  __int64 v31; // [sp+38h] [bp-9C0h] BYREF
  _QWORD base[49]; // [sp+40h] [bp-9B8h] BYREF
  char s[2096]; // [sp+1C8h] [bp-830h] BYREF

  if ( (unsigned int)globalLogLevel > 3 )
  {
    v4 = "false";
    if ( a3 )
      v4 = "true";
    snprintf(s, 0x800u, "chain = %d, freq = %g, is_higher_voltage = %s\n", a1, v3, v4);
    logMessage(3, s, 0);
  }
  sub_1F0E0(a1, 1, 0, a2);
  v31 = 0LL;
  memset(base, 0, sizeof(base));
  sub_502C0((int)&v31, v30, 0);
  v5 = (unsigned __int8)v30[0];
  BYTE6(v31) = v30[0];
  v27 = BYTE1(v31);
  if ( (unsigned __int8)v31 > 7u )
  {
    nmemb = 0;
    v7 = globalLogLevel;
  }
  else
  {
    v26 = (unsigned __int8)v31;
    v6 = (unsigned __int8)v31;
    nmemb = 0;
    v7 = globalLogLevel;
    do
    {
      if ( v27 <= v6 )
      {
        v8 = v27;
        do
        {
          if ( v5 <= 1 )
          {
            v9 = v5;
            v10 = &base[nmemb];
            v11 = v8 * v26 * v5;
            do
            {
              *(_BYTE *)v10 = v6;
              *((_BYTE *)v10 + 1) = v8;
              *((_BYTE *)v10 + 2) = v9;
              *((_DWORD *)v10 + 1) = v11;
              if ( v7 > 4 )
              {
                snprintf(s, 0x800u, "post_div1 = %d, post_div2 = %d, user_div = %d, div_ret = %d\n", v26, v8, v9, v11);
                logMessage(4, s, 0);
                v7 = globalLogLevel;
              }
              ++v9;
              ++v10;
              v11 += v8 * v26;
            }
            while ( (unsigned __int8)v9 <= 1u );
            nmemb += (unsigned __int8)(1 - v5) + 1;
          }
          v8 = (unsigned __int8)(v8 + 1);
        }
        while ( v8 <= v6 );
      }
      v6 = (unsigned __int8)++v26;
    }
    while ( (unsigned __int8)v26 <= 7u );
  }
  if ( v7 > 4 )
  {
    strcpy(s, "\n");
    logMessage(4, s, 0);
    if ( (unsigned int)globalLogLevel > 4 )
    {
      strcpy(s, "sorted\n");
      logMessage(4, s, 0);
    }
  }
  qsort(base, nmemb, 8u, (__compar_fn_t)sub_19D50);
  if ( nmemb )
  {
    v12 = base;
    v13 = (unsigned __int8 *)base;
    v14 = 0;
    do
    {
      while ( (unsigned int)globalLogLevel <= 4 )
      {
        ++v14;
        v13 += 8;
        if ( v14 == nmemb )
          goto LABEL_24;
      }
      v15 = *((_DWORD *)v13 + 1);
      v16 = v14;
      v17 = v13[2];
      v18 = v13[1];
      ++v14;
      v19 = *v13;
      v13 += 8;
      snprintf(s, 0x800u, "[%d] post_div1 = %d, post_div2 = %d, user_div = %d, div_ret = %d\n", v16, v19, v18, v17, v15);
      logMessage(4, s, 0);
    }
    while ( v14 != nmemb );
LABEL_24:
    v20 = 0;
    do
    {
      v21 = *((_BYTE *)v12++ + 2);
      v22 = *((_BYTE *)v12 - 8);
      v23 = *((_BYTE *)v12 - 7);
      BYTE6(v31) = v21;
      LOBYTE(v31) = v22;
      BYTE1(v31) = v23;
      v24 = sub_1F080(v31, SHIDWORD(v31));
      if ( dword_7EDCC < v24 )
      {
        if ( (unsigned int)globalLogLevel > 3 )
        {
          snprintf(
            s,
            0x800u,
            "[%d] _POSTDIV1 = %d, _POSTDIV2 = %d, USER_DIV = %d, freq = %d\n",
            v20,
            (unsigned __int8)v31,
            BYTE1(v31),
            BYTE6(v31),
            v24);
          logMessage(3, s, 0);
        }
        sub_1F164(a1, 1, 0, a2, v31, SWORD2(v31));
        usleep((__useconds_t)&unk_F4240);
      }
      ++v20;
    }
    while ( v20 != v14 );
  }
}
