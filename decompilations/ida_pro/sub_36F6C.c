int __fastcall sub_36F6C(int a1, int *a2)
{
  int v3; // r0
  unsigned int v4; // r3
  int v5; // r1
  int v6; // r10
  int v7; // r6
  char *v8; // r8
  int v9; // r0
  int v10; // r4
  int v11; // r4
  int v12; // r0
  char v13; // r10
  int i; // r4
  int v15; // r4
  signed int v16; // r5
  int j; // r8
  __useconds_t v18; // r5
  int v19; // r6
  int k; // r4
  char *v21; // r7
  int v22; // r4
  int v23; // r9
  char *v24; // r11
  int m; // r4
  char *v27; // r4
  int v28; // r7
  char *v29; // r6
  int n; // r5
  int v31; // t1
  char v32; // r0
  char *v33; // r5
  char *v34; // r12
  int v35[34]; // [sp+0h] [bp-8C8h] BYREF
  unsigned int *v36; // [sp+88h] [bp-840h]
  char *s; // [sp+8Ch] [bp-83Ch]
  int v38; // [sp+90h] [bp-838h]
  int v39; // [sp+94h] [bp-834h]
  __int16 v40; // [sp+9Ch] [bp-82Ch]
  char v41; // [sp+9Eh] [bp-82Ah]
  char v42[16]; // [sp+A0h] [bp-828h] BYREF
  char src[132]; // [sp+B0h] [bp-818h] BYREF

  v3 = configurePulseAndDelays();
  v4 = globalLogLevel;
  v5 = *a2;
  v6 = BYTE2(v3);
  v40 = v3;
  v36 = (unsigned int *)BYTE1(v3);
  v38 = v5;
  v41 = BYTE2(v3);
  s = v42;
  if ( (unsigned int)globalLogLevel > 4 )
  {
    snprintf(v42, 0x800u, "[DEBUG] Send work, max_freq = %d\n", v38);
    logMessage(4, v42, 0);
    v4 = globalLogLevel;
  }
  v7 = 3;
  v39 = v6;
  v8 = s;
  if ( v4 > 4 )
    goto LABEL_15;
  while ( 1 )
  {
    sub_40390(24, 0);
    v9 = sub_4476C();
    v10 = 0;
    sub_44794(v9 & 0xFFFF70FF | 0x8400);
    do
    {
      if ( sub_1E29C(v10) )
        sub_50288((unsigned __int8)v10, 1, 0);
      ++v10;
    }
    while ( v10 != 4 );
    if ( (unsigned int)globalLogLevel > 4 )
    {
      strcpy(v8, "[DEBUG] Send null work.\n");
      logMessage(4, v8, 0);
    }
    v11 = 0;
    memset(v8, 0, 0x94u);
    v42[0] = 1;
    do
    {
      if ( sub_1E29C(v11) )
      {
        while ( (sub_44ED4() & (1 << v11)) == 0 )
          sub_304D4();
        v42[1] = v11 | 0x80;
        memcpy(v35, src, 0x84u);
        sub_1EEB8(
          *(_DWORD *)v8,
          *((_DWORD *)v8 + 1),
          *((_DWORD *)v8 + 2),
          *((_DWORD *)v8 + 3),
          v35[0],
          v35[1],
          v35[2],
          v35[3],
          v35[4],
          v35[5],
          v35[6],
          v35[7],
          v35[8],
          v35[9],
          v35[10],
          v35[11],
          v35[12],
          v35[13],
          v35[14],
          v35[15],
          v35[16],
          v35[17],
          v35[18],
          v35[19],
          v35[20],
          v35[21],
          v35[22],
          v35[23],
          v35[24],
          v35[25],
          v35[26],
          v35[27],
          v35[28]);
        sub_304D4();
      }
      ++v11;
    }
    while ( v11 != 4 );
    sleep(1u);
    v12 = sub_4476C();
    sub_44794(v12 & 0xFFFF70FF | 0x8100);
    usleep((__useconds_t)&loc_186A0);
    if ( !--v7 )
      break;
    if ( (unsigned int)globalLogLevel > 4 )
    {
LABEL_15:
      strcpy(v8, "[DEBUG] Set start nonce offset invalid.\n");
      logMessage(4, v8, 0);
    }
  }
  v13 = v39;
  sub_1F1EC(255, 1);
  sub_1EFE0(255, (char)v36, v13, 1);
  sub_36908();
  usleep(0x186A0u);
  sub_36908();
  usleep(0x186A0u);
  sub_36908();
  usleep(0x186A0u);
  do
  {
    if ( sub_1E29C(v7) )
      sub_50BD4((unsigned __int8)v7, 0);
    ++v7;
  }
  while ( v7 != 4 );
  for ( i = 0; i != 4; ++i )
  {
    if ( sub_1E29C(i) )
      sub_50E78((unsigned __int8)i);
  }
  v15 = 3;
  v16 = 30000 - (v38 - 250) / 0x14u;
  do
  {
    for ( j = 0; j != 4; ++j )
    {
      if ( sub_1E29C(j) )
        sub_50F80((unsigned __int8)j, v16 / 333);
    }
    usleep((__useconds_t)&loc_186A0);
    --v15;
  }
  while ( v15 );
  do
  {
    if ( sub_1E29C(v15) )
      sub_50FA4((unsigned __int8)v15, 8);
    ++v15;
  }
  while ( v15 != 4 );
  v18 = v16 + 1000;
  v19 = 8;
  do
  {
    for ( k = 0; k != 4; ++k )
    {
      if ( sub_1E29C(k) )
        sub_50FDC((unsigned __int8)k);
    }
    usleep(v18);
    --v19;
  }
  while ( v19 );
  sub_36908();
  usleep(0x186A0u);
  sub_36908();
  usleep(0x186A0u);
  sub_36908();
  usleep(0x186A0u);
  sub_1EFE0(255, (char)v36, v13, 0);
  if ( (unsigned int)globalLogLevel > 4 )
  {
    v33 = s;
    v34 = s;
    *(_DWORD *)s = *(_DWORD *)"[DEBUG] Get nonce counter, chain.\n";
    strcpy(v34 + 4, "UG] Get nonce counter, chain.\n");
    logMessage(4, v33, 0);
    v21 = *(char **)(dword_4FCB34 + 4);
    if ( (unsigned int)globalLogLevel > 4 )
    {
      snprintf(v33, 0x800u, "[DEBUG] Read reg and wait done, reg = %d, done_threshold = %d.\n", 224, 1);
      logMessage(4, v33, 0);
    }
  }
  else
  {
    v21 = *(char **)(dword_4FCB34 + 4);
  }
  memset(v21, 0, 0x400u);
  v22 = 5;
  sub_1EC84(255, 1, 0, 224);
  while ( !sub_36F2C() )
  {
    usleep((__useconds_t)&loc_186A0);
    if ( !--v22 )
    {
      v36 = (unsigned int *)&globalLogLevel;
      v23 = 95;
      v24 = v21;
      while ( 1 )
      {
        for ( m = 0; m != 4; ++m )
        {
          if ( sub_1E29C(m) )
          {
            v28 = sub_1E0F0();
            if ( v28 )
            {
              v29 = &v24[256 * m];
              for ( n = 0; n != v28; ++n )
              {
                v31 = (unsigned __int8)*v29++;
                if ( v31 != 1 )
                {
                  v32 = sub_1E160();
                  sub_1EC84((unsigned __int8)m, 0, v32 * n, 224);
                }
              }
            }
          }
        }
        usleep((__useconds_t)&loc_186A0);
        if ( sub_36F2C() )
          break;
        if ( !--v23 )
        {
          if ( *v36 > 3 )
          {
            v27 = s;
            snprintf(s, 0x800u, "Read REG[0x%X] done failed.\n", 224);
            logMessage(3, v27, 0);
          }
          return -1;
        }
      }
      return 0;
    }
  }
  return 0;
}
