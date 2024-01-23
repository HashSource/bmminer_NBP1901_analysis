int __fastcall sub_19214(int a1)
{
  int result; // r0
  char s[2064]; // [sp+8h] [bp-810h] BYREF

  if ( (unsigned int)globalLogLevel > 3 )
  {
    snprintf(s, 0x800u, "chain[%d] PIC jump to app\n", a1);
    logMessage(3, s, 0);
  }
  sub_46554((unsigned __int8)a1);
  usleep(0x7A120u);
  result = sub_46178((unsigned __int8)a1);
  if ( (unsigned int)globalLogLevel > 3 )
  {
    snprintf(s, 0x800u, "Check chain[%d] PIC fw version=0x%02x\n", a1, result);
    return logMessage(3, s, 0);
  }
  return result;
}
