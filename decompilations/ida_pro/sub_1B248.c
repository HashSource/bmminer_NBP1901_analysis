int __fastcall sub_1B248(int a1, unsigned int a2, int a3)
{
  char v6[4]; // [sp+14h] [bp-81Ch] BYREF
  char s[4]; // [sp+18h] [bp-818h] BYREF
  int v8; // [sp+1Ch] [bp-814h]

  if ( (unsigned int)globalLogLevel > 3 )
  {
    snprintf(s, 0x800u, "chain = %d, freq = %d\n", a1, a3);
    logMessage(3, s, 0);
  }
  *(_DWORD *)s = 0;
  v8 = 0;
  sub_502C0((int)s, v6, 0);
  BYTE2(v8) = v6[0];
  return sub_1F164(a1, 1, 0, a2, *(int *)s, v8);
}
