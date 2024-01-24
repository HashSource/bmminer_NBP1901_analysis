int sub_14FA4()
{
  int v0; // r4
  int v1; // r6
  int v2; // r8
  char *v3; // r9
  _DWORD *v4; // r4
  char *v5; // r0
  _DWORD *v6; // r3
  int v7; // r2
  char *v8; // r4
  _DWORD *v9; // r6
  char *v10; // r1
  int v11; // r12
  int v12; // r4
  int v13; // r0
  int v14; // r6
  int v15; // r0
  int v16; // r4
  pthread_attr_t v18[57]; // [sp+0h] [bp-820h] BYREF

  v0 = sub_14434();
  if ( v0 <= sub_1E19C() )
    v1 = sub_1E19C();
  else
    v1 = sub_14434();
  if ( (unsigned int)globalLogLevel > 3 )
  {
    snprintf(v18[0].__size, 0x800u, "max sensor num = %d", v1);
    logMessage(3, v18[0].__size, 0);
  }
  v2 = 72 * v1;
  v3 = (char *)malloc(0x10u);
  dword_7F7B8 = (int)v3;
  v4 = malloc(0x30u);
  v5 = (char *)calloc(72 * v1, 1u);
  v6 = v4;
  v7 = 6 * v1;
  v8 = v3 - 4;
  v9 = v6 + 12;
  v10 = v5;
  do
  {
    *((_DWORD *)v8 + 1) = v6;
    v8 += 4;
    v11 = (int)&v10[v7 + v7];
    *v6 = v10;
    v6[1] = &v10[v7];
    v6[2] = v11;
    v6 += 3;
    v10 = (char *)(v7 + v11);
  }
  while ( v9 != v6 );
  v12 = 0;
  dword_7F7D8 = (int)&v5[v2];
  v13 = sub_14434();
  dword_7F7B4 = (int)malloc(4 * v13);
  while ( sub_14434() > v12 )
  {
    v14 = dword_7F7B4;
    *(_DWORD *)(v14 + 4 * v12) = sub_1E180(v12);
    ++v12;
  }
  v15 = sub_1E19C();
  v16 = 0;
  dword_7F7DC = (int)malloc(v15);
  while ( sub_1E19C() > v16 )
  {
    *(_BYTE *)(dword_7F7DC + v16) = sub_1E1AC(v16);
    ++v16;
  }
  pthread_attr_init(v18);
  pthread_attr_setstacksize(v18, 0x100000u);
  dword_7F7E0 = 1;
  pthread_create(&newthread, v18, (void *(*)(void *))monitorTemperatureThread, 0);
  return pthread_detach(newthread);
}
