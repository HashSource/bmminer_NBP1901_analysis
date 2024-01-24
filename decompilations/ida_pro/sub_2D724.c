_BYTE *__fastcall sub_2D724(const char *a1, int a2, int a3, int a4, char a5, const char *a6, const char *a7, int a8)
{
  _BYTE *v12; // r4
  char *v13; // r5
  int *v15; // r0
  int *v16; // r0
  char s[2080]; // [sp+10h] [bp-820h] BYREF

  if ( a3 <= 0 )
  {
    snprintf(
      s,
      0x800u,
      "Invalid new list %s with allocate %d must be > 0 in %s %s():%d",
      a1,
      a3,
      "klist.c",
      "_k_new_list",
      100);
    logMessage(3, s, 1);
    nullsub_1(1);
    if ( a4 >= 0 )
      goto LABEL_3;
  }
  else if ( a4 >= 0 )
  {
    goto LABEL_3;
  }
  snprintf(
    s,
    0x800u,
    "Invalid new list %s with limit %d must be >= 0 in %s %s():%d",
    a1,
    a4,
    "klist.c",
    "_k_new_list",
    103);
  logMessage(3, s, 1);
  nullsub_1(1);
LABEL_3:
  v12 = calloc(1u, 0x40u);
  if ( !v12 )
  {
    snprintf(s, 0x800u, "Failed to calloc list %s in %s %s():%d", a1, "klist.c", "_k_new_list", 107);
    logMessage(3, s, 1);
    nullsub_1(1);
  }
  v12[4] = 0;
  v13 = (char *)calloc(1u, 0x38u);
  *((_DWORD *)v12 + 2) = v13;
  if ( !v13 )
  {
    snprintf(s, 0x800u, "Failed to calloc lock for list %s in %s %s():%d", a1, "klist.c", "_k_new_list", 113);
    logMessage(3, s, 1);
    nullsub_1(1);
    v13 = (char *)*((_DWORD *)v12 + 2);
  }
  if ( pthread_mutex_init((pthread_mutex_t *)v13, 0) )
  {
    v16 = _errno_location();
    snprintf(s, 0x800u, "Failed to pthread_mutex_init errno=%d in %s %s():%d", *v16, "klist.c", "_k_new_list", 115);
    logMessage(3, s, 1);
    nullsub_1(1);
  }
  if ( pthread_rwlock_init((pthread_rwlock_t *)(v13 + 24), 0) )
  {
    v15 = _errno_location();
    snprintf(s, 0x800u, "Failed to pthread_rwlock_init errno=%d in %s %s():%d", *v15, "klist.c", "_k_new_list", 115);
    logMessage(3, s, 1);
    nullsub_1(1);
  }
  *(_DWORD *)v12 = a1;
  *((_DWORD *)v12 + 5) = a2;
  *((_DWORD *)v12 + 9) = a3;
  *((_DWORD *)v12 + 10) = a4;
  v12[44] = a5;
  sub_2D340((const char **)v12, a6, a7, a8);
  return v12;
}
