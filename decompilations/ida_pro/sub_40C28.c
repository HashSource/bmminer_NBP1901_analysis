int __fastcall sub_40C28(int a1, _BYTE *a2)
{
  int v4; // r4
  int v5; // r0
  int v6; // r5
  int buf; // [sp+Ch] [bp-85Ch] BYREF
  char s[64]; // [sp+10h] [bp-858h] BYREF
  char v10[2072]; // [sp+50h] [bp-818h] BYREF

  buf = 0;
  v4 = pthread_mutex_lock(&stru_504CC8);
  if ( v4 )
  {
    v4 = -1;
    strcpy(v10, "failed to api lock\n");
    logMessage(0, v10, 0);
  }
  else
  {
    snprintf(s, 0x40u, "/sys/class/gpio/gpio%d/value", a1);
    v5 = open64(s);
    v6 = v5;
    if ( v5 < 0 )
    {
      snprintf(v10, 0x800u, "Failed to open gpio %d value for reading!\n", a1);
      v4 = -2;
      logMessage(0, v10, 0);
      pthread_mutex_unlock(&stru_504CC8);
    }
    else if ( read(v5, &buf, 4u) < 0 )
    {
      strcpy(v10, "Failed to read value!\n");
      v4 = -3;
      logMessage(0, v10, 0);
      close(v6);
      pthread_mutex_unlock(&stru_504CC8);
    }
    else
    {
      close(v6);
      pthread_mutex_unlock(&stru_504CC8);
      *a2 = strtol((const char *)&buf, 0, 10);
    }
  }
  return v4;
}
