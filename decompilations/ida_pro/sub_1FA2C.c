int __fastcall sub_1FA2C(int result)
{
  _DWORD *v1; // r7
  _DWORD *v2; // r5
  int v3; // r6
  int v4; // r4
  int v5; // r0
  int v6; // r0
  _DWORD *v7; // r0
  char v8[2072]; // [sp+0h] [bp-818h] BYREF

  v1 = (_DWORD *)result;
  if ( result )
  {
    v2 = sub_4E540();
    v3 = sub_1E2FC();
    if ( v3 > 0 )
    {
      v4 = 0;
      do
      {
        v5 = v4++;
        v6 = sub_1E43C(v5);
        v7 = (_DWORD *)sub_4E990(v6);
        sub_4F494(v2, v7);
      }
      while ( v3 != v4 );
    }
    return sub_4EFD4(v1, "fan", v2);
  }
  else if ( loggingDebug || loggingVerbose || loggingThreshold > 2 )
  {
    snprintf(v8, 0x800u, "%s: input bad json param\n", "api_miner_fan_speed");
    return logMessage(3, v8, 0);
  }
  return result;
}
