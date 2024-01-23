int __fastcall sub_42488(int a1)
{
  char v2[2056]; // [sp+0h] [bp-808h] BYREF

  snprintf(v2, 0x800u, "gpio port %d is not a supported key\n", a1);
  return logMessage(1, v2, 0);
}
