unsigned int sub_3FB58()
{
  unsigned int result; // r0
  int v1; // r12
  int v2; // r1
  int v3; // lr
  int v4; // r3
  int *v5; // r2
  int v6; // r5
  unsigned int v7; // r2
  int *v8; // r3
  unsigned int v9; // [sp+4h] [bp-82Ch] BYREF
  char s[2088]; // [sp+8h] [bp-828h] BYREF

  v9 = 0;
  memset(dword_504B68, 0, sizeof(dword_504B68));
  sub_40314(2, &v9);
  if ( !v9 )
  {
    strcpy(s, "Cannot Find Any Plug In!\r\n");
    return logMessage(0, s, 0);
  }
  if ( (v9 & 0x80000000) != 0 )
  {
    v9 >>= 24;
    dword_504C8C = 1;
    snprintf(s, 0x800u, "HASH_ON_PLUG T9 = 0x%x\n", v9);
    result = logMessage(2, s, 0);
    v7 = v9;
    if ( !v9 )
      return result;
    v1 = dword_504B68[0];
    v2 = 0;
    result = 0;
    do
    {
      v8 = &dword_504B68[18 * v1];
      if ( (v7 & 1) != 0 )
      {
        v8[1] = result;
        if ( result == 1 )
        {
          v8[3] = 2;
          v8[4] = 10;
          v8[5] = 11;
          v8[2] = 3;
        }
        else if ( result )
        {
          if ( result == 2 )
          {
            v8[3] = 3;
            v8[4] = 12;
            v8[5] = 13;
            v8[2] = 3;
          }
        }
        else
        {
          v8[3] = 1;
          v8[4] = 8;
          v8[5] = 9;
          v8[2] = 3;
        }
        ++v1;
        v2 = 1;
      }
      v7 >>= 1;
      ++result;
    }
    while ( v7 );
  }
  else
  {
    dword_504C8C = 0;
    v9 = (unsigned __int16)v9;
    snprintf(s, 0x800u, "HASH_ON_PLUG V9 = 0x%x\n", (unsigned __int16)v9);
    logMessage(2, s, 0);
    result = v9;
    if ( !v9 )
      return result;
    v1 = dword_504B68[0];
    v2 = 0;
    v3 = 0;
    do
    {
      v4 = 9 * v1;
      v5 = &dword_504B68[18 * v1];
      if ( (result & 1) != 0 )
      {
        v6 = v5[2];
        v2 = 1;
        ++v1;
        v5[1] = v3;
        v5[2] = v6 + 1;
        dword_504B68[2 * v4 + 3 + v6] = v3;
      }
      result >>= 1;
      ++v3;
    }
    while ( result );
  }
  if ( v2 )
    dword_504B68[0] = v1;
  return result;
}
