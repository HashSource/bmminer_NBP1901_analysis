int sub_48B7C()
{
  int v0; // r5
  int v1; // r6
  int v3; // [sp+8h] [bp-820h] BYREF
  __int16 v4; // [sp+Ch] [bp-81Ch]
  int v5; // [sp+10h] [bp-818h] BYREF
  int v6; // [sp+14h] [bp-814h]
  char s[2064]; // [sp+18h] [bp-810h] BYREF

  v0 = dword_505180;
  if ( dword_505180 || (v1 = sub_48ABC(), v1 >= 0) )
  {
    v6 = 0;
    v5 = 0;
    v3 = 168077909;
    v4 = 14;
    if ( sub_48520(dword_50517C, (unsigned __int8 *)&v3, 6u, (unsigned __int8 *)&v5, 8u) )
    {
      strcpy(s, "get power status failed\n");
      sub_2E584(0, s, 0);
      strcpy(s, "can nont get power status\n");
      sub_2E584(0, s, 0);
      return -2147482880;
    }
    return (unsigned __int16)v6;
  }
  else
  {
    snprintf(s, 0x800u, "%s: auto exec bitmain_power_open, but open power failed\n", "bitmain_get_power_status");
    sub_2E584(v0, s, v0);
  }
  return v1;
}
