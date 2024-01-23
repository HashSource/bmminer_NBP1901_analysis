int __fastcall sub_48520(int a1, unsigned __int8 *a2, unsigned int a3, unsigned __int8 *a4, unsigned int a5)
{
  unsigned int v7; // r4
  unsigned int v8; // r3
  unsigned int v9; // r4
  unsigned int v10; // r3
  unsigned __int8 *v11; // r1
  int v12; // r3
  __int16 v13; // t1
  unsigned __int8 *v14; // r4
  int v15; // r5
  int v16; // t1
  int v17; // r3
  int v18; // r4
  int v20; // [sp+0h] [bp-830h]
  int v22; // [sp+10h] [bp-820h]
  unsigned __int8 *v24; // [sp+20h] [bp-810h]
  unsigned __int8 *v25; // [sp+24h] [bp-80Ch]
  unsigned __int8 *v26; // [sp+2Ch] [bp-804h]
  unsigned __int8 v27; // [sp+37h] [bp-7F9h] BYREF
  char s[2052]; // [sp+38h] [bp-7F8h] BYREF

  v26 = a4 + 1;
  v27 = 17;
  pthread_mutex_lock(&stru_505164);
  v25 = &a4[a5 - 2];
  v24 = &a4[a5 - 1];
  v22 = 0;
  while ( 1 )
  {
    LOBYTE(v7) = 0;
    v8 = 0;
    do
    {
      v7 = (unsigned __int8)(v7 + 1);
      sub_49794(a1, &v27, 1, (int)&a2[v8], 1);
      v8 = v7;
    }
    while ( v7 < a3 );
    LOBYTE(v9) = 0;
    usleep((__useconds_t)"version array failed\n");
    v10 = 0;
    do
    {
      v9 = (unsigned __int8)(v9 + 1);
      sub_496F4(a1, &v27, 1, (int)&a4[v10], 1);
      v10 = v9;
    }
    while ( v9 < a5 );
    usleep(0x186A0u);
    v11 = v26;
    LOWORD(v12) = 0;
    do
    {
      v13 = *++v11;
      v12 = (unsigned __int16)(v12 + v13);
    }
    while ( &a4[a5 - 3] != v11 );
    if ( v12 != (unsigned __int16)(*v25 + (*v24 << 8)) )
    {
      snprintf(
        s,
        0x800u,
        "power reply the bad crc, crc = 0x%04x, crc_read = 0x%04x\n",
        v12,
        (unsigned __int16)(*v25 + (*v24 << 8)));
      sub_2E584(0, s, 0);
      goto LABEL_10;
    }
    if ( *a2 == *a4 && a2[1] == a4[1] && a2[3] == a4[3] && a5 == a4[2] + 2 )
      break;
    strcpy(s, "power reply the bad data\n");
    sub_2E584(0, s, 0);
LABEL_10:
    v14 = a4 - 1;
    v15 = 0;
    do
    {
      v16 = *++v14;
      v17 = v15++;
      snprintf(s, 0x800u, "read_back_data[%d] = 0x%02x", v17, v16);
      sub_2E584(0, s, 0);
    }
    while ( &a4[a5 - 1] != v14 );
    v20 = v22++;
    snprintf(s, 0x800u, "Send power cmd(0x%02x) failed, retry %d\n", a2[3], v20);
    sub_2E584(0, s, 0);
    if ( v22 == 3 )
    {
      v18 = -2147482880;
      goto LABEL_14;
    }
  }
  v18 = 0;
LABEL_14:
  pthread_mutex_unlock(&stru_505164);
  return v18;
}
