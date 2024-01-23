int __fastcall sub_39FB4(int a1)
{
  int i; // r4
  int v2; // r4
  char v4[2056]; // [sp+0h] [bp-808h] BYREF

  if ( (unsigned int)globalLogLevel > 4 )
  {
    snprintf(v4, 0x800u, "[DEBUG] Board init, is_power_off = %d.\n", a1);
    sub_2E584(4, v4, 0);
  }
  for ( i = 0; i != 4; ++i )
  {
    if ( sub_1E29C(i) )
      sub_4FA0C((unsigned __int8)i);
  }
  sub_3345C();
  v2 = sub_33E34();
  sub_304D4();
  sub_281B8();
  sub_304D4();
  return v2;
}
