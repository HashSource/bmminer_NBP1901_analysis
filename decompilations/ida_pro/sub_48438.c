int __fastcall sub_48438(unsigned int a1, __int16 a2, __int16 a3, int a4, int a5)
{
  int v9; // r6
  char s[2080]; // [sp+8h] [bp-820h] BYREF

  if ( a1 > 0xF )
  {
    snprintf(s, 0x800u, "%s: Bad pic param, input chain is %d\n", "pic_write_iic", a1);
    v9 = -2147483135;
    logMessage(0, s, 0);
  }
  else
  {
    if ( dword_99EE48[2 * a1 + 1] )
      return sub_46CA0(dword_99EE48[2 * a1], a2, a3, a4, a5);
    v9 = sub_46024(a1);
    if ( v9 >= 0 )
    {
      return sub_46CA0(dword_99EE48[2 * a1], a2, a3, a4, a5);
    }
    else
    {
      snprintf(s, 0x800u, "%s: auto exec open_pic, but chain %d open eeprom failed\n", "pic_write_iic", a1);
      logMessage(0, s, 0);
    }
  }
  return v9;
}
