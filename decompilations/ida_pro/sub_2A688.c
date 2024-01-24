int sub_2A688()
{
  FILE *v0; // r6
  signed int v1; // r0
  char *v2; // r0
  char *v3; // r6
  int v4; // r6
  char *v5; // r0
  size_t v6; // r0
  int v7; // r3
  size_t v8; // r0
  int v9; // r3
  bool v10; // zf
  int v11; // r6
  FILE *v12; // r7
  signed int v13; // r0
  char *v14; // r0
  int v15; // r7
  int result; // r0
  int v17; // r3
  char v18[256]; // [sp+8h] [bp-918h] BYREF
  char s[2072]; // [sp+108h] [bp-818h] BYREF

  v0 = (FILE *)fopen64(dword_80970, "rb");
  memset(v18, 0, sizeof(v18));
  if ( v0 )
  {
    v1 = fread(v18, 1u, 0x100u, v0);
    if ( v1 <= 0 )
    {
      v11 = (int)&loggingDebug;
      if ( loggingDebug || loggingVerbose || loggingThreshold > 2 )
      {
        snprintf(s, 0x800u, "Read miner version file %s error %d", (const char *)dword_80970, v1);
        logMessage(3, s, 0);
      }
    }
    else
    {
      v2 = strchr(v18, 10);
      v3 = v2;
      if ( v2 )
      {
        sub_30EA8(byte_80BA0, v18, v2 - v18, (int)"bmminer.c", (int)"read_version_file", 1515);
        v4 = stpcpy(v18, v3 + 1);
        v5 = strchr(v18, 10);
        if ( v5 )
          sub_30EA8(dest, v18, v5 - v18, (int)"bmminer.c", (int)"read_version_file", 1524);
        else
          memcpy(dest, v18, v4 - (_DWORD)v18 + 1);
      }
      else
      {
        strcpy(byte_80BA0, v18);
      }
      v6 = strlen(byte_80BA0) - 1;
      v7 = (unsigned __int8)byte_80768[v6 + 1080];
      if ( v7 == 10 )
      {
        byte_80768[v6 + 1080] = 0;
        v6 = strlen(byte_80BA0) - 1;
        v7 = (unsigned __int8)byte_80768[v6 + 1080];
      }
      if ( v7 == 13 )
        byte_80768[v6 + 1080] = 0;
      v8 = strlen(dest) - 1;
      v9 = (unsigned __int8)byte_80768[v8 + 1336];
      if ( v9 == 10 )
      {
        byte_80768[v8 + 1336] = 0;
        v8 = strlen(dest) - 1;
        v9 = (unsigned __int8)byte_80768[v8 + 1336];
      }
      v10 = v9 == 13;
      v11 = 1028;
      if ( v9 == 13 )
      {
        v8 += (size_t)byte_80768;
        LOBYTE(v9) = 0;
      }
      else
      {
        HIWORD(v11) = 89;
      }
      if ( v10 )
      {
        HIWORD(v11) = 89;
        *(_BYTE *)(v8 + 1336) = v9;
      }
    }
  }
  else
  {
    v11 = (int)&loggingDebug;
    if ( loggingDebug || loggingVerbose || loggingThreshold > 2 )
    {
      snprintf(s, 0x800u, "Open miner version file %s error", (const char *)dword_80970);
      logMessage(3, s, 0);
    }
  }
  v12 = (FILE *)fopen64("/config/sn", "rb");
  if ( v12 )
  {
    memset(v18, 0, sizeof(v18));
    v13 = fread(v18, 1u, 0xFAu, v12);
    if ( v13 <= 0 )
    {
      if ( *(_BYTE *)v11 || loggingVerbose || loggingThreshold > 2 )
      {
        snprintf(s, 0x800u, "Read miner sn file %s error %d", "/config/sn", v13);
        logMessage(3, s, 0);
      }
    }
    else
    {
      v14 = strstr(v18, "\r\n");
      if ( v14 )
        sub_30EA8(&byte_80DA0, v18, v14 - v18, (int)"bmminer.c", (int)"read_version_file", 1572);
      else
        strcpy(&byte_80DA0, v18);
    }
    fclose(v12);
    v15 = *(unsigned __int8 *)v11;
  }
  else if ( *(_BYTE *)v11 || (v15 = (unsigned __int8)loggingVerbose, loggingVerbose) || loggingThreshold > 2 )
  {
    snprintf(s, 0x800u, "Open miner sn file %s error", "/config/sn");
    logMessage(3, s, 0);
    v15 = *(unsigned __int8 *)v11;
  }
  result = strlen(&byte_80DA0) - 1;
  v17 = (unsigned __int8)byte_80768[result + 1592];
  if ( v17 == 10 )
  {
    byte_80768[result + 1592] = 0;
    result = strlen(&byte_80DA0) - 1;
    v17 = (unsigned __int8)byte_80768[result + 1592];
  }
  if ( v17 == 13 )
    byte_80768[result + 1592] = 0;
  if ( v15 || loggingVerbose || loggingThreshold > 2 )
  {
    snprintf(s, 0x800u, "Miner compile time: %s type: %s sn :%s", byte_80BA0, dest, &byte_80DA0);
    return logMessage(3, s, 0);
  }
  return result;
}
