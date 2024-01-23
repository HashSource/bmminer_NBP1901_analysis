int sub_31CAC()
{
  int i; // r4
  char v2[2056]; // [sp+0h] [bp-808h] BYREF

  if ( (unsigned int)globalLogLevel > 3 )
  {
    strcpy(v2, "****power off hashboard****\n");
    sub_2E584(3, v2, 0);
  }
  for ( i = 0; i != 4; ++i )
  {
    if ( sub_1E29C(i) )
      sub_191F8((unsigned __int8)i);
  }
  sub_194DC();
  return sub_447D8();
}
