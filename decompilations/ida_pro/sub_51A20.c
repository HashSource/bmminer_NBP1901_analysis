int __fastcall sub_51A20(int a1, unsigned int a2, unsigned int a3, unsigned int a4, _DWORD *a5)
{
  unsigned int v5; // r6
  int v10; // r10
  unsigned int v12; // r6
  unsigned int v13; // r6
  _DWORD *v14; // r6

  v5 = (unsigned __int8)(a4 >> 2);
  if ( a2 > 3 )
    return -1;
  if ( a3 > 0xFF )
    return -2;
  if ( v5 > 0x3F )
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
        "get_register_cache_value",
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
    v14 = &dword_5059E0[2 * v12];
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
    v14 = &dword_5051C8[2 * v13];
  }
  *a5 = v14[1];
  pthread_mutex_unlock(&stru_5059C8);
  return 0;
}
