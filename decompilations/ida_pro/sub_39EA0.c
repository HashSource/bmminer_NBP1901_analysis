int sub_39EA0()
{
  int v0; // r4
  int v1; // r0
  int v2; // r3
  char v4[2064]; // [sp+0h] [bp-810h] BYREF

  if ( (unsigned int)globalLogLevel > 4 )
  {
    strcpy(v4, "[DEBUG] Check if all chain pattern test done except block.\n");
    logMessage(4, v4, 0);
  }
  if ( dword_4FCB3C && *(_DWORD *)(dword_4FCB3C + 4) )
  {
    v0 = 0;
    while ( 1 )
    {
      v1 = sub_1E29C(v0);
      v2 = v0 + 2;
      ++v0;
      if ( v1 )
      {
        if ( (*(_DWORD *)(dword_4FCB3C + 4 * v2) & 0xFFFFFFFD) != 0 )
          break;
      }
      if ( v0 == 4 )
        return 1;
    }
    return 0;
  }
  else if ( (unsigned int)globalLogLevel <= 3 )
  {
    return 1;
  }
  else
  {
    strcpy(v4, "Handle is NULL.\n");
    logMessage(3, v4, 0);
    return 1;
  }
}
