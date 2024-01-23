int __fastcall sub_146C8(int a1)
{
  int v2; // r7
  int v3; // r4
  unsigned int v4; // r5
  int v5; // r6
  unsigned int v7; // r5
  unsigned int v8; // r3
  int v9; // r6
  int v10; // r4
  char TemperatureSensor; // r4
  char v12; // r0
  int v13; // [sp+Ch] [bp-84Ch]
  int v14; // [sp+10h] [bp-848h]
  int v15; // [sp+14h] [bp-844h]
  const char *v16; // [sp+24h] [bp-834h]
  unsigned __int8 v17; // [sp+2Eh] [bp-82Ah] BYREF
  unsigned __int8 v18; // [sp+2Fh] [bp-829h] BYREF
  char s[2088]; // [sp+30h] [bp-828h] BYREF

  v2 = 0;
  v14 = 4 * a1;
  v16 = 0;
LABEL_2:
  if ( sub_14434() <= v2 )
  {
    v8 = globalLogLevel;
    goto LABEL_29;
  }
  v15 = 4 * v2;
  v3 = 4;
  v4 = (unsigned __int8)(*(_DWORD *)(dword_7F7B4 + 4 * v2) * calibrationFactor);
  sub_50874((unsigned __int8)a1, v4, 0);
  usleep(0x2710u);
  while ( 1 )
  {
    s[0] = 0;
    sub_142BC(a1, v4, 254, 0, (unsigned __int8 *)s);
    if ( s[0] == 26 )
      break;
    if ( !--v3 )
    {
      v5 = 4;
      do
      {
        s[0] = 0;
        sub_142BC(a1, v4, 254, 0, (unsigned __int8 *)s);
        if ( s[0] == 85 )
        {
          v7 = 1;
          v16 = "TMP451";
          goto LABEL_13;
        }
        --v5;
      }
      while ( v5 );
      if ( (unsigned int)globalLogLevel > 3 )
      {
        snprintf(s, 0x800u, "sensor %d @ chain %d manufacture id unknown", *(_DWORD *)(dword_7F7B4 + 4 * v2), a1);
        logMessage(3, s, 0);
      }
      return -1;
    }
  }
  v7 = 0;
  v16 = "NCT218";
LABEL_13:
  if ( (unsigned int)globalLogLevel > 3 )
  {
    snprintf(s, 0x800u, "sensor %d @ chain %d is %s", *(_DWORD *)(dword_7F7B4 + 4 * v2), a1, v16);
    logMessage(3, s, 0);
  }
  v17 = 4;
  if ( calibrationFactor )
  {
    if ( !sub_1E170() )
    {
      if ( (unsigned int)globalLogLevel <= 3 )
        return 0;
      snprintf(s, 0x800u, "%s chain %d ,index %d not connected", "set_ext_mode", a1, v2);
      logMessage(3, s, 0);
      goto LABEL_22;
    }
    if ( !sub_142BC(
            a1,
            (unsigned __int8)(*(_DWORD *)(dword_7F7B4 + 4 * v2) * calibrationFactor),
            (unsigned __int8)aReadSensorOnAs[16 * v7 + 31],
            1,
            &v17) )
    {
      if ( (unsigned int)globalLogLevel <= 3 )
        return 0;
      snprintf(s, 0x800u, "set ext mode failed for senser %d @ chain %d", *(_DWORD *)(dword_7F7B4 + 4 * v2), a1);
      logMessage(3, s, 0);
      goto LABEL_22;
    }
    v9 = 6 * v2;
    LOBYTE(v13) = 11;
    while ( 1 )
    {
      TemperatureSensor = readTemperatureSensor(a1, v2, v7, 0);
      *(_WORD *)(*(_DWORD *)(*(_DWORD *)(dword_7F7B8 + v14) + 4) + v9 + 2) = TemperatureSensor;
      v12 = readTemperatureSensor(a1, v2, v7, 1);
      v10 = (char)(TemperatureSensor - v12);
      *(_WORD *)(*(_DWORD *)(*(_DWORD *)(dword_7F7B8 + v14) + 8) + v9 + 2) = v12;
      if ( (unsigned __int8)(v10 + 2) <= 4u )
      {
        if ( (unsigned int)globalLogLevel <= 4 )
        {
LABEL_46:
          ++v2;
          goto LABEL_2;
        }
        ++v2;
        snprintf(
          s,
          0x800u,
          "sensor %d @ chain %d chip_temp_offset less than 2, no need to set offset",
          *(_DWORD *)(dword_7F7B4 + v15),
          a1);
        logMessage(4, s, 0);
        goto LABEL_2;
      }
      v18 = v10;
      if ( calibrationFactor )
      {
        if ( sub_1E170() )
        {
          if ( sub_142BC(
                 a1,
                 (unsigned __int8)(*(_DWORD *)(dword_7F7B4 + 4 * v2) * calibrationFactor),
                 (unsigned __int8)aReadSensorOnAs[16 * v7 + 32],
                 1,
                 &v18) )
          {
            if ( (unsigned int)globalLogLevel > 3 )
            {
              snprintf(s, 0x800u, "sensor %d @ chain %d, offset = %d", *(_DWORD *)(dword_7F7B4 + 4 * v2), a1, (char)v10);
LABEL_43:
              logMessage(3, s, 0);
              if ( (v10 & 0x80u) != 0 )
                v10 = -(char)v10;
              if ( v10 <= 2 )
                goto LABEL_46;
              goto LABEL_37;
            }
          }
          else if ( (unsigned int)globalLogLevel > 3 )
          {
            snprintf(s, 0x800u, "set offset failed for senser %d @ chain %d", *(_DWORD *)(dword_7F7B4 + 4 * v2), a1);
            logMessage(3, s, 0);
          }
        }
        else if ( (unsigned int)globalLogLevel > 3 )
        {
          snprintf(s, 0x800u, "%s chain %d ,index %d not connected", "set_sensor_offset", a1, v2);
          goto LABEL_43;
        }
      }
      else if ( (unsigned int)globalLogLevel > 3 )
      {
        strcpy(s, "can not set ext mode before calibration");
        logMessage(3, s, 0);
      }
      if ( (v10 & 0x80u) != 0 )
        v10 = -(char)v10;
      if ( v10 <= 2 )
        goto LABEL_46;
LABEL_37:
      v13 = (unsigned __int8)(v13 - 1);
      if ( !v13 )
        goto LABEL_46;
    }
  }
  if ( (unsigned int)globalLogLevel <= 3 )
    return 0;
  strcpy(s, "can not set ext mode before calibration");
  logMessage(3, s, 0);
LABEL_22:
  if ( (unsigned int)globalLogLevel <= 3 )
    return 0;
  snprintf(s, 0x800u, "sensor %d @ chain %d fail to set to ext mode", *(_DWORD *)(dword_7F7B4 + 4 * v2), a1);
  logMessage(3, s, 0);
  v8 = globalLogLevel;
LABEL_29:
  if ( v8 > 3 )
  {
    snprintf(s, 0x800u, "chain %d temp sensor %s\n", a1, v16);
    logMessage(3, s, 0);
  }
  return 0;
}
