int __fastcall sub_492A4(__int16 a1, int a2, int a3)
{
  int v4; // r8
  int v5; // r5
  char *v7; // r0
  int v8; // r3
  int v9; // r4
  char v10; // t1
  int v12; // [sp+Ch] [bp-82Ch] BYREF
  char v13; // [sp+10h] [bp-828h]
  char v14; // [sp+11h] [bp-827h]
  __int16 v15; // [sp+12h] [bp-826h]
  int v16; // [sp+14h] [bp-824h] BYREF
  int v17[2]; // [sp+18h] [bp-820h] BYREF
  char s[2072]; // [sp+20h] [bp-818h] BYREF

  v4 = dword_505180;
  v5 = 0;
  v13 = a1;
  v14 = a3;
  v15 = a3 + 12 + a1;
  v17[0] = 0;
  v17[1] = 0;
  v16 = 0;
  v12 = 101100117;
  if ( dword_505180 || (v5 = sub_48ABC(), v5 >= 0) )
  {
    if ( sub_48520(dword_50517C, (unsigned __int8 *)&v12, 8u, (unsigned __int8 *)&v16, a3 + 7) )
    {
      v5 = -2147482880;
      strcpy(s, "set DA conversion N failed\n");
      sub_2E584(0, s, 0);
    }
    else if ( a3 )
    {
      v7 = (char *)v17 + 1;
      v8 = a2 - 1;
      v9 = a2 + (unsigned __int8)(a3 - 1);
      do
      {
        v10 = *v7++;
        *(_BYTE *)++v8 = v10;
      }
      while ( v8 != v9 );
    }
  }
  else
  {
    snprintf(s, 0x800u, "%s: auto exec bitmain_power_open, but open power failed\n", "bitmain_power_read");
    sub_2E584(v4, s, v4);
  }
  return v5;
}
