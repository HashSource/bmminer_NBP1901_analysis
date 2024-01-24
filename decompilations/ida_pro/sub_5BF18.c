int __fastcall sub_5BF18(int a1, int a2, int a3)
{
  int v3; // r3
  int v5; // r2
  char *v6; // r1
  int v10; // r12
  int v11; // r9
  int v12; // r1
  unsigned int v13; // r5
  unsigned int v14; // r11
  size_t v15; // r2
  char *v16; // r1
  int v17; // r0
  int v18; // r3
  char *v19; // r1
  int v20; // r0
  int v21; // r0
  int v22; // r0
  int v23; // r3
  int v24; // r3
  __int64 v25; // [sp+8h] [bp-40h]
  int v26; // [sp+14h] [bp-34h]
  unsigned __int8 v27; // [sp+1Fh] [bp-29h] BYREF

  v3 = *(_DWORD *)(a2 + 8);
  v5 = *(_DWORD *)(v3 + 312);
  if ( !v5 )
  {
    v6 = *(char **)(v3 + 304);
    if ( v6 )
      return sub_5E8DC(a3, v6, *(__gnuc_va_list *)(v3 + 308));
    return sub_5F0D4(a3, "format=(null)", 0xDu);
  }
  if ( v5 != 1 )
    return 0;
  if ( !*(_DWORD *)(v3 + 296) )
  {
    v22 = sub_5F0D4(a3, &unk_6D1F4, 0xAu);
    if ( v22 >= 0 )
    {
      if ( !v22 )
        return 0;
LABEL_24:
      sub_5DF98(2, "src/spec.c", 339, "write hex msg, buf is full");
      return 1;
    }
LABEL_35:
    sub_5DF98(2, "src/spec.c", 336, "write hex msg fail");
    return -1;
  }
  v10 = sub_5F0D4(a3, "\n             0  1  2  3  4  5  6  7  8  9  A  B  C  D  E  F    0123456789ABCDEF", 0x50u);
  if ( v10 )
  {
LABEL_23:
    if ( v10 >= 0 )
      goto LABEL_24;
    goto LABEL_35;
  }
  v11 = 16;
  v25 = 1LL;
  do
  {
    v10 = sub_5F0D4(a3, &word_6A02C, 1u);
    if ( v10 )
      goto LABEL_23;
    v10 = sub_5ED04(a3, v12, v25, SHIDWORD(v25), (char *)0xA);
    if ( v10 )
      goto LABEL_23;
    v10 = sub_5F0D4(a3, "   ", 3u);
    if ( v10 )
      goto LABEL_23;
    v13 = v11 - 16;
    v14 = v11 - 16;
    do
    {
      v18 = *(_DWORD *)(a2 + 8);
      v17 = a3;
      v16 = "   ";
      if ( *(_DWORD *)(v18 + 300) > v14 )
      {
        v27 = *(_BYTE *)(*(_DWORD *)(v18 + 296) + v14);
        v10 = sub_5EF24(a3, v27, (char *)2);
        v15 = 1;
        v16 = " ";
        v17 = a3;
        if ( v10 )
          goto LABEL_23;
      }
      else
      {
        v15 = 3;
      }
      v10 = sub_5F0D4(v17, v16, v15);
      if ( v10 )
        goto LABEL_23;
      ++v14;
    }
    while ( v14 != v11 );
    v26 = sub_5F0D4(a3, &dword_60DE4, 2u);
    if ( v26 )
    {
      v10 = v26;
      goto LABEL_23;
    }
    do
    {
      v23 = *(_DWORD *)(a2 + 8);
      if ( *(_DWORD *)(v23 + 300) <= v13 )
      {
        v19 = " ";
        v20 = a3;
LABEL_21:
        v21 = sub_5F0D4(v20, v19, 1u);
        if ( v21 )
          goto LABEL_22;
        goto LABEL_31;
      }
      v19 = (char *)&v27;
      v20 = a3;
      v24 = *(unsigned __int8 *)(*(_DWORD *)(v23 + 296) + v13);
      v27 = v24;
      if ( (unsigned int)(v24 - 32) <= 0x5E )
        goto LABEL_21;
      v21 = sub_5F0D4(a3, ".", 1u);
      if ( v21 )
      {
LABEL_22:
        v10 = v21;
        goto LABEL_23;
      }
LABEL_31:
      ++v13;
    }
    while ( v14 != v13 );
    v11 += 16;
    ++v25;
  }
  while ( v14 < *(_DWORD *)(*(_DWORD *)(a2 + 8) + 300) );
  return 0;
}
