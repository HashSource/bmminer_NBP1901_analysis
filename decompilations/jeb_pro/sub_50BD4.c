int sub_50BD4(int param0, int param1) {
    char v0;
    sub_51A20(0, param0, 0, 24, &v0);
    uint8_t v1 = param1 != 0 ? v1 | 0x80: (uint8_t)((uint32_t)(v1 & 0x7f) | ((uint32_t)(param1 & SOCK_STREAM) << 7) | ((uint32_t)0 << 8));
    return sub_4FA10(param0, SOCK_STREAM, 0, 24, v0);
}
