
uint FUN_0001e67c(uint param_1)

{
  uint uVar1;
  
  if (((uint)(DAT_0058dfbc <= (int)param_1) | param_1 >> 0x1f) != 0) {
    return 0x80000401;
  }
  if ((DAT_0058e010 == 0) && (uVar1 = FUN_0001b398(), (int)uVar1 < 0)) {
    return uVar1;
  }
  return (uint)*(byte *)(DAT_0058e018 + param_1 * 0x210 + 1);
}

