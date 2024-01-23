int __fastcall sub_18654(int a1, int a2, int *a3)
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
  bool v16; // r2
  int v18; // [sp+Ch] [bp-834h]
  int v19; // [sp+14h] [bp-82Ch] BYREF
  char s[2088]; // [sp+18h] [bp-828h] BYREF

  if ( globalChainConfigs[0] && *(_BYTE *)(globalChainConfigs[0] + 28) )
  {
    v5 = *(_DWORD *)(globalChainConfigs[0] + 4 * a1);
    v6 = 1127301685;
    v7 = &dword_7F81C;
    LODWORD(v8) = *(unsigned __int16 *)(v5 + 35);
    HIDWORD(v8) = *(unsigned __int16 *)(v5 + 37);
    do
    {
      v9 = *(v7 - 1);
      if ( v9 )
      {
        v10 = v9 == (_DWORD)v8;
        if ( !*v7 )
          v10 = 0;
        if ( *v7 == HIDWORD(v8) && v10 )
        {
          v18 = v6;
          v13 = (const char *)sub_1E0C0();
          v14 = strcmp(v13, "NBS2003");
          v6 = v18;
          if ( v14 )
            goto LABEL_19;
          memset(s, 0, 16);
          v19 = 0;
          sub_18360(a1, s, 0x10u);
          sub_182FC(a1, &v19);
          v6 = v18;
          if ( *(_DWORD *)s != 810955078 || *(_DWORD *)&s[4] != v18 || s[8] != 49 || (unsigned int)(v19 - 3) > 1 )
            goto LABEL_19;
          v16 = (_DWORD)v8 == 1280;
          if ( v8 == 0x28A00000500LL )
            goto LABEL_33;
          if ( (_DWORD)v8 == 1300 )
            v16 = 1;
          if ( HIDWORD(v8) == 625 && v16 )
          {
LABEL_33:
            v15 = 1260;
            if ( v19 != 3 )
              v15 = 1240;
          }
          else
          {
LABEL_19:
            v15 = v8;
          }
          if ( a3 )
          {
            *a3 = v15;
            return 0;
          }
        }
      }
      v7 += 2;
    }
    while ( &dword_7F8BC != v7 );
    if ( (unsigned int)globalLogLevel > 4 )
    {
      strcpy(s, "voltage level not match");
      logMessage(4, s, 0);
    }
    return -2;
  }
  else
  {
    if ( (unsigned int)globalLogLevel > 4 )
    {
      snprintf(s, 0x800u, "No work mode voltage, chain = %d, mode = %d.\n", a1, a2);
      logMessage(4, s, 0);
    }
    return -1;
  }
}
