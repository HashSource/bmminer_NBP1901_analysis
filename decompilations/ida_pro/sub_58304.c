_DWORD *__fastcall sub_58304(const char *a1, int a2)
{
  _DWORD *v4; // r4
  size_t v5; // r0
  void *v7; // r0
  int *v8; // r0

  if ( a1 )
  {
    if ( a2 )
    {
      v4 = calloc(1u, 0x408u);
      if ( v4 )
      {
        v5 = strlen(a1);
        if ( v5 > 0x400 )
        {
          sub_5DF98(2, "src/record.c", 41, "name[%s] is too long", a1);
          v7 = v4;
          v4 = 0;
          sub_582A0(v7);
        }
        else
        {
          memcpy(v4, a1, v5 + 1);
          v4[257] = a2;
          sub_58240((const void **)v4, 0);
        }
      }
      else
      {
        v8 = _errno_location();
        sub_5DF98(2, "src/record.c", 36, "calloc fail, errno[%d]", *v8);
      }
    }
    else
    {
      v4 = 0;
      sub_5DF98(2, "src/record.c", 32, "output is null or 0");
    }
  }
  else
  {
    v4 = 0;
    sub_5DF98(2, "src/record.c", 31, "name is null or 0");
  }
  return v4;
}
