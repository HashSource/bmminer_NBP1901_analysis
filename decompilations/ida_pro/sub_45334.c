int __fastcall sub_45334(int a1)
{
  size_t v2; // r5
  unsigned int v3; // r7
  size_t v4; // r7
  _BYTE *v5; // r0
  _BYTE *v6; // r6
  _BYTE *v7; // r3
  char *v8; // r8
  char *v9; // r0
  char *v10; // r3
  int v11; // r6
  int v12; // r2
  char v13; // t1
  int v14; // r5
  size_t v15; // r7
  int v16; // r12
  int v17; // t1
  int v18; // lr
  int v19; // t1
  unsigned int v20; // r1
  size_t v21; // r2
  _DWORD *v22; // r3
  int v23; // lr
  int v24; // r12
  int v25; // r0
  int v26; // lr
  int v27; // r12
  int v28; // r0
  int v29; // r1
  int v30; // r1
  int v31; // r0
  int *v32; // r12
  int v33; // lr
  int v34; // r3
  int v35; // r3
  unsigned int v36; // r1
  int v37; // r7
  int v38; // r6
  _BOOL4 v39; // r3
  int v40; // r4
  int result; // r0
  int v42; // [sp+Ch] [bp-5Ch]
  void *ptr; // [sp+10h] [bp-58h]
  size_t v44; // [sp+14h] [bp-54h]
  int v45; // [sp+1Ch] [bp-4Ch] BYREF
  int v46[18]; // [sp+20h] [bp-48h] BYREF

  memset(v46, 0, 0x20u);
  v2 = *(_DWORD *)(a1 + 12);
  v42 = dword_50510C;
  v3 = v2 & 0xFFFFFFC0;
  if ( dword_50510C == dword_505110 )
    v42 = dword_505114;
  if ( (*(_DWORD *)(a1 + 12) & 0x3Fu) <= 0x37 )
    v4 = v3 + 64;
  else
    v4 = v3 + 128;
  v5 = calloc(v4, 1u);
  v6 = v5;
  ptr = v5;
  if ( !v5 )
    return -4;
  memcpy(v5, *(const void **)(a1 + 8), v2);
  v7 = &v6[v4];
  v6[v2] = 0x80;
  *((_DWORD *)v7 - 2) = 0;
  *((_DWORD *)v7 - 1) = bswap32(8 * v2);
  if ( v4 )
  {
    v8 = v6 - 1;
    v9 = &v6[v4 - 1];
    v10 = v6 - 1;
    v11 = v42 - 1;
    v12 = v42 - 1;
    do
    {
      v13 = *++v10;
      *(_BYTE *)++v12 = v13;
    }
    while ( v9 != v10 );
    v44 = v4;
    v14 = 0;
    v15 = v42 - 1 + v4;
    do
    {
      v17 = *(unsigned __int8 *)++v11;
      v16 = v17;
      v19 = (unsigned __int8)*++v8;
      v18 = v19;
      if ( v16 != v19 )
        printf(
          "%s: coinbase_padding_in_ddr[%d] = 0x%x, but *(coinbase_padding + %d) = 0x%x",
          "dhash_send_job",
          v14,
          v16,
          v14,
          v18);
      ++v14;
    }
    while ( v15 != v11 );
    v4 = v44;
  }
  if ( *(_DWORD *)(a1 + 20) )
  {
    v20 = 0;
    v21 = v42 + v4;
    do
    {
      v21 += 32;
      v22 = (_DWORD *)(*(_DWORD *)(a1 + 16) + 32 * v20++);
      v23 = v22[1];
      v24 = v22[2];
      v25 = v22[3];
      *(_DWORD *)(v21 - 32) = *v22;
      *(_DWORD *)(v21 - 28) = v23;
      *(_DWORD *)(v21 - 24) = v24;
      *(_DWORD *)(v21 - 20) = v25;
      v26 = v22[5];
      v27 = v22[6];
      v28 = v22[7];
      *(_DWORD *)(v21 - 16) = v22[4];
      *(_DWORD *)(v21 - 12) = v26;
      *(_DWORD *)(v21 - 8) = v27;
      *(_DWORD *)(v21 - 4) = v28;
    }
    while ( *(_DWORD *)(a1 + 20) > v20 );
  }
  sub_444B8();
  if ( v42 == dword_50510C )
    v29 = dword_505118 + 0x200000;
  else
    v29 = dword_505118 + 2162688;
  sub_40390(41, v29);
  sub_40314(41, &v45);
  sub_40390(44, *(_DWORD *)(a1 + 32));
  sub_40314(44, &v45);
  if ( *(_DWORD *)a1 )
    v30 = 1;
  else
    v30 = *(_DWORD *)(a1 + 4);
  sub_44F48(*(_DWORD *)(a1 + 36), v30, *(_DWORD *)(a1 + 40));
  memset(v46, 0, 0x20u);
  v31 = *(_DWORD *)(a1 + 44);
  v32 = &v45;
  v33 = v31 + 32;
  do
  {
    v34 = *(unsigned __int8 *)(v31 + 2);
    v31 += 4;
    v32[1] = (v34 << 16) | (*(unsigned __int8 *)(v31 - 1) << 24) | *(unsigned __int8 *)(v31 - 4) | (*(unsigned __int8 *)(v31 - 3) << 8);
    ++v32;
  }
  while ( v31 != v33 );
  sub_4512C((int)v46);
  sub_40390(46, *(_DWORD *)(a1 + 24));
  sub_40314(46, &v45);
  sub_40390(47, *(_DWORD *)(a1 + 28));
  sub_40314(47, &v45);
  sub_40390(
    36,
    (unsigned __int16)(*(_WORD *)(a1 + 56) << 8) | (*(_DWORD *)(a1 + 52) << 16) | (unsigned __int8)(v4 >> 6));
  sub_40314(36, &v45);
  v35 = *(_DWORD *)(a1 + 68);
  v46[0] = *(_DWORD *)(a1 + 64);
  v46[1] = v35;
  sub_45244(v46);
  sub_45288(*(_DWORD *)(a1 + 20));
  sub_40390(42, (unsigned __int16)(v4 + 32 * *(_WORD *)(a1 + 20)));
  sub_40314(42, &v45);
  usleep(0x3E8u);
  sub_40390(20, *(_DWORD *)(a1 + 72) & 0x1FFFF | 0x80000000);
  sub_40314(20, &v45);
  v36 = *(_DWORD *)(a1 + 4);
  v37 = *(_DWORD *)a1;
  v38 = *(_DWORD *)(a1 + 76);
  v39 = v36 > 1;
  if ( *(_DWORD *)a1 )
    v39 = 0;
  if ( v39 )
  {
    v37 = 0;
    v40 = (v36 << 8) & 0xF00;
  }
  else
  {
    v40 = 256;
    if ( v37 )
      v37 = 0x4000;
  }
  if ( v38 )
  {
    v38 = 128;
    sub_452F8();
  }
  v45 = 0;
  sub_40314(35, &v45);
  sub_40390(35, v45 & 0xFFFF709F | 0x8060 | v37 | v40 | v38);
  free(ptr);
  result = 0;
  dword_505110 = v42;
  return result;
}
