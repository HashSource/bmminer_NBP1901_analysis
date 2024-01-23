int __fastcall sub_192C8(int a1)
{
  int result; // r0
  unsigned int v3; // r2
  double v4; // d8
  int v5[3]; // [sp+Ch] [bp-83Ch] BYREF
  char s[2096]; // [sp+18h] [bp-830h] BYREF

  memset(v5, 0, sizeof(v5));
  result = sub_47158((unsigned __int8)a1, v5, 1);
  if ( (_BYTE)result )
  {
    v3 = globalLogLevel;
    v4 = (double)v5[0] * 3.3 * 0.0009765625 * 7.6;
    if ( (unsigned int)globalLogLevel > 5 )
    {
      snprintf(s, 0x800u, "an0 = %f.\n", (double)v5[0] * 3.3 * 0.0009765625 * 7.6);
      result = logMessage(5, s, 0);
      v3 = globalLogLevel;
      v4 = (double)v5[0] * 3.3 * 0.0009765625 * 7.6;
    }
  }
  else
  {
    v4 = 0.0;
    v3 = globalLogLevel;
  }
  if ( v3 > 4 )
  {
    snprintf(s, 0x800u, "chain = %d, voltage = %f\n", a1, v4);
    return logMessage(4, s, 0);
  }
  return result;
}
