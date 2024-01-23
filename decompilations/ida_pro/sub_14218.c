int sub_14218()
{
  char v1[2056]; // [sp+0h] [bp-808h] BYREF

  if ( (unsigned int)globalLogLevel > 3 )
  {
    strcpy(v1, "Note: rear fan is power off!\n");
    sub_2E584(3, v1, 0);
  }
  return sub_3FFEC(1);
}
