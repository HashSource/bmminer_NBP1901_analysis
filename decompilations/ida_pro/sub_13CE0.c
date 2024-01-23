int __fastcall sub_13CE0(unsigned int a1)
{
  unsigned int i; // r4
  int v3; // r1
  int v4; // r0
  bool v5; // cc
  int result; // r0
  int v7; // r0
  int v8; // r6
  char s[2080]; // [sp+8h] [bp-820h] BYREF

  for ( i = 0; ; ++i )
  {
    v5 = sub_1E2FC() > i;
    result = (unsigned __int8)i;
    if ( !v5 )
      break;
    v7 = sub_3FF08((unsigned __int8)i);
    v8 = v7;
    if ( v7 >= 0 )
    {
      if ( (unsigned int)globalLogLevel > 4 )
      {
        snprintf(s, 0x800u, "fan[%u] speed[%u]\n", (unsigned __int8)i, v7);
        logMessage(4, s, 0);
      }
      sub_1E3D4((unsigned __int8)i, v8);
      if ( v8 > 9999 || (v3 = 1, v4 = (unsigned __int8)i, a1 > v8) )
      {
        v4 = (unsigned __int8)i;
        v3 = 0;
      }
      sub_1E350(v4, v3);
    }
  }
  return result;
}
