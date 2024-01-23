int __fastcall sub_44358(unsigned int a1, unsigned __int8 a2, int a3, int a4)
{
  int v8; // r8
  int v9; // r3
  int v10; // r0
  int v11; // r9
  unsigned __int8 v13; // [sp+Fh] [bp-821h] BYREF
  char s[2080]; // [sp+10h] [bp-820h] BYREF

  if ( a1 > 0xF )
  {
    snprintf(s, 0x800u, "%s: Bad eeprom param, input chain is %d\n", "eeprom_read", a1);
    v11 = -2147483391;
    logMessage(0, s, 0);
    return v11;
  }
  if ( !dword_505088[2 * a1 + 1] )
  {
    v11 = sub_440E8(a1);
    if ( v11 < 0 )
    {
      snprintf(s, 0x800u, "%s: auto exec eeprom_open, but chain %d open eeprom failed\n", "eeprom_read", a1);
      logMessage(0, s, 0);
      return v11;
    }
  }
  if ( a4 )
  {
    v8 = a3 + a4;
    while ( 1 )
    {
      v9 = a3;
      v10 = dword_505088[2 * a1];
      ++a3;
      v13 = a2++;
      if ( sub_496F4(v10, &v13, 1, v9, 1) != 1 )
        break;
      if ( v8 == a3 )
        goto LABEL_10;
    }
    v11 = -2147483392;
    snprintf(s, 0x800u, "fail to read eeprom by iic, chain: %d, addr: %d\n", a1, v13);
    logMessage(0, s, 0);
    return v11;
  }
LABEL_10:
  usleep(0x7A120u);
  return 0;
}
