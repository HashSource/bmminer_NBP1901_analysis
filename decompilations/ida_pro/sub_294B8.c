void *__fastcall sub_294B8(void *a1)
{
  double v1; // d0
  __int64 v3; // r0
  __int64 v4; // r6
  double v5; // r0
  double v6; // d8
  __int64 v7; // r0
  int v8; // r10
  int v9; // r11
  double v10; // r0
  double v11; // d8
  __int64 v12; // r0
  int v13; // r8
  int v14; // r9
  double v15; // r0
  unsigned int v16; // r0
  int v17; // r1
  char *v19; // r6
  _DWORD v20[6]; // [sp+8h] [bp-850h] BYREF
  __int64 v21; // [sp+20h] [bp-838h]
  char s[2096]; // [sp+28h] [bp-830h] BYREF

  if ( v1 == 0.0 )
  {
    if ( loggingDebug || loggingVerbose || loggingThreshold > 2 )
    {
      v4 = 4294901760LL;
      strcpy(s, "Diff zero passed to set_target");
      logMessage(3, s, 0);
      v16 = 0;
      v17 = 0;
      v14 = 0;
      v9 = 0;
      v13 = 0;
      v8 = 0;
    }
    else
    {
      v16 = 0;
      v4 = 4294901760LL;
      v17 = 0;
      v14 = 0;
      v9 = 0;
      v13 = 0;
      v8 = 0;
    }
  }
  else
  {
    LODWORD(v3) = sub_60180(2.69595353e67 / v1 * 1.59309191e-58);
    v4 = v3;
    LODWORD(v5) = sub_600B4(v3);
    v6 = 2.69595353e67 / v1 - v5 * 6.27710174e57;
    LODWORD(v7) = sub_60180(v6 * 2.93873588e-39);
    v8 = HIDWORD(v7);
    v9 = v7;
    LODWORD(v10) = sub_600B4(v7);
    v11 = v6 - v10 * 3.40282367e38;
    LODWORD(v12) = sub_60180(v11 * 5.42101086e-20);
    v13 = HIDWORD(v12);
    v14 = v12;
    LODWORD(v15) = sub_600B4(v12);
    v16 = sub_60180(v11 - v15 * 1.84467441e19);
  }
  v21 = v4;
  v20[4] = v9;
  v20[5] = v8;
  v20[2] = v14;
  v20[3] = v13;
  v20[0] = v16;
  v20[1] = v17;
  if ( logEnabled )
  {
    v19 = sub_2F670((int)v20, 32);
    if ( logEnabled && (loggingDebug || loggingVerbose || loggingThreshold > 6) )
    {
      snprintf(s, 0x800u, "Generated target %s", v19);
      logMessage(7, s, 0);
    }
    free(v19);
  }
  return sub_30EA8(a1, v20, 0x20u, (int)"bmminer.c", (int)"set_target", 1124);
}
