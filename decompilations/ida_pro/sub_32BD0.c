int sub_32BD0()
{
  int v0; // r0
  int v1; // r5
  int v2; // r4
  char s[2064]; // [sp+8h] [bp-810h] BYREF

  sub_44B54(byte_99EDE0, 0x20u);
  if ( (unsigned int)globalLogLevel > 3 )
  {
    snprintf(s, 0x800u, "miner ID : %s\n", byte_99EDE0);
    logMessage(3, s, 0);
  }
  v0 = sub_45C98();
  v1 = BYTE2(v0);
  v2 = (unsigned __int8)v0;
  if ( (unsigned int)globalLogLevel > 3 )
  {
    snprintf(s, 0x800u, "FPGA Version = 0x%04X\n", (unsigned __int16)v0);
    logMessage(3, s, 0);
  }
  return sprintf(byte_80FDC, "%d.%d.%d.%d", v2, v1, 1, 3);
}
