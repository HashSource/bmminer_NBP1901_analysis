int __fastcall sub_1697C(int a1)
{
  char v2[2056]; // [sp+0h] [bp-808h] BYREF

  snprintf(v2, 0x800u, "No chip bin, chain = %d\n", a1);
  logMessage(3, v2, 0);
  return -1;
}
