int __fastcall sub_42528(unsigned int a1, int a2)
{
  int *v3; // r6
  int *v4; // r4
  int v5; // r5
  int *v7; // [sp+Ch] [bp-81Ch] BYREF
  _DWORD v8[518]; // [sp+10h] [bp-818h] BYREF

  v3 = (int *)sub_42388(a1);
  if ( v3 )
  {
    if ( pthread_mutex_lock(&stru_504FEC) )
    {
      v5 = -1;
      strcpy((char *)v8, "failed to api lock\n");
      logMessage(0, (const char *)v8, 0);
    }
    else
    {
      v4 = (int *)dword_505004;
      if ( a2 == 1 )
      {
        sub_42180(v3, (int *)dword_505004);
        v5 = sub_40ED4((int)v3, 0);
      }
      else if ( a2 == 2 )
      {
        v7 = v3;
        if ( dword_505004 && !sub_43338((int *)dword_505004, (int)&v7) )
        {
          v8[1] = 0;
          v5 = -1;
          v8[0] = 200;
          v8[2] = 1;
          sub_43320(v4, &v7, 4u, v8, 0xCu);
        }
        else
        {
          v5 = -1;
        }
      }
      else
      {
        sub_42180(v3, (int *)dword_505004);
        v5 = sub_40ED4((int)v3, 1);
      }
      pthread_mutex_unlock(&stru_504FEC);
    }
  }
  else
  {
    v5 = -1;
    strcpy((char *)v8, "unsuported gpio port\n");
    logMessage(0, (const char *)v8, 0);
  }
  return v5;
}
