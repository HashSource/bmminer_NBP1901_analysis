int __fastcall sub_46ACC(unsigned int a1)
{
  int v2; // r5
  int v3; // r4
  int v5; // [sp+8h] [bp-830h] BYREF
  __int16 v6; // [sp+Ch] [bp-82Ch]
  int v7[4]; // [sp+10h] [bp-828h] BYREF
  char s[2072]; // [sp+20h] [bp-818h] BYREF

  if ( a1 > 0xF )
  {
    snprintf(s, 0x800u, "%s: Bad pic param, input chain is %d\n", "send_pic_heart_beat", a1);
    v3 = -2147483135;
    logMessage(0, s, 0);
    return v3;
  }
  if ( !dword_99EE48[2 * a1 + 1] )
  {
    v3 = sub_46024(a1);
    if ( v3 < 0 )
    {
      snprintf(s, 0x800u, "%s: auto exec open_pic, but chain %d open eeprom failed\n", "send_pic_heart_beat", a1);
      logMessage(0, s, 0);
      return v3;
    }
  }
  v2 = dword_99EE48[2 * a1];
  v3 = 0;
  pthread_mutex_lock(&stru_50514C);
  v7[1] = 6656;
  v7[0] = 369404501;
  v7[2] = 0;
  v7[3] = 0;
  v5 = 0;
  v6 = 0;
  if ( sub_4966C(v2, (int)v7, 6) != 6 )
  {
    snprintf(s, 0x800u, "%s write iic err\n", "_bitmain_pic_heart_beat_common");
LABEL_13:
    logMessage(0, s, 0);
    goto LABEL_14;
  }
  usleep(0x493E0u);
  if ( sub_495E4(v2, &v5, 6) != 6 )
  {
    snprintf(s, 0x800u, "%s read iic err\n", "_bitmain_pic_heart_beat_common");
    goto LABEL_13;
  }
  if ( BYTE1(v5) == 22 && BYTE2(v5) == 1 )
    goto LABEL_8;
  snprintf(s, 0x800u, "%s failed!\n", "_bitmain_pic_heart_beat_common");
  logMessage(0, s, 0);
  sub_45ED0((unsigned __int8 *)&v5, 6u);
LABEL_14:
  v3 = -2147483136;
LABEL_8:
  pthread_mutex_unlock(&stru_50514C);
  return v3;
}
