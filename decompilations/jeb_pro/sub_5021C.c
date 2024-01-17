int sub_5021C(int param0, int param1) {
    return sub_4FA10(param0, SOCK_STREAM, 0, 20, (uint32_t)((uint32_t)((uint16_t)*(char*)((uint32_t)(uint8_t)param1 + 436548) | ((uint16_t)*(char*)((uint32_t)(uint8_t)(param1 >>> 8) + 436548) << 8)) | ((uint32_t)*(char*)((uint32_t)(uint8_t)(param1 >>> 16) + 436548) << 16)) | ((uint32_t)*(char*)((param1 >>> 24) + 436548) << 24));
}
