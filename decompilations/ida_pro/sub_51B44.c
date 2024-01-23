int __fastcall sub_51B44(int a1, unsigned int a2, unsigned int a3, unsigned int a4, int a5)
{
  unsigned int v5; // r4
  int v10; // r4
  unsigned int v12; // r4
  unsigned int v13; // r2
  unsigned int v14; // r3
  char *v15; // r2
  char *v16; // r3

  if ( a2 > 3 )
    return -1;
  if ( a3 > 0xFF )
    return -2;
  v5 = a4 >> 2;
  if ( a4 >> 2 > 0x40 )
    return -3;
  pthread_mutex_lock(&stru_5059C8);
  if ( a1 )
  {
    if ( a1 != 1 )
    {
      v10 = -6;
      pthread_mutex_unlock(&stru_5059C8);
LABEL_7:
      printf(
        "[%s] level::%d, which_chain::%u, which_asic::%u, register_address::%02x failed.\r\n",
        "set_register_cache_value",
        a1,
        a2,
        a3,
        a4);
      return v10;
    }
    v12 = v5 + ((a3 + (a2 << 8)) << 6);
    if ( dword_5059E0[2 * v12] != a4 )
    {
      v10 = -5;
      pthread_mutex_unlock(&stru_5059C8);
      goto LABEL_7;
    }
    dword_5059E0[2 * v12 + 1] = a5;
    pthread_mutex_unlock(&stru_5059C8);
    return 0;
  }
  else
  {
    v13 = v5 + (a2 << 6);
    if ( dword_5051C8[2 * v13] != a4 )
    {
      v10 = -4;
      pthread_mutex_unlock(&stru_5059C8);
      goto LABEL_7;
    }
    v14 = 2 * (v5 + (a2 << 14));
    dword_5051C8[2 * v13 + 1] = a5;
    v15 = (char *)&unk_5259E0 + v14 * 4;
    v16 = (char *)&dword_5059E0[v14];
    do
    {
      *((_DWORD *)v16 + 1) = a5;
      v16 += 512;
    }
    while ( v16 != v15 );
    pthread_mutex_unlock(&stru_5059C8);
    return 0;
  }
}
