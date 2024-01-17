int sub_50A18(int param0, int param1, int param2) {
    char v0;
    sub_51A20(SOCK_STREAM, param0, param1, 24, &v0);
    v0 = param2 != 0 ? v0 | 0x4: (uint8_t)((uint32_t)(v0 & 0x3) | ((uint32_t)(param2 & SOCK_STREAM) << 2) | ((uint32_t)((v0 >>> 3) & 0x1FFFFFFF) << 3));
    return sub_4FA10(param0, 0, param1, 24, v0);
}
