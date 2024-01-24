__int64 __fastcall sub_2974C(int a1, int a2)
{
  pthread_mutex_t *v2; // r9
  int v5; // lr
  int v6; // r3
  size_t v7; // r2
  int v8; // r3
  int v9; // r2
  int v10; // r6
  const void *v11; // r1
  char *v12; // r2
  char *v13; // r0
  unsigned int v14; // t1
  int v15; // r0
  int v16; // r1
  char *v17; // r2
  unsigned int v18; // t1
  double v19; // d8
  unsigned __int64 v20; // r0
  int v21; // r6
  char *v22; // r6
  int v23; // r0
  double v24; // d7
  double v25; // d7
  double v26; // d7
  double v28; // r0
  double v29; // d8
  double v30; // r0
  double v31; // d8
  double v32; // r0
  double v33; // d8
  double v34; // r0
  double v35; // d7
  int v36; // r0
  int v37; // r0
  char *v38; // r10
  const char *v39; // r0
  char *v40; // r11
  int v41; // r0
  int *v42; // r0
  int *v43; // r0
  int *v44; // r0
  int *v45; // r0
  int *v46; // r0
  int *v47; // r0
  int v48; // r0
  __int64 v49; // [sp+18h] [bp-8D8h] BYREF
  char v50[28]; // [sp+20h] [bp-8D0h] BYREF
  char v51; // [sp+3Ch] [bp-8B4h] BYREF
  char v52[28]; // [sp+40h] [bp-8B0h] BYREF
  int v53; // [sp+5Ch] [bp-894h] BYREF
  char v54[28]; // [sp+60h] [bp-890h] BYREF
  char v55; // [sp+7Ch] [bp-874h] BYREF
  char v56[60]; // [sp+80h] [bp-870h] BYREF
  int v57; // [sp+BCh] [bp-834h] BYREF
  char s[136]; // [sp+C0h] [bp-830h] BYREF
  int v59; // [sp+148h] [bp-7A8h] BYREF

  v2 = (pthread_mutex_t *)(a1 + 212);
  if ( pthread_mutex_lock((pthread_mutex_t *)(a1 + 212)) )
  {
    v42 = _errno_location();
    snprintf(s, 0x800u, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", *v42, "bmminer.c", "gen_stratum_work", 1268);
    logMessage(3, s, 1);
  }
  if ( pthread_rwlock_wrlock((pthread_rwlock_t *)(a1 + 236)) )
  {
    v43 = _errno_location();
    snprintf(s, 0x800u, "WTF WRLOCK ERROR ON LOCK! errno=%d in %s %s():%d", *v43, "bmminer.c", "gen_stratum_work", 1268);
    logMessage(3, s, 1);
  }
  v5 = *(_DWORD *)(a1 + 1568);
  v6 = *(_DWORD *)(a1 + 1576);
  v7 = *(_DWORD *)(a1 + 632);
  v49 = *(_QWORD *)(a1 + 624);
  sub_30EA8((void *)(v5 + v6), &v49, v7, (int)"bmminer.c", (int)"gen_stratum_work", 1273);
  v8 = *(_DWORD *)(a1 + 624);
  v9 = *(_DWORD *)(a1 + 628);
  *(_DWORD *)(a1 + 624) = v8 + 1;
  *(_DWORD *)(a1 + 628) = __CFADD__(v8, 1) + v9;
  *(_DWORD *)(a2 + 296) = v8;
  *(_DWORD *)(a2 + 300) = v9;
  *(_DWORD *)(a2 + 304) = *(_DWORD *)(a1 + 632);
  if ( !pthread_rwlock_unlock((pthread_rwlock_t *)(a1 + 236)) )
  {
    if ( !pthread_rwlock_rdlock((pthread_rwlock_t *)(a1 + 236)) )
      goto LABEL_7;
LABEL_62:
    v45 = _errno_location();
    snprintf(s, 0x800u, "WTF RDLOCK ERROR ON LOCK! errno=%d in %s %s():%d", *v45, "bmminer.c", "gen_stratum_work", 1279);
    logMessage(3, s, 1);
    if ( !pthread_mutex_unlock(v2) )
      goto LABEL_8;
    goto LABEL_63;
  }
  v44 = _errno_location();
  snprintf(s, 0x800u, "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d", *v44, "bmminer.c", "gen_stratum_work", 1279);
  logMessage(3, s, 1);
  if ( pthread_rwlock_rdlock((pthread_rwlock_t *)(a1 + 236)) )
    goto LABEL_62;
LABEL_7:
  if ( !pthread_mutex_unlock(v2) )
    goto LABEL_8;
LABEL_63:
  v46 = _errno_location();
  snprintf(s, 0x800u, "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d", *v46, "bmminer.c", "gen_stratum_work", 1279);
  logMessage(3, s, 1);
LABEL_8:
  sub_2F1EC(*(char **)(a1 + 1568), *(_DWORD *)(a1 + 1572), s);
  sub_2F1EC(s, 0x20u, v50);
  sub_30EA8(v52, v50, 0x20u, (int)"bmminer.c", (int)"gen_stratum_work", 1283);
  if ( *(int *)(a1 + 1708) > 0 )
  {
    v10 = 0;
    do
    {
      v11 = *(const void **)(*(_DWORD *)(a1 + 676) + 4 * v10++);
      sub_30EA8(v54, v11, 0x20u, (int)"bmminer.c", (int)"gen_stratum_work", 1287);
      sub_2F1EC(v52, 0x40u, s);
      sub_2F1EC(s, 0x20u, v50);
      sub_30EA8(v52, v50, 0x20u, (int)"bmminer.c", (int)"gen_stratum_work", 1289);
    }
    while ( *(_DWORD *)(a1 + 1708) > v10 );
  }
  v12 = &v51;
  v13 = (char *)&v49 + 4;
  do
  {
    v14 = *((_DWORD *)v12 + 1);
    v12 += 4;
    *((_DWORD *)v13 + 1) = bswap32(v14);
    v13 += 4;
  }
  while ( &v53 != (int *)v12 );
  sub_30EA8((void *)a2, (const void *)(a1 + 1580), 0x70u, (int)"bmminer.c", (int)"gen_stratum_work", 1298);
  sub_30EA8((void *)(a2 + 36), v50, 0x20u, (int)"bmminer.c", (int)"gen_stratum_work", 1299);
  *(_QWORD *)(a2 + 312) = *(_QWORD *)(a1 + 1824);
  *(_DWORD *)(a2 + 288) = _strdup(*(const char **)(a1 + 672));
  *(_DWORD *)(a2 + 320) = _strdup(*(const char **)(a1 + 612));
  *(_DWORD *)(a2 + 308) = _strdup((const char *)(a1 + 1804));
  v15 = pthread_rwlock_unlock((pthread_rwlock_t *)(a1 + 236));
  if ( v15 )
  {
    v47 = _errno_location();
    snprintf(
      s,
      0x800u,
      "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d",
      *v47,
      "bmminer.c",
      "gen_stratum_work",
      1310);
    v15 = logMessage(3, s, 1);
  }
  off_7ECC4(v15);
  if ( logEnabled )
  {
    v38 = sub_2F670(a2, 112);
    v39 = sub_2F670((int)v50, 32);
    v40 = (char *)v39;
    if ( logEnabled )
    {
      if ( !loggingDebug && !loggingVerbose && loggingThreshold <= 6 )
        goto LABEL_52;
      snprintf(s, 0x800u, "Generated stratum merkle %s", v39);
      logMessage(7, s, 0);
      if ( !logEnabled )
        goto LABEL_58;
      if ( !loggingDebug )
      {
LABEL_52:
        if ( !loggingVerbose && loggingThreshold <= 6 )
          goto LABEL_55;
      }
      snprintf(s, 0x800u, "Generated stratum header %s", v38);
      logMessage(7, s, 0);
      if ( logEnabled )
      {
        if ( loggingDebug )
        {
LABEL_57:
          snprintf(
            s,
            0x800u,
            "Work job_id %s nonce2 %llu ntime %s",
            *(const char **)(a2 + 288),
            *(_QWORD *)(a2 + 296),
            *(const char **)(a2 + 308));
          logMessage(7, s, 0);
          goto LABEL_58;
        }
LABEL_55:
        if ( !loggingVerbose && loggingThreshold <= 6 )
          goto LABEL_58;
        goto LABEL_57;
      }
    }
LABEL_58:
    free(v38);
    free(v40);
  }
  v16 = a2 - 4;
  v17 = &v55;
  do
  {
    v18 = *(_DWORD *)(v16 + 4);
    v16 += 4;
    *((_DWORD *)v17 + 1) = bswap32(v18);
    v17 += 4;
  }
  while ( &v57 != (int *)v17 );
  sub_2F024(s);
  sub_2F054((unsigned __int8 *)s, v56, 0x40u);
  sub_30EA8((void *)(a2 + 128), &v59, 0x20u, (int)"bmminer.c", (int)"calc_midstate", 1029);
  sub_294B8((void *)(a2 + 160));
  ++dword_5945B4;
  if ( time(0) - dword_80B98 > 5 )
  {
    dword_80B98 = time(0);
    dword_80B9C = dword_5945B4;
  }
  v19 = *(double *)(a2 + 312);
  *(_BYTE *)(a2 + 284) = 1;
  *(_DWORD *)(a2 + 260) = a1;
  *(_DWORD *)(a2 + 248) = 0;
  *(_BYTE *)(a2 + 280) = 0;
  *(_DWORD *)(a2 + 336) = 0;
  *(_BYTE *)(a2 + 440) = 83;
  *(_DWORD *)(a2 + 244) = 60;
  if ( v19 == 0.0 )
  {
    LODWORD(v28) = sub_600B4(*(_QWORD *)(a2 + 184));
    v29 = v28 * 6.27710174e57;
    LODWORD(v30) = sub_600B4(*(_QWORD *)(a2 + 176));
    v31 = v29 + v30 * 3.40282367e38;
    LODWORD(v32) = sub_600B4(*(_QWORD *)(a2 + 168));
    v33 = v31 + v32 * 1.84467441e19;
    LODWORD(v34) = sub_600B4(*(_QWORD *)(a2 + 160));
    v35 = v34 + v33;
    if ( v34 + v33 == 0.0 )
    {
      v19 = 2.69595353e67;
      v20 = -1LL;
    }
    else
    {
      v19 = 2.69595353e67 / v35;
      round();
      LODWORD(v20) = sub_60180(2.69595353e67 / v35);
    }
    *(double *)(a2 + 376) = v19;
  }
  else
  {
    *(double *)(a2 + 376) = v19;
    round();
    LODWORD(v20) = sub_60180(v19);
  }
  *(double *)(a1 + 480) = v19;
  v21 = *(_DWORD *)(a2 + 260);
  *(_WORD *)s = 0;
  v22 = (char *)(v21 + 48);
  if ( v20 > 0xDE0B6B3A763FFFFLL )
  {
    v23 = sub_60120(v20, 0x38D7EA4C68000uLL);
    strcpy(s, "E");
    v24 = (double)v23 / 1000.0;
LABEL_24:
    snprintf(v22, 8u, "%.3g%s", v24, s);
    goto LABEL_25;
  }
  if ( v20 > 0x38D7EA4C67FFFLL )
  {
    v36 = sub_60120(v20, 0xE8D4A51000uLL);
    strcpy(s, "P");
    v24 = (double)v36 / 1000.0;
    goto LABEL_24;
  }
  if ( v20 > 0xE8D4A50FFFLL )
  {
    v41 = sub_60120(v20, 0x3B9ACA00uLL);
    strcpy(s, "T");
    v24 = (double)v41 / 1000.0;
    goto LABEL_24;
  }
  if ( v20 > 0x3B9AC9FF )
  {
    v37 = sub_60120(v20, (unsigned int)&unk_F4240);
    strcpy(s, "G");
    v24 = (double)v37 / 1000.0;
    goto LABEL_24;
  }
  if ( v20 > 0xF423F )
  {
    v48 = sub_60120(v20, 0x3E8uLL);
    strcpy(s, "M");
    v24 = (double)v48 / 1000.0;
    goto LABEL_24;
  }
  if ( v20 > 0x3E7 )
  {
    strcpy(s, "K");
    v24 = (double)(int)v20 / 1000.0;
    goto LABEL_24;
  }
  snprintf(v22, 8u, "%d%s", (_DWORD)v20, s);
LABEL_25:
  v25 = *(double *)(a1 + 464);
  if ( v25 == v19 )
  {
    ++*(_DWORD *)(a1 + 488);
    goto LABEL_27;
  }
  if ( v25 <= v19 )
  {
    if ( v25 != 0.0 )
    {
LABEL_27:
      v26 = *(double *)(a1 + 472);
      if ( v26 != v19 )
        goto LABEL_28;
LABEL_37:
      ++*(_DWORD *)(a1 + 492);
      return sub_302A0((__time_t *)(a2 + 264));
    }
    *(double *)(a1 + 464) = v19;
    *(_DWORD *)(a1 + 488) = 1;
  }
  else
  {
    *(double *)(a1 + 464) = v19;
    *(_DWORD *)(a1 + 488) = 1;
  }
  v26 = *(double *)(a1 + 472);
  if ( v26 == v19 )
    goto LABEL_37;
LABEL_28:
  if ( v26 < v19 )
  {
    *(double *)(a1 + 472) = v19;
    *(_DWORD *)(a1 + 492) = 1;
  }
  return sub_302A0((__time_t *)(a2 + 264));
}
