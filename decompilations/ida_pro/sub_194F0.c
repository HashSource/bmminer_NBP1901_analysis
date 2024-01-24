int sub_194F0()
{
  int v0; // r4
  int v1; // r5
  int result; // r0
  int v3; // r3
  int v4; // r5
  int v5; // r0
  int v6; // r3
  char s[2064]; // [sp+8h] [bp-810h] BYREF

  v0 = 1;
  sleep(1u);
  do
  {
    do
    {
      ++v0;
      sleep(1u);
    }
    while ( v0 <= 29 );
    v1 = sub_15508();
    result = sub_1572C();
    v3 = v1 - result;
    if ( v1 - result < 0 )
      v3 = result - v1;
  }
  while ( v3 > 5 && v0 != 180 );
  if ( (unsigned int)globalLogLevel > 3 )
  {
    v4 = sub_15508();
    v5 = sub_1572C();
    v6 = v4 - v5;
    if ( v4 - v5 < 0 )
      v6 = v5 - v4;
    snprintf(s, 0x800u, "Slept %d seconds, diff = %d.\n", v0, v6);
    return logMessage(3, s, 0);
  }
  return result;
}
