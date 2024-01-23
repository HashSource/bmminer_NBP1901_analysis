int sub_33E34()
{
  int v0; // r4
  int v1; // r0
  int v3; // r0
  const char *v4; // r0
  char v5[2064]; // [sp+0h] [bp-810h] BYREF

  sub_323DC();
  sub_446DC();
  v0 = sub_13DA4(0xFA0u, 1);
  if ( v0 )
    return v0;
  if ( (unsigned int)globalLogLevel > 3 )
  {
    strcpy(v5, "Fan check passed.\n");
    sub_2E584(3, v5, 0);
    v0 = sub_3204C();
    if ( !v0 )
      goto LABEL_4;
  }
  else
  {
    v0 = sub_3204C();
    if ( !v0 )
      goto LABEL_4;
  }
  if ( !sub_1E28C() || !dword_7EDC8 )
    return v0;
LABEL_4:
  sub_27940();
  sub_14FA4();
  if ( byte_7EB79 )
  {
    v4 = (const char *)sub_1E0C0();
    if ( !strcmp(v4, "BHB28601") )
      v1 = 1900;
    else
      v1 = 1500;
LABEL_18:
    v0 = ValidatePowerVoltage(v1);
    if ( v0 )
    {
      sub_356C4(12, 0);
      sub_31D58(9u, "get power type version failed!");
      return v0;
    }
    goto LABEL_6;
  }
  v1 = dword_482A8C;
  if ( dword_482A8C > 0 )
    goto LABEL_18;
LABEL_6:
  if ( (unsigned int)globalLogLevel > 3 )
  {
    v3 = sub_1572C();
    snprintf(v5, 0x800u, "start up min temp by 75a = %d", v3);
    sub_2E584(3, v5, 0);
  }
  sub_448C8();
  sub_449E0();
  sub_44A50();
  sub_304D4();
  sub_28138(115200);
  sub_304D4();
  v0 = sub_329DC();
  if ( !v0 || sub_1E28C() && dword_7EDC8 )
  {
    sub_33950();
    v0 = 0;
    dword_7F8D4 = 0;
    dword_7F8DC = 0;
    dword_7F8D8 = 0;
  }
  return v0;
}
