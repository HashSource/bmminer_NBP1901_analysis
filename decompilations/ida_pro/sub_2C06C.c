int __fastcall sub_2C06C(int a1, int a2, int a3)
{
  int v6; // r2
  int v7; // r9
  int v8; // r5
  unsigned int v9; // r3
  int *v10; // r1
  int v11; // r4
  int *v13; // [sp+1Ch] [bp-844h]
  char v14; // [sp+24h] [bp-83Ch]
  char v15; // [sp+28h] [bp-838h]
  int v16; // [sp+2Ch] [bp-834h]
  int v17; // [sp+30h] [bp-830h]
  int v18; // [sp+34h] [bp-82Ch]
  char s[2088]; // [sp+38h] [bp-828h] BYREF

  v14 = a1;
  v15 = a2;
  v16 = (unsigned __int8)a3;
  v18 = 5;
  pthread_mutex_lock(&stru_810F4);
  while ( 2 )
  {
    v17 = 8;
    sub_2BDD0();
    sub_1EC84(v16, 0, v15, v14);
    do
    {
      sub_304D4();
      pthread_mutex_lock(&stru_810DC);
      v6 = dword_5945C0;
      if ( dword_5945C0 )
      {
        v7 = dword_5945C0;
        v8 = 0;
        while ( 1 )
        {
          ++v8;
          dword_5945C0 = v6 - 1;
          v9 = dword_5945BC + 1;
          if ( (unsigned int)(dword_5945BC + 1) > 0x1FE )
            dword_5945BC = 0;
          v10 = &dword_5945B8[2 * v9];
          if ( v9 <= 0x1FE )
            dword_5945BC = v9;
          if ( *((unsigned __int8 *)v10 + 11) == a3
            && *((unsigned __int8 *)v10 + 9) == a2
            && *((unsigned __int8 *)v10 + 10) == a1 )
          {
            break;
          }
          if ( (unsigned int)globalLogLevel > 3 )
          {
            snprintf(
              s,
              0x800u,
              "read asic reg error: expect chain = %d, chip = %d, reg = %d, got chain = %d, chip = %d, reg = %d\n",
              a3,
              a2,
              a1,
              *((unsigned __int8 *)v10 + 11),
              BYTE1(dword_5945B8[2 * v9 + 2]),
              BYTE2(dword_5945B8[2 * v9 + 2]));
            logMessage(3, s, 0);
            if ( v7 == v8 )
              goto LABEL_20;
          }
          else if ( v7 == v8 )
          {
            goto LABEL_20;
          }
          v6 = dword_5945C0;
        }
        if ( a1 == 28 )
        {
          v11 = v10[1];
          if ( (v11 & 0xE0000000) != 0 )
            v11 = 0;
          pthread_mutex_unlock(&stru_810DC);
          sub_2BDD0();
          pthread_mutex_unlock(&stru_810F4);
          return v11;
        }
        else
        {
          v13 = &dword_5945B8[2 * v9];
          pthread_mutex_unlock(&stru_810DC);
          sub_2BDD0();
          pthread_mutex_unlock(&stru_810F4);
          return v13[1];
        }
      }
LABEL_20:
      pthread_mutex_unlock(&stru_810DC);
      --v17;
    }
    while ( v17 );
    if ( --v18 )
      continue;
    break;
  }
  if ( (unsigned int)globalLogLevel > 4 )
  {
    snprintf(s, 0x800u, "read asic reg timeout: expect chain = %d, chip = %d, reg = %d\n", a3, a2, a1);
    logMessage(4, s, 0);
  }
  sub_2BDD0();
  pthread_mutex_unlock(&stru_810F4);
  return 0;
}
