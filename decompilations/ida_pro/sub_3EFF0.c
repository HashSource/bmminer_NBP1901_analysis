int __fastcall sub_3EFF0(int a1, int a2)
{
  const char *v3; // r0
  const char *v4; // r0
  int v5; // r7
  int v6; // r8
  int v7; // r6
  _DWORD *v8; // r0
  int v9; // r4
  int v10; // r5
  int v11; // r11
  unsigned int v12; // r11
  unsigned int v13; // r0
  double *v14; // r3
  double *v15; // r4
  double v16; // d3
  double v17; // d4
  double v18; // d6
  double v19; // d5
  int v20; // r11
  _DWORD *v21; // r0
  int v22; // r10
  unsigned int v23; // r4
  _DWORD *v24; // r0
  unsigned int v25; // r5
  int v26; // r0
  bool v27; // zf
  double *v28; // r12
  int v30; // r8
  unsigned int v31; // r5
  int v32; // r4
  _QWORD *v33; // r6
  int v34; // r0
  int v35; // r7
  int v36; // r11
  int v37; // r4
  _DWORD *v38; // r0
  int v39; // r5
  int v40; // r8
  int v41; // r9
  unsigned int v42; // r9
  unsigned int v43; // r0
  double *v44; // r12
  _DWORD *v45; // r0
  char *i; // r6
  int v47; // r5
  int v48; // r8
  int j; // r4
  int v50; // r3
  _DWORD *v51; // r0
  double v52; // [sp+0h] [bp-3110h]
  double v53; // [sp+8h] [bp-3108h]
  double v54; // [sp+10h] [bp-3100h]
  double v55; // [sp+18h] [bp-30F8h]
  double v56; // [sp+28h] [bp-30E8h]
  char *format; // [sp+38h] [bp-30D8h]
  char *formata; // [sp+38h] [bp-30D8h]
  char *v60; // [sp+40h] [bp-30D0h]
  char *v61; // [sp+40h] [bp-30D0h]
  int v62; // [sp+44h] [bp-30CCh]
  unsigned int v63; // [sp+4Ch] [bp-30C4h]
  char v64[128]; // [sp+50h] [bp-30C0h] BYREF
  _QWORD s[510]; // [sp+D0h] [bp-3040h] BYREF
  _OWORD v66[516]; // [sp+10D0h] [bp-2040h] BYREF

  memset(v66, 0, 0x2000u);
  v3 = (const char *)sub_1E0C0();
  if ( strcmp(v3, "BHB28601") )
  {
    v4 = (const char *)sub_1E0C0();
    if ( strcmp(v4, "BHB28701") )
    {
      v30 = sub_1E0F0();
      if ( v30 )
      {
        v31 = 0;
        v32 = 0;
        v33 = s;
        do
        {
          v34 = v32++;
          if ( !sub_14ED0(v34) )
          {
            sub_5146C((unsigned __int8)a1, v31);
            usleep(0x1388u);
            sub_51508((unsigned __int8)a1, v31);
            usleep(0x2710u);
            *v33 = 0LL;
          }
          v31 += a2;
          ++v33;
        }
        while ( v30 != v32 );
      }
      usleep(0x186A0u);
      v61 = (char *)sub_1E0E0();
      if ( !v61 )
      {
LABEL_50:
        formata = (char *)sub_1E0E0();
        if ( formata )
        {
          for ( i = 0; i != formata; ++i )
          {
            v47 = sprintf(v64, "domain %2d:", i);
            v48 = sub_1E100();
            if ( v48 )
            {
              for ( j = 0; j != v48; ++j )
              {
                v50 = j + (_DWORD)i * sub_1E100();
                v47 += sprintf(&v64[v47], "\t%.2f", *(double *)&s[v50]);
              }
            }
            v51 = (_DWORD *)dword_4FCB48;
            if ( !dword_4FCB48 )
            {
              v51 = sub_536F4("bmminer_adc");
              dword_4FCB48 = (int)v51;
            }
            sub_54CB0(
              (int)v51,
              "log/adc_sample.c",
              16,
              (int)"check_adc_voltage",
              17,
              169,
              20,
              (int)"chain %2d %s",
              a1,
              v64);
          }
        }
        goto LABEL_30;
      }
      v35 = 0;
      while ( 1 )
      {
        v36 = sub_1E100();
        if ( v36 )
          break;
LABEL_49:
        if ( v61 == (char *)++v35 )
          goto LABEL_50;
      }
      v37 = 0;
      while ( 1 )
      {
        while ( 1 )
        {
          v39 = v37 + v35 * sub_1E100();
          if ( !sub_14ED0(v39) )
            break;
LABEL_43:
          if ( v36 == ++v37 )
            goto LABEL_49;
        }
        v40 = v39 * a2;
        memset(v64, 0, sizeof(v64));
        v41 = sub_2C06C(176, v39 * a2, a1);
        if ( (v41 & 4) == 0 )
        {
          v38 = (_DWORD *)dword_4FCB48;
          if ( !dword_4FCB48 )
          {
            v38 = sub_536F4("bmminer_adc");
            dword_4FCB48 = (int)v38;
          }
          sub_54CB0(
            (int)v38,
            "log/adc_sample.c",
            16,
            (int)"check_adc_voltage",
            17,
            141,
            20,
            (int)"chain::%d, asic::%d adc control vm sample not ready %08x.\n",
            a1,
            v39,
            v41);
          goto LABEL_43;
        }
        v42 = sub_2C06C(180, v40, a1);
        v43 = sub_2C06C(184, v40, a1);
        v44 = (double *)&v66[2 * v39];
        v52 = (float)((float)(v42 & 0xFFF) * 0.00048828) * 1.18800008 - 1.18800008;
        v53 = (float)((float)(HIWORD(v42) & 0xFFF) * 0.00048828) * 1.18800008 - 1.18800008;
        v54 = (float)((float)(v43 & 0xFFF) * 0.00048828) * 1.18800008 - 1.18800008;
        v55 = (float)((float)(HIWORD(v43) & 0xFFF) * 0.00048828) * 1.18800008 - 1.18800008;
        v44[3] = v55;
        *v44 = v52;
        v44[1] = v53;
        v44[2] = v54;
        v56 = (v52 + v53 + v54 + v55) * 0.25;
        *(double *)&s[v39] = v56;
        sprintf(
          v64,
          "chain %2d asic %03d adc:\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f\t%.2f",
          a1,
          v39,
          v52,
          v53,
          v54,
          v55,
          v52 + v53 + v54 + v55,
          v56);
        v45 = (_DWORD *)dword_4FCB48;
        if ( !dword_4FCB48 )
        {
          v45 = sub_536F4("bmminer_adc");
          dword_4FCB48 = (int)v45;
        }
        ++v37;
        sub_54CB0((int)v45, "log/adc_sample.c", 16, (int)"check_adc_voltage", 17, 157, 20, (int)"asic adc:%s", v64);
        if ( v36 == v37 )
          goto LABEL_49;
      }
    }
  }
  v63 = (unsigned __int8)a1;
  pthread_mutex_lock(&stru_7F7EC);
  sub_16330(1);
  usleep(0x4E20u);
  sub_51478((unsigned __int8)a1);
  usleep(0x4E20u);
  sub_514A4((unsigned __int8)a1);
  usleep(0x4E20u);
  format = (char *)sub_1E0E0();
  if ( format )
  {
    v5 = 0;
    while ( 1 )
    {
      v6 = sub_1E100();
      if ( v6 )
        break;
LABEL_14:
      if ( format == (char *)++v5 )
        goto LABEL_15;
    }
    v7 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v9 = v7 + v5 * sub_1E100();
        v10 = v9 * sub_1E160();
        if ( !sub_14ED0(v9) )
          break;
LABEL_10:
        if ( v6 == ++v7 )
          goto LABEL_14;
      }
      v11 = sub_2C06C(176, v10, a1);
      if ( (v11 & 4) == 0 )
      {
        v8 = (_DWORD *)dword_4FCB48;
        if ( !dword_4FCB48 )
        {
          v8 = sub_536F4("bmminer_adc");
          dword_4FCB48 = (int)v8;
        }
        sub_54CB0(
          (int)v8,
          "log/adc_sample.c",
          16,
          (int)"get_adc_data_with_addr",
          22,
          45,
          20,
          (int)"chain::%d, asic::%d adc control vm sample not ready %08x.\n",
          a1,
          v9,
          v11);
        goto LABEL_10;
      }
      v12 = sub_2C06C(180, v10, a1);
      v13 = sub_2C06C(184, v10, a1);
      ++v7;
      v14 = (double *)&v66[512] + v9;
      v15 = (double *)&v66[2 * v9];
      v16 = (double)(v12 & 0xFFF) * 1.6 * 0.00048828125 - 1.6;
      v17 = (double)(HIWORD(v12) & 0xFFF) * 1.6 * 0.00048828125 - 1.6;
      v18 = (double)(HIWORD(v13) & 0xFFF) * 1.6 * 0.00048828125 - 1.6;
      *v15 = v16;
      v19 = (double)(v13 & 0xFFF) * 1.6 * 0.00048828125 - 1.6;
      *(v14 - 1280) = v18;
      v15[1] = v17 - v16;
      v15[2] = v19 - v17;
      v15[3] = v18 - v19;
      if ( v6 == v7 )
        goto LABEL_14;
    }
  }
LABEL_15:
  v62 = sub_1E0E0();
  if ( !v62 )
    goto LABEL_29;
  v20 = 0;
  v60 = (char *)a1;
  do
  {
    v21 = (_DWORD *)dword_4FCB48;
    if ( !dword_4FCB48 )
    {
      v21 = sub_536F4("bmminer_adc");
      dword_4FCB48 = (int)v21;
    }
    sub_54CB0((int)v21, "log/adc_sample.c", 16, (int)"dump_adc_voltage", 16, 67, 20, (int)"[C: %d], [D: %d]", v60, v20);
    v22 = sub_1E100();
    if ( v22 )
    {
      v23 = 0;
      do
      {
        memset(s, 0, 0x100u);
        v25 = v23 + v20 * sub_1E100();
        v26 = sub_1E100();
        v27 = sub_5F880(v23, v26 - 1) == 1;
        v28 = (double *)&v66[2 * v25];
        if ( v27 )
        {
          ++v23;
          snprintf(
            (char *)s,
            0x100u,
            "{I} %2d: d0 %.3f, d1 %.3f, d2 %.3f, d3 %.3f, sum = %f\n",
            v25,
            *(_DWORD *)v28,
            *((_DWORD *)v28 + 1),
            *((_DWORD *)v28 + 2),
            *((_DWORD *)v28 + 3),
            *((_DWORD *)v28 + 4),
            *((_DWORD *)v28 + 5),
            *((_DWORD *)v28 + 6),
            *((_DWORD *)v28 + 7),
            LODWORD(s[v25 + 256]),
            HIDWORD(s[v25 + 256]));
          v24 = (_DWORD *)dword_4FCB48;
          if ( !dword_4FCB48 )
          {
LABEL_26:
            v24 = sub_536F4("bmminer_adc");
            dword_4FCB48 = (int)v24;
          }
        }
        else
        {
          ++v23;
          snprintf(
            (char *)s,
            0x100u,
            "{I} %2d: d0 %.3f, d1 %.3f, d2 %.3f, d3 %.3f, sum = %f",
            v25,
            *v28,
            v28[1],
            v28[2],
            v28[3],
            *(double *)&s[v25 + 256]);
          v24 = (_DWORD *)dword_4FCB48;
          if ( !dword_4FCB48 )
            goto LABEL_26;
        }
        sub_54CB0((int)v24, "log/adc_sample.c", 16, (int)"dump_adc_voltage", 16, 81, 20, (int)"%s", (const char *)s);
      }
      while ( v22 != v23 );
    }
    ++v20;
  }
  while ( v62 != v20 );
  a1 = (int)v60;
LABEL_29:
  sub_513FC(v63);
  usleep(0x4E20u);
  sub_16330(0);
  usleep(0x4E20u);
  pthread_mutex_unlock(&stru_7F7EC);
LABEL_30:
  pthread_mutex_lock(&stru_4FCB4C);
  memcpy((char *)&unk_4FCB68 + 0x2000 * a1, v66, 0x2000u);
  pthread_mutex_unlock(&stru_4FCB4C);
  return 0;
}
