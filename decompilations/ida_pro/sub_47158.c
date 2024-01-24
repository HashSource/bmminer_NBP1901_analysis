int __fastcall sub_47158(unsigned int a1, _DWORD *a2, int a3)
{
  int v6; // r5
  int v7; // r5
  unsigned int v8; // r3
  unsigned __int16 v9; // r2
  int v11; // r5
  __int16 v12; // r1
  int *v13; // r2
  unsigned int v14; // r3
  __int16 v15; // t1
  unsigned __int16 v16; // r2
  unsigned __int16 v17; // r3
  int v18; // [sp+14h] [bp-834h] BYREF
  char v19; // [sp+18h] [bp-830h]
  char v20; // [sp+19h] [bp-82Fh]
  int v21[3]; // [sp+1Ch] [bp-82Ch] BYREF
  char s[2080]; // [sp+28h] [bp-820h] BYREF

  if ( a1 > 0xF )
  {
    snprintf(s, 0x800u, "%s: Bad pic param, input chain is %d\n", "pic_get_voltage", a1);
    v7 = -2147483135;
    logMessage(0, s, 0);
    return v7;
  }
  if ( !dword_99EE48[2 * a1 + 1] )
  {
    v7 = sub_46024(a1);
    if ( v7 < 0 )
    {
      snprintf(s, 0x800u, "%s: auto exec open_pic, but chain %d open eeprom failed\n", "pic_get_voltage", a1);
      logMessage(0, s, 0);
      return v7;
    }
  }
  if ( a3 == 3 )
  {
    pthread_mutex_lock(&stru_50514C);
    v11 = dword_99EE48[2 * a1];
    v19 = 0;
    v18 = 923052629;
    memset(v21, 0, 11);
    v20 = 59;
    if ( sub_4966C(v11, (int)&v18, 6) != 6 )
    {
      snprintf(s, 0x800u, "%s write iic err\n", "_read_an_voltage");
      goto LABEL_33;
    }
    usleep(0x493E0u);
    v7 = sub_495E4(v11, v21, 11);
    if ( v7 != 11 )
    {
      snprintf(s, 0x800u, "%s read iic err\n", "_read_an_voltage");
      goto LABEL_33;
    }
    v12 = LOBYTE(v21[0]);
    if ( LOBYTE(v21[0]) != 11 || BYTE1(v21[0]) != 55 )
    {
      snprintf(
        s,
        0x800u,
        "%s failed! read_back_data[0] = 0x%02x, read_back_data[1] = 0x%02x\n\n",
        "_read_an_voltage",
        LOBYTE(v21[0]),
        BYTE1(v21[0]));
      v7 = -1;
      logMessage(0, s, 0);
      goto LABEL_16;
    }
    v13 = v21;
    LOWORD(v14) = 0;
    while ( 1 )
    {
      v14 = (unsigned __int16)(v14 + v12);
      if ( v13 == &v21[2] )
        break;
      v15 = *((unsigned __int8 *)v13 + 1);
      v13 = (int *)((char *)v13 + 1);
      v12 = v15;
    }
    if ( BYTE1(v21[2]) != v14 >> 8 || BYTE2(v21[2]) != (unsigned __int8)v14 )
    {
      snprintf(s, 0x800u, "%s failed 2!\n", "_read_an_voltage");
      goto LABEL_33;
    }
    v16 = __rev16(*(unsigned __int16 *)((char *)&v21[1] + 1));
    v17 = __rev16(*(unsigned __int16 *)((char *)&v21[1] + 3));
    *a2 = (unsigned __int16)__rev16(*(unsigned __int16 *)((char *)v21 + 3));
    a2[1] = v16;
    a2[2] = v17;
  }
  else
  {
    if ( a3 != 1 )
    {
      v7 = -2147483135;
      snprintf(s, 0x800u, "%s failed: parameters error!\n", "pic_get_voltage");
      logMessage(0, s, 0);
      return v7;
    }
    pthread_mutex_lock(&stru_50514C);
    v6 = dword_99EE48[2 * a1];
    v19 = 0;
    v21[0] = 0;
    v18 = 973384277;
    *(int *)((char *)v21 + 3) = 0;
    v20 = 62;
    if ( sub_4966C(v6, (int)&v18, 6) != 6 )
    {
      snprintf(s, 0x800u, "%s write iic err\n", "_read_an6_voltage");
LABEL_33:
      v7 = -1;
      logMessage(0, s, 0);
      goto LABEL_16;
    }
    usleep(0x493E0u);
    v7 = sub_495E4(v6, v21, 7);
    if ( v7 != 7 )
    {
      snprintf(s, 0x800u, "%s read iic err\n", "_read_an6_voltage");
      goto LABEL_33;
    }
    if ( LOBYTE(v21[0]) != 7 || BYTE1(v21[0]) != 58 || BYTE2(v21[0]) != 1 )
    {
      snprintf(
        s,
        0x800u,
        "%s failed! read_back_data[0] = 0x%02x, read_back_data[1] = 0x%02x, read_back_data[2] = 0x%02x\n\n",
        "_read_an6_voltage",
        LOBYTE(v21[0]),
        BYTE1(v21[0]),
        BYTE2(v21[0]));
      v7 = -1;
      logMessage(0, s, 0);
      goto LABEL_16;
    }
    v8 = HIBYTE(v21[0]) + LOBYTE(v21[1]) + 66;
    v9 = __rev16(*(unsigned __int16 *)((char *)v21 + 3));
    if ( BYTE1(v21[1]) != v8 >> 8 || BYTE2(v21[1]) != (unsigned __int8)v8 )
    {
      snprintf(s, 0x800u, "%s failed 2!\n", "_read_an6_voltage");
      goto LABEL_33;
    }
    *a2 = v9;
  }
LABEL_16:
  pthread_mutex_unlock(&stru_50514C);
  return v7;
}
