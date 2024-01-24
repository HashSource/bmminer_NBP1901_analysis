int __fastcall sub_48CB8(__int16 a1)
{
  int v2; // r6
  int v3; // r5
  char v5[2072]; // [sp+0h] [bp-818h] BYREF

  v2 = global_logContext;
  if ( global_logContext )
    return sub_48834(dword_50517C, a1);
  v3 = sub_48ABC();
  if ( v3 >= 0 )
    return sub_48834(dword_50517C, a1);
  snprintf(v5, 0x800u, "%s: auto exec bitmain_power_open, but open power failed\n", "bitmain_set_voltage_by_n");
  logMessage(v2, v5, v2);
  return v3;
}
