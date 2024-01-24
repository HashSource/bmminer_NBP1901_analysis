int __fastcall sub_2D340(const char **a1, const char *a2, const char *a3, int a4)
{
  int result; // r0
  const char *v6; // r3
  const char *v7; // r2
  signed int v8; // r6
  char *v9; // r0
  const char *v10; // r1
  const char *v11; // r0
  char *v12; // r5
  const char *v13; // r3
  const char *v14; // r1
  __int64 v15; // r2
  int v16; // r0
  int v17; // r3
  int v18; // r2
  char *v19; // r3
  char *v20; // r0
  const char *v21; // r1
  const char *v22; // r0
  char s[2072]; // [sp+20h] [bp-818h] BYREF

  result = *((unsigned __int8 *)a1 + 4);
  if ( result )
  {
    snprintf(
      s,
      0x800u,
      "List %s store can't %s() - from %s %s() line %d in %s %s():%d",
      *a1,
      "k_alloc_items",
      a2,
      a3,
      a4,
      "klist.c",
      "k_alloc_items",
      19);
    logMessage(3, s, 1);
    result = nullsub_1(1);
  }
  v6 = a1[10];
  if ( (int)v6 <= 0 )
  {
    v8 = (signed int)a1[9];
  }
  else
  {
    v7 = a1[6];
    if ( (int)v6 <= (int)v7 )
      return result;
    v8 = (signed int)a1[9];
    if ( (int)v6 < (int)&v7[v8] )
      v8 = v6 - v7;
  }
  v9 = (char *)a1[13];
  v10 = a1[12] + 1;
  a1[12] = v10;
  v11 = (const char *)realloc(v9, 4 * (_DWORD)v10);
  a1[13] = v11;
  if ( !v11 )
  {
    snprintf(
      s,
      0x800u,
      "List %s item_memory failed to realloc count=%d in %s %s():%d",
      *a1,
      a1[12],
      "klist.c",
      "k_alloc_items",
      33);
    logMessage(3, s, 1);
    nullsub_1(1);
  }
  v12 = (char *)calloc(v8, 0x10u);
  if ( !v12 )
  {
    snprintf(
      s,
      0x800u,
      "List %s failed to calloc %d new items - total was %d, limit was %d in %s %s():%d",
      *a1,
      v8,
      a1[6],
      a1[10],
      "klist.c",
      "k_alloc_items",
      38);
    logMessage(3, s, 1);
    nullsub_1(1);
  }
  *(_DWORD *)&a1[13][4 * (_DWORD)(a1[12] + 0x3FFFFFFF)] = v12;
  v13 = a1[6];
  v14 = *a1;
  a1[7] = (const char *)v8;
  a1[8] = (const char *)v8;
  a1[6] = &v13[v8];
  *(_DWORD *)v12 = v14;
  *((_DWORD *)v12 + 1) = 0;
  *((_DWORD *)v12 + 2) = v12 + 16;
  if ( v8 > 2 )
  {
    HIDWORD(v15) = v12 + 32;
    do
    {
      LODWORD(v15) = HIDWORD(v15) - 32;
      *(_DWORD *)(HIDWORD(v15) - 16) = v14;
      *(_QWORD *)(HIDWORD(v15) - 12) = v15;
      HIDWORD(v15) += 16;
    }
    while ( (char *)HIDWORD(v15) != &v12[16 * v8] );
  }
  v16 = *((unsigned __int8 *)a1 + 44);
  v17 = 16 * (v8 + 0xFFFFFFF);
  *(_DWORD *)&v12[v17] = v14;
  a1[3] = v12;
  v18 = v17 - 16;
  v19 = &v12[v17];
  *((_DWORD *)v19 + 1) = &v12[v18];
  *((_DWORD *)v19 + 2) = 0;
  if ( v16 )
    a1[4] = v19;
  do
  {
    v20 = (char *)a1[15];
    v21 = a1[14] + 1;
    a1[14] = v21;
    v22 = (const char *)realloc(v20, 4 * (_DWORD)v21);
    a1[15] = v22;
    if ( !v22 )
    {
      snprintf(
        s,
        0x800u,
        "List %s data_memory failed to realloc count=%d in %s %s():%d",
        *a1,
        a1[14],
        "klist.c",
        "k_alloc_items",
        69);
      logMessage(3, s, 1);
      nullsub_1(1);
    }
    result = (int)calloc(1u, (size_t)a1[5]);
    *((_DWORD *)v12 + 3) = result;
    if ( !result )
    {
      snprintf(s, 0x800u, "List %s failed to calloc item data in %s %s():%d", *a1, "klist.c", "k_alloc_items", 73);
      logMessage(3, s, 1);
      nullsub_1(1);
      result = *((_DWORD *)v12 + 3);
    }
    *(_DWORD *)&a1[15][4 * (_DWORD)(a1[14] + 0x3FFFFFFF)] = result;
    v12 = (char *)*((_DWORD *)v12 + 2);
  }
  while ( v12 );
  return result;
}
