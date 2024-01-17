int sub_51328(int param0, int param1, int param2) {
    char v0;
    sub_51A20(SOCK_STREAM, param0, param1, 24, &v0);
    v0 = (uint8_t)((uint32_t)(v0 & 0x7) | ((uint32_t)(param2 & SOCK_STREAM) << 3) | ((uint32_t)((v0 >>> 4) & 0xfffffff) << 4));
    return sub_4FA10(param0, 0, param1, 24, v0);
}
