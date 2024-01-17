int sub_50288(int param0, int param1, short param2) {
    int v0 = param1 != 0 ? 0x80000000: 0;
    if(param1 == 0) {
        v0 = (uint32_t)(v0 & 0x7fffffff) | ((uint32_t)(v0 & SOCK_STREAM) << 31);
    }
    return sub_4FA10(param0, SOCK_STREAM, 0, 12, (uint32_t)param2 | ((uint32_t)(uint16_t)(v0 >>> 16) << 16));
}
