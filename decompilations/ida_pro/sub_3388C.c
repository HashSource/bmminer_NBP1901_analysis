int sub_3388C()
{
  char s; // [sp+8h] [bp-810h] BYREF

  BYTE2(off_7EDE0) = dword_80FAC;
  BYTE1(off_7EDE0) = dword_80FA8;
  if ( (unsigned int)globalLogLevel > 3 )
  {
    snprintf(
      &s,
      0x800u,
      "pulse_mode = %d, ccdly_sel = %d, pwth_sel = %d\n",
      (unsigned __int8)off_7EDE0,
      (unsigned __int8)dword_80FAC,
      (unsigned __int8)dword_80FA8);
    logMessage(3, &s, 0);
  }
  return (unsigned __int8)off_7EDE0 | (unsigned __int16)(BYTE1(off_7EDE0) << 8) | (BYTE2(off_7EDE0) << 16);
}
