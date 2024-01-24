int sub_350E8()
{
  unsigned __int16 v0; // r0
  int v1; // r5
  int v2; // r7
  int v3; // r0
  int v4; // r8
  int v5; // r2
  int v6; // r7
  int i; // r0
  int v8; // r3
  int v9; // r10
  bool v10; // cc
  int v12; // r7
  const char *v13; // r0
  int v14; // r12
  char s[2080]; // [sp+10h] [bp-820h] BYREF

  v0 = sub_1572C();
  v1 = (__int16)(v0 - 10);
  v2 = v1;
  if ( word_7EDE4 == 255 )
  {
    word_7EDE4 = v1;
LABEL_25:
    word_482A90 = 0;
    goto LABEL_5;
  }
  if ( word_7EDE4 - v1 <= 5 )
    goto LABEL_25;
  ++word_482A90;
LABEL_5:
  if ( dword_482A8C > 0 && optBitmainWorkMode != 1 )
  {
    if ( v1 <= 19 || word_482A90 > 1 && (unsigned int)v0 - 21 <= 8 )
    {
      v3 = sub_19AB4();
      v4 = 100;
      v5 = 100 * (20 - v1);
      v6 = v3;
      if ( v5 < 4000 )
        v4 = v5 / 40;
      if ( (unsigned int)globalLogLevel > 4 )
      {
        v14 = v3 - dword_482A8C + v4;
        if ( v14 < 0 )
          v14 = -v14;
        snprintf(
          s,
          0x800u,
          "curr_vol = %d, g_voltage = %d,compensate_voltage = %d, abs = %d",
          v3,
          dword_482A8C,
          v4,
          v14);
        logMessage(4, s, 0);
      }
      i = v4 + dword_482A8C;
      v8 = v6 - (v4 + dword_482A8C);
      if ( v8 < 0 )
        v8 = i - v6;
      if ( v8 <= 19 )
        goto LABEL_23;
      v9 = v6 + 49;
      if ( v6 + 49 < i )
      {
        while ( 1 )
        {
          v10 = sub_19AC4() <= v9;
          v9 += 20;
          if ( v10 )
            break;
          v6 += 20;
          SetVoltageBySteps(v6);
          usleep(0x30D40u);
          i = v4 + dword_482A8C;
          if ( v4 + dword_482A8C <= v9 )
            goto LABEL_22;
        }
        i = v4 + dword_482A8C;
      }
LABEL_22:
      if ( v6 == i )
        goto LABEL_23;
LABEL_30:
      SetVoltageBySteps(i);
      word_7EDE4 = v1;
      return 0;
    }
    if ( (unsigned int)v0 - 30 > 0x15 )
    {
      v13 = (const char *)sub_1E0C0();
      if ( strcmp(v13, "NBS1902L") )
        v2 = v1 + 10;
      if ( v2 > 49 && dword_482A8C - 20 != sub_19AB4() )
      {
        i = dword_482A8C - 20;
        goto LABEL_30;
      }
    }
    else
    {
      v12 = sub_19AB4();
      for ( i = dword_482A8C; dword_482A8C < v12 - 19; i = dword_482A8C )
      {
        v12 -= 20;
        SetVoltageBySteps(v12);
        usleep(0x30D40u);
      }
      if ( i != v12 )
        goto LABEL_30;
    }
LABEL_23:
    word_7EDE4 = v1;
  }
  return 0;
}
