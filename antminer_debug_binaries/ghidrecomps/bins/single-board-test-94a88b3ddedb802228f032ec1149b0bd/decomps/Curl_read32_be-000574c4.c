
uint Curl_read32_be(byte *param_1)

{
  return (uint)param_1[1] << 0x10 | (uint)*param_1 << 0x18 | (uint)param_1[3] |
         (uint)param_1[2] << 8;
}

