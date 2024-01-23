char *__fastcall sub_17244(char *result, int a2, unsigned int a3)
{
  unsigned int v4; // r1
  unsigned int v5; // r4
  int v6; // r5
  char s[2088]; // [sp+8h] [bp-828h] BYREF

  v4 = globalLogLevel;
  if ( (unsigned int)globalLogLevel > 3 )
  {
    snprintf(s, 0x800u, "[chain %d]\n", result);
    result = (char *)logMessage(3, s, 0);
    v4 = globalLogLevel;
    if ( a3 )
      goto LABEL_3;
LABEL_15:
    if ( v4 > 3 )
    {
      strcpy(s, "\n");
      return sub_2EA54(3, s, 0);
    }
  }
  else if ( a3 )
  {
LABEL_3:
    v5 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v6 = v5 & 0xF;
        if ( (v5 & 0xF) != 0 )
          break;
        if ( v4 > 3 )
        {
          snprintf(s, 0x800u, "0x%04X ", v5);
          result = sub_2EA54(3, s, v5 & 0xF);
          v4 = globalLogLevel;
        }
LABEL_6:
        if ( v4 > 3 )
          goto LABEL_12;
LABEL_7:
        if ( a3 <= ++v5 )
          goto LABEL_15;
      }
      if ( v6 != 8 )
        goto LABEL_6;
      if ( v4 <= 3 )
        goto LABEL_7;
      strcpy(s, "  ");
      result = sub_2EA54(3, s, 0);
      v4 = globalLogLevel;
      if ( (unsigned int)globalLogLevel <= 3 )
        goto LABEL_7;
LABEL_12:
      snprintf(s, 0x800u, "%02X ", *(unsigned __int8 *)(a2 + v5));
      result = sub_2EA54(3, s, 0);
      v4 = globalLogLevel;
      if ( v6 != 15 || (unsigned int)globalLogLevel <= 3 )
        goto LABEL_7;
      ++v5;
      strcpy(s, "\n");
      result = sub_2EA54(3, s, 0);
      v4 = globalLogLevel;
      if ( a3 <= v5 )
        goto LABEL_15;
    }
  }
  return result;
}
