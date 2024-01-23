int __fastcall sub_1740C(unsigned int a1, int a2)
{
  int v4; // r9
  int v5; // r6
  int v6; // r7
  size_t v7; // r4
  _BOOL4 v8; // r12
  unsigned int v9; // r3
  int v11; // r2
  bool v12; // zf
  char v13; // r6
  char v14; // r3
  int v15; // r3
  unsigned int v16; // r2
  size_t v17; // r10
  int v18; // r3
  int v19; // r11
  int v20; // r4
  _DWORD *v21; // r12
  int v22; // r6
  int v23; // lr
  int v24; // r2
  _WORD *v25; // r12
  _DWORD *v26; // r12
  int v27; // r2
  int v28; // r1
  int v29; // r3
  bool v30; // cf
  void *v31; // r12
  _DWORD *v32; // r12
  _WORD *v33; // r12
  float v34; // s12
  _DWORD *v35; // r0
  _DWORD *v36; // r12
  bool v37; // zf
  int v38; // r1
  char v39; // r2
  int v40; // r0
  int v41; // r3
  char *v42; // r0
  char *v43; // r8
  int v44; // r1
  char v46; // [sp+14h] [bp-B6Ch]
  int v47; // [sp+14h] [bp-B6Ch]
  int v48; // [sp+18h] [bp-B68h]
  int v49; // [sp+1Ch] [bp-B64h]
  int v50; // [sp+20h] [bp-B60h]
  int v51; // [sp+24h] [bp-B5Ch]
  int v52; // [sp+28h] [bp-B58h]
  int v53; // [sp+2Ch] [bp-B54h]
  int v54; // [sp+30h] [bp-B50h]
  int v55; // [sp+34h] [bp-B4Ch]
  int v56; // [sp+38h] [bp-B48h]
  int v57; // [sp+3Ch] [bp-B44h]
  int v58; // [sp+40h] [bp-B40h]
  int v59; // [sp+44h] [bp-B3Ch]
  int v60; // [sp+48h] [bp-B38h]
  int v61; // [sp+4Ch] [bp-B34h]
  int v62; // [sp+50h] [bp-B30h]
  __int16 s[128]; // [sp+58h] [bp-B28h] BYREF
  _DWORD v64[64]; // [sp+158h] [bp-A28h] BYREF
  int dest[64]; // [sp+258h] [bp-928h] BYREF
  char v66[2040]; // [sp+358h] [bp-828h] BYREF

  memset(s, 0, sizeof(s));
  memset(v64, 0, sizeof(v64));
  v4 = *(_DWORD *)(a2 + 4 * a1);
  v5 = 3;
  while ( 1 )
  {
    v6 = sub_44358(a1, 0, (int)s, 256);
    if ( v6 )
    {
      if ( (unsigned int)globalLogLevel > 3 )
      {
        snprintf(v66, 0x800u, "Read configuration fail for chain %d.\n", a1);
        logMessage(3, v66, 0);
      }
      return v6;
    }
    sub_17244((char *)a1, (int)s, 0x100u);
    memset(dest, 0, sizeof(dest));
    v7 = HIBYTE(s[0]) - 2;
    v8 = (int)((HIBYTE(s[0]) + 5) & 0xFFFFFFF8) > 254;
    if ( (unsigned __int8)v7 > 0xFDu )
      v8 = 1;
    if ( !v8 )
      break;
    if ( (unsigned int)globalLogLevel > 3 )
    {
      strcpy(v66, "EEPROM info error!, -1");
      logMessage(3, v66, 0);
      goto LABEL_20;
    }
LABEL_7:
    usleep(0x7A120u);
    if ( !--v5 )
    {
      v9 = globalLogLevel;
      goto LABEL_9;
    }
  }
  v11 = LOBYTE(s[0]) >> 4;
  v12 = v11 == 1;
  if ( v11 == 1 )
    v12 = (s[0] & 0xF) == 1;
  if ( !v12 )
  {
    if ( (unsigned int)globalLogLevel <= 3 )
      goto LABEL_7;
    strcpy(v66, "EEPROM info error!, -2");
    logMessage(3, v66, 0);
LABEL_20:
    if ( (unsigned int)globalLogLevel > 3 )
    {
      snprintf(v66, 0x800u, "Data decode fail for chain %d.\n", a1);
      logMessage(3, v66, 0);
    }
    goto LABEL_7;
  }
  v46 = (HIBYTE(s[0]) + 5) & 0xF8;
  memcpy(dest, &s[1], (HIBYTE(s[0]) + 5) & 0xFFFFFFF8);
  sub_18E48((char *)dest, v46, 0);
  LOWORD(v64[0]) = s[0];
  v13 = LOBYTE(s[0]) >> 4;
  memcpy((char *)v64 + 2, dest, v7);
  v14 = *(_BYTE *)v4 & 0xF | (16 * (v13 & 0xF));
  *(_BYTE *)v4 = v14;
  *(_BYTE *)v4 = v14 & 0xF0 | v64[0] & 0xF;
  *(_BYTE *)(v4 + 1) = BYTE1(v64[0]);
  v15 = BYTE2(v64[0]);
  v16 = BYTE2(v64[0]) - 1;
  *(_BYTE *)(v4 + 2) = BYTE2(v64[0]);
  if ( v16 <= 1 )
  {
    v56 = 61;
    v57 = 62;
    v54 = 59;
    v55 = 60;
    v17 = 4;
    v52 = 55;
    v53 = 57;
    v19 = 40;
    v50 = 51;
    v51 = 53;
    v20 = 1;
    v48 = 49;
    v49 = 50;
    v62 = 65;
    v58 = 47;
    v59 = 46;
    v47 = 48;
    v60 = 41;
    v61 = 45;
  }
  else
  {
    if ( v15 != 3 )
    {
      if ( v15 == 4 )
      {
        v17 = 9;
        v18 = 81;
        goto LABEL_52;
      }
      if ( (unsigned int)globalLogLevel > 3 )
      {
        strcpy(v66, "This FMT is not supported\n");
        logMessage(3, v66, 0);
        v9 = globalLogLevel;
        goto LABEL_9;
      }
      return -1;
    }
    v17 = 9;
    v18 = 73;
LABEL_52:
    v56 = 66;
    v57 = 67;
    v62 = v18;
    v54 = 64;
    v55 = 65;
    v52 = 60;
    v53 = 62;
    v47 = 53;
    v50 = 56;
    v51 = 58;
    v19 = 45;
    v48 = 54;
    v49 = 55;
    v20 = 1;
    v58 = 52;
    v59 = 51;
    v60 = 46;
    v61 = 50;
  }
  v21 = calloc(0x12u, 1u);
  *(_DWORD *)(v4 + 3) = v21;
  if ( !v21 )
  {
    v20 = 0;
    if ( (unsigned int)globalLogLevel > 3 )
    {
      strcpy(v66, "Decode SN OOM\n");
      logMessage(3, v66, 0);
      v21 = *(_DWORD **)(v4 + 3);
    }
  }
  v22 = *(_DWORD *)((char *)&v64[1] + 3);
  v23 = *(_DWORD *)((char *)&v64[2] + 3);
  v24 = *(_DWORD *)((char *)&v64[3] + 3);
  *v21 = *(_DWORD *)((char *)v64 + 3);
  v21[1] = v22;
  v21[2] = v23;
  v21[3] = v24;
  *((_BYTE *)v21 + 16) = HIBYTE(v64[4]);
  v25 = calloc(3u, 1u);
  *(_DWORD *)(v4 + 7) = v25;
  if ( !v25 )
  {
    v20 = 0;
    if ( (unsigned int)globalLogLevel > 3 )
    {
      strcpy(v66, "Decode Chip Die OOM\n");
      logMessage(3, v66, 0);
      v25 = *(_WORD **)(v4 + 7);
    }
  }
  *v25 = v64[5];
  v26 = calloc(0xEu, 1u);
  *(_DWORD *)(v4 + 11) = v26;
  if ( !v26 )
  {
    v20 = 0;
    if ( (unsigned int)globalLogLevel > 3 )
    {
      strcpy(v66, "Decode Chip Marking OOM\n");
      logMessage(3, v66, 0);
      v26 = *(_DWORD **)(v4 + 11);
    }
  }
  v27 = *(_DWORD *)((char *)&v64[7] + 2);
  v28 = *(_DWORD *)((char *)&v64[6] + 2);
  *v26 = *(_DWORD *)((char *)&v64[5] + 2);
  v26[2] = v27;
  v26[1] = v28;
  *((_BYTE *)v26 + 12) = BYTE2(v64[8]);
  v29 = *(unsigned __int8 *)(v4 + 2) - 1;
  v30 = *(_BYTE *)(v4 + 2) != 1;
  *(_BYTE *)(v4 + 15) = HIBYTE(v64[8]);
  if ( v29 != 1 && v30 )
  {
    v31 = calloc(v17 + 1, 1u);
    *(_DWORD *)(v4 + 16) = v31;
    if ( !v31 )
    {
      v20 = 0;
      if ( (unsigned int)globalLogLevel > 3 )
      {
        strcpy(v66, "Decode Chip FT Program Version OOM\n");
        logMessage(3, v66, 0);
        v31 = *(void **)(v4 + 16);
      }
    }
    memcpy(v31, &v64[9], v17);
  }
  else
  {
    memset(dest, 0, 16);
    v42 = (char *)calloc(v17 + 6, 1u);
    v43 = v42;
    *(_DWORD *)(v4 + 16) = v42;
    if ( !v42 )
    {
      v20 = 0;
      if ( (unsigned int)globalLogLevel > 3 )
      {
        strcpy(v66, "Decode Chip FT Program Version OOM\n");
        logMessage(3, v66, 0);
        v43 = *(char **)(v4 + 16);
      }
    }
    memcpy(dest, &v64[9], v17);
    snprintf(v43, v17 + 6, "F%dV%02dB%dC%d", LOBYTE(dest[0]), BYTE1(dest[0]), BYTE2(dest[0]), HIBYTE(dest[0]));
  }
  *(_BYTE *)(v4 + 20) = *(_BYTE *)(v4 + 20) & 0x80 | *((_BYTE *)v64 + v19) & 0x7F;
  *(_BYTE *)(v4 + 20) = *(_BYTE *)(v4 + 20) & 0x7F | (*((_BYTE *)v64 + v19) >> 7 << 7);
  v32 = calloc(5u, 1u);
  *(_DWORD *)(v4 + 21) = v32;
  if ( !v32 )
  {
    v20 = 0;
    if ( (unsigned int)globalLogLevel > 3 )
    {
      strcpy(v66, "Decode asic sendor addr OOM\n");
      logMessage(3, v66, 0);
      v32 = *(_DWORD **)(v4 + 21);
    }
  }
  *v32 = *(_DWORD *)((char *)v64 + v60);
  *(_BYTE *)(v4 + 25) = *(_BYTE *)(v4 + 25) & 0x80 | *((_BYTE *)v64 + v61) & 0x7F;
  *(_BYTE *)(v4 + 25) = *(_BYTE *)(v4 + 25) & 0x7F | (*((_BYTE *)v64 + v61) >> 7 << 7);
  *(_BYTE *)(v4 + 26) = *((_BYTE *)v64 + v59);
  *(_BYTE *)(v4 + 27) = *((_BYTE *)v64 + v58);
  *(_BYTE *)(v4 + 28) = *((_BYTE *)v64 + v47);
  *(_BYTE *)(v4 + 29) = *((_BYTE *)v64 + v48);
  *(_BYTE *)(v4 + 30) = *((_BYTE *)v64 + v49);
  v33 = calloc(3u, 1u);
  *(_DWORD *)(v4 + 31) = v33;
  if ( !v33 )
  {
    v20 = 0;
    if ( (unsigned int)globalLogLevel > 3 )
    {
      strcpy(v66, "Decode Chip Technology OOM\n");
      logMessage(3, v66, 0);
      v33 = *(_WORD **)(v4 + 31);
    }
  }
  *v33 = *(_WORD *)((char *)v64 + v50);
  *(_WORD *)(v4 + 35) = __rev16(*(unsigned __int16 *)((char *)v64 + v51));
  *(_WORD *)(v4 + 37) = __rev16(*(unsigned __int16 *)((char *)v64 + v52));
  v34 = (double)(unsigned __int16)__rev16(*(unsigned __int16 *)((char *)v64 + v53)) / 100.0;
  *(float *)(v4 + 39) = v34;
  *(_BYTE *)(v4 + 43) = *((_BYTE *)v64 + v54);
  *(_BYTE *)(v4 + 44) = *((_BYTE *)v64 + v55);
  *(_BYTE *)(v4 + 45) = *((_BYTE *)v64 + v56);
  *(_BYTE *)(v4 + 46) = *((_BYTE *)v64 + v57);
  v35 = calloc(9u, 1u);
  v36 = v35;
  *(_DWORD *)(v4 + 47) = v35;
  if ( !v35 )
  {
    v20 = (int)&globalLogLevel;
    if ( (unsigned int)globalLogLevel > 3 )
    {
      strcpy(v66, "Decode miner type OOM\n");
      logMessage(3, v66, 0);
      v36 = *(_DWORD **)(v4 + 47);
    }
    v44 = v64[18];
    *v36 = v64[17];
    v36[1] = v44;
    *(_BYTE *)(v4 + 55) = *((_BYTE *)v64 + v62);
    goto LABEL_48;
  }
  v37 = v20 == 0;
  if ( !v20 )
    v20 = (unsigned __int16)&globalLogLevel;
  v38 = v64[18];
  if ( v37 )
    HIWORD(v20) = (unsigned int)&globalLogLevel >> 16;
  v39 = *((_BYTE *)v64 + v62);
  *v35 = v64[17];
  v35[1] = v38;
  *(_BYTE *)(v4 + 55) = v39;
  if ( !v37 )
  {
    v40 = sub_315EC(v64, 8 * (*(unsigned __int8 *)(v4 + 1) - 1));
    v41 = *(unsigned __int8 *)(v4 + 55);
    if ( v40 != v41 )
    {
      v20 = (int)&globalLogLevel;
      if ( (unsigned int)globalLogLevel <= 3 )
        return -1;
      snprintf(
        v66,
        0x800u,
        "Fixture CRC check fail.fixture_crc = 0x%x, len = 0x%x, crc = 0x%x\n",
        v41,
        *(unsigned __int8 *)(v4 + 1),
        v40);
      logMessage(3, v66, 0);
      goto LABEL_48;
    }
    *(_BYTE *)(a2 + a1 + 16) = 1;
    return v6;
  }
LABEL_48:
  v9 = *(_DWORD *)v20;
LABEL_9:
  if ( v9 <= 3 )
    return -1;
  snprintf(v66, 0x800u, "Data load fail for chain %d.\n", a1);
  logMessage(3, v66, 0);
  return -1;
}
