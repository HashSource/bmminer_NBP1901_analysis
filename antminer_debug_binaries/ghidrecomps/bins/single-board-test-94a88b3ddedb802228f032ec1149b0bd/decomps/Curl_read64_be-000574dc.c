
undefined8 Curl_read64_be(byte *param_1)

{
  return CONCAT44((uint)param_1[1] << 0x10 | (uint)*param_1 << 0x18 | (uint)param_1[2] << 8 |
                  (uint)param_1[3],
                  (uint)param_1[5] << 0x10 | (uint)param_1[7] | (uint)param_1[4] << 0x18 |
                  (uint)param_1[6] << 8);
}

