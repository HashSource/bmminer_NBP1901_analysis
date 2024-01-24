int sub_3C5DC()
{
  int i; // r4
  int j; // r4
  int *v2; // r8
  int k; // r4
  int v4; // r5
  int *v5; // r9
  _DWORD *v7; // r3
  int v8; // r4
  int v9; // r4
  float v10; // s0
  int m; // r4
  int v12; // r4
  int n; // r5
  char *v14; // r5
  int v15; // r0
  int v16; // r6
  int v17; // r4
  int v18; // r5
  int v19; // r0
  int v20; // r6
  char *v21; // r7
  int *v22; // r4
  int v23; // r8
  int v24; // r6
  unsigned int v25; // t1
  int v26; // r0
  int v27; // r2
  double v28; // d8
  int v29; // r1
  int v30; // r3
  double v31; // d7
  int v32; // r0
  int v33; // r2
  int v34; // r0
  int v35; // r3
  int v36; // t1
  int v37; // r0
  int v38; // r12
  int v39; // r0
  int v40; // r3
  int v41; // r2
  int v42; // t1
  int v43; // r12
  bool v44; // cc
  int v45; // r5
  int v46; // r0
  unsigned int v47; // r6
  int v48; // r12
  int v49; // r0
  _DWORD *v50; // r3
  int v51; // r2
  int v52; // r1
  int v53; // t1
  int v54; // r7
  int v55; // r1
  unsigned __int8 v56; // r2
  unsigned int v57; // r12
  int v58; // r0
  int v59; // r0
  int v60; // r1
  int v61; // r0
  char *v62; // r3
  char *v63; // r1
  unsigned int v64; // r3
  bool v65; // zf
  int v66; // r1
  int v67; // r0
  int v68; // r0
  int v69; // r3
  char *v70; // r2
  int v71; // r0
  int v72; // t1
  int v73; // r0
  int v74; // r1
  int v75; // r3
  int v76; // r0
  int v77; // r0
  int v78; // r3
  char *v79; // r2
  int v80; // r0
  int v81; // t1
  char *v82; // [sp+Ch] [bp-1064h]
  char *v83; // [sp+10h] [bp-1060h]
  unsigned int v84; // [sp+28h] [bp-1048h] BYREF
  char v85[4]; // [sp+2Ch] [bp-1044h] BYREF
  int v86; // [sp+30h] [bp-1040h] BYREF
  __int16 v87; // [sp+34h] [bp-103Ch]
  char v88; // [sp+36h] [bp-103Ah]
  char s[4152]; // [sp+38h] [bp-1038h] BYREF

  if ( (unsigned int)globalLogLevel > 3 )
  {
    strcpy(s, "Do freq tuning fine.\n");
    logMessage(3, s, 0);
  }
  for ( i = 0; i != 4; ++i )
  {
    if ( sub_1E29C(i) )
    {
      v73 = sub_1E0F0();
      if ( v73 )
      {
        v74 = dword_4FCB44 + 4 * (v73 + (i << 8));
        v75 = dword_4FCB44 + (i << 10);
        v76 = *(_DWORD *)dword_4FCB44 + 4 * i;
        do
        {
          *(_DWORD *)(v75 + 4) = *(_DWORD *)(v76 + 4);
          v75 += 4;
        }
        while ( v75 != v74 );
      }
    }
  }
  sub_361E4(**(_DWORD **)dword_4FCB44);
  memcpy((void *)(dword_4FCB44 + 4116), (const void *)(dword_4FCB44 + 4), 0x1000u);
  if ( (unsigned int)globalLogLevel > 3 )
  {
    strcpy(s, "\n");
    sub_2EA54(3, s, 0);
    if ( (unsigned int)globalLogLevel > 3 )
    {
      strcpy(s, ">>>> Do freq tuning fine parallel.\n");
      logMessage(3, s, 0);
    }
  }
  for ( j = 0; j != 4; ++j )
  {
    if ( sub_1E29C(j) )
    {
      v65 = sub_3BAE4(j) == 0;
      v66 = 2;
      v67 = j;
      if ( v65 )
      {
        v66 = 1;
        v67 = j;
      }
      sub_3962C(v67, v66);
    }
  }
  v2 = &dword_4FCB44;
LABEL_11:
  while ( 2 )
  {
    if ( !sub_39998() )
    {
      v4 = 0;
      v5 = v2;
      goto LABEL_142;
    }
    if ( (unsigned int)globalLogLevel > 3 )
    {
      snprintf(s, 0x800u, "is_need_serial = %d\n", 0);
      logMessage(3, s, 0);
      if ( (unsigned int)globalLogLevel > 3 )
      {
        strcpy(s, "\n");
        sub_2EA54(3, s, 0);
        if ( (unsigned int)globalLogLevel > 3 )
        {
          strcpy(s, ">>>> Do single grade tuning.\n");
          logMessage(3, s, 0);
        }
      }
    }
    for ( k = 0; k != 4; ++k )
    {
      if ( sub_1E29C(k) && sub_397A0(k) == 1 && (unsigned int)globalLogLevel > 3 )
      {
        snprintf(s, 0x800u, "chain = %d, grade = %d\n", k, *(_DWORD *)(*v2 + 4 * (k + 3076) + 4));
        logMessage(3, s, 0);
      }
    }
    if ( (unsigned int)globalLogLevel > 3 )
    {
      strcpy(s, "Board init start.\n");
      logMessage(3, s, 0);
    }
    v4 = InitializeBoard(*(_DWORD *)(*(_DWORD *)*v2 + 40));
    if ( !v4 )
    {
      sub_39A7C();
      v7 = (_DWORD *)*v2;
      v8 = 0;
      v7[3081] = 0;
      v7 += 3081;
      v7[1] = 0;
      v7[2] = 0;
      v7[3] = 0;
      memset(s, 0, 0x1000u);
      do
      {
        if ( sub_1E29C(v8) )
        {
          if ( sub_397A0(v8) == 1 )
          {
            v77 = sub_1E0F0();
            if ( v77 )
            {
              v78 = *v2 + (v8 << 10);
              v79 = &s[1024 * v8];
              v80 = *v2 + 4 * (v77 + (v8 << 8));
              do
              {
                v81 = *(_DWORD *)(v78 + 4);
                v78 += 4;
                *(_DWORD *)v79 = v81;
                v79 += 4;
              }
              while ( v78 != v80 );
            }
          }
          else if ( sub_3B8A0(v8, *v2 + 4) <= *(_DWORD *)(*(_DWORD *)*v2 + 24) )
          {
            v68 = sub_1E0F0();
            if ( v68 )
            {
              v69 = *v2 + (v8 << 10);
              v70 = &s[1024 * v8];
              v71 = *v2 + 4 * (v68 + (v8 << 8));
              do
              {
                v72 = *(_DWORD *)(v69 + 4);
                v69 += 4;
                *(_DWORD *)v70 = v72;
                v70 += 4;
              }
              while ( v69 != v71 );
            }
          }
          else
          {
            v59 = sub_1E0F0();
            if ( v59 )
            {
              v60 = v59 + (v8 << 8);
              v61 = *v2;
              v62 = &s[1024 * v8];
              v63 = &s[4 * v60];
              do
              {
                *(_DWORD *)v62 = *(_DWORD *)(*(_DWORD *)v61 + 24);
                v62 += 4;
              }
              while ( v62 != v63 );
            }
          }
        }
        ++v8;
      }
      while ( v8 != 4 );
      v9 = sub_36204();
      if ( v9 == sub_361F4() )
      {
        v10 = (float)unk_7EDD0;
        setChipFrequencies((int)s, (unsigned __int8)byte_482A70, *(unsigned __int8 *)(*(_DWORD *)*v2 + 36));
      }
      else
      {
        v4 = sub_36208();
        v10 = (float)unk_7EDD0;
        setChipFrequencies((int)s, (unsigned __int8)byte_482A70, *(unsigned __int8 *)(*(_DWORD *)*v2 + 36));
        if ( v4 )
        {
          v5 = v2;
          v64 = globalLogLevel;
          goto LABEL_122;
        }
      }
      while ( sub_39998() )
      {
        for ( m = 0; m != 4; ++m )
        {
          if ( sub_1E29C(m) )
          {
            if ( sub_397A0(m) == 1 )
            {
              v57 = sub_3B8A0(m, *v2 + 4116);
              if ( (unsigned int)globalLogLevel > 3 )
              {
                snprintf(
                  s,
                  0x800u,
                  "chain = %d, freq_avg = %d, freq_threshold = %d\n",
                  m,
                  v57,
                  *(_DWORD *)(*(_DWORD *)*v2 + 24));
                logMessage(3, s, 0);
              }
            }
          }
        }
        v12 = 1;
        for ( n = 0; n != 4; ++n )
        {
          if ( sub_1E29C(n) && sub_397A0(n) == 1 )
          {
            v58 = *(_DWORD *)(*v2 + 4 * n + 12324);
            if ( (unsigned int)globalLogLevel > 3 )
            {
              snprintf(
                s,
                0x800u,
                "chain = %d, grade_curr = %d, is_grade_curr_done = %d\n",
                n,
                *(_DWORD *)(*v2 + 4 * n + 12308),
                *(_DWORD *)(*v2 + 4 * n + 12324));
              logMessage(3, s, 0);
              v58 = *(_DWORD *)(*v2 + 4 * (n + 3080) + 4);
            }
            if ( !v58 )
              v12 = 0;
          }
        }
        if ( (unsigned int)globalLogLevel > 3 )
          goto LABEL_113;
LABEL_40:
        if ( v12 )
          goto LABEL_11;
        do
        {
          if ( sub_1E29C(v12) )
          {
            if ( sub_397A0(v12) == 1 )
            {
              v45 = *(_DWORD *)(*v2 + 4 * (v12 + 3080) + 4);
              if ( !v45 )
              {
                v46 = sub_1E0F0();
                v47 = v46;
                if ( v46 )
                {
                  v47 = 0;
                  v48 = *(_DWORD *)*v2;
                  v49 = *v2 + 4 * (v46 + (v12 << 8));
                  v50 = (_DWORD *)(*v2 + (v12 << 10) + 4116);
                  v51 = *v2 + (v12 << 10);
                  do
                  {
                    v53 = *(_DWORD *)(v51 + 4);
                    v51 += 4;
                    v52 = v53;
                    *v50++ = v53;
                    if ( v50[1023] == 1 )
                    {
                      v47 = v52 - *(_DWORD *)(v48 + 32);
                      *(v50 - 1) = v47;
                    }
                  }
                  while ( v51 != v49 );
                }
                else
                {
                  v48 = *(_DWORD *)*v2;
                }
                if ( *(_BYTE *)(v48 + 37) )
                  nullsub_4(v47, 1);
                v10 = (float)v47;
                sub_502C0((int)&v86, v85, 0);
                v88 = v85[0];
                if ( (unsigned int)globalLogLevel > 3 )
                {
                  snprintf(
                    s,
                    0x800u,
                    "chain = %d, grade_curr = %d, freq_target = %d\n",
                    v12,
                    *(_DWORD *)(*v2 + 4 * (v12 + 3076) + 4),
                    v47);
                  logMessage(3, s, 0);
                }
                v54 = sub_1E0F0();
                v55 = *v2;
                if ( v54 )
                {
                  do
                  {
                    while ( *(_DWORD *)(v55 + 4 * ((v12 << 8) + v45 + 1028) + 4) != v47 )
                    {
                      if ( v54 == ++v45 )
                        goto LABEL_101;
                    }
                    if ( (unsigned int)globalLogLevel > 3 )
                    {
                      snprintf(s, 0x800u, "chain = %d, asic = %d, freq = %d\n", v12, v45, v47);
                      logMessage(3, s, 0);
                    }
                    v56 = sub_1E160() * v45++;
                    sub_1F164(v12, 0, v56, (unsigned __int8)byte_482A70, v86, v87);
                    usleep((__useconds_t)&unk_F4240);
                    v55 = *v2;
                  }
                  while ( v54 != v45 );
                }
LABEL_101:
                sub_3BC48(v12, v55 + 4116);
              }
            }
          }
          ++v12;
        }
        while ( v12 != 4 );
        v14 = 0;
        v15 = sub_3B94C(255, *v2 + 4116);
        sub_321B8(v15, optMultiVersion, 20);
        v84 = sub_3BA18(255, *v2 + 4116);
        sub_3A86C((int)&v84);
        v16 = sub_391F4();
        do
        {
          if ( sub_1E29C((int)v14) && sub_397A0((int)v14) == 1 && !*(_DWORD *)(*v2 + 4 * (_DWORD)(v14 + 3080) + 4) )
            sub_3A054(v14, v16);
          ++v14;
        }
        while ( v14 != (char *)4 );
        v17 = 0;
        v82 = (char *)&unk_808FFC + v16;
        if ( sub_1E29C(0) )
        {
LABEL_49:
          if ( sub_397A0(v17) == 1 )
          {
            v18 = *(_DWORD *)(*v2 + 4 * (v17 + 3080) + 4);
            if ( !v18 )
            {
              v19 = sub_1E0F0();
              if ( v19 > 0 )
              {
                v20 = v17 << 8;
                v83 = (char *)v17;
                v21 = &v82[1024 * v17];
                v22 = v2;
                v23 = v20;
                v24 = v19;
                do
                {
                  v25 = *((_DWORD *)v21 + 1);
                  v21 += 4;
                  v26 = sub_1E130();
                  v28 = (double)v25;
                  v29 = v23 + v18++ + 2052;
                  v30 = v29;
                  v31 = (double)(8 * v26) * 0.98;
                  if ( (double)v25 <= v31 )
                    v30 = *v22;
                  else
                    v27 = 0;
                  if ( v28 <= v31 )
                    v30 += 4 * v29;
                  else
                    v29 = *v22;
                  if ( v28 <= v31 )
                    *(_DWORD *)(v30 + 4) = 1;
                  else
                    v30 = v29 + 4 * v30;
                  if ( v28 > v31 )
                    *(_DWORD *)(v30 + 4) = v27;
                }
                while ( v24 != v18 );
                v2 = v22;
                v17 = (int)v83;
              }
              v32 = sub_1E0F0();
              if ( v32 <= 0 )
                goto LABEL_120;
              v33 = 0;
              v34 = *v2 + 8208 + 4 * (v32 + (v17 << 8));
              v35 = *v2 + (v17 << 10) + 8208;
              do
              {
                v36 = *(_DWORD *)(v35 + 4);
                v35 += 4;
                v33 += v36;
              }
              while ( v34 != v35 );
              if ( !v33 )
LABEL_120:
                sub_3962C(v17, 2);
              v37 = sub_1E0F0();
              v38 = *v2;
              if ( v37 )
              {
                v39 = v38 + 4 * (v37 + (v17 << 8));
                v40 = v38 + (v17 << 10);
                v41 = v38 + (v17 << 10) + 4112;
                do
                {
                  v42 = *(_DWORD *)(v41 + 4);
                  v41 += 4;
                  *(_DWORD *)(v40 + 4) = v42;
                  v40 += 4;
                }
                while ( v40 != v39 );
              }
              v43 = v38 + 4 * v17;
              v44 = (unsigned int)globalLogLevel > 3;
              *(_DWORD *)(v43 + 4100) = 1;
              if ( v44 )
              {
                snprintf(
                  s,
                  0x800u,
                  "Update freq result of high grade, chain = %d, grade_curr = %d.\n",
                  v17,
                  *(_DWORD *)(v43 + 12308));
                logMessage(3, s, 0);
              }
              sub_3A828();
              if ( v10 > *(float *)(*v2 + 4 * v17 + 12340) )
                *(float *)(*v2 + 4 * v17 + 12340) = v10;
              if ( sub_3BAE4(v17) )
                sub_3962C(v17, 2);
            }
          }
        }
        while ( ++v17 != 4 )
        {
          if ( sub_1E29C(v17) )
            goto LABEL_49;
        }
      }
      if ( (unsigned int)globalLogLevel <= 3 )
        continue;
      v12 = 1;
LABEL_113:
      snprintf(s, 0x800u, "is_single_grade_done = %d\n", v12);
      logMessage(3, s, 0);
      goto LABEL_40;
    }
    break;
  }
  v5 = v2;
  if ( (unsigned int)globalLogLevel <= 3 )
    goto LABEL_20;
  strcpy(s, "Board init failed, exit.\n");
  logMessage(3, s, 0);
  v64 = globalLogLevel;
LABEL_122:
  if ( v64 <= 3 )
    goto LABEL_20;
  strcpy(s, "Parallel tuning failed, exit.\n");
  logMessage(3, s, 0);
LABEL_142:
  if ( (unsigned int)globalLogLevel > 3 )
  {
    strcpy(s, "Dump freq tuning fine result:\n");
    logMessage(3, s, 0);
  }
LABEL_20:
  sub_3BC48(255, *v5 + 4);
  return v4;
}
