int sub_5182C(int param0, int param1) {
    char v0;
    sub_51A20(0, param0, 0, 52, &v0);
    v0 = param1 != 0 ? v0 | 0x8: (uint8_t)((uint32_t)(v0 & 0x7) | ((uint32_t)(param1 & SOCK_STREAM) << 3) | ((uint32_t)((v0 >>> 4) & 0xfffffff) << 4));
    return sub_4FA10(param0, SOCK_STREAM, 0, 52, v0);
}
