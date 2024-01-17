int sub_4FA9C(int param0, int param1, int param2, char* param3, char param4, char param5, char param6, short param7) {
    if((uint32_t)param3 <= 3) {
        int v0 = (uint32_t)(uint8_t)(param5 & 0x7) | ((uint32_t)(uint8_t)(param4 & 0x7) << 4) | ((uint32_t)0x800000 << 7);
        int v1 = (int)*(param3 + 436544);
        int v2 = (uint32_t)(uint8_t)v0 | ((uint32_t)(uint8_t)(param6 & 0x3f) << 8) | ((uint32_t)((v0 >>> 14) & 0x3ffff) << 14);
        *(int*)&param4 = (uint32_t)(uint16_t)v2 | ((uint32_t)(uint16_t)(param7 & 0xfff) << 16) | ((uint32_t)(uint8_t)((v2 >>> 28) & 0xf) << 28);
        return sub_4FA10(param0, param1, param2, v1, *(int*)&param4);
    }
    return -1;
}
