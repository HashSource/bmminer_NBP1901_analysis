int sub_18B68()
{
  char *v0; // r12
  char v2; // [sp+0h] [bp-808h] BYREF

  strcpy(v0, "XXTEA requires the input as 64-bit aligned, fail to encode!\n");
  return logMessage(3, &v2, 0);
}
