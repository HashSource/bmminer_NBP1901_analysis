int __fastcall sub_32F40(unsigned __int8 *a1)
{
  int v3; // r8
  size_t v4; // r8
  unsigned __int8 *v5; // r0
  unsigned __int8 *v6; // r6
  int v7; // r2
  int v8; // r1
  int v9; // r3
  int v10; // r2
  int v11; // r3
  unsigned __int8 v12; // r2
  int v13; // r1
  int v14; // r0
  int v15; // r3
  int v16; // r0
  int v17; // r3
  int v18; // r0
  int v19; // lr
  __int64 v20; // r2
  int v21; // r0
  int v22; // r0
  int v23; // r0
  int v24[16]; // [sp+10h] [bp-878h] BYREF
  __int64 v25; // [sp+50h] [bp-838h]
  int v26; // [sp+58h] [bp-830h]
  int v27; // [sp+5Ch] [bp-82Ch]
  char s[2088]; // [sp+60h] [bp-828h] BYREF

  if ( *a1 != 82 )
  {
    if ( !logEnabled || !loggingDebug && !loggingVerbose && loggingThreshold <= 6 )
      return -1;
    snprintf(s, 0x800u, "%s: SEND_JOB_TYPE is wrong : 0x%x\n", "dhash_chip_send_job", *a1);
    logMessage(7, s, 0);
    return -1;
  }
  v3 = *((_DWORD *)a1 + 1);
  if ( logEnabled && (loggingDebug || loggingVerbose || loggingThreshold > 6) )
  {
    snprintf(s, 0x800u, "%s: len = 0x%x\n", "dhash_chip_send_job", *((_DWORD *)a1 + 1));
    logMessage(7, s, 0);
  }
  v4 = v3 + 8;
  v5 = (unsigned __int8 *)calloc(v4, 1u);
  v6 = v5;
  if ( !v5 )
  {
    if ( !logEnabled || !loggingDebug && !loggingVerbose && loggingThreshold <= 6 )
      return -2;
    snprintf(s, 0x800u, "%s: malloc buffer failed.\n", "dhash_chip_send_job");
    logMessage(7, s, 0);
    return -2;
  }
  memcpy(v5, a1, v4);
  if ( !byte_482A88 )
  {
    if ( (unsigned int)globalLogLevel > 3 )
    {
      strcpy(s, "only support asic boost");
      logMessage(3, s, (unsigned __int8)byte_482A88);
    }
    goto LABEL_44;
  }
  v7 = v6[80];
  v8 = dword_7EDD8;
  if ( v6[80] )
  {
    v10 = *((_DWORD *)v6 + 22);
    optMultiVersion = *((_DWORD *)v6 + 21);
    v9 = optMultiVersion;
    dword_80F98 = v10;
    if ( optMultiVersion == dword_7EDD8 )
      goto LABEL_20;
  }
  else
  {
    v9 = 1;
    optMultiVersion = 1;
    dword_80F98 = v7;
    if ( dword_7EDD8 == 1 )
      goto LABEL_44;
  }
  if ( (unsigned int)globalLogLevel > 3 )
  {
    snprintf(s, 0x800u, "Version num %d\n", v9);
    logMessage(3, s, 0);
  }
  v8 = optMultiVersion;
  dword_7EDD8 = optMultiVersion;
LABEL_20:
  if ( ((v8 - 4) & 0xFFFFFFFB) != 0 )
  {
LABEL_44:
    free(v6);
    return 0;
  }
  v11 = dword_80F98;
  if ( dword_7EDDC != dword_80F98 )
  {
    if ( (unsigned int)globalLogLevel > 3 )
    {
      snprintf(s, 0x800u, "Mask num 0x%x\n", dword_80F98);
      logMessage(3, s, 0);
      v11 = dword_80F98;
      v8 = optMultiVersion;
    }
    dword_7EDDC = v11;
    sub_321B8(dword_482A6C, v8, 90);
  }
  v12 = v6[9];
  if ( (v12 & 2) != 0 )
  {
    sub_44E1C(v6[10]);
    v12 = v6[9];
  }
  v13 = *((unsigned __int16 *)v6 + 30);
  v26 = dword_99EDDC;
  v14 = *((_DWORD *)v6 + 3);
  v24[4] = (int)&a1[v13 + 96];
  v15 = *((unsigned __int16 *)v6 + 33);
  v24[8] = v14;
  v16 = *((_DWORD *)v6 + 14);
  v24[5] = v15;
  v17 = *((unsigned __int16 *)v6 + 32);
  v24[7] = v16;
  v18 = *((unsigned __int16 *)v6 + 31);
  v27 = v12 & 1;
  v24[10] = dword_80F98;
  v24[14] = v17;
  v19 = *((_DWORD *)v6 + 4);
  v24[11] = (int)(v6 + 20);
  v24[13] = v18;
  v20 = *((_QWORD *)v6 + 9);
  v21 = *((_DWORD *)v6 + 13);
  v24[1] = optMultiVersion;
  v24[3] = v13;
  v24[2] = (int)(a1 + 96);
  v24[9] = v19;
  v25 = v20;
  v24[12] = 32;
  v24[6] = v21;
  v24[0] = 0;
  if ( !byte_482A89 )
  {
    v22 = sub_452B0();
    sub_452D0(v22 | 0x10000);
    v23 = sub_4476C();
    sub_44794(v23 | 0x80);
    byte_482A89 = 1;
  }
  if ( (unsigned int)globalLogLevel > 4 )
  {
    snprintf(s, 0x800u, "start to send job, mid_auto_gen = %d", v24[0]);
    logMessage(4, s, 0);
  }
  sub_45334((int)v24);
  free(v6);
  if ( logEnabled && (loggingDebug || loggingVerbose || loggingThreshold > 6) )
  {
    snprintf(s, 0x800u, "--- %s end\n", "dhash_chip_send_job");
    logMessage(7, s, 0);
  }
  sub_302A0(dword_482A74);
  sub_304D4();
  return 0;
}
