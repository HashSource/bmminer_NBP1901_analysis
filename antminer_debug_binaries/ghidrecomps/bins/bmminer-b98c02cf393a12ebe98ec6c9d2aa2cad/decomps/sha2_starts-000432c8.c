
void sha2_starts(undefined4 *param_1)

{
  param_1[2] = 0x6a09e667;
  param_1[3] = 0xbb67ae85;
  param_1[4] = 0x3c6ef372;
  param_1[5] = 0xa54ff53a;
  param_1[6] = 0x510e527f;
  param_1[7] = 0x9b05688c;
  param_1[8] = 0x1f83d9ab;
  param_1[9] = 0x5be0cd19;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}

