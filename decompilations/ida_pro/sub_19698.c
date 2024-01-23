int __fastcall sub_19698(int a1)
{
  double v1; // d0
  int v3; // r5
  int v4; // r6
  int v6; // r5
  double v7; // d7
  unsigned int v8; // r5
  int v9; // r5
  char *v10; // r3
  int v11; // [sp+4h] [bp-83Ch]
  char s[2096]; // [sp+10h] [bp-830h] BYREF

  v3 = sub_48910();
  if ( (unsigned int)globalLogLevel > 3 )
  {
    snprintf(s, 0x800u, "power type version: 0x%04x\n", v3);
    sub_2E584(3, s, 0);
  }
  if ( sub_1E91C((unsigned __int16)v3) )
  {
    if ( (unsigned int)globalLogLevel > 3 )
    {
      strcpy(s, "Enter sleep to make sure power release finish.\n");
      sub_2E584(3, s, 0);
    }
    sub_42138();
    sleep(1u);
    sub_194F0();
    v4 = sub_195A8(a1);
    if ( v4 < 0 )
    {
      if ( (unsigned int)globalLogLevel > 3 )
      {
        snprintf(s, 0x800u, "%s power iic error.\n", "power_init");
        sub_2E584(3, s, 0);
      }
      return v4;
    }
    sub_42100();
    sleep(1u);
    if ( (unsigned int)(v3 - 117) <= 3 )
    {
      v6 = 3;
      while ( 1 )
      {
        sleep(1u);
        sub_192C8(0);
        if ( v1 < 0.0 )
          break;
        v1 = v1 * 100.0;
        v7 = (double)a1;
        if ( v1 <= (double)a1 * 1.1 && v1 >= v7 * 0.9 )
        {
          v4 = 0;
          goto LABEL_18;
        }
        if ( (unsigned int)globalLogLevel > 3 )
        {
          v10 = v1 - v7 <= 0.0 ? "drop" : "rise";
          snprintf(s, 0x800u, "chain avg vol %s from %d to %.2f", v10, a1, v11, v1);
          sub_2E584(3, s, 0);
          if ( (unsigned int)globalLogLevel > 3 )
          {
            strcpy(s, "power voltage can not meet the target");
            sub_2E584(3, s, 0);
          }
        }
        if ( !--v6 )
        {
          v4 = -1;
          goto LABEL_18;
        }
      }
      if ( (unsigned int)globalLogLevel > 3 )
      {
        strcpy(s, "read_feedback_voltage failed!");
        sub_2E584(3, s, 0);
      }
      v4 = 0;
      sub_31D58(9u, "power voltage read failed, pls check!");
LABEL_18:
      v8 = 0;
      while ( 1 )
      {
        ++v8;
        if ( !sub_48B7C() )
          break;
        if ( v8 == 5 * (v8 / 5) && (unsigned int)globalLogLevel > 3 )
        {
          strcpy(s, "bitmain_get_power_status failed!");
          sub_2E584(3, s, v8 % 5);
        }
        sleep(3u);
        if ( v8 == 20 )
          return -1;
      }
      return v4;
    }
    v9 = 3;
    while ( 1 )
    {
      sleep(1u);
      sub_193F8();
      if ( v1 >= (double)a1 * 0.75 / 100.0 )
        break;
      if ( (unsigned int)globalLogLevel > 3 )
      {
        strcpy(s, "power voltage can not meet the target");
        sub_2E584(3, s, 0);
      }
      if ( !--v9 )
        return -1;
    }
    return 0;
  }
  else
  {
    if ( (unsigned int)globalLogLevel <= 3 )
      return -1;
    strcpy(s, "power type version error\n");
    sub_2E584(3, s, 0);
    return -1;
  }
}
