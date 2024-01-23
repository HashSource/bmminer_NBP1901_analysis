int sub_48910()
{
  int v0; // r5
  int v1; // r4
  int v2; // r7
  int v3; // r4
  int v4; // r6
  int v6; // [sp+8h] [bp-830h] BYREF
  __int16 v7; // [sp+Ch] [bp-82Ch]
  int v8; // [sp+10h] [bp-828h] BYREF
  int v9; // [sp+14h] [bp-824h]
  char s[2080]; // [sp+18h] [bp-820h] BYREF

  v0 = dword_505180;
  if ( dword_505180 || (v1 = sub_48B58(), v1 >= 0) )
  {
    v2 = dword_50517C;
    v3 = 10;
    do
    {
      LOBYTE(v6) = -1;
      LOBYTE(v8) = 0;
      pthread_mutex_lock(&stru_505164);
      if ( sub_496F4(v2, (unsigned __int8 *)&v8, 1, (int)&v6, 1) == 1 )
      {
        v4 = (unsigned __int8)v6;
        pthread_mutex_unlock(&stru_505164);
        if ( v4 == 245 )
          break;
      }
      else
      {
        snprintf(s, 0x800u, "%s: iic read is failed\n", "_bitmain_get_power_code_version");
        sub_2E584(0, s, 0);
        pthread_mutex_unlock(&stru_505164);
      }
      usleep(0x186A0u);
      --v3;
    }
    while ( v3 );
    v6 = 33860181;
    v8 = 0;
    v9 = 0;
    v7 = 6;
    if ( sub_48520(v2, (unsigned __int8 *)&v6, 6u, (unsigned __int8 *)&v8, 8u) )
    {
      v1 = -2147482880;
      strcpy(s, "get power version failed\n");
      sub_2E584(0, s, 0);
    }
    else
    {
      v1 = (unsigned __int16)v9;
      if ( (_WORD)v9 )
        dword_505184 = (unsigned __int16)v9;
    }
  }
  else
  {
    snprintf(s, 0x800u, "%s: auto exec bitmain_power_open, but open power failed\n", "bitmain_power_version");
    sub_2E584(v0, s, v0);
  }
  return v1;
}
