int sub_505F4(int param0, int param1, char* param2, int param3, char param4) {
    char v0;
    if((uint32_t)param2 <= 3) {
        int v1 = (int)*(param2 + 436544);
        sub_51A20(SOCK_STREAM, param0, param1, v1, &v0);
        v0 = (uint8_t)((uint32_t)(uint8_t)(param4 & 0x7) | ((uint32_t)(((uint32_t)(((v0 & 0xf) >>> 3) & SOCK_STREAM) | ((uint32_t)(uint8_t)(param3 & 0x7) << SOCK_STREAM) | ((uint32_t)((v0 >>> 7) & 0x1ffffff) << 4) | ((uint32_t)0 << 29)) & 0x1FFFFFFF) << 3));
        return sub_4FA10(param0, 0, param1, v1, v0);
    }
    return -1;
}
