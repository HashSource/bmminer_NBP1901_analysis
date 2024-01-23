int sub_1B398()
{
  int v0; // r6
  size_t v1; // r7
  void *v2; // r5
  void *v3; // r0
  int v4; // r3
  int v5; // r6
  char v7[2072]; // [sp+0h] [bp-818h] BYREF

  v0 = dword_58DFBC;
  v1 = dword_58E004;
  v2 = calloc(dword_58DFBC, 0x210u);
  dword_58E018 = (int)v2;
  if ( v2 )
  {
    v3 = calloc(v1, 8u);
    v5 = (int)v3;
    if ( v3 )
      v4 = 1;
    dword_58E020 = (int)v3;
    if ( v3 )
    {
      dword_58E010 = v4;
      return 0;
    }
    else
    {
      if ( (unsigned int)globalLogLevel > 3 )
      {
        snprintf(v7, 0x800u, "malloc %d runtime_fan failed\n", v1);
        logMessage(3, v7, v5);
        v2 = (void *)dword_58E018;
      }
      free(v2);
      return -2147482624;
    }
  }
  else
  {
    if ( (unsigned int)globalLogLevel > 3 )
    {
      snprintf(v7, 0x800u, "malloc %d runtime_chain failed\n", v0);
      logMessage(3, v7, 0);
    }
    return -2147482624;
  }
}
