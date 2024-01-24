int __fastcall main(int a1, char **a2, char **a3)
{
  char *v4; // r7
  FILE *v5; // r8
  size_t v6; // r0
  size_t v7; // r5
  int v8; // r6
  int *v9; // r8
  size_t i; // r4
  const unsigned __int16 **v11; // r0
  int v12; // t1
  int v13; // r3
  void *v14; // r5
  _DWORD *v15; // r4
  _DWORD *v16; // r0
  int v17; // r4
  char *v18; // r10
  char *v19; // r5
  int v20; // r4
  int v21; // r2
  int v22; // r8
  int v23; // r6
  __int64 v24; // r10
  int v25; // r7
  int v26; // r3
  unsigned int *p_count; // r4
  int v28; // r2
  int v29; // r1
  int v30; // r0
  int v31; // r0
  int v32; // r6
  void **v33; // r10
  __int64 v34; // r0
  __int64 v35; // r6
  int v36; // r1
  int v37; // r0
  unsigned __int64 v38; // r2
  __int64 v39; // r0
  __int64 v40; // r6
  int v41; // r1
  int v42; // r0
  unsigned __int64 v43; // r2
  int v44; // r1
  int v45; // r2
  int v46; // r3
  int v47; // r1
  int v48; // r2
  int v49; // r3
  int v50; // r1
  int v51; // r2
  int *v52; // r2
  void ***v53; // r1
  unsigned int v54; // t1
  unsigned __int64 v55; // r2
  int *v56; // r3
  int v58; // r0
  int v59; // r6
  unsigned int v60; // r0
  char v61; // r0
  unsigned int v62; // r1
  int *v64; // r0
  int *v65; // r0
  int *v66; // r0
  int *v67; // r0
  int v69; // [sp+20h] [bp-A88h]
  unsigned int v70; // [sp+28h] [bp-A80h]
  double v71; // [sp+28h] [bp-A80h]
  double v72; // [sp+28h] [bp-A80h]
  pthread_mutex_t *v73; // [sp+34h] [bp-A74h]
  int *v74; // [sp+3Ch] [bp-A6Ch]
  __int64 v75; // [sp+40h] [bp-A68h]
  unsigned int v76; // [sp+4Ch] [bp-A5Ch]
  __int64 v77; // [sp+58h] [bp-A50h]
  void **v78; // [sp+68h] [bp-A40h] BYREF
  int v79[6]; // [sp+6Ch] [bp-A3Ch] BYREF
  unsigned int v80; // [sp+84h] [bp-A24h]
  int v81; // [sp+88h] [bp-A20h] BYREF
  char dest[32]; // [sp+8Ch] [bp-A1Ch] BYREF
  char command[64]; // [sp+ACh] [bp-9FCh] BYREF
  struct sigaction v84; // [sp+ECh] [bp-9BCh] BYREF
  int s[64]; // [sp+178h] [bp-930h] BYREF
  int v86[510]; // [sp+278h] [bp-830h] BYREF

  v84.sa_handler = (__sighandler_t)sub_28878;
  v84.sa_flags = 0;
  sigemptyset(&v84.sa_mask);
  sigaction(15, &v84, &unk_592464);
  sigaction(2, &v84, &unk_594524);
  sigaction(6, &v84, &unk_58E35C);
  sem_init(&sem, 0, 0);
  sub_29070((int)&stru_590408, "main", 2771);
  v4 = *a2;
  memset(s, 0, sizeof(s));
  memset(command, 0, sizeof(command));
  snprintf(command, 0x40u, "pidof %s", v4);
  v5 = popen(command, "r");
  if ( v5 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        do
        {
          if ( !fgets((char *)s, 256, v5) )
          {
            v7 = 0;
            v8 = 0;
            pclose(v5);
            v9 = s;
            for ( i = 1; strlen((const char *)s) >= i; ++i )
            {
              memset(dest, 0, sizeof(dest));
              v11 = _ctype_b_loc();
              v12 = *(unsigned __int8 *)v9;
              v9 = (int *)((char *)v9 + 1);
              if ( ((*v11)[v12] & 0x2000) != 0 )
              {
                strncpy(dest, (const char *)s + v7, i - v7 - 1);
                v13 = strtol(dest, 0, 10);
                if ( v13 > 0 && (++v8, logEnabled) && (loggingDebug || loggingVerbose || loggingThreshold > 6) )
                {
                  snprintf((char *)v86, 0x800u, "Parsed proc id is: %d\n", v13);
                  v7 = i;
                  logMessage(7, (const char *)v86, 0);
                }
                else
                {
                  v7 = i;
                }
              }
            }
            if ( v8 )
            {
              if ( loggingDebug || loggingVerbose || loggingThreshold > 2 )
              {
                snprintf((char *)v86, 0x800u, " %d instance of %s is  already Running on this machine", v8, v4);
                logMessage(3, (const char *)v86, 0);
              }
              if ( v8 != 1 )
              {
                snprintf((char *)v86, 0x800u, "%s is forbidden to start twice, will exit immediately!", *a2);
                logMessage(3, (const char *)v86, 1);
              }
            }
            goto LABEL_30;
          }
        }
        while ( !logEnabled );
        if ( loggingDebug || loggingVerbose || loggingThreshold > 6 )
          break;
LABEL_9:
        if ( loggingVerbose || loggingThreshold > 6 )
        {
LABEL_11:
          v6 = strlen((const char *)s);
          snprintf((char *)v86, 0x800u, "strlen is: %d\n", v6);
          logMessage(7, (const char *)v86, 0);
        }
      }
      snprintf((char *)v86, 0x800u, "pidof %s command result is: %s\n", v4, (const char *)s);
      logMessage(7, (const char *)v86, 0);
      if ( logEnabled )
      {
        if ( loggingDebug )
          goto LABEL_11;
        goto LABEL_9;
      }
    }
  }
  if ( logEnabled && (loggingDebug || loggingVerbose || loggingThreshold > 6) )
  {
    snprintf((char *)v86, 0x800u, " app-service:%s Not Found!!!", v4);
    logMessage(7, (const char *)v86, 0);
  }
LABEL_30:
  sub_52F1C("/etc/bitmain_category.conf");
  v14 = calloc(1u, 0x1664u);
  dword_592460 = (int)v14;
  v15 = calloc(1u, 0x188u);
  dword_58E354 = (int)v15;
  v16 = calloc(1u, 0x40u);
  v16[9] = v15;
  v15[5] = v14;
  dword_58E34C = (int)v16;
  processCommandLineArguments(a1, (const char **)a2);
  sub_2AEF4();
  if ( sub_2823C() )
    sub_31D58(4u, "socket init failed!");
  if ( initializeMiner() )
    sub_31D58(4u, "basic init failed!");
  dword_590400 = (int)calloc(1u, 0x40u);
  pthread_attr_init((pthread_attr_t *)command);
  pthread_attr_setstacksize((pthread_attr_t *)command, 0x200000u);
  if ( sub_30B10(dword_590400, (const pthread_attr_t *)command, (void *(*)(void *))sub_283E4, (void *)dword_590400)
    && (loggingDebug || loggingVerbose || loggingThreshold > 2) )
  {
    snprintf((char *)v86, 0x800u, "%s: create thread for get api status failed\n", "main");
    logMessage(3, (const char *)v86, 0);
  }
  pthread_detach(*(_DWORD *)(dword_590400 + 12));
  v17 = *(_DWORD *)(*(_DWORD *)(dword_58E34C + 36) + 20);
  if ( pthread_mutex_init((pthread_mutex_t *)(v17 + 112), 0) )
    sub_28FB8("bitmain_soc_prepare", 1933);
  sub_29070(v17, "bitmain_soc_prepare", 1934);
  sub_29070(v17 + 384, "bitmain_soc_prepare", 1935);
  sub_29070(v17 + 2232, "bitmain_soc_prepare", 1936);
  sub_29070(v17 + 4080, "bitmain_soc_prepare", 1937);
  memset(v86, 0, 0x20u);
  HIWORD(v86[0]) = 26;
  LOBYTE(v86[0]) = 81;
  BYTE1(v86[1]) |= 7u;
  LOBYTE(v86[1]) = ~(~((v86[1] & 0xFD | (2 * (byte_80F64 & 1u))) << 30) >> 30);
  LOWORD(v86[2]) = 13833;
  BYTE2(v86[2]) = dword_80F68;
  HIBYTE(v86[2]) = 80;
  LOWORD(v86[4]) = 2570;
  LOWORD(v86[3]) = dword_7EB4C;
  HIWORD(v86[6]) = 400;
  LOWORD(v86[7]) = 600;
  HIWORD(v86[3]) = dword_7EB50;
  LOBYTE(v86[6]) = 4;
  HIWORD(v86[7]) = sub_31590((int)v86, 30);
  if ( !initializeMinerHardware(v86[0], v86[1], v86[2], v86[3], v86[4], v86[5], v86[6], v86[7]) )
    sub_31D58(4u, "soc init failed!");
  sub_31D58(2u, 0);
  pthread_mutex_lock(&mutex);
  if ( dword_80F38 )
  {
    if ( (unsigned int)globalLogLevel > 3 )
    {
      strcpy((char *)v86, "start the cached job");
      logMessage(3, (const char *)v86, 0);
    }
    sub_2B330((const void *)dword_80F3C, dword_80F38);
  }
  pthread_mutex_unlock(&mutex);
  sub_32CA8();
  v18 = byte_80768;
  while ( 2 )
  {
    v19 = v18;
LABEL_49:
    if ( !*(_BYTE *)(dword_58E354 + 364) )
    {
      v74 = (int *)dword_58E34C;
      v20 = *(_DWORD *)(*(_DWORD *)(dword_58E34C + 36) + 20);
      v73 = (pthread_mutex_t *)v20;
      pthread_mutex_lock(&stru_4FCAD0);
      if ( pthread_mutex_lock((pthread_mutex_t *)v20) )
      {
        v65 = _errno_location();
        snprintf(
          (char *)v86,
          0x800u,
          "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d",
          *v65,
          "bmminer.c",
          "bitmain_c5_scanhash",
          2063);
        logMessage(3, (const char *)v86, 1);
      }
      if ( pthread_rwlock_rdlock((pthread_rwlock_t *)(v20 + 24)) )
      {
        v67 = _errno_location();
        snprintf(
          (char *)v86,
          0x800u,
          "WTF RDLOCK ERROR ON LOCK! errno=%d in %s %s():%d",
          *v67,
          "bmminer.c",
          "bitmain_c5_scanhash",
          2063);
        logMessage(3, (const char *)v86, 1);
      }
      if ( pthread_mutex_unlock((pthread_mutex_t *)v20) )
      {
        v66 = _errno_location();
        snprintf(
          (char *)v86,
          0x800u,
          "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d",
          *v66,
          "bmminer.c",
          "bitmain_c5_scanhash",
          2063);
        logMessage(3, (const char *)v86, 1);
      }
      v75 = 0LL;
LABEL_57:
      if ( !dword_5955D0 )
      {
LABEL_85:
        qword_99EE08 += v75;
        v31 = pthread_rwlock_unlock((pthread_rwlock_t *)&v73[1]);
        if ( v31 )
        {
          v64 = _errno_location();
          snprintf(
            (char *)v86,
            0x800u,
            "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d",
            *v64,
            "bmminer.c",
            "bitmain_c5_scanhash",
            2156);
          v31 = logMessage(3, (const char *)v86, 1);
        }
        off_7ECC4(v31);
        pthread_mutex_unlock(&stru_4FCAD0);
        sub_304D4();
        if ( v75 )
        {
          v18 = v19;
          v77 = 0xFFFFFFFFLL * v75;
          if ( logEnabled && (loggingDebug || loggingVerbose || loggingThreshold > 6) )
          {
            snprintf((char *)v86, 0x800u, "%s: hashes %llu ...\n", "bitmain_c5_scanhash", v77);
            logMessage(7, (const char *)v86, 0);
          }
          if ( v77 )
            unk_80F50 = ((double (__fastcall *)(int, _DWORD, int, unsigned int))loc_600C4)(
                          -(int)v75,
                          (unsigned __int64)(0xFFFFFFFFLL * v75) >> 32,
                          -(int)v75,
                          -(int)v75 | (unsigned int)((unsigned __int64)(0xFFFFFFFFLL * v75) >> 32))
                      / 1000000000.0
                      + unk_80F50;
          continue;
        }
        goto LABEL_49;
      }
      while ( 1 )
      {
        v21 = 0;
        v22 = dword_5955C8[15 * dword_5955CC + 8];
        v23 = dword_5955C8[15 * dword_5955CC + 3];
        v24 = *(_QWORD *)&dword_5955C8[15 * dword_5955CC + 6];
        v69 = dword_5955C8[15 * dword_5955CC + 9];
        v25 = dword_5955C8[15 * dword_5955CC + 4];
        v70 = (dword_5955C8[15 * dword_5955CC + 5] << 24) | HIBYTE(dword_5955C8[15 * dword_5955CC + 5]) | ((unsigned int)dword_5955C8[15 * dword_5955CC + 5] >> 8) & 0xFF00 | (dword_5955C8[15 * dword_5955CC + 5] << 8) & 0xFF0000;
        do
          ++v21;
        while ( v21 != 32 );
        if ( logEnabled && (loggingDebug || loggingVerbose || loggingThreshold > 6) )
        {
          snprintf(
            (char *)v86,
            0x800u,
            "%s: job_id:0x%x   work_id:0x%x   nonce2:0x%llx nonce3:0x%x   version:0x%x\n",
            "bitmain_c5_scanhash",
            v23,
            v25,
            v24,
            v22,
            v70);
          logMessage(7, (const char *)v86, 0);
        }
        if ( (unsigned int)dword_5955CC > 0x1FD )
          v26 = 0;
        else
          v26 = dword_5955CC;
        p_count = &v73[7].__count;
        if ( (unsigned int)dword_5955CC <= 0x1FD )
          ++v26;
        dword_5955CC = v26;
        v28 = *((_DWORD *)v19 + 513);
        --dword_5955D0;
        if ( v22 != v28 || v25 != *((_DWORD *)v19 + 514) )
          break;
        if ( sub_1E29C(v69) != 1 )
          goto LABEL_57;
        if ( logEnabled && (loggingDebug || loggingVerbose || loggingThreshold > 6) )
        {
          strcpy((char *)v86, "reepat nonce error");
          logMessage(7, (const char *)v86, 0);
        }
LABEL_84:
        sub_2A3C4((int)v74);
        sub_1E6E0(v69);
        if ( !dword_5955D0 )
          goto LABEL_85;
      }
      *((_DWORD *)v19 + 513) = v22;
      *((_DWORD *)v19 + 514) = v25;
      if ( logEnabled )
      {
        if ( !loggingDebug && !loggingVerbose && loggingThreshold <= 6 )
        {
          v29 = dword_7EAB8;
          v30 = dword_7EAB8 - v23;
          goto LABEL_76;
        }
        snprintf((char *)v86, 0x800u, "%s: Chain ID J%d ...\n", "bitmain_c5_scanhash", v69 + 1);
        logMessage(7, (const char *)v86, 0);
        if ( logEnabled )
        {
          v29 = dword_7EAB8;
          v30 = dword_7EAB8 - v23;
          if ( loggingDebug )
          {
LABEL_95:
            snprintf(
              (char *)v86,
              0x800u,
              "%s: given_id:%d job_id:%d switch:%d  ...\n",
              "bitmain_c5_scanhash",
              v29,
              v23,
              v30);
            logMessage(7, (const char *)v86, 0);
            goto LABEL_96;
          }
LABEL_76:
          if ( !loggingVerbose && loggingThreshold <= 6 )
          {
            switch ( v30 )
            {
              case 1:
                goto LABEL_141;
              case 0:
                goto LABEL_100;
              case 2:
LABEL_99:
                p_count = &v73[161].__count;
                goto LABEL_100;
            }
            goto LABEL_81;
          }
          goto LABEL_95;
        }
      }
LABEL_96:
      v32 = dword_7EAB8 - v23;
      switch ( v32 )
      {
        case 1:
LABEL_141:
          p_count = &v73[84].__count;
LABEL_100:
          sub_2A264(v74, (int *)&v78, (int)p_count, (int)p_count, v24, v70);
          v33 = v78;
          v76 = *p_count;
          v71 = *((double *)v78 + 39);
          LODWORD(v34) = sub_60180(v71);
          v35 = v34;
          if ( v34 != qword_80F78 )
          {
            v36 = 0;
            v37 = 0;
            qword_80F78 = v35;
            dword_80F80 = 0;
            dword_80F84 = 0;
            if ( v35 )
            {
              v38 = v35;
              while ( 1 )
              {
                v38 >>= 1;
                if ( !v38 )
                  break;
                v37 = (__PAIR64__(v37, v36++) + 1) >> 32;
              }
            }
            else
            {
              v36 = -1;
              v37 = -1;
            }
            dword_80F80 = v36;
            dword_80F84 = v37;
            if ( logEnabled )
            {
              if ( loggingDebug || loggingVerbose || loggingThreshold > 6 )
              {
                snprintf(
                  (char *)v86,
                  0x800u,
                  "%s: pool_diff:%lld work_diff:%f pool_diff_bit:%lld ...\n",
                  "hashtest_submit",
                  v35,
                  v71,
                  __PAIR64__(v37, v36));
                logMessage(7, (const char *)v86, 0);
              }
            }
          }
          v72 = unk_7EAB0;
          LODWORD(v39) = sub_60180(unk_7EAB0);
          v40 = v39;
          if ( v39 != *(_QWORD *)algn_80F88 )
          {
            v41 = 0;
            *(_QWORD *)algn_80F88 = v40;
            v42 = 0;
            if ( v40 )
            {
              v43 = v40;
              while ( 1 )
              {
                v43 >>= 1;
                if ( !v43 )
                  break;
                v42 = (__PAIR64__(v42, v41++) + 1) >> 32;
              }
            }
            else
            {
              v41 = -1;
              v42 = -1;
            }
            dword_80F90 = v41;
            dword_80F94 = v42;
            if ( logEnabled )
            {
              if ( loggingDebug || loggingVerbose || loggingThreshold > 6 )
              {
                snprintf(
                  (char *)v86,
                  0x800u,
                  "%s:net_diff:%lld current_diff:%f net_diff_bit %lld ...\n",
                  "hashtest_submit",
                  v40,
                  v72,
                  __PAIR64__(v42, v41));
                logMessage(7, (const char *)v86, 0);
              }
            }
          }
          v44 = (int)v33[33];
          v45 = (int)v33[34];
          v46 = (int)v33[35];
          s[2] = (int)v33[32];
          s[3] = v44;
          s[4] = v45;
          s[5] = v46;
          v47 = (int)v33[37];
          v48 = (int)v33[38];
          v49 = (int)v33[39];
          s[6] = (int)v33[36];
          s[7] = v47;
          s[8] = v48;
          s[9] = v49;
          s[0] = 80;
          s[1] = 0;
          v50 = (int)v33[17];
          v51 = (int)v33[18];
          v79[0] = (int)v33[16];
          v79[1] = v50;
          v79[2] = v51;
          sub_316B0((int)&s[10], (unsigned int *)v79, 0xCu);
          v79[0] = v22;
          sub_316B0((int)&s[13], (unsigned int *)v79, 4u);
          sub_2327C((int)s, v79);
          memset(s, 0, 0xE8u);
          sub_23430((unsigned int *)v79, 32, dest);
          v52 = &v81;
          v53 = &v78;
          do
          {
            v54 = v52[1];
            ++v52;
            v53[1] = (void **)bswap32(v54);
            ++v53;
          }
          while ( &dest[28] != (char *)v52 );
          LODWORD(v55) = v81;
          if ( v81 )
          {
            if ( sub_1E29C(v69) == 1 )
            {
              if ( logEnabled && (loggingDebug || loggingVerbose || loggingThreshold > 6) )
              {
                strcpy((char *)v86, "hash2_32 error");
                logMessage(7, (const char *)v86, 0);
              }
              sub_2A3C4((int)v74);
              sub_1E6E0(v69);
            }
            if ( logEnabled && (loggingDebug || loggingVerbose || loggingThreshold > 6) )
            {
              snprintf((char *)v86, 0x800u, "%s: HASH2_32[7] != 0", "hashtest_submit");
              logMessage(7, (const char *)v86, 0);
            }
          }
          else
          {
            v56 = &v81;
            while ( !*--v56 )
            {
              LODWORD(v55) = v55 + 1;
              if ( (_DWORD)v55 == 7 )
              {
                v55 = 7LL;
                goto LABEL_128;
              }
            }
            v55 = (int)v55;
LABEL_128:
            if ( *(_QWORD *)&dword_80F80 >> 5 <= v55 )
            {
              v58 = sub_1E160();
              v59 = sub_51978(v22, v58);
              v60 = sub_51970(v22);
              if ( logEnabled && (loggingDebug || loggingVerbose || loggingThreshold > 6) )
              {
                snprintf(
                  (char *)v86,
                  0x800u,
                  "%s: chain %d which_asic_nonce %d which_core_nonce %d",
                  "hashtest_submit",
                  v69,
                  v59,
                  v60);
                logMessage(7, (const char *)v86, 0);
              }
              v61 = dword_80F80;
              v62 = *(&v80 - (*(__int64 *)&dword_80F80 >> 5));
              ++qword_99CD98[256 * v69 + v59];
              if ( bswap32(v62) < 0xFFFFFFFF >> (v61 & 0x1F) )
              {
                *(_QWORD *)&dword_99ED98[2 * v69] += 256LL;
                sub_2ACEC((int)v74, (const char **)v33, v22, v76);
                v75 += 256LL;
              }
              else if ( bswap32(v80) <= 0xFFFFFE )
              {
                *(_QWORD *)&dword_99ED98[2 * v69] += 256LL;
                v75 += 256LL;
              }
            }
          }
          sub_2A1E0(&v78, "bmminer.c", "bitmain_c5_scanhash", 2153);
          goto LABEL_57;
        case 0:
          goto LABEL_100;
        case 2:
          goto LABEL_99;
      }
      if ( loggingDebug || loggingVerbose )
      {
LABEL_82:
        snprintf((char *)v86, 0x800u, "%s: job_id non't found ...\n", "bitmain_c5_scanhash");
        logMessage(3, (const char *)v86, 0);
LABEL_83:
        if ( sub_1E29C(v69) != 1 )
          goto LABEL_57;
        goto LABEL_84;
      }
LABEL_81:
      if ( loggingThreshold <= 2 )
        goto LABEL_83;
      goto LABEL_82;
    }
    break;
  }
  sem_destroy(&sem);
  sub_194DC();
  sub_53604();
  return 0;
}
