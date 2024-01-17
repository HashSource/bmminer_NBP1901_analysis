int sub_51164(int param0, int param1) {
    char v0;
    sub_51A20(SOCK_STREAM, param0, param1, 24, &v0);
    char v1 = v1 | 0x40;
    v0 = (uint8_t)((uint32_t)(v0 & 0xf) | ((uint32_t)3 << 4) | ((uint32_t)((v0 >>> 7) & 0x1ffffff) << 7));
    return sub_4FA10(param0, 0, param1, 24, v0);
}
