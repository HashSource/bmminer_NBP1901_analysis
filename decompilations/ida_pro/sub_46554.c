int __fastcall sub_46554(unsigned int a1)
{
  int v2; // r6
  int v3; // r4
  __int16 v5; // [sp+Ch] [bp-82Ch] BYREF
  int v6[4]; // [sp+10h] [bp-828h] BYREF
  char s[2072]; // [sp+20h] [bp-818h] BYREF

  if ( a1 > 0xF )
  {
    snprintf(s, 0x800u, "%s: Bad pic param, input chain is %d\n", "jump_from_loader_to_app", a1);
    v3 = -2147483135;
    logMessage(0, s, 0);
    return v3;
  }
  if ( !dword_99EE48[2 * a1 + 1] )
  {
    v3 = sub_46024(a1);
    if ( v3 < 0 )
    {
      snprintf(s, 0x800u, "%s: auto exec open_pic, but chain %d open eeprom failed\n", "jump_from_loader_to_app", a1);
      logMessage(0, s, 0);
      return v3;
    }
  }
  v2 = dword_99EE48[2 * a1];
  v3 = 0;
  pthread_mutex_lock(&stru_50514C);
  v6[1] = 2560;
  v6[0] = 100969045;
  v6[2] = 0;
  v6[3] = 0;
  v5 = 0;
  if ( sub_4966C(v2, (int)v6, 6) != 6 )
  {
    snprintf(s, 0x800u, "%s write iic err\n", "_bitmain_pic_start_app_common");
LABEL_13:
    logMessage(0, s, 0);
    goto LABEL_14;
  }
  usleep(0x493E0u);
  if ( sub_495E4(v2, &v5, 2) != 2 )
  {
    snprintf(s, 0x800u, "%s read iic err\n", "_bitmain_pic_start_app_common");
    goto LABEL_13;
  }
  usleep(0x493E0u);
  if ( (unsigned __int8)v5 == 6 && HIBYTE(v5) == 1 )
    goto LABEL_8;
  snprintf(
    s,
    0x800u,
    "%s failed! read_back_data[0] = 0x%02x, read_back_data[1] = 0x%02x\n\n",
    "_bitmain_pic_start_app_common",
    (unsigned __int8)v5,
    HIBYTE(v5));
  logMessage(0, s, 0);
LABEL_14:
  v3 = -2147483136;
LABEL_8:
  pthread_mutex_unlock(&stru_50514C);
  return v3;
}
