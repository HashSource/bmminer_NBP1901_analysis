int __fastcall sub_14454(int a1, int a2, unsigned int a3, int a4)
{
  int v9; // r5
  char *v10; // r3
  unsigned __int8 v11; // [sp+17h] [bp-821h] BYREF
  char s[2080]; // [sp+18h] [bp-820h] BYREF

  if ( dword_7F7B0 )
  {
    if ( sub_1E29C(a1) )
    {
      v9 = sub_1E170();
      if ( v9 )
      {
        if ( a2 >= sub_14434() || a3 > 1 )
        {
          if ( (unsigned int)globalLogLevel > 3 )
          {
            snprintf(
              s,
              0x800u,
              "%s invalid param. index = %d, type = %d, model = %d on chain %d",
              "read_sensor_on_asic",
              a2,
              a4,
              a3,
              a1);
            logMessage(3, s, 0);
            return 255;
          }
        }
        else
        {
          v11 = -1;
          v10 = &aReadSensorOnAs[16 * a3];
          if ( !a4 )
            v9 = (unsigned __int8)v10[29];
          if ( a4 )
            v9 = (unsigned __int8)v10[30];
          if ( sub_142BC(a1, (unsigned __int8)(*(_DWORD *)(dword_7F7B4 + 4 * a2) * dword_7F7B0), v9, 0, &v11) )
            return v11 - 64;
          if ( (unsigned int)globalLogLevel > 3 )
          {
            snprintf(
              s,
              0x800u,
              "read temp sensor failed: chain = %d, sensor pos = %d, address = %d, reg = %d\n",
              a1,
              *(_DWORD *)(dword_7F7B4 + 4 * a2),
              dword_7F7B0 * *(_DWORD *)(dword_7F7B4 + 4 * a2),
              v9);
            logMessage(3, s, 0);
          }
        }
      }
      else if ( (unsigned int)globalLogLevel > 3 )
      {
        snprintf(s, 0x800u, "%s chain %d ,index %d not connected", "read_sensor_on_asic", a1, a2);
        logMessage(3, s, 0);
        return 255;
      }
    }
    else if ( (unsigned int)globalLogLevel > 4 )
    {
      snprintf(s, 0x800u, "%s chain %d not pluged", "read_sensor_on_asic", a1);
      logMessage(4, s, 0);
      return 255;
    }
  }
  else if ( (unsigned int)globalLogLevel > 3 )
  {
    strcpy(s, "can not read temp by asic before calibration");
    logMessage(3, s, dword_7F7B0);
    return 255;
  }
  return 255;
}
