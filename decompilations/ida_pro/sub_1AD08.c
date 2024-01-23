unsigned int __fastcall sub_1AD08(int a1, unsigned int a2, int a3)
{
  float v3; // s0
  size_t v5; // r7
  int v6; // r4
  unsigned int *v7; // r5
  int i; // r6
  int j; // r4
  char *v10; // r3
  int k; // r10
  int v12; // r0
  _DWORD *v13; // r7
  int v14; // r4
  char *v15; // r5
  int v16; // r11
  int v17; // r6
  int m; // r10
  int v19; // r0
  int v20; // r6
  char *v21; // r6
  int v22; // r0
  int v23; // r0
  float v24; // s14
  char *v25; // r3
  unsigned int v26; // s15
  float v27; // s15
  float v28; // s16
  int n; // r6
  int v30; // r8
  int ii; // r4
  int v32; // r5
  float v33; // s15
  char v34; // r0
  unsigned int *v36; // r5
  unsigned int v37; // r2
  char *v38; // r3
  int v39; // r0
  unsigned int *v40; // r2
  int v41; // r1
  char *v42; // r6
  unsigned int v43; // t1
  unsigned int v44; // r5
  int v45; // r0
  int v48; // [sp+18h] [bp-1890h]
  int v49; // [sp+18h] [bp-1890h]
  unsigned int v50; // [sp+20h] [bp-1888h]
  unsigned int v51; // [sp+24h] [bp-1884h]
  unsigned int v52; // [sp+30h] [bp-1878h] BYREF
  char v53[4]; // [sp+34h] [bp-1874h] BYREF
  int v54; // [sp+38h] [bp-1870h]
  int v55; // [sp+3Ch] [bp-186Ch]
  int v56[4]; // [sp+40h] [bp-1868h] BYREF
  int v57[4]; // [sp+50h] [bp-1858h] BYREF
  int base[4]; // [sp+60h] [bp-1848h] BYREF
  int v59[512]; // [sp+70h] [bp-1838h] BYREF
  char s[4152]; // [sp+870h] [bp-1038h] BYREF

  v5 = 0;
  v6 = 0;
  v51 = 0;
  v52 = 0;
  memset(s, 0, 0x1000u);
  memset(v57, 0, sizeof(v57));
  memset(base, 0, sizeof(base));
  v54 = 0;
  v55 = 0;
  memset(v56, 255, sizeof(v56));
  do
  {
    if ( sub_1E29C(v6) )
    {
      v36 = (unsigned int *)(a1 + (v6 << 10));
      sub_19D70(v36, (unsigned int *)&v56[v6], (unsigned int *)&v57[v6], &v52);
      v37 = v57[v6];
      v38 = &s[4 * v5++];
      if ( v51 >= v37 )
        v37 = v51;
      *((_DWORD *)v38 - 516) = v56[v6];
      v51 = v37;
      v39 = sub_1E0F0();
      if ( v39 )
      {
        v40 = &v36[v39];
        v41 = v56[v6];
        v42 = &s[1024 * v6];
        do
        {
          v43 = *v36++;
          *(_DWORD *)v42 = v43 - v41;
          v42 += 4;
        }
        while ( v36 != v40 );
      }
      if ( dword_7EDC8 == 2 )
        dword_7F8C4[v6] = dword_482A6C;
      v44 = v52;
      v45 = sub_1E0F0();
      dword_7F8E0[v6] = sub_5F880(v44, v45);
    }
    ++v6;
  }
  while ( v6 != 4 );
  qsort(base, v5, 4u, (__compar_fn_t)sub_19D60);
  sub_1A470(255, a2, a3);
  if ( base[0] != v51 )
  {
    if ( v5 > 1 )
    {
      v7 = (unsigned int *)base;
      for ( i = 1; i != v5; ++i )
      {
        for ( j = 0; j != 4; ++j )
        {
          if ( sub_1E29C(j) )
          {
            v10 = (char *)v7[1];
            if ( v56[j] >= (unsigned int)v10 )
              sub_1AAE4(j, a2, *v7, v10, a3);
          }
        }
        ++v7;
      }
    }
    for ( k = 0; k != 4; ++k )
    {
      if ( sub_1E29C(k) && v56[k] != v57[k] )
      {
        if ( (unsigned int)globalLogLevel > 3 )
        {
          snprintf((char *)v59, 0x800u, "chain = %d, start = %d, freq_step = %.2f\n", k, v56[k], v3);
          logMessage(3, (const char *)v59, 0);
        }
        v12 = sub_1E0F0();
        v13 = calloc(v12, 8u);
        if ( v13 )
        {
          v14 = 0;
          v15 = &s[1024 * k];
          v59[0] = 0;
          v59[1] = 0;
          v16 = sub_1E0E0();
          if ( v16 )
          {
            v48 = k;
            do
            {
              v17 = sub_1E100();
              if ( v17 )
              {
                for ( m = 0; m != v17; ++m )
                {
                  v19 = m + v14 * sub_1E100();
                  v13[2 * v19 + 1] = *(_DWORD *)&v15[4 * v19];
                  v13[2 * v19] = v19;
                }
              }
              v20 = 8 * v14++;
              v21 = (char *)v13 + sub_1E100() * v20;
              v22 = sub_1E100();
              qsort(v21, v22, 8u, (__compar_fn_t)sub_19D40);
            }
            while ( v16 != v14 );
            k = v48;
          }
          v23 = sub_1E0F0();
          v24 = 0.0;
          if ( v23 )
          {
            v25 = &v15[4 * v23];
            do
            {
              v26 = *(_DWORD *)v15;
              v15 += 4;
              v27 = (float)v26;
              if ( v27 > v24 )
                v24 = v27;
            }
            while ( v25 != v15 );
          }
          if ( (unsigned int)(float)((float)((float)(v3 + v24) - 1.0) / v3) )
          {
            v50 = 0;
            do
            {
              ++v50;
              v49 = sub_1E100();
              v28 = (float)v50 * v3;
              if ( v49 )
              {
                for ( n = 0; n != v49; ++n )
                {
                  v30 = sub_1E0E0();
                  if ( v30 )
                  {
                    for ( ii = 0; ii != v30; ++ii )
                    {
                      v32 = v13[2 * n + 2 * ii * sub_1E100()];
                      v33 = (float)(unsigned int)v13[2 * n + 1 + 2 * ii * sub_1E100()];
                      if ( v28 <= v33 || v3 > (float)(v28 - v33) )
                      {
                        sub_502C0((int)v59, v53, 0);
                        BYTE2(v59[1]) = v53[0];
                        v34 = sub_1E160();
                        sub_1F164(k, 0, (unsigned __int8)(v34 * v32), a2, v59[0], v59[1]);
                      }
                    }
                  }
                  usleep((__useconds_t)&loc_186A0);
                }
              }
            }
            while ( (unsigned int)(float)((float)((float)(v3 + v24) - 1.0) / v3) != v50 );
          }
          free(v13);
        }
        else if ( (unsigned int)globalLogLevel > 3 )
        {
          strcpy((char *)v59, "failed alloc memory!\n");
          logMessage(3, (const char *)v59, 0);
        }
      }
    }
  }
  return v51;
}
