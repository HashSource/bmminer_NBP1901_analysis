char *__fastcall sub_3B298(int a1)
{
  _DWORD *v2; // r4
  char *v3; // r4
  int i; // r4
  char *v6; // r8
  int v7; // r5
  int v8; // r0
  int j; // r4
  int v10; // r11
  int k; // r4
  int v12; // r9
  char **v13; // r11
  char **v14; // r10
  int v15; // r0
  char *v16; // r2
  char *v17; // r3
  int v18; // r8
  int v19; // r1
  float *v20; // r2
  int v21; // r3
  float v22; // s12
  bool v23; // cc
  char *v24; // r0
  float v25; // s0
  int v26; // r3
  char *v27; // [sp+10h] [bp-980h]
  int v28; // [sp+14h] [bp-97Ch]
  char *v29[76]; // [sp+28h] [bp-968h] BYREF
  char s[2040]; // [sp+158h] [bp-838h] BYREF

  if ( (unsigned int)globalLogLevel > 3 )
  {
    strcpy(s, "Do freq tuning basic.\n");
    logMessage(3, s, 0);
  }
  v2 = (_DWORD *)minerConfigAddress;
  memset((void *)(minerConfigAddress + 4), 0, 0x30u);
  *v2 = a1;
  sub_39A7C();
  sub_361E4(**(_DWORD **)minerConfigAddress);
  v3 = (char *)sub_3AC6C();
  if ( !v3 )
  {
    configureASICClock(255, (unsigned __int8)byte_482A70, *(unsigned __int8 *)(*(_DWORD *)minerConfigAddress + 20));
    if ( (unsigned int)globalLogLevel > 3 )
    {
      strcpy(s, "\n");
      sub_2EA54(3, s, 0);
      if ( (unsigned int)globalLogLevel > 3 )
      {
        strcpy(s, ">>>> Do tuning parallel.\n");
        logMessage(3, s, 0);
      }
    }
    for ( i = 0; i != 4; ++i )
    {
      if ( sub_1E29C(i) )
        sub_3962C(i, 1);
    }
    v6 = *(char **)(*(_DWORD *)minerConfigAddress + 4);
    v28 = *(_DWORD *)(*(_DWORD *)minerConfigAddress + 16);
    v27 = *(char **)(*(_DWORD *)minerConfigAddress + 12);
    if ( (unsigned int)globalLogLevel > 3 )
    {
      snprintf(
        s,
        0x800u,
        "freq_prev = %d, freq_start = %d, freq_step = %d, freq_min = %d\n",
        v6,
        v6,
        v28,
        *(_DWORD *)(*(_DWORD *)minerConfigAddress + 12));
      logMessage(3, s, 0);
    }
    v29[0] = v6;
    if ( v6 < v27 )
    {
      v7 = 0;
      v3 = 0;
    }
    else
    {
      v7 = 0;
      while ( 1 )
      {
        if ( (unsigned int)globalLogLevel <= 3
          || (strcpy(s, "\n"), sub_2EA54(3, s, 0), (unsigned int)globalLogLevel <= 3) )
        {
          v8 = sub_39998();
          if ( !v8 )
            goto LABEL_59;
        }
        else
        {
          snprintf(s, 0x800u, ">>>> freq_curr = %d\n", v29[0]);
          logMessage(3, s, 0);
          v8 = sub_39998();
          if ( !v8 )
          {
LABEL_59:
            v3 = (char *)v8;
            if ( (unsigned int)globalLogLevel > 3 )
            {
              strcpy(s, "All ready chain done, exit.\n");
              logMessage(3, s, v8);
            }
            goto LABEL_36;
          }
        }
        for ( j = 0; j != 4; ++j )
        {
          if ( sub_1E29C(j) && sub_397A0(j) == 1 )
            SetChainFrequency(
              j,
              (unsigned __int8)byte_482A70,
              (unsigned int)v6,
              v29[0],
              *(_BYTE *)(*(_DWORD *)minerConfigAddress + 21));
        }
        v6 = v29[0];
        v3 = (char *)sub_3AC6C();
        if ( v3 )
          break;
        sub_321B8((int)v29[0], optMultiVersion, 20);
        sub_3A86C((int)v29);
        v10 = sub_391F4();
        do
        {
          if ( sub_1E29C((int)v3) && sub_397A0((int)v3) == 1 )
            sub_3A054(v3, v10);
          ++v3;
        }
        while ( v3 != (char *)4 );
        for ( k = 0; k != 4; ++k )
        {
          if ( sub_1E29C(k) && sub_397A0(k) == 1 )
          {
            v25 = *(float *)(*(_DWORD *)minerConfigAddress + 28);
            if ( sub_39B60(k) )
              sub_3962C(k, 2);
            else
              *(_DWORD *)(minerConfigAddress + 4 * k + 20) = 1;
            sub_3A828();
            v26 = minerConfigAddress + 4 * k;
            if ( v25 > *(float *)(v26 + 36) )
              *(float *)(v26 + 36) = v25;
          }
        }
        v12 = 0;
        v13 = (char **)((char *)dword_80A894 + v10);
        v14 = &v29[4 * v7 + 16];
        do
        {
          v15 = sub_1E29C(v12++);
          if ( v15 )
            v17 = *v13;
          ++v14;
          if ( v15 )
            v16 = v29[0];
          ++v13;
          if ( v15 )
          {
            *(v14 - 1) = v17;
            v29[v7 + 1] = v16;
          }
        }
        while ( v12 != 4 );
        ++v7;
        v29[0] -= v28;
        if ( v27 > v29[0] )
        {
          v3 = 0;
          goto LABEL_36;
        }
      }
      if ( (unsigned int)globalLogLevel > 3 )
      {
        strcpy(s, "Set voltage failed, exit.\n");
        logMessage(3, s, 0);
      }
    }
LABEL_36:
    v18 = 0;
    if ( sub_1E29C(0) )
      goto LABEL_39;
    while ( ++v18 != 4 )
    {
      if ( sub_1E29C(v18) )
      {
LABEL_39:
        v19 = 0;
        v20 = (float *)&v29[v18 + 16];
        v21 = 0;
        while ( v21 < v7 - 1 )
        {
          v22 = *v20;
          if ( *v20 < 5.0 )
          {
            v19 = v21;
            break;
          }
          v20 += 4;
          ++v21;
          if ( v22 > *v20 * 1.5 )
            v19 = v21;
        }
        v23 = (unsigned int)globalLogLevel > 3;
        v24 = v29[v19 + 1];
        *(_DWORD *)(minerConfigAddress + 4 * v18 + 4) = v24;
        if ( v23 )
        {
          snprintf(s, 0x800u, "chain %d best level %d, freq %d\n", v18, v19, v24);
          logMessage(3, s, 0);
        }
      }
    }
  }
  return v3;
}
