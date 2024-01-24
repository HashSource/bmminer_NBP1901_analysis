int __fastcall sub_28138(signed int a1)
{
  char v3[2056]; // [sp+0h] [bp-808h] BYREF

  if ( a1 > (int)&unk_2DC6C0 )
  {
    sub_1EB74();
    sub_304D4();
  }
  if ( (unsigned int)globalLogLevel > 3 )
  {
    snprintf(v3, 0x800u, "set UART baud to %d\n", a1);
    logMessage(3, v3, 0);
  }
  sub_1E9CC(a1);
  sub_1E160();
  return sub_14F20();
}
