int sub_50A80(int param0, int param1, int param2) {
    char v0;
    sub_51A20(SOCK_STREAM, param0, param1, 24, &v0);
    uint8_t v1 = param2 != 0 ? v1 | 0x20: (uint8_t)((uint32_t)(v1 & 0x1f) | ((uint32_t)(param2 & SOCK_STREAM) << 5) | ((uint32_t)((v1 >>> 6) & 0x3ffffff) << 6));
    return sub_4FA10(param0, 0, param1, 24, v0);
}
