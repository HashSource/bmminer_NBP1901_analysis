int sub_5121C(int param0, int param1, int param2, int param3, uint8_t param4) {
    int v0 = (param3 * 0x100) | param4 | &ELFHeader;
    *(int*)&param4 = (uint32_t)(((uint32_t)(((uint32_t)(v0 & 0x1ffff) | ((uint32_t)(uint8_t)((param2 >>> SOCK_STREAM) & 0x7f) << 17) | ((uint32_t)(uint8_t)(v0 >>> 24) << 24)) & 0x3fffffff) | 0x1000000) & 0x39ffffff);
    return sub_4FA10(param0, 0, param1, 28, *(int*)&param4);
}
