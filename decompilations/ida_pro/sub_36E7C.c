bool __fastcall sub_36E7C(int a1)
{
  int v2; // r4
  int v3; // r5
  unsigned __int8 *v4; // r0
  unsigned __int8 *v5; // r2
  char s[2064]; // [sp+8h] [bp-810h] BYREF

  v2 = *(_DWORD *)(dword_4FCB34 + 4);
  if ( (unsigned int)globalLogLevel > 4 )
  {
    snprintf(s, 0x800u, "[DEBUG] Check if read reg done, chain = %d, done_threshold = %d.\n", a1, 1);
    logMessage(4, s, 0);
  }
  v3 = sub_1E0F0();
  if ( v3 )
  {
    v4 = (unsigned __int8 *)(v2 + (a1 << 8));
    v5 = &v4[v3];
    v3 = 0;
    do
    {
      if ( *v4++ )
        ++v3;
    }
    while ( v4 != v5 );
  }
  return sub_1E0F0() == v3;
}
