int __fastcall sub_477EC(unsigned int a1, __int16 a2, __int16 a3, void *a4, int a5)
{
  int v9; // r7
  int v10; // r8
  unsigned __int8 *v11; // r0
  int v12; // r2
  int v13; // r4
  unsigned __int8 *v14; // r6
  const char *v15; // r2
  int v17; // r3
  int v18; // r8
  __int16 v19; // r0
  unsigned int v20; // r3
  unsigned int v21; // r2
  int v22; // r3
  unsigned __int8 *v23; // r7
  int v24; // [sp+14h] [bp-834h] BYREF
  char v25; // [sp+18h] [bp-830h]
  char v26; // [sp+19h] [bp-82Fh]
  char v27; // [sp+1Ah] [bp-82Eh]
  char v28; // [sp+1Bh] [bp-82Dh]
  char v29; // [sp+1Ch] [bp-82Ch]
  char s[2088]; // [sp+20h] [bp-828h] BYREF

  if ( a1 > 0xF )
  {
    snprintf(s, 0x800u, "%s: Bad pic param, input chain is %d\n", "app_read_data_from_flash", a1);
    v13 = -2147483135;
    logMessage(0, s, 0);
    return v13;
  }
  if ( !dword_99EE48[2 * a1 + 1] )
  {
    v13 = sub_46024(a1);
    if ( v13 < 0 )
    {
      snprintf(s, 0x800u, "%s: auto exec open_pic, but chain %d open eeprom failed\n", "app_read_data_from_flash", a1);
      logMessage(0, s, 0);
      return v13;
    }
  }
  v9 = a5 + 5;
  v10 = dword_99EE48[2 * a1];
  pthread_mutex_lock(&stru_50514C);
  v11 = (unsigned __int8 *)malloc(a5 + 5);
  LOWORD(v12) = -21931;
  if ( a5 >= 16 )
    v13 = 16;
  else
    v13 = a5;
  HIWORD(v12) = 13831;
  v24 = v12;
  v14 = v11;
  v25 = a2;
  v26 = a3;
  v27 = v13;
  v29 = v13 + 61 + a3 + a2;
  v28 = (unsigned __int16)(v13 + 61 + a3 + a2) >> 8;
  if ( sub_4966C(v10, (int)&v24, 9) == 9 )
  {
    usleep(0x493E0u);
    if ( v9 == sub_495E4(v10, v14, a5 + 5) )
    {
      v17 = v14[1];
      v18 = *v14;
      v19 = *v14;
      if ( v17 == 54 && v14[2] == 1 && v9 == v18 )
      {
        if ( a5 + 3 > 0 )
        {
          LOWORD(v21) = 0;
          LOWORD(v22) = 0;
          while ( 1 )
          {
            v22 = (unsigned __int16)(v22 + 1);
            v21 = (unsigned __int16)(v21 + v19);
            if ( v22 >= a5 + 3 )
              break;
            v19 = v14[v22];
          }
          v20 = v21 >> 8;
        }
        else
        {
          v20 = 0;
          LOBYTE(v21) = 0;
        }
        v23 = &v14[v9];
        if ( *(v23 - 2) == v20 && *(v23 - 1) == (unsigned __int8)v21 )
        {
          memcpy(a4, v14 + 3, v13);
        }
        else
        {
          v13 = 0;
          snprintf(s, 0x800u, "%s failed 2!\n", "_app_read_data_from_flash_1704_v8");
          logMessage(0, s, 0);
          sub_46FE8(v14, v18);
        }
      }
      else
      {
        snprintf(
          s,
          0x800u,
          "%s failed !\n read_back_data[0] = 0x%x, read_back_data[1] = 0x%x, read_back_data[2] = 0x%x\n",
          "_app_read_data_from_flash_1704_v8",
          v18,
          v17,
          v14[2]);
        v13 = 0;
        logMessage(0, s, 0);
        sub_46FE8(v14, a5 + 5);
      }
      goto LABEL_9;
    }
    v15 = "%s read iic 2 err\n";
  }
  else
  {
    v15 = "%s write iic 2 err\n";
  }
  v13 = 0;
  snprintf(s, 0x800u, v15, "_app_read_data_from_flash_1704_v8");
  logMessage(0, s, 0);
LABEL_9:
  free(v14);
  pthread_mutex_unlock(&stru_50514C);
  return v13;
}
