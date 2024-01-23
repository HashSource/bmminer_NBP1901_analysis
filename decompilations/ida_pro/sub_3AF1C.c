void sub_3AF1C()
{
  unsigned int v0; // r3
  const char *v1; // r6
  const char *v2; // r12
  char s[2072]; // [sp+8h] [bp-818h] BYREF

  if ( (unsigned int)globalLogLevel <= 3 )
    return;
  snprintf(s, 0x800u, "%-40s : %d\n", "voltage", **(_DWORD **)dword_4FCB40);
  sub_2EA54(3, s, 0);
  if ( (unsigned int)globalLogLevel > 3 )
  {
    snprintf(s, 0x800u, "%-40s : %d\n", "freq_base", *(_DWORD *)(*(_DWORD *)dword_4FCB40 + 4));
    sub_2EA54(3, s, 0);
    if ( (unsigned int)globalLogLevel <= 3 )
      return;
    snprintf(s, 0x800u, "%-40s : %d\n", "freq_threshold", *(_DWORD *)(*(_DWORD *)dword_4FCB40 + 8));
    sub_2EA54(3, s, 0);
    if ( (unsigned int)globalLogLevel <= 3 )
      goto LABEL_16;
    snprintf(s, 0x800u, "%-40s : %d\n", "freq_serial_threshold", *(_DWORD *)(*(_DWORD *)dword_4FCB40 + 12));
    sub_2EA54(3, s, 0);
    if ( (unsigned int)globalLogLevel <= 3 )
      return;
    snprintf(s, 0x800u, "%-40s : %d\n", "freq_step", *(_DWORD *)(*(_DWORD *)dword_4FCB40 + 16));
    sub_2EA54(3, s, 0);
  }
  v0 = globalLogLevel;
  if ( (unsigned int)globalLogLevel <= 3 )
  {
LABEL_19:
    if ( v0 > 3 )
    {
      snprintf(s, 0x800u, "%-40s : %.2f\n", "nonce_rate_threshold", *(float *)(*(_DWORD *)dword_4FCB40 + 32));
      sub_2EA54(3, s, 0);
      if ( (unsigned int)globalLogLevel > 3 )
      {
        snprintf(s, 0x800u, "%-40s : %.2f\n", "nonce_rate_dec_threshold", *(float *)(*(_DWORD *)dword_4FCB40 + 36));
        sub_2EA54(3, s, 0);
      }
    }
    return;
  }
  v1 = "false";
  if ( *(_BYTE *)(*(_DWORD *)dword_4FCB40 + 20) )
    v2 = "true";
  else
    v2 = "false";
  snprintf(s, 0x800u, "%-40s : %s\n", "is_inc_freq_with_high_vol", v2);
  sub_2EA54(3, s, 0);
  if ( (unsigned int)globalLogLevel > 3 )
  {
    if ( *(_BYTE *)(*(_DWORD *)dword_4FCB40 + 21) )
      v1 = "true";
    snprintf(s, 0x800u, "%-40s : %s\n", "is_inc_freq_with_high_vol_runtime", v1);
    sub_2EA54(3, s, 0);
LABEL_16:
    if ( (unsigned int)globalLogLevel <= 3 )
      return;
    snprintf(s, 0x800u, "%-40s : %d\n", "is_board_init_with_power_off", *(_DWORD *)(*(_DWORD *)dword_4FCB40 + 24));
    sub_2EA54(3, s, 0);
    if ( (unsigned int)globalLogLevel <= 3 )
      return;
    snprintf(s, 0x800u, "%-40s : %.4f\n", "hw_threshold", *(float *)(*(_DWORD *)dword_4FCB40 + 28));
    sub_2EA54(3, s, 0);
    v0 = globalLogLevel;
    goto LABEL_19;
  }
}
