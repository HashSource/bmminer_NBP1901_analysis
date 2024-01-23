int __fastcall sub_34828(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int v9; // r0
  int v10; // r5
  int v11; // r8
  int v12; // r0
  unsigned int v13; // r7
  int v14; // r0
  unsigned int v15; // r3
  int v16; // r3
  int v17; // r0
  unsigned __int8 v18; // r0
  int v19; // r5
  int v20; // r0
  int v21; // r10
  unsigned int v22; // r6
  _QWORD *j; // r11
  int v24; // r7
  int v25; // r0
  int v26; // r1
  int v27; // r1
  int v28; // r6
  const char *v29; // r0
  float v30; // s15
  int v31; // r3
  int v32; // r2
  __int64 v33; // r0
  int i; // r5
  int v35; // r0
  unsigned int v36; // r6
  int v37; // r0
  int v38; // r0
  int v39; // r0
  int v40; // r3
  int v41; // r0
  int v42; // r6
  int v43; // r8
  const char *v44; // r0
  const char *v45; // r0
  const char *v46; // r0
  float v47; // s15
  int v48; // r2
  unsigned int v49; // r6
  int v50; // r2
  int v51; // r7
  const char *v52; // r0
  unsigned int v53; // [sp+14h] [bp-85Ch] BYREF
  int v54; // [sp+18h] [bp-858h]
  int v55; // [sp+1Ch] [bp-854h]
  int v56; // [sp+20h] [bp-850h]
  int v57; // [sp+24h] [bp-84Ch]
  int v58; // [sp+28h] [bp-848h]
  int v59; // [sp+2Ch] [bp-844h]
  int v60; // [sp+30h] [bp-840h]
  int v61; // [sp+34h] [bp-83Ch]
  char s[2088]; // [sp+38h] [bp-838h] BYREF
  int v63; // [sp+860h] [bp-10h]
  int v64; // [sp+864h] [bp-Ch]
  int v65; // [sp+868h] [bp-8h]
  int v66; // [sp+86Ch] [bp-4h]

  v63 = a1;
  v64 = a2;
  v65 = a3;
  v66 = a4;
  v54 = a1;
  v55 = a2;
  v56 = a3;
  v57 = a4;
  v58 = a5;
  v59 = a6;
  v60 = a7;
  v61 = a8;
  *(_DWORD *)&byte_99EDB8 = a1;
  *(_DWORD *)&byte_99EDBC = a2;
  unk_99EDC0 = a3;
  *(_DWORD *)&word_99EDC4 = a4;
  unk_99EDC8 = a5;
  unk_99EDCC = a6;
  unk_99EDD0 = a7;
  unk_99EDD4 = a8;
  if ( (unsigned __int8)a1 != 81 )
  {
    if ( (unsigned int)globalLogLevel <= 4 )
      return 0;
    snprintf(s, 0x800u, "config_parameter.token_type != 0x%x, it is 0x%x\n", 81, (unsigned __int8)v54);
LABEL_5:
    logMessage(4, s, 0);
    return 0;
  }
  v9 = sub_31590((int)&byte_99EDB8, 30);
  if ( v9 != (unsigned __int16)word_99EDD6 )
  {
    if ( (unsigned int)globalLogLevel <= 4 )
      return 0;
    snprintf(s, 0x800u, "config_parameter.crc = 0x%x, but we calculate it as 0x%x\n", (unsigned __int16)word_99EDD6, v9);
    goto LABEL_5;
  }
  if ( (unsigned int)globalLogLevel > 3 )
  {
    snprintf(
      s,
      0x800u,
      "fan_eft : %d  fan_pwm : %d\n",
      ((unsigned __int8)byte_99EDBC >> 1) & 1,
      (unsigned __int8)byte_99EDC2);
    logMessage(3, s, 0);
  }
  v10 = dword_7EDC8;
  if ( !dword_7EDC8 )
  {
    v11 = (unsigned __int8)sub_362A0(161);
    do
    {
      v12 = v10;
      v13 = (unsigned __int8)v10++;
      if ( sub_1E29C(v12) )
        sub_4FA0C(v13);
    }
    while ( v10 != 4 );
    if ( v11 )
      return 0;
  }
  if ( (unsigned __int8)sub_27A58() )
    return 0;
  if ( byte_482A71 && (byte_99EDBC & 0x10) != 0 )
  {
    dword_482A8C = (unsigned __int16)word_99EDC6;
    dword_482A8C = sub_31BAC();
LABEL_22:
    if ( (unsigned int)globalLogLevel > 3 )
    {
      snprintf(s, 0x800u, "fixed working voltage = %d\n", dword_482A8C);
      logMessage(3, s, 0);
    }
    goto LABEL_24;
  }
  v14 = sub_31BAC();
  if ( v14 > 0 )
  {
    dword_482A8C = v14;
    goto LABEL_22;
  }
  if ( (_BYTE)v14 )
    return 0;
LABEL_24:
  if ( (unsigned __int8)InitializeMinerHardware() )
    return 0;
  if ( byte_482A71 && (byte_99EDBC & 8) != 0 )
  {
    v42 = 0;
    v43 = 0;
    dword_482A6C = (unsigned __int16)word_99EDC4;
    do
    {
      if ( sub_1E29C(v43) && !setOptimalFrequency(v43, (unsigned __int8)dword_80FB4, (int *)&v53) )
      {
        if ( v42 )
        {
          if ( v42 >= v53 )
            v42 = v53;
        }
        else
        {
          v42 = v53;
        }
      }
      ++v43;
    }
    while ( v43 != 4 );
    v15 = globalLogLevel;
    if ( (unsigned int)globalLogLevel > 3 )
    {
      snprintf(s, 0x800u, "min freq in eeprom = %d\n", v42);
      logMessage(3, s, 0);
      v15 = globalLogLevel;
    }
    if ( v42 && v42 > 0 )
    {
      dword_482A6C = v42;
    }
    else
    {
      if ( v15 > 3 )
      {
        strcpy(s, "failed to load freq in eeprom, using default");
        logMessage(3, s, 0);
      }
      v15 = globalLogLevel;
      dword_482A6C = 200;
    }
  }
  else
  {
    v15 = globalLogLevel;
    dword_482A6C = 200;
  }
  if ( v15 > 3 )
  {
    snprintf(s, 0x800u, "fixed frequency is %d\n", dword_482A6C);
    logMessage(3, s, 0);
  }
  v16 = dword_80FB4;
  if ( dword_80FB4 == 3 )
  {
    v28 = dword_482A8C;
    v29 = (const char *)sub_1E0C0();
    if ( !strcmp(v29, "NBS1902")
      || (v44 = (const char *)sub_1E0C0(), !strcmp(v44, "NBS1902L"))
      || (v45 = (const char *)sub_1E0C0(), !strcmp(v45, "NBT1903")) )
    {
      v30 = (float)dword_482A8C * 0.91;
      if ( v30 < 1200.0 )
        v31 = 1200;
      else
        v31 = (int)v30;
      v32 = (v28 - v31) >> 31;
      v33 = 1717986919LL * (v28 - v31);
      dword_482A8C = v31;
      v16 = dword_80FB4;
      dword_482A6C = (unsigned int)((double)(unsigned int)dword_482A6C - (double)((SHIDWORD(v33) >> 2) - v32) * 12.5);
    }
    else
    {
      v46 = (const char *)sub_1E0C0();
      if ( !strcmp(v46, "NBP1901") || (v52 = (const char *)sub_1E0C0(), !strcmp(v52, "NBP1901L")) )
      {
        v47 = (float)dword_482A8C * 0.91;
        if ( v47 >= 1200.0 )
          v48 = (int)v47;
        else
          v48 = 1200;
        dword_482A8C = v48;
        v16 = dword_80FB4;
        dword_482A6C -= 10 * ((v28 - v48) / 10);
      }
      else
      {
        v16 = dword_80FB4;
      }
    }
  }
  if ( v16 == 1 || dword_482A8C <= 0 )
  {
    sub_194DC();
    sub_13FB0(0);
    sub_304D4();
  }
  else
  {
    v20 = sub_1E160();
    if ( (unsigned __int8)calibrateTemperatureSensors(v20) )
    {
      sub_20A38(1);
      sub_31D58(0xEu, "Can't get temperature sensor type!");
    }
    else
    {
      sub_20A38(0);
    }
  }
  v17 = sub_1572C();
  dword_99EDD8 = v17;
  if ( (unsigned int)globalLogLevel > 3 )
  {
    snprintf(s, 0x800u, "Bring up temperature is %d\n", v17);
    logMessage(3, s, 0);
    if ( !byte_80FB0 )
      goto LABEL_36;
    if ( (unsigned int)globalLogLevel > 3 )
    {
      strcpy(s, "press any key to start rising frequency...");
      logMessage(3, s, 0);
    }
  }
  else if ( !byte_80FB0 )
  {
    goto LABEL_36;
  }
  IO_getc((_IO_FILE *)stdin);
LABEL_36:
  pthread_mutex_lock(&stru_7F7EC);
  sub_28138(12000000);
  pthread_mutex_unlock(&stru_7F7EC);
  if ( byte_7EB79 )
  {
    if ( dword_482A8C > 0 && sub_19AB4() != dword_482A8C )
    {
      v39 = sub_1572C();
      if ( v39 <= 19 )
        v40 = byte_7EB78 & 1;
      else
        v40 = 0;
      if ( v40 )
      {
        v49 = 100;
        v50 = 100 * (20 - v39);
        if ( v50 < 4000 )
          v49 = v50 / 0x28u;
        v51 = v49 + dword_482A8C;
        if ( v51 > sub_19AC4() )
          v41 = sub_19AC4();
        else
          v41 = v49 + dword_482A8C;
      }
      else
      {
        v41 = dword_482A8C;
      }
      sub_195A8(v41);
      sub_304D4();
    }
  }
  else
  {
    sub_3403C();
  }
  sub_304D4();
  if ( sub_1E100() == 2 )
  {
    for ( i = 0; i != 4; ++i )
    {
      v35 = i;
      v36 = (unsigned __int8)i;
      if ( sub_1E29C(v35) )
      {
        v37 = sub_1E160();
        sub_50A80(v36, 19 * v37, 0);
        v38 = sub_1E160();
        sub_50A80(v36, 55 * v38, 0);
      }
    }
  }
  sub_31D58(1u, "soc init done!");
  v18 = sub_27C88();
  v19 = v18;
  if ( v18 )
    return 0;
  do
  {
    if ( sub_1E29C(v19) )
    {
      v21 = 0;
      v22 = 0;
      for ( j = &qword_99CD98[256 * v19]; ; ++j )
      {
        v24 = v22 + v21;
        if ( v22 >= sub_1E67C(v19) )
          break;
        v25 = sub_1E100();
        sub_5FADC(v22, v25);
        if ( !v26 )
        {
          ++v21;
          v27 = v24;
          v24 = v22 + v21;
          sub_1E820(v19, v27, 32);
        }
        ++v22;
        sub_1E820(v19, v24, 111);
        *j = 0LL;
      }
      sub_1E820(v19, v22 + v21, 111);
    }
    ++v19;
  }
  while ( v19 != 4 );
  if ( (unsigned __int8)sub_27B70() )
    return 0;
  if ( byte_80FA4 )
    sub_27DA0();
  sub_2BDC4();
  sub_3208C();
  sub_304D4();
  if ( (unsigned int)globalLogLevel > 3 )
  {
    strcpy(s, "Init done!\n");
    logMessage(3, s, 0);
  }
  return 1;
}
