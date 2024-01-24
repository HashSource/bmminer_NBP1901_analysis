int __fastcall sub_502C0(int a1, _BYTE *a2, float *a3)
{
  float v3; // s0
  int v4; // r12
  int v5; // r4
  int v7; // r5
  int v8; // r8
  int v9; // r2
  int v10; // r9
  int v11; // r11
  float v12; // s11
  int v14; // r1
  float v15; // s13
  int v16; // r0
  int v17; // lr
  int v18; // r3
  float v19; // s7
  int v20; // s14
  float v21; // s15
  float v22; // s15
  float v23; // s16
  int result; // r0

  v4 = 2;
  v5 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 2;
  v10 = 0;
  v11 = 0;
  v12 = 10.0;
  while ( 1 )
  {
    v14 = 1;
    v15 = (float)v9;
    do
    {
      v16 = v14 * v14;
      v17 = (unsigned __int8)v14;
      v18 = v14;
      v19 = (float)v14 * v3;
      do
      {
        v20 = (int)((float)((float)((float)((float)v18 * v19) * v15) / 25.0) + 0.5);
        if ( (unsigned int)(v20 - 16) <= 0xEA )
        {
          v21 = (float)v20 * (float)(25.0 / (float)v9);
          if ( (v9 != 1 || v21 <= 3125.0) && v21 <= 3200.0 && v21 >= 2000.0 )
          {
            v22 = fabsf(v3 - (float)(v21 / (float)v16));
            if ( v22 < v12 )
            {
              v8 = (unsigned __int8)v14;
              v10 = v17;
              v12 = v22;
              v11 = v9;
              v5 = (int)((float)((float)((float)((float)v18 * v19) * v15) / 25.0) + 0.5);
              v7 = 1;
            }
          }
        }
        ++v18;
        v16 += v14;
        v17 = (unsigned __int8)v18;
      }
      while ( (unsigned __int8)v18 != 8 );
      ++v14;
    }
    while ( v14 != 8 );
    v9 = 1;
    if ( v4 == 1 )
      break;
    v4 = 1;
  }
  if ( v5 )
  {
    v23 = (float)((float)(25.0 / (float)v11) * (float)v5) / (float)(v7 * (__int16)v10 * (__int16)v8);
    if ( a3 )
      *a3 = v23;
    printf(
      "final refdiv: %d, fbdiv: %d, postdiv1: %d, postdiv2: %d, usr divider: %d, min diff value: %f\n",
      v11,
      v5,
      v10,
      v8,
      v7,
      v12);
    printf("Want freq: %f, Real freq: %f\n", v3, v23);
    result = 0;
    *(_BYTE *)a1 = v10;
    *(_BYTE *)(a1 + 1) = v8;
    *(_BYTE *)(a1 + 2) = v11;
    *(_WORD *)(a1 + 4) = v5;
    *a2 = v7;
    a2[1] = v7;
    a2[2] = v7;
    a2[3] = v7;
  }
  else
  {
    puts("find div fail, use default value");
    return -1;
  }
  return result;
}
