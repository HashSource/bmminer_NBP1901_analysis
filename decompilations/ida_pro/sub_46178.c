int __fastcall sub_46178(unsigned int a1)
{
  int v2; // r5
  int v3; // r4
  unsigned int v4; // r3
  int v6; // [sp+8h] [bp-830h] BYREF
  unsigned __int8 v7; // [sp+Ch] [bp-82Ch]
  int v8[4]; // [sp+10h] [bp-828h] BYREF
  char s[2072]; // [sp+20h] [bp-818h] BYREF

  if ( a1 > 0xF )
  {
    snprintf(s, 0x800u, "%s: Bad pic param, input chain is %d\n", "get_pic_version", a1);
    v3 = -2147483135;
    logMessage(0, s, 0);
    return v3;
  }
  if ( !dword_99EE48[2 * a1 + 1] )
  {
    v3 = sub_46024(a1);
    if ( v3 < 0 )
    {
      snprintf(s, 0x800u, "%s: auto exec open_pic, but chain %d open eeprom failed\n", "get_pic_version", a1);
      logMessage(0, s, 0);
      return v3;
    }
  }
  v2 = dword_99EE48[2 * a1];
  pthread_mutex_lock(&stru_50514C);
  v8[1] = 6912;
  v8[0] = 386181717;
  v8[2] = 0;
  v8[3] = 0;
  v6 = 0;
  v7 = 0;
  if ( sub_4966C(v2, (int)v8, 6) != 6 )
  {
    snprintf(s, 0x800u, "%s write iic err\n", "_bitmain_pic_get_sw_ver_common");
LABEL_15:
    logMessage(0, s, 0);
    goto LABEL_16;
  }
  usleep(0x493E0u);
  if ( sub_495E4(v2, &v6, 5) != 5 )
  {
    snprintf(s, 0x800u, "%s read iic err\n", "_bitmain_pic_get_sw_ver_common");
    goto LABEL_15;
  }
  if ( BYTE1(v6) == 23 && (unsigned __int8)v6 == 5 )
  {
    v3 = BYTE2(v6);
    v4 = BYTE2(v6) + 28;
    if ( HIBYTE(v6) == v4 >> 8 && v7 == (unsigned __int8)v4 )
      goto LABEL_10;
    snprintf(s, 0x800u, "%s failed 2!\n", "_bitmain_pic_get_sw_ver_common");
  }
  else
  {
    snprintf(s, 0x800u, "%s failed!\n", "_bitmain_pic_get_sw_ver_common");
  }
  logMessage(0, s, 0);
  sub_45ED0((unsigned __int8 *)&v6, 5u);
LABEL_16:
  v3 = -2147483136;
LABEL_10:
  pthread_mutex_unlock(&stru_50514C);
  return v3;
}
