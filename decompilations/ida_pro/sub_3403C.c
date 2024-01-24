void sub_3403C()
{
  int v0; // r11
  int v1; // r0
  int *v2; // r10
  int v3; // r9
  char *v4; // r11
  int v5; // r0
  pthread_mutex_t *v6; // r8
  int v7; // r3
  int v8; // r7
  int v9; // r5
  int v10; // r4
  unsigned int v11; // r4
  bool v12; // cc
  int *v13; // r4
  int v14; // r6
  int v15; // r11
  int v16; // r0
  int v17; // r0
  int v18; // r8
  int v19; // r6
  int v20; // r0
  char v22; // r8
  int v23; // r11
  int v24; // r10
  int v25; // r7
  int v26; // r3
  int v27; // r5
  unsigned __int16 *v28; // r4
  int v29; // r6
  int v30; // r8
  int v31; // r0
  int v32; // r0
  int v33; // r0
  int v34; // r0
  int v35; // r0
  int v36; // r0
  int v37; // r0
  int v38; // r0
  int v39; // r5
  int v40; // r8
  int v41; // [sp+10h] [bp-880h]
  char *format; // [sp+20h] [bp-870h]
  pthread_mutex_t *v43; // [sp+24h] [bp-86Ch]
  int v44; // [sp+24h] [bp-86Ch]
  int v45; // [sp+2Ch] [bp-864h]
  int *v46; // [sp+2Ch] [bp-864h]
  int v47; // [sp+30h] [bp-860h]
  int v48; // [sp+34h] [bp-85Ch]
  int v49; // [sp+44h] [bp-84Ch]
  _WORD *s; // [sp+48h] [bp-848h]
  __int16 v51; // [sp+54h] [bp-83Ch]
  char v52; // [sp+56h] [bp-83Ah]
  int v53[2]; // [sp+58h] [bp-838h] BYREF
  char v54[2096]; // [sp+60h] [bp-830h] BYREF

  v0 = 0;
  v48 = 0;
  v1 = configurePulseAndDelays();
  v51 = v1;
  v52 = BYTE2(v1);
  sub_1629C();
  do
  {
    if ( !sub_1E29C(v0) )
      goto LABEL_3;
    v2 = dword_5945B8;
    v3 = v0;
    s = &word_59CD98[0x80000 * v0];
    v49 = 0;
    sub_1F0E0(v0, 1, 0, (unsigned __int8)byte_482A70);
    while ( 1 )
    {
      byte_8110C = 1;
      sub_2BDD0();
      memset(s, 0, 0x100000u);
      v47 = sub_1E0F0();
      if ( v47 > 0 )
      {
        v4 = v54;
        v45 = 0;
        do
        {
          v5 = sub_1E160();
          v6 = &stru_810DC;
          sub_50DA8((unsigned __int8)v3, v45 * v5);
          sub_302A0(v53);
          do
          {
            pthread_mutex_lock(v6);
            v7 = v2[2];
            v8 = v7;
            if ( v7 > 0 )
            {
              v9 = 0;
              format = v4;
              v43 = v6;
              while ( 1 )
              {
                v10 = v2[1];
                ++v9;
                v2[2] = v7 - 1;
                v11 = v10 + 1;
                v12 = v11 > 0x1FE;
                if ( v11 <= 0x1FE )
                  v2[1] = v11;
                v13 = &v2[2 * v11];
                if ( v12 )
                  v2[1] = 0;
                if ( *((unsigned __int8 *)v13 + 11) == v3 && *((_BYTE *)v13 + 10) == 64 )
                {
                  v14 = *((unsigned __int8 *)v13 + 9);
                  v15 = v13[1];
                  v16 = sub_1E160();
                  v17 = sub_5FAF8(v14, v16);
                  v18 = *((unsigned __int8 *)v13 + 9);
                  v19 = *((_BYTE *)v13 + 11) & 3;
                  word_59CD98[0x80000 * (v3 & 3) + 1 + 2048 * v17 + 2 * (*((_WORD *)v13 + 3) & 0x3FF)] = v15;
                  v20 = sub_1E160();
                  word_59CD98[2048 * (sub_5FAF8(v18, v20) + (v19 << 8)) + 2 * (*((_WORD *)v13 + 3) & 0x3FF)] = 1;
                }
                if ( v8 == v9 )
                  break;
                v7 = v2[2];
              }
              v4 = format;
              v6 = v43;
            }
            pthread_mutex_unlock(v6);
            usleep(0x3E8u);
            sub_302A0((__time_t *)v4);
          }
          while ( (int)sub_30578(v4, v53) <= 99 );
        }
        while ( v47 != ++v45 );
      }
      v44 = sub_1E0F0();
      if ( v44 <= 0 )
        break;
      v22 = 0;
      v46 = v2;
      v23 = 0;
      v24 = 0;
      do
      {
        v25 = sub_1E120();
        if ( v25 > 0 )
        {
          v26 = 0;
          v27 = 0;
          v28 = &word_59CD98[2048 * (v23 + v48)];
          do
          {
            v29 = v28[1];
            if ( !v28[1] )
            {
              v30 = *v28;
              if ( *v28 )
              {
                if ( (unsigned int)globalLogLevel > 3 )
                {
                  snprintf(v54, 0x800u, "core %8d data in asic %d is zero", v27, v23);
                  logMessage(3, v54, v29);
                }
              }
              else if ( (unsigned int)globalLogLevel > 3 )
              {
                snprintf(v54, 0x800u, "core %8d in asic %d not returned", v27, v23);
                logMessage(3, v54, v30);
              }
              v26 = 1;
              ++v24;
              v22 = 1;
            }
            ++v27;
            v28 += 2;
          }
          while ( v25 != v27 );
          if ( v26 )
          {
            if ( (unsigned int)globalLogLevel > 3 )
            {
              snprintf(v54, 0x800u, "reopen asic %d", v23);
              logMessage(3, v54, 0);
            }
            v31 = sub_1E160();
            sub_50CC4((unsigned __int8)v3, v23 * v31, 1);
            usleep(0x2710u);
            v32 = sub_1E160();
            sub_50CC4((unsigned __int8)v3, v23 * v32, 0);
            usleep(0x2710u);
            v33 = sub_1E160();
            sub_515D0((unsigned __int8)v3, v23 * v33, v51, 0);
            sub_304D4();
            v34 = sub_1E160();
            sub_51668((unsigned __int8)v3, v23 * v34, SHIBYTE(v51), v52, 0);
            v35 = sub_1E160();
            sub_50DF8((unsigned __int8)v3, v23 * v35);
            usleep(0x2710u);
            if ( (unsigned int)globalLogLevel > 3 )
            {
              snprintf(v54, 0x800u, "reset clock asic %d", v23);
              logMessage(3, v54, 0);
            }
            v36 = sub_1E160();
            sub_517F8((unsigned __int8)v3, v23 * v36, 0);
            v37 = sub_1E160();
            sub_51794((unsigned __int8)v3, v23 * v37);
            usleep(0x186A0u);
            v38 = sub_1E160();
            sub_517F8((unsigned __int8)v3, v23 * v38, 1);
          }
        }
        ++v23;
      }
      while ( v44 != v23 );
      v39 = v24;
      v2 = v46;
      if ( (unsigned int)globalLogLevel > 3 )
        goto LABEL_55;
LABEL_44:
      if ( v39 <= 155 )
      {
        v0 = v3;
        goto LABEL_51;
      }
      usleep((__useconds_t)&unk_F4240);
      if ( v49 <= 1 )
        v40 = v22 & 1;
      else
        v40 = 0;
      if ( !v40 )
      {
        v0 = v3;
        goto LABEL_3;
      }
    }
    if ( (unsigned int)globalLogLevel > 3 )
    {
      v39 = 0;
      v22 = 0;
LABEL_55:
      v41 = v49++;
      snprintf(
        v54,
        0x800u,
        "chain %d, bad core num %8d, rate = %.2f ========================round %d",
        v3,
        v39,
        (float)((float)v39 / 12168.0),
        v41);
      logMessage(3, v54, 0);
      goto LABEL_44;
    }
    v0 = v3;
    v39 = 0;
LABEL_51:
    if ( (unsigned int)globalLogLevel > 3 )
    {
      snprintf(v54, 0x800u, "bad count is acceptable = %d", v39);
      logMessage(3, v54, 0);
    }
    usleep((__useconds_t)&unk_F4240);
LABEL_3:
    ++v0;
    v48 += 256;
  }
  while ( v0 != 4 );
  byte_8110C = 0;
  sub_162B0();
}
