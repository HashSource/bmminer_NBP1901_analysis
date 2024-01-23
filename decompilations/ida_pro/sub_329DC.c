int sub_329DC()
{
  int v0; // r4
  int v2; // r5
  int v3; // r8
  int v4; // r5
  int v5; // [sp+Ch] [bp-82Ch]
  char s[2088]; // [sp+10h] [bp-828h] BYREF

  v0 = 0;
  v5 = 0;
  do
  {
    if ( sub_1E29C(v0) )
    {
      v2 = 0;
      do
      {
        sub_4594C(v0);
        sleep(3u);
        sub_191F4((unsigned __int8)v0);
        sub_304D4();
        if ( byte_80FB0 )
        {
          if ( (unsigned int)globalLogLevel > 3 )
          {
            snprintf(s, 0x800u, "pic enabled for chain %d, press anykey to continue...", v0);
            sub_2E584(3, s, 0);
          }
          IO_getc((_IO_FILE *)stdin);
        }
        sub_45990(v0);
        sub_304D4();
        sub_4594C(v0);
        sleep(1u);
        sub_45990(v0);
        sub_304D4();
        sub_2BE40(v0, 0);
        v3 = sub_1E67C(v0);
        if ( (unsigned int)globalLogLevel > 3 )
        {
          snprintf(s, 0x800u, "Chain[%d]: find %d asic, times %d\n", v0, v3, v2);
          sub_2E584(3, s, 0);
        }
        ++v2;
        if ( v3 == sub_1E0F0() )
          break;
        sub_191F8((unsigned __int8)v0);
      }
      while ( v2 != 3 );
      v4 = sub_1E67C(v0);
      if ( sub_1E0F0() != v4 )
      {
        if ( (unsigned int)globalLogLevel > 3 )
        {
          snprintf(s, 0x800u, "Chain %d only find %d asic, will power off hash board %d\n", v0, v4, v0);
          sub_2E584(3, s, 0);
        }
        v5 = -1;
        sub_191F8((unsigned __int8)v0);
        sub_1E200(v0, 0);
      }
    }
    ++v0;
  }
  while ( v0 != 4 );
  return v5;
}
