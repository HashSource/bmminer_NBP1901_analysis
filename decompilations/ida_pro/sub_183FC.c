int __fastcall sub_183FC(int a1, int a2, int *a3)
{
  int v5; // r2
  int v6; // r3
  int *v7; // r4
  __int64 v8; // r6
  int v9; // r0
  bool v10; // r2
  const char *v13; // r0
  int v14; // r0
  int v15; // r2
  bool v16; // zf
  unsigned int v17; // r0
  unsigned int v18; // r0
  int v19; // [sp+Ch] [bp-834h]
  int v20; // [sp+14h] [bp-82Ch] BYREF
  char s[2088]; // [sp+18h] [bp-828h] BYREF

  if ( globalChainConfigs[0] && *(_BYTE *)(globalChainConfigs[0] + 28) )
  {
    v5 = *(_DWORD *)(globalChainConfigs[0] + 4 * a1);
    v6 = 1127301685;
    v7 = &dword_7F81C;
    HIDWORD(v8) = *(unsigned __int16 *)(v5 + 35);
    LODWORD(v8) = *(unsigned __int16 *)(v5 + 37);
    while ( 1 )
    {
      v9 = *(v7 - 1);
      if ( v9 )
      {
        v10 = v9 == HIDWORD(v8);
        if ( !*v7 )
          v10 = 0;
        if ( *v7 == (_DWORD)v8 && v10 )
          break;
      }
LABEL_11:
      v7 += 2;
      if ( &dword_7F8BC == v7 )
      {
        if ( (unsigned int)globalLogLevel > 4 )
        {
          strcpy(s, "freq level not match");
          logMessage(4, s, 0);
        }
        return -2;
      }
    }
    v19 = v6;
    v13 = (const char *)sub_1E0C0();
    v14 = strcmp(v13, "NBS2003");
    v6 = v19;
    if ( !v14 )
    {
      memset(s, 0, 16);
      v20 = 0;
      sub_18360(a1, s, 0x10u);
      sub_182FC(a1, &v20);
      v6 = v19;
      if ( *(_DWORD *)s == 810955078 && *(_DWORD *)&s[4] == v19 && s[8] == 49 && (unsigned int)(v20 - 3) <= 1 )
      {
        v16 = (_DWORD)v8 == 650;
        if ( (_DWORD)v8 == 650 )
          v16 = HIDWORD(v8) == 1280;
        if ( v16 )
        {
          v15 = 600;
          goto LABEL_20;
        }
        v15 = 625;
        v17 = __clz(v8 - 625);
        if ( v8 == 0x51400000271LL )
          v15 = 575;
        v18 = v17 >> 5;
        if ( v8 == 0x51400000271LL )
        {
LABEL_20:
          if ( a3 )
          {
            *a3 = v15;
            return 0;
          }
          goto LABEL_11;
        }
        if ( ((HIDWORD(v8) == 1280) & (unsigned __int8)v18) != 0 )
        {
          v15 = 575;
          if ( (_DWORD)v8 == 650 )
            v15 = 600;
          goto LABEL_20;
        }
      }
    }
    v15 = v8;
    goto LABEL_20;
  }
  if ( (unsigned int)globalLogLevel > 4 )
  {
    snprintf(s, 0x800u, "No work mode freq, chain = %d, mode = %d.\n", a1, a2);
    logMessage(4, s, 0);
  }
  return -1;
}
