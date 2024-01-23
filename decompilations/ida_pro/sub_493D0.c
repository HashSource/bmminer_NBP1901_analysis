int __fastcall sub_493D0(int a1)
{
  int v2; // r0
  int v3; // r5
  int v4; // r0
  char v6[2072]; // [sp+0h] [bp-818h] BYREF

  if ( pthread_mutex_lock(&stru_505188) )
  {
    v3 = -4;
    strcpy(v6, "failed to iic lock\n");
    logMessage(0, v6, 0);
    return v3;
  }
  if ( a1 )
  {
    v2 = sub_49904();
    v3 = v2;
    if ( v2 < 0 )
    {
      v3 = -1;
      strcpy(v6, "failed to i2c_init\n");
      logMessage(0, v6, 0);
    }
    else
    {
      if ( sub_4A3EC(v2, *(unsigned __int16 *)(a1 + 4)) )
      {
        strcpy(v6, "failed to i2c_select\n");
        logMessage(0, v6, 0);
        goto LABEL_6;
      }
      if ( sub_4A2D8(v3, 1795, (2 * *(unsigned __int8 *)(a1 + 7)) | (16 * *(unsigned __int8 *)(a1 + 6))) )
      {
        strcpy(v6, "failed to i2c_ioctl\n");
        logMessage(0, v6, 0);
LABEL_6:
        if ( v3 )
        {
          v4 = v3;
          v3 = -1;
          sub_499E8(v4);
        }
        else
        {
          v3 = -1;
        }
      }
    }
  }
  else
  {
    v3 = -3;
    strcpy(v6, "bad param\n");
    logMessage(0, v6, 0);
  }
  pthread_mutex_unlock(&stru_505188);
  return v3;
}
