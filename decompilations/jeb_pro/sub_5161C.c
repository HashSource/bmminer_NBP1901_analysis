int sub_5161C(int param0, uint8_t param1, int param2) {
    return sub_4FA10(param0, SOCK_STREAM, 0, 60, (((uint32_t)(uint8_t)((uint32_t)(uint8_t)(param2 & 0x7) | ((uint32_t)((uint32_t)((param1 >>> SOCK_STREAM) & 0x1FFFFFFF) & 0x1FFFFFFF) << 3)) | ((uint32_t)7 << 8) | 0x8000) & 0xff00ffff) | 0x80000000);
}
