int sub_1585C()
{
  int v0; // r9
  int v1; // r4
  const char *v2; // r0
  _BOOL4 v3; // r5
  int v4; // r4
  int v5; // r6
  int v6; // r5
  int v7; // r12
  int v8; // r3
  __int64 v9; // r0
  int v10; // r2
  const char *v11; // r3
  int v12; // r12
  int v13; // r2
  int v14; // r8
  int v15; // r0
  int v16; // r7
  int v17; // r6
  int v18; // r5
  int v19; // r4
  int v20; // r8
  int v21; // r2
  int v22; // r5
  int v23; // r4
  const char *v24; // r0
  const char *v25; // r12
  _DWORD *v26; // r0
  int v27; // r5
  int v28; // r6
  int v29; // r7
  int v30; // r4
  int v31; // r8
  char v32; // r0
  int v33; // r5
  char v34; // r0
  const char *v35; // r0
  int v36; // r6
  const char *v38; // r0
  int v39; // r3
  int v40; // r4
  size_t v41; // r0
  int v42; // r4
  size_t v43; // r0
  const char *v44; // r0
  int v45; // r0
  bool v46; // zf
  int v47; // r4
  int v48; // r6
  int v49; // r0
  int v50; // r0
  bool v51; // nf
  int v52; // r3
  int v53; // r12
  int i; // [sp+1Ch] [bp-86Ch]
  int v55; // [sp+20h] [bp-868h]
  int v56; // [sp+20h] [bp-868h]
  int TemperatureSensor; // [sp+2Ch] [bp-85Ch]
  __time_t v58; // [sp+40h] [bp-848h] BYREF
  int v59; // [sp+44h] [bp-844h]
  __time_t v60; // [sp+48h] [bp-840h] BYREF
  int v61; // [sp+4Ch] [bp-83Ch]
  _DWORD v62[4]; // [sp+50h] [bp-838h] BYREF
  char v63[2088]; // [sp+60h] [bp-828h] BYREF

  prctl(15, "temp_mtr", 0, 0, 0);
  if ( (unsigned int)globalLogLevel > 3 )
  {
    strcpy(v63, "temperature_monitor_thread start...");
    logMessage(3, v63, 0);
    if ( dword_7F7E0 )
      goto LABEL_3;
LABEL_66:
    if ( (unsigned int)globalLogLevel > 3 )
    {
      strcpy(v63, "temp monitor thread exit");
      logMessage(3, v63, 0);
    }
  }
  else if ( dword_7F7E0 )
  {
LABEL_3:
    TemperatureSensor = 0;
    while ( 1 )
    {
      for ( i = 0; i != 4; ++i )
      {
        if ( !sub_1E29C(i) )
          continue;
        v0 = 0;
        while ( 2 )
        {
          v1 = sub_14434();
          if ( v1 > sub_1E19C() )
          {
            if ( v0 >= sub_14434() )
              goto LABEL_36;
LABEL_9:
            v2 = (const char *)sub_1E0C0();
            if ( !strcmp(v2, "BHB28601") )
            {
              v3 = 1;
            }
            else
            {
              v38 = (const char *)sub_1E0C0();
              v3 = strcmp(v38, "BHB28501") == 0;
            }
            v4 = v3 + 1;
            v5 = v3;
            v46 = !v3;
            v6 = 4 * v3;
            v55 = 6 * v0;
            if ( !v46 )
            {
LABEL_13:
              if ( !dword_7F7BC )
                goto LABEL_29;
LABEL_14:
              if ( !dword_7F7E8 && sub_14434() > v0 )
              {
                pthread_mutex_lock(&stru_7F7EC);
                sub_302A0(&v58);
                if ( v5 == 1 )
                {
                  TemperatureSensor = readTemperatureSensor(
                                        i,
                                        v0,
                                        *(__int16 *)(*(_DWORD *)(*(_DWORD *)(dword_7F7B8 + 4 * i) + 4) + 6 * v0),
                                        0);
                }
                else if ( v5 == 2 )
                {
                  TemperatureSensor = readTemperatureSensor(
                                        i,
                                        v0,
                                        *(__int16 *)(*(_DWORD *)(*(_DWORD *)(dword_7F7B8 + 4 * i) + 8) + 6 * v0),
                                        1);
                }
                sub_302A0(&v60);
                v7 = v60 - v58;
                v8 = v61 - v59;
                if ( v61 - v59 < 0 )
                {
                  --v7;
                  v8 += 1000000;
                }
                if ( (unsigned int)globalLogLevel > 4 )
                {
                  v9 = 274877907LL * v8;
                  v10 = v8 >> 31;
                  v11 = "pcb";
                  v12 = (SHIDWORD(v9) >> 6) - v10 + 1000 * v7;
                  if ( v5 != 1 )
                    v11 = "chp";
                  snprintf(v63, 0x800u, "%s read %d on chain %d takes %ldms\n", v11, v0, i, v12);
                  logMessage(4, v63, 0);
                }
                pthread_mutex_unlock(&stru_7F7EC);
                goto LABEL_26;
              }
              goto LABEL_29;
            }
            while ( 2 )
            {
              if ( sub_1E19C() <= v0 )
              {
                if ( dword_7F7BC )
                  goto LABEL_14;
LABEL_30:
                ++v4;
                v6 += 4;
                v5 = v4 - 1;
                if ( v4 != 1 )
                  goto LABEL_13;
                continue;
              }
              break;
            }
            sub_302A0(&v58);
            if ( !sub_1E29C(i) )
            {
              if ( (unsigned int)globalLogLevel <= 4 )
                goto LABEL_98;
              snprintf(v63, 0x800u, "%s chain %d not pluged", "read_sensor_on_pic", i);
              TemperatureSensor = 255;
              logMessage(4, v63, 0);
LABEL_99:
              sub_302A0(&v60);
              v52 = v61 - v59 + (v61 - v59 < 0 ? 0xF4000 : 0);
              v53 = v60 - v58;
              if ( v61 - v59 < 0 )
              {
                --v53;
                v52 += 576;
              }
              if ( (unsigned int)globalLogLevel > 4 )
              {
                snprintf(v63, 0x800u, "pic read %d on chain %d takes %ldms\n", v0, i, v52 / 1000 + 1000 * v53);
                logMessage(4, v63, 0);
              }
LABEL_26:
              pthread_mutex_lock(&stru_7F7C0);
              if ( TemperatureSensor == 255 )
              {
                v39 = *(_DWORD *)(*(_DWORD *)(dword_7F7B8 + 4 * i) + v6) + v55;
                ++*(_WORD *)(v39 + 4);
              }
              else
              {
                v13 = dword_7F7B8;
                *(_WORD *)(*(_DWORD *)(*(_DWORD *)(dword_7F7B8 + 4 * i) + v6) + v55 + 2) = TemperatureSensor;
                *(_WORD *)(*(_DWORD *)(*(_DWORD *)(v13 + 4 * i) + v6) + v55 + 4) = 0;
              }
              pthread_mutex_unlock(&stru_7F7C0);
LABEL_29:
              if ( v4 == 3 )
              {
                ++v0;
                continue;
              }
              goto LABEL_30;
            }
            if ( v0 < sub_1E19C() )
            {
              if ( sub_48110((unsigned __int8)i, *(unsigned __int8 *)(dword_7F7DC + v0), v5, v62, 2) == 2 )
              {
                TemperatureSensor = SLOBYTE(v62[0]);
                goto LABEL_99;
              }
              if ( (unsigned int)globalLogLevel > 3 )
              {
                TemperatureSensor = 255;
                snprintf(v63, 0x800u, "fail to read pic temp for chain %d", i);
                logMessage(3, v63, v5);
                goto LABEL_99;
              }
            }
            else if ( (unsigned int)globalLogLevel > 3 )
            {
              TemperatureSensor = 255;
              snprintf(v63, 0x800u, "%s invalid index = %d on chain %d", "read_sensor_on_pic", v0, i);
              logMessage(3, v63, v5);
              goto LABEL_99;
            }
LABEL_98:
            TemperatureSensor = 255;
            goto LABEL_99;
          }
          break;
        }
        if ( v0 < sub_1E19C() )
          goto LABEL_9;
LABEL_36:
        v62[0] = "pic";
        v62[1] = "pcb";
        v62[2] = "chp";
        v62[3] = "max";
        memset(v63, 0, 0x100u);
        if ( !dword_7F804 )
        {
          v42 = sub_14434();
          if ( v42 <= sub_1E19C() )
            v43 = 4 * sub_1E19C() + 1;
          else
            v43 = 4 * sub_14434() + 1;
          dword_7F804 = (int)malloc(v43);
        }
        if ( !dword_7F808 )
        {
          v40 = sub_14434();
          if ( v40 <= sub_1E19C() )
            v41 = 4 * sub_1E19C() + 1;
          else
            v41 = 4 * sub_14434() + 1;
          dword_7F808 = (int)malloc(v41);
        }
        v14 = 0;
        pthread_mutex_lock(&stru_7F7C0);
        do
        {
          if ( v14 )
          {
            if ( !calibrationFactor )
              break;
            v15 = sub_14434();
          }
          else
          {
            v15 = sub_1E19C();
          }
          if ( v15 <= 0 )
          {
            v23 = -1;
            v22 = -1;
          }
          else
          {
            v16 = 0;
            v17 = 4 * v14;
            v56 = v14;
            v18 = 0;
            v19 = 0;
            v20 = 6 * v15;
            do
            {
              v19 += sprintf(
                       (char *)(dword_7F804 + v19),
                       "%03d-",
                       *(__int16 *)(*(_DWORD *)(*(_DWORD *)(dword_7F7B8 + 4 * i) + v17) + v16 + 2));
              v21 = *(_DWORD *)(*(_DWORD *)(dword_7F7B8 + 4 * i) + v17) + v16;
              v16 += 6;
              v18 += sprintf((char *)(dword_7F808 + v18), "%03d-", *(__int16 *)(v21 + 4));
            }
            while ( v20 != v16 );
            v14 = v56;
            v22 = v18 - 1;
            v23 = v19 - 1;
          }
          v24 = (const char *)dword_7F808;
          v25 = (const char *)dword_7F804;
          *(_BYTE *)(dword_7F808 + v22) = 32;
          v25[v23] = 32;
          sprintf(v63, "chain %d %s temp: %s, failure:%s", i, (const char *)v62[v14], v25, v24);
          v26 = (_DWORD *)dword_7F80C;
          if ( !dword_7F80C )
          {
            v26 = sub_536F4("bmminer_temp");
            dword_7F80C = (int)v26;
          }
          ++v14;
          sub_54CB0((int)v26, "temperature/temperature.c", 25, (int)"dump_temp_info", 14, 539, 20, (int)"%s", v63);
        }
        while ( v14 != 3 );
        pthread_mutex_unlock(&stru_7F7C0);
      }
      v27 = 0;
      v28 = 0;
      v29 = sub_15508();
      v30 = 0;
      v31 = sub_155C4();
      do
      {
        if ( sub_1E29C(v30) )
        {
          v28 = (unsigned __int8)(v28 + 1);
          v32 = sub_14434();
          v33 = sub_157F8(v30, (unsigned __int8)(v32 - 1)) + v27;
          v34 = sub_14434();
          v27 = sub_157F8(v30, (unsigned __int8)(v34 - 2)) + v33;
        }
        ++v30;
      }
      while ( v30 != 4 );
      v35 = (const char *)sub_1E0C0();
      if ( !strcmp(v35, "BHB28601") || (v44 = (const char *)sub_1E0C0(), !strcmp(v44, "BHB28501")) )
      {
        if ( !dword_7F7BC )
          goto LABEL_62;
        v36 = 2 * v28;
        if ( v29 <= 80 )
          goto LABEL_79;
LABEL_58:
        sub_20A20(1);
        if ( v27 >= v36 )
          goto LABEL_80;
        sub_20A38(0);
LABEL_60:
        if ( (unsigned int)globalLogLevel > 3 )
          goto LABEL_81;
        goto LABEL_61;
      }
      v36 = 2 * v28;
      if ( v29 > 80 )
        goto LABEL_58;
LABEL_79:
      sub_20A20(0);
      if ( v27 < v36 )
      {
        sub_20A38(0);
        v45 = sub_31D48();
        v46 = v29 == 0;
        if ( !v29 )
          v46 = v45 == 2;
        if ( !v46 )
          goto LABEL_62;
        v47 = 255;
        v48 = 0;
        do
        {
          v49 = v48++;
          v50 = sub_156CC(v49);
          if ( v50 < v47 )
            LOWORD(v47) = v50;
          v47 = (__int16)v47;
        }
        while ( v48 != 4 );
        if ( (_WORD)v47 )
          goto LABEL_62;
        v51 = dword_7F810 - 9 < 0;
        ++dword_7F810;
        if ( v51 ^ __OFSUB__(dword_7F810, 10) | (dword_7F810 == 10) )
          goto LABEL_62;
        goto LABEL_60;
      }
LABEL_80:
      sub_20A38(1);
      if ( (unsigned int)globalLogLevel > 3 )
      {
LABEL_81:
        snprintf(
          v63,
          0x800u,
          "over max temp, pcb temp %d (max %d), chip temp %d(max %d) pcb temp rise %d chip temp rise %d, total_exit_failure %d\n",
          v29,
          80,
          v31,
          95,
          0,
          0,
          v27);
        logMessage(3, v63, 0);
      }
LABEL_61:
      sub_31D58(0xFu, "over max temp");
LABEL_62:
      sub_13DA4(0x190u, 0);
      if ( sub_31D38() && dword_80FB4 != 1 )
        sub_35344();
      usleep(0x2710u);
      if ( !dword_7F7E0 )
        goto LABEL_66;
    }
  }
  return 0;
}
