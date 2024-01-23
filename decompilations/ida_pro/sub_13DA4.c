int __fastcall sub_13DA4(unsigned int a1, int a2)
{
  int v2; // r4
  int v4; // r4
  int v5; // r5
  int v6; // r4
  int v8; // r5
  int *v9; // r6
  int v10; // r5
  int v11; // r9
  int v12; // r0
  int v13; // r4
  int v14; // r4
  int v15; // r0
  int v16; // r4
  int v17; // r5
  int v18; // r0
  char s[2080]; // [sp+8h] [bp-820h] BYREF

  v2 = a2;
  if ( a2 )
  {
    v4 = 10;
    do
    {
      sub_13CE0(a1);
      v5 = sub_1E30C();
      if ( v5 >= sub_1E2FC() )
        break;
      sub_304D4();
      --v4;
    }
    while ( v4 );
    v6 = sub_1E30C();
    if ( v6 >= sub_1E2FC() )
    {
LABEL_6:
      sub_20A08(0);
      return 0;
    }
  }
  else
  {
    sub_13CE0(a1);
    v8 = sub_1E30C();
    LOWORD(v9) = (unsigned __int16)&dword_7F7A4;
    if ( v8 < sub_1E2FC() )
    {
      HIWORD(v9) = (unsigned int)&dword_7F7A4 >> 16;
      ++*v9;
      while ( 1 )
      {
        v10 = (unsigned __int8)v2++;
        if ( v10 >= sub_1E2FC() )
          break;
        if ( (unsigned int)globalLogLevel > 3 )
        {
          v11 = *v9;
          v12 = sub_1E43C(v10);
          snprintf(s, 0x800u, "conti_check_count:%d, fan_id = %d, fan_speed = %d\n", v11, v10, v12);
          logMessage(3, s, 0);
        }
      }
    }
    else
    {
      HIWORD(v9) = 7;
      *v9 = 0;
    }
    v13 = sub_1E30C();
    if ( v13 >= sub_1E2FC() || (unsigned int)*v9 <= 9 )
      goto LABEL_6;
  }
  if ( (unsigned int)globalLogLevel > 1 )
  {
    v14 = sub_1E30C();
    v15 = sub_1E2FC();
    snprintf(s, 0x800u, "Error, fan lost, only find %d (< %d)\n", v14, v15);
    logMessage(1, s, 0);
  }
  v16 = 0;
  while ( 1 )
  {
    v17 = (unsigned __int8)v16++;
    if ( v17 >= sub_1E2FC() )
      break;
    if ( (unsigned int)globalLogLevel > 3 )
    {
      v18 = sub_1E43C(v17);
      snprintf(s, 0x800u, "fan_id = %d, fan_speed = %d\n", v17, v18);
      logMessage(3, s, 0);
    }
  }
  sub_356C4(10, 255);
  sub_20A08(1);
  sub_31D58(7u, "fan lost");
  return -1;
}
