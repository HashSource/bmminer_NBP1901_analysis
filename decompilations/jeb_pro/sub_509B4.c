int sub_509B4(int param0, int param1) {
    char v0;
    sub_51A20(0, param0, 0, 24, &v0);
    v0 = param1 != 0 ? v0 | 0x4: (uint8_t)((uint32_t)(v0 & 0x3) | ((uint32_t)(param1 & SOCK_STREAM) << 2) | ((uint32_t)((v0 >>> 3) & 0x1FFFFFFF) << 3));
    return sub_4FA10(param0, SOCK_STREAM, 0, 24, v0);
}
