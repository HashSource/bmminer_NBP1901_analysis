int __fastcall sub_1AAE4(int a1, unsigned int a2, unsigned int a3, char *a4, char a5)
{
  float v5; // s0
  char *v7; // r7
  float v10; // s18
  const char *v11; // r3
  int result; // r0
  unsigned int v13; // r3
  float v14; // s17
  float v15; // s19
  unsigned int v16; // r4
  float v17; // s16
  float v18; // s0
  unsigned int v19; // [sp+1Ch] [bp-854h]
  char *v20; // [sp+20h] [bp-850h]
  char v21[4]; // [sp+2Ch] [bp-844h] BYREF
  int v22; // [sp+30h] [bp-840h]
  char v23; // [sp+36h] [bp-83Ah]
  char s[2104]; // [sp+38h] [bp-838h] BYREF

  v7 = a4;
  v10 = v5;
  if ( (unsigned int)globalLogLevel <= 4 )
    a4 = s;
  if ( (unsigned int)globalLogLevel > 4 )
  {
    v11 = "false";
    if ( a5 )
      v11 = "true";
    v20 = s;
    snprintf(
      s,
      0x800u,
      "fixed step chain = %d, freq_start = %d, freq_end = %d, freq_step = %.2f, is_higher_voltage = %s\n",
      a1,
      a3,
      v7,
      v5,
      v11);
    logMessage(4, s, 0);
  }
  else
  {
    v20 = a4;
  }
  result = sub_1F0E0(a1, 1, 0, a2);
  *((_DWORD *)v20 - 1) = 0;
  v22 = 0;
  if ( a3 >= (unsigned int)v7 )
    v13 = a3 - (_DWORD)v7;
  else
    v13 = (unsigned int)&v7[-a3];
  v19 = (unsigned int)(((float)((float)v13 + v5) - 0.01) / v5);
  if ( v19 )
  {
    v14 = (float)(unsigned int)v7;
    v15 = (float)a3;
    v16 = 1;
    do
    {
      v18 = (float)v16 * v10;
      if ( a3 < (unsigned int)v7 )
      {
        v17 = v18 + v15;
        if ( (float)(v18 + v15) > v14 )
          v17 = (float)(unsigned int)v7;
      }
      else
      {
        v17 = v15 - v18;
        if ( (float)(v15 - v18) < v14 )
          v17 = (float)(unsigned int)v7;
      }
      sub_502C0((int)(v20 - 8), v21, 0);
      ++v16;
      v23 = v21[0];
      sub_1F164(a1, 1, 0, a2, *((_DWORD *)v20 - 2), *((_DWORD *)v20 - 1));
      if ( (unsigned int)globalLogLevel > 4 )
      {
        snprintf(v20, 0x800u, "chain = %d set freq to %.2f", a1, v17);
        logMessage(4, v20, 0);
      }
      result = usleep((__useconds_t)&loc_186A0);
    }
    while ( v19 >= v16 );
  }
  dword_7F8C4[a1] = v7;
  dword_7F8C4[a1 + 7] = v7;
  return result;
}
