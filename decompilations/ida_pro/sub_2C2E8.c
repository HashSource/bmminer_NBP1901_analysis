int __fastcall sub_2C2E8(int a1, int a2, int a3, int a4)
{
  int v7; // r0
  pthread_mutex_t *v8; // r10
  int v9; // r6
  int v10; // r8
  int v11; // r5
  int v12; // r3
  int *v13; // r6
  int v14; // r2
  int v15; // r10
  int v16; // r0
  int v17; // r0
  int v18; // r1
  unsigned int v19; // r6
  int v20; // r0
  int v21; // r1
  int v22; // r0
  int v23; // r0
  pthread_mutex_t *mutex; // [sp+Ch] [bp-854h]
  int v27; // [sp+18h] [bp-848h]
  unsigned int v28; // [sp+1Ch] [bp-844h]
  int v29; // [sp+20h] [bp-840h]
  int v30; // [sp+28h] [bp-838h] BYREF
  int v31[2]; // [sp+30h] [bp-830h] BYREF
  char s[2088]; // [sp+38h] [bp-828h] BYREF

  if ( sub_1E29C(a3) )
  {
    pthread_mutex_lock(&stru_810F4);
    sub_1629C();
    byte_8110C = 1;
    sub_2BDD0();
    if ( a1 == 2 )
    {
      v22 = sub_1E160();
      sub_50DC4((unsigned __int8)a3, a2 * v22, 2);
    }
    else
    {
      v7 = sub_1E160();
      if ( a1 == 6 )
        sub_50DA8((unsigned __int8)a3, a2 * v7);
      else
        sub_5193C((unsigned __int8)a3, a2 * v7, a1);
    }
    v8 = &stru_810DC;
    v27 = 0;
    v29 = 0;
    usleep((__useconds_t)&loc_186A0);
    do
    {
      pthread_mutex_lock(v8);
      v9 = dword_5945C0;
      v10 = dword_5945C0;
      if ( dword_5945C0 > 0 )
      {
        v11 = 0;
        mutex = v8;
        while ( 1 )
        {
          dword_5945C0 = v9 - 1;
          ++v11;
          v12 = dword_5945BC + 1;
          v13 = &dword_5945B8[2 * dword_5945BC + 2];
          if ( (unsigned int)(dword_5945BC + 1) > 0x1FE )
            v12 = 0;
          v14 = *((unsigned __int8 *)v13 + 11);
          dword_5945BC = v12;
          if ( v14 == a3
            && *((_BYTE *)v13 + 10) == 64
            && (v15 = *((unsigned __int8 *)v13 + 9), v16 = sub_1E160(), sub_5FAF8(v15, v16) == a2)
            && (v28 = *((unsigned __int16 *)v13 + 3),
                ++v27,
                v17 = sub_1E120(),
                sub_5FADC(v28, v17),
                !*(_DWORD *)(a4 + 4 * v18)) )
          {
            v19 = v13[1];
            ++v29;
            v20 = sub_1E120();
            sub_5FADC(HIWORD(v19), v20);
            *(_DWORD *)(a4 + 4 * v21) = (unsigned __int16)v19;
            if ( v10 == v11 )
            {
LABEL_20:
              v8 = mutex;
              pthread_mutex_unlock(mutex);
              goto LABEL_21;
            }
          }
          else if ( v10 == v11 )
          {
            goto LABEL_20;
          }
          v9 = dword_5945C0;
        }
      }
      pthread_mutex_unlock(v8);
      if ( !v9 )
        usleep(0x3E8u);
LABEL_21:
      sub_302A0(v31);
    }
    while ( (int)sub_30578(v31, &v30) <= 199 );
    if ( v29 != sub_1E120() && (unsigned int)globalLogLevel > 3 )
    {
      v23 = sub_1E120();
      snprintf(s, 0x800u, "recv core response not enough!!!, total recv::%d, valid::%d, need::%d.\n", v27, v29, v23);
      logMessage(3, s, 0);
    }
    byte_8110C = 0;
    sub_162B0();
    pthread_mutex_unlock(&stru_810F4);
    return 0;
  }
  else
  {
    if ( (unsigned int)globalLogLevel > 3 )
    {
      snprintf(s, 0x800u, "chain::%d don't exist!!!\n", a3);
      logMessage(3, s, 0);
    }
    return -1;
  }
}
