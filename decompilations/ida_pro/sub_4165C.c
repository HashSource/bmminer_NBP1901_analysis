int __fastcall sub_4165C(int a1)
{
  pthread_mutex_t *v1; // r7
  int v3; // r4
  unsigned int v4; // r3
  int v6; // [sp+Ch] [bp-82Ch] BYREF
  int v7; // [sp+10h] [bp-828h] BYREF
  int v8; // [sp+14h] [bp-824h] BYREF
  unsigned int v9; // [sp+18h] [bp-820h] BYREF
  int v10; // [sp+1Ch] [bp-81Ch] BYREF
  char s[2072]; // [sp+20h] [bp-818h] BYREF

  v1 = (pthread_mutex_t *)((char *)&unk_504CE8 + 24 * a1);
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  pthread_mutex_lock(v1);
  if ( sub_41250(a1, &v10, &v6, &v7, &v8) )
  {
    snprintf(s, 0x800u, "get_send_address_info error, chain_id = %d\n", a1);
  }
  else
  {
    v3 = 21;
    do
    {
      sub_40314(v6, &v9);
      v4 = (unsigned __int8)(v9 >> v10);
      v9 = v4;
      if ( v4 == 255 )
        return pthread_mutex_unlock(v1);
      printf("%s: waiting fpga uart%d clear send fifo space ...\n", "clear_uart_tx_fifo", a1);
      sub_40390(v7, v9 | 0x80000000);
      usleep(0xBB8u);
      --v3;
    }
    while ( v3 );
    snprintf(s, 0x800u, "%s: uart%d always dose not has enough send fifo space, break\n", "clear_uart_tx_fifo", a1);
  }
  logMessage(0, s, 0);
  return pthread_mutex_unlock(v1);
}
