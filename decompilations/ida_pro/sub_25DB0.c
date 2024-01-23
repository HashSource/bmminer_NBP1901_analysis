int sub_25DB0()
{
  int result; // r0
  bool v1; // zf
  int v2; // r2
  int v3; // r0
  unsigned int v4; // r0
  __time_t v5; // [sp+0h] [bp-820h] BYREF
  unsigned int seed; // [sp+4h] [bp-81Ch]
  char s[2072]; // [sp+8h] [bp-818h] BYREF

  sub_302A0(&v5);
  result = (int)dword_482A74;
  v1 = dword_482A74[0] == 0;
  if ( !dword_482A74[0] )
    v1 = dword_482A74[1] == 0;
  if ( v1 )
    return sub_302A0(dword_482A74);
  v2 = v5 - dword_482A74[0];
  if ( (int)(seed - dword_482A74[1]) < 0 )
    --v2;
  if ( v2 <= 300 )
  {
    if ( dword_7FA04 )
    {
      if ( (unsigned int)globalLogLevel > 3 )
      {
        strcpy(s, "network connection resume, restart");
        sub_2E584(3, s, 0);
      }
      result = sub_31D58(6u, "network connection resume, restart...");
      dword_7FA04 = 0;
      dword_7FA00[0] = 0;
    }
    else if ( dword_7FA00[0] )
    {
      if ( (unsigned int)globalLogLevel > 3 )
      {
        strcpy(s, "network connection resume");
        sub_2E584(3, s, 0);
      }
      v3 = sub_31D48();
      result = sub_31D58(v3, 0);
      dword_7FA00[0] = 0;
    }
  }
  else if ( dword_7FA00[0] )
  {
    if ( dword_7FA00[0] + 299 < v2 && !dword_7FA04 )
    {
      if ( (unsigned int)globalLogLevel > 3 )
      {
        snprintf(s, 0x800u, "network connection lost for 5 min + %d seconds, power off...", dword_7FA00[0]);
        sub_2E584(3, s, 0);
      }
      result = sub_194DC();
      dword_7FA04 = 1;
    }
  }
  else
  {
    sub_31D58(3u, "network connection lost");
    v4 = sub_2B2F4();
    if ( !v4 )
      v4 = seed;
    srandom(v4);
    result = random();
    dword_7FA00[0] = result % 300 + 1;
    if ( (unsigned int)globalLogLevel > 3 )
    {
      snprintf(s, 0x800u, "will power off in %d seconds in case not resume", result % 300 + 1);
      return sub_2E584(3, s, 0);
    }
  }
  return result;
}
