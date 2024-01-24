int __fastcall sub_38110(int a1)
{
  _DWORD *v2; // r10
  const char *v3; // r5
  int v4; // r9
  int v5; // r6
  int v6; // r7
  unsigned int v7; // r5
  int i; // r4
  int v9; // r2
  int v10; // r4
  int v12; // r9
  _DWORD *v13; // r11
  int v14; // r0
  void *v15; // r0
  _DWORD *v16; // r3
  int v17; // r3
  int v18; // r0
  FILE *stream; // [sp+Ch] [bp-82Ch] BYREF
  char s[2088]; // [sp+10h] [bp-828h] BYREF

  if ( (unsigned int)globalLogLevel > 4 )
  {
    strcpy(s, "[DEBUG] Free memory for sw sweep.\n");
    logMessage(4, s, 0);
  }
  v2 = (_DWORD *)dword_4FCB38;
  if ( !dword_4FCB38 )
  {
    dword_4FCB38 = (int)calloc((size_t)&unk_8114AC, 1u);
    if ( dword_4FCB38 )
    {
      v12 = sub_1E0F0();
      if ( !v12 )
      {
        v2 = (_DWORD *)dword_4FCB38;
        goto LABEL_4;
      }
      v13 = v2;
      while ( 1 )
      {
        v14 = sub_1E130();
        v2 = (_DWORD *)dword_4FCB38;
        v15 = malloc(416 * v14);
        v16 = &v2[(int)&unk_202A2A + (_DWORD)v13];
        v13 = (_DWORD *)((char *)v13 + 1);
        v16[1] = v15;
        if ( !v15 )
          break;
        if ( (_DWORD *)v12 == v13 )
          goto LABEL_4;
      }
      if ( (unsigned int)globalLogLevel <= 3 )
      {
LABEL_27:
        sub_37F08();
LABEL_28:
        sub_356C4(13, 255);
        return -1;
      }
      strcpy(s, "Fail to allocate memory for works.\n");
      logMessage(3, s, 0);
      v17 = dword_4FCB38;
    }
    else
    {
      if ( (unsigned int)globalLogLevel <= 3 )
        goto LABEL_28;
      strcpy(s, "Fail to allocate memory for sw sweep ctxt.\n");
      logMessage(3, s, 0);
      v17 = dword_4FCB38;
    }
    if ( !v17 )
      goto LABEL_28;
    goto LABEL_27;
  }
LABEL_4:
  *v2 = a1;
  v3 = *(const char **)dword_4FCB38;
  stream = (FILE *)fopen64(*(_DWORD *)dword_4FCB38, "r");
  if ( !stream )
  {
    if ( (unsigned int)globalLogLevel > 3 )
    {
      snprintf(s, 0x800u, "Fail to open pattern file %s.\n", v3);
      logMessage(3, s, 0);
    }
LABEL_16:
    sub_356C4(22, 255);
    v10 = -1;
    if ( (unsigned int)globalLogLevel > 3 )
    {
      strcpy(s, "Load pattern file failed.\n");
      logMessage(3, s, 0);
    }
    goto LABEL_18;
  }
  v4 = sub_1E0F0();
  if ( v4 )
  {
    v5 = 0;
    while ( 1 )
    {
      v6 = sub_1E130();
      if ( v6 )
      {
        v7 = 0;
        for ( i = 0; i != v6; ++i )
        {
          v9 = i;
          v7 += sub_37FA0(&stream, v5, v9, 8);
        }
      }
      else
      {
        v7 = 0;
      }
      if ( v7 < 8 * sub_1E130() )
        break;
      if ( v4 == ++v5 )
        goto LABEL_13;
    }
    if ( (unsigned int)globalLogLevel > 3 )
    {
      v18 = sub_1E130();
      snprintf(s, 0x800u, "No enough work, asic = %d, work_count = %d, work_count_target = %d.\n", v5, v7, 8 * v18);
      logMessage(3, s, 0);
    }
    fclose(stream);
    goto LABEL_16;
  }
LABEL_13:
  v10 = 0;
  fclose(stream);
LABEL_18:
  sub_44970();
  sub_44880(4);
  return v10;
}
