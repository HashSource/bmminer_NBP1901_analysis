int sub_16378()
{
  int v0; // r4
  _DWORD *v1; // r6
  int result; // r0
  void *v3; // r8
  int v4; // r0
  int v5; // r8
  _DWORD *v6; // r4
  _BYTE *v7; // r3
  _BYTE *v8; // t1
  _BYTE *v9; // r3
  char v10[2072]; // [sp+0h] [bp-818h] BYREF

  if ( !dword_7F814[0] )
  {
    dword_7F814[0] = (int)calloc(1u, 0x20u);
    if ( !dword_7F814[0] )
    {
      if ( (unsigned int)globalLogLevel > 3 )
      {
        strcpy(v10, "No memory for configuraion.\n");
        logMessage(3, v10, 0);
        v1 = (_DWORD *)dword_7F814[0];
        goto LABEL_11;
      }
      return -1;
    }
  }
  v0 = 0;
  while ( 1 )
  {
    if ( !sub_1E29C(v0) )
      goto LABEL_5;
    v1 = (_DWORD *)dword_7F814[0];
    if ( *(_DWORD *)(dword_7F814[0] + 4 * v0) )
      goto LABEL_5;
    v3 = calloc(1u, 0x48u);
    v1[v0] = v3;
    if ( !v3 )
      break;
    v4 = sub_1E0F0();
    v1 = (_DWORD *)dword_7F814[0];
    v5 = *(_DWORD *)(dword_7F814[0] + 4 * v0);
    *(_DWORD *)(v5 + 63) = calloc(v4, 1u);
    if ( !*(_DWORD *)(v1[v0] + 63) )
    {
      if ( (unsigned int)globalLogLevel <= 3 )
        goto LABEL_11;
      goto LABEL_10;
    }
LABEL_5:
    if ( ++v0 == 4 )
      return 0;
  }
  if ( (unsigned int)globalLogLevel > 3 )
  {
LABEL_10:
    snprintf(v10, 0x800u, "No memory for configuraion for chain %d.\n", v0);
    logMessage(3, v10, 0);
    v1 = (_DWORD *)dword_7F814[0];
  }
LABEL_11:
  if ( !v1 )
    return -1;
  v6 = v1 - 1;
  do
  {
    v8 = (_BYTE *)v6[1];
    ++v6;
    v7 = v8;
    if ( v8 )
    {
      if ( *(_DWORD *)(v7 + 63) )
      {
        free(*(void **)(v7 + 63));
        v9 = (_BYTE *)*v6;
        v9[63] = 0;
        v9[64] = 0;
        v9[65] = 0;
        v9[66] = 0;
        v7 = (_BYTE *)*v6;
      }
      free(v7);
      *v6 = 0;
    }
  }
  while ( v6 != v1 + 3 );
  free(v1);
  result = -1;
  dword_7F814[0] = 0;
  return result;
}
