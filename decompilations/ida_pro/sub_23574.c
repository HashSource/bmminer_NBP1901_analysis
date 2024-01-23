int __fastcall sub_23574(const char *a1, char *a2, size_t a3)
{
  double v3; // d0
  char *v5; // r9
  int v8; // r4
  int v9; // r0
  int v11; // r0
  int v12; // r0
  int v13; // r8
  int i; // r4
  int v15; // r9
  int v16; // r11
  unsigned int v17; // r8
  int v18; // r5
  char *v19; // r0
  int v20; // r10
  char *v21; // r0
  int v22; // r9
  char *v23; // r0
  int v24; // r0
  int v25; // r7
  int v26; // r0
  int v27; // r0
  char *v28; // r0
  int v29; // r9
  char *v30; // r0
  int v31; // r10
  char *v32; // r0
  int v33; // r0
  int v34; // r11
  int v35; // r8
  char *v36; // r0
  int v37; // r7
  char *v38; // r0
  int v39; // r0
  int v40; // r9
  size_t v41; // r1
  char *v42; // r0
  int v43; // r10
  unsigned int v44; // r4
  unsigned int v45; // r6
  int v46; // r0
  int v47; // r7
  int v48; // r0
  int v49; // r1
  int v50; // r1
  unsigned int v51; // r0
  int v52; // r7
  size_t v53; // r1
  char *v54; // r0
  int j; // r7
  char *k; // r9
  int v57; // r0
  int v58; // [sp+0h] [bp-CB0h]
  char *v59; // [sp+0h] [bp-CB0h]
  int v60; // [sp+4h] [bp-CACh]
  char *v61; // [sp+3Ch] [bp-C74h]
  char *v62; // [sp+3Ch] [bp-C74h]
  char *v63; // [sp+40h] [bp-C70h]
  size_t v64; // [sp+44h] [bp-C6Ch]
  __int16 v65; // [sp+5Ch] [bp-C54h] BYREF
  _DWORD delim[256]; // [sp+60h] [bp-C50h] BYREF
  int s[512]; // [sp+460h] [bp-850h] BYREF

  v5 = (char *)(a1 + 4);
  v8 = strncmp(a1 + 4, "/rate", 5u);
  if ( !v8 )
  {
    if ( byte_482A5D && (byte_590404 || byte_482A5C || dword_7EBA0 > 6) )
    {
      strcpy((char *)s, "cmd : get rate");
      sub_2E584(7, (const char *)s, 0);
    }
    v9 = sub_1A18C();
    sub_234D8(a2, a3, v9);
    return v8;
  }
  v8 = strncmp(v5, "/ideal_rate", 0xBu);
  if ( !v8 )
  {
    if ( byte_482A5D && (byte_590404 || byte_482A5C || dword_7EBA0 > 6) )
    {
      strcpy((char *)s, "cmd : get ideal rate");
      sub_2E584(7, (const char *)s, 0);
    }
    v11 = sub_1A014();
    sub_234D8(a2, a3, v11);
    return v8;
  }
  v8 = strncmp(v5, "/max_rate", 9u);
  if ( !v8 )
  {
    if ( byte_482A5D && (byte_590404 || byte_482A5C || dword_7EBA0 > 6) )
    {
      strcpy((char *)s, "cmd : get max rate");
      sub_2E584(7, (const char *)s, 0);
    }
    v12 = sub_19E68();
    sub_234D8(a2, a3, v12);
    return v8;
  }
  v8 = strncmp(v5, "/miner_status", 0xDu);
  if ( !v8 )
  {
    if ( byte_482A5D && (byte_590404 || byte_482A5C || dword_7EBA0 > 6) )
    {
      strcpy((char *)s, "cmd : get miner status");
      sub_2E584(7, (const char *)s, 0);
      return v8;
    }
    return 0;
  }
  v8 = strncmp(v5, "/productName", 0xCu);
  if ( v8 )
  {
    v8 = strncmp(v5, "/get_sn", 7u);
    if ( !v8 )
    {
      if ( byte_482A5D && (byte_590404 || byte_482A5C || dword_7EBA0 > 6) )
      {
        strcpy((char *)s, "cmd : get miner sn");
        sub_2E584(7, (const char *)s, 0);
      }
      if ( byte_7F8F8 )
        snprintf(a2, 0x100u, "%s", &byte_7F8F8);
      else
        strcpy(a2, "no miner sn stored on board");
      return v8;
    }
    v8 = strncmp(v5, "/set_sn", 7u);
    if ( !v8 )
    {
      if ( byte_590404 || byte_482A5C || dword_7EBA0 > 4 )
      {
        strcpy((char *)s, "cmd : set miner sn, doesn't spport");
        sub_2E584(5, (const char *)s, 0);
      }
      snprintf(a2, 0x14u, "doesn't support sn set in Release mode");
      return v8;
    }
    v8 = strncmp(v5, "/readreg", 8u);
    if ( v8 )
    {
      v8 = strncmp(v5, "/readcorereg", 0xCu);
      if ( v8 )
      {
        v8 = strncmp(v5, "/resetcore", 0xAu);
        if ( v8 )
        {
          if ( !strncmp(v5, "/nonce", 6u) )
          {
            v15 = 0;
            v16 = 0;
            memset(s, 0, 0x100u);
            v17 = 0;
            v63 = a2;
            v18 = 0;
            v64 = a3;
            do
            {
              if ( sub_1E29C(v17) )
              {
                v41 = v64 - v18;
                v42 = &v63[v18];
                v18 += 36;
                snprintf(v42, v41, "\n asic nonce number for chain[%d]...\n", v17);
                v43 = sub_1E0F0();
                if ( v43 )
                {
                  v44 = 0;
                  do
                  {
                    v16 += sub_2CDFC(v17, v44);
                    v45 = v44 + 1;
                    v46 = sub_2CDFC(v17, v44);
                    v47 = snprintf((char *)s + v15, 256 - v15, "asic[%03d]=%-8d ", v44, v46);
                    v48 = sub_1E100();
                    sub_5FADC(v44 + 1, v48);
                    v15 += v47;
                    if ( !v49 )
                    {
                      v50 = sub_1E100();
                      v51 = sub_5F880(v44, v50);
                      v60 = v16;
                      v16 = 0;
                      v15 = 0;
                      v18 += snprintf(&v63[v18], v64 - v18, "domain %02d %s total=%-8u\n", v51, s, v60);
                    }
                    ++v44;
                  }
                  while ( v45 != v43 );
                }
              }
              ++v17;
            }
            while ( v17 != 4 );
            return 0;
          }
          if ( !strncmp(v5, "/adc", 4u) )
          {
            v13 = 0;
            for ( i = 0; i != 4; ++i )
            {
              if ( sub_1E29C(i) )
              {
                v53 = a3 - v13;
                v54 = &a2[v13];
                v13 += 23;
                snprintf(v54, v53, "\t\t\td0\td1\td2\td3\tsum\tavg\n");
                v61 = (char *)sub_1E0F0();
                if ( v61 )
                {
                  for ( j = 0; (char *)j != v61; ++j )
                  {
                    sub_3F92C();
                    sub_3F92C();
                    sub_3F92C();
                    sub_3F92C();
                    sub_3F970(i, j);
                    sub_3F9EC(i, j);
                    v58 = j;
                    v13 += snprintf(
                             &a2[v13],
                             a3 - v13,
                             "chain %2d asic %03d adc:\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\n",
                             i,
                             v58,
                             v3,
                             v3,
                             v3,
                             v3,
                             v3,
                             v3);
                  }
                }
              }
            }
            return 0;
          }
          v8 = strncmp(v5, "/flush", 6u);
          if ( !v8 )
          {
            sub_452F8();
            return v8;
          }
          v8 = strncmp(v5, "/power", 6u);
          if ( v8 )
            return -1;
          s[0] = 0;
          if ( _isoc99_sscanf(v5, "/power-%d", s) == 1 )
          {
            v52 = s[0];
            if ( s[0] <= 3 )
            {
              sub_192C8(s[0]);
              snprintf(a2, a3, "chain %d power is %.2f", v52, v3);
              return v8;
            }
          }
LABEL_74:
          snprintf(a2, a3, "404 not found");
          return v8;
        }
        strcpy((char *)delim, "-");
        if ( !strtok(v5, (const char *)delim) )
          goto LABEL_74;
        v36 = strtok(0, (const char *)delim);
        if ( !v36 )
          goto LABEL_74;
        v37 = strtol(v36, 0, 10);
        v38 = strtok(0, (const char *)delim);
        if ( !v38 )
          goto LABEL_74;
        v39 = strtol(v38, 0, 10);
        v40 = v39;
        if ( byte_590404 || byte_482A5C || dword_7EBA0 > 4 )
        {
          snprintf((char *)s, 0x800u, "recvBuf = %s, chain = %d, asic = %d\n", a1, v37, v39);
          sub_2E584(5, (const char *)s, 0);
        }
        snprintf(a2, a3, "reset chain %d asic %d core success!!!.", v37, v40);
      }
      else
      {
        v65 = 45;
        memset(delim, 0, sizeof(delim));
        if ( !strtok(v5, (const char *)&v65) )
          goto LABEL_74;
        v28 = strtok(0, (const char *)&v65);
        if ( !v28 )
          goto LABEL_74;
        v29 = strtol(v28, 0, 10);
        v30 = strtok(0, (const char *)&v65);
        if ( !v30 )
          goto LABEL_74;
        v31 = strtol(v30, 0, 10);
        v32 = strtok(0, (const char *)&v65);
        if ( !v32 )
          goto LABEL_74;
        v33 = strtol(v32, 0, 16);
        v34 = v33;
        if ( byte_590404 || byte_482A5C || dword_7EBA0 > 4 )
        {
          snprintf((char *)s, 0x800u, "recvBuf = %s, chain = %d, asic = %d, reg = 0x%x\n", a1, v29, v31, v33);
          sub_2E584(5, (const char *)s, 0);
        }
        v35 = sub_2C2E8(v34, v31, v29, (int)delim);
        if ( v35 )
        {
          snprintf(a2, a3, "500 server error");
        }
        else
        {
          v62 = (char *)sub_1E120();
          if ( (int)v62 > 0 )
          {
            for ( k = 0; k != v62; ++k )
            {
              v57 = delim[(_DWORD)k];
              v59 = k;
              v35 += snprintf(
                       &a2[v35],
                       a3 - v35,
                       "asic\t%03d\tcore\t%03d\treg\t0x%02x\tval\t0x%08x\n",
                       v31,
                       v59,
                       v34,
                       v57);
            }
          }
        }
      }
    }
    else
    {
      strcpy((char *)delim, "-");
      if ( !strtok(v5, (const char *)delim) )
        goto LABEL_74;
      v19 = strtok(0, (const char *)delim);
      if ( !v19 )
        goto LABEL_74;
      v20 = strtol(v19, 0, 10);
      v21 = strtok(0, (const char *)delim);
      if ( !v21 )
        goto LABEL_74;
      v22 = strtol(v21, 0, 10);
      v23 = strtok(0, (const char *)delim);
      if ( !v23 )
        goto LABEL_74;
      v24 = strtol(v23, 0, 16);
      v25 = v24;
      if ( byte_590404 || byte_482A5C || dword_7EBA0 > 4 )
      {
        snprintf((char *)s, 0x800u, "recvBuf = %s, chain = %d, asic = %d, reg = 0x%x\n", a1, v20, v22, v24);
        sub_2E584(5, (const char *)s, 0);
      }
      v26 = sub_1E160();
      v27 = sub_2C06C(v25, v22 * v26, v20);
      snprintf(a2, a3, "reg 0x%08x of asic %2d @ chain %2d, val = 0x%08x", v25, v22, v20, v27);
    }
  }
  else
  {
    if ( byte_482A5D && (byte_590404 || byte_482A5C || dword_7EBA0 > 6) )
    {
      strcpy((char *)s, "cmd : get miner type");
      sub_2E584(7, (const char *)s, 0);
    }
    snprintf(a2, 0x100u, "%s", dest);
  }
  return v8;
}
