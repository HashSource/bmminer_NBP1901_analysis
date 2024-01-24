int __fastcall sub_37694(int a1)
{
  unsigned int v2; // r4
  int v3; // r0
  unsigned int v4; // r4
  int v5; // r0
  unsigned int v6; // r7
  int v7; // r10
  int i; // r5
  unsigned int j; // r4
  unsigned int v10; // r2
  int v12; // [sp+14h] [bp-82Ch]
  char s[2088]; // [sp+18h] [bp-828h] BYREF

  v2 = *(_DWORD *)(dword_4FCB38 + 4 * (a1 + 2107394));
  v3 = sub_1E0E0();
  v4 = sub_5F880(v2, v3);
  v5 = sub_1E150();
  v6 = sub_5F880(v4, v5) >> 1;
  v12 = sub_1E0E0();
  if ( !v12 )
    return 0;
  v7 = 0;
  for ( i = 0; i != v12; ++i )
  {
    for ( j = 0; sub_1E150() > j; ++j )
    {
      v10 = j + i * sub_1E150();
      if ( *(_DWORD *)(dword_4FCB38 + 4 * ((_DWORD)&unk_202806 + 64 * a1 + v10)) < v6 )
      {
        v7 = 1;
        if ( (unsigned int)globalLogLevel > 3 )
        {
          snprintf(
            s,
            0x800u,
            "Domain unbalance happen, chain = %d, domain = %d, nonce_num_domain = %d, threshold = %d.\n",
            a1,
            v10,
            *(_DWORD *)(dword_4FCB38 + 4 * ((_DWORD)&unk_202806 + 64 * a1 + v10)),
            v6);
          logMessage(3, s, 0);
        }
      }
    }
  }
  return v7;
}
