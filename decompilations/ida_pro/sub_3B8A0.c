unsigned int __fastcall sub_3B8A0(int a1, int a2)
{
  int v4; // r0
  unsigned int v5; // r4
  int v6; // r1
  int v7; // r3
  int v8; // r1
  int v9; // t1
  int v10; // r0
  unsigned int v11; // r0
  unsigned int v12; // r4
  char s[2064]; // [sp+8h] [bp-810h] BYREF

  v4 = sub_1E0F0();
  if ( v4 )
  {
    v6 = a2 + (a1 << 10);
    v5 = 0;
    v7 = 0;
    v8 = v6 - 4;
    do
    {
      ++v7;
      v9 = *(_DWORD *)(v8 + 4);
      v8 += 4;
      v5 += v9;
    }
    while ( v4 != v7 );
  }
  else
  {
    v5 = 0;
  }
  v10 = sub_1E0F0();
  v11 = sub_5F880(v5, v10);
  v12 = v11;
  if ( (unsigned int)globalLogLevel > 4 )
  {
    snprintf(s, 0x800u, "chain = %d, freq_avg = %d\n", a1, v11);
    logMessage(4, s, 0);
  }
  return v12;
}
