int __fastcall sub_48110(unsigned int a1, int a2, int a3, void *a4, int a5)
{
  int v9; // r4
  int v10; // r6
  int v11; // r5
  int v12; // r6
  const char *v13; // r2
  __int16 v15; // r3
  int v16; // r1
  unsigned int v17; // r2
  int v18; // [sp+10h] [bp-848h] BYREF
  char v19; // [sp+14h] [bp-844h]
  char v20; // [sp+15h] [bp-843h]
  char v21; // [sp+16h] [bp-842h]
  char v22; // [sp+17h] [bp-841h]
  int src; // [sp+18h] [bp-840h] BYREF
  int v24[4]; // [sp+1Ch] [bp-83Ch] BYREF
  __int16 v25; // [sp+2Ch] [bp-82Ch]
  char s[2048]; // [sp+30h] [bp-828h] BYREF

  if ( a1 > 0xF )
  {
    snprintf(s, 0x800u, "%s: Bad pic param, input chain is %d\n", "pic_read_iic", a1);
    v12 = -2147483135;
    logMessage(0, s, 0);
    return v12;
  }
  if ( !dword_99EE48[2 * a1 + 1] )
  {
    v12 = sub_46024(a1);
    if ( v12 < 0 )
    {
      snprintf(s, 0x800u, "%s: auto exec open_pic, but chain %d open eeprom failed\n", "pic_read_iic", a1);
      logMessage(0, s, 0);
      return v12;
    }
  }
  v9 = 0;
  v10 = sub_46CA0(dword_99EE48[2 * a1], a2, a3, 0, 0);
  if ( v10 >= 0 )
  {
    usleep(0x2710u);
    v11 = dword_99EE48[2 * a1];
    pthread_mutex_lock(&stru_50514C);
    if ( a5 >= 16 )
      v12 = 16;
    else
      v12 = a5;
    v20 = v12;
    v22 = v12 + 66 + a2;
    src = 0;
    v19 = a2;
    memset(v24, 0, sizeof(v24));
    v21 = (unsigned __int16)(v12 + 66 + a2) >> 8;
    v25 = 0;
    v18 = 1007069781;
    if ( sub_4966C(v11, (int)&v18, 8) == 8 )
    {
      usleep(0x2710u);
      if ( v12 + 5 == sub_495E4(v11, &src, v12 + 5) )
      {
        v15 = (unsigned __int8)src;
        if ( v12 + 5 == (unsigned __int8)src && BYTE1(src) == 60 && BYTE2(src) == 1 )
        {
          v16 = v12 + 3;
          LOWORD(v17) = 0;
          if ( v12 + 3 > 0 )
          {
            while ( 1 )
            {
              v9 = (unsigned __int16)(v9 + 1);
              v17 = (unsigned __int16)(v17 + v15);
              if ( v9 >= v16 )
                break;
              v15 = *((unsigned __int8 *)&v24[-1] + v9);
            }
            v9 = v17 >> 8;
          }
          if ( *((unsigned __int8 *)&v24[-1] + v16) == v9 && *((unsigned __int8 *)v24 + v12) == (unsigned __int8)v17 )
          {
            memcpy(a4, (char *)&src + 3, v12);
          }
          else
          {
            snprintf(s, 0x800u, "%s failed 2!\n", "_pic_read_iic");
            v12 = 0;
            logMessage(0, s, 0);
          }
        }
        else
        {
          v12 = 0;
          snprintf(
            s,
            0x800u,
            "%s failed! read_back_data[0] = 0x%02x, read_back_data[1] = 0x%02x, read_back_data[2] = 0x%02x\n\n",
            "_pic_read_iic",
            (unsigned __int8)src,
            BYTE1(src),
            BYTE2(src));
          logMessage(0, s, 0);
        }
        goto LABEL_10;
      }
      v13 = "%s read iic err\n";
    }
    else
    {
      v13 = "%s write iic err\n";
    }
    v12 = 0;
    snprintf(s, 0x800u, v13, "_pic_read_iic");
    logMessage(0, s, 0);
LABEL_10:
    pthread_mutex_unlock(&stru_50514C);
    return v12;
  }
  snprintf(s, 0x800u, "%s: select slave: 0x%02x, reg/command: 0x%02x is failed", "pic_read_iic", a2, a3);
  logMessage(0, s, 0);
  return v10;
}
