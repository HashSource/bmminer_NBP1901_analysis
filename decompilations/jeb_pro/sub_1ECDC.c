int sub_1ECDC(int param0, uint8_t param1, int param2, int param3, uint8_t param4, uint8_t param5) {
    int v0 = param4;
    if(param3 != 0) {
        *(int*)&param4 = param2;
        return sub_5121C(param5, v0, param0, param1, param4);
    }
    return sub_4FA10(param5, 0, v0, 28, (int)(((uint32_t)(((uint32_t)((uint16_t)0 | ((uint16_t)param1 << 8)) | ((uint32_t)(uint8_t)((param0 >>> SOCK_STREAM) & 0x7f) << 17) | ((uint32_t)(uint8_t)(((param1 * 4) & 0xfffeffff) >>> 24) << 24)) & 0x3fffffff) | 0x1000000) & 0x39ffffff));
}
