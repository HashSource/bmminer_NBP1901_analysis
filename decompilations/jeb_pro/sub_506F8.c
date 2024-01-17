int sub_506F8(int param0, int param1, int param2, int param3) {
    char v0;
    if(param2 <= 3) {
        int v1 = (int)aPtx_find_div_fa[param2];
        sub_51A20(SOCK_STREAM, param0, param1, v1, &v0);
        v0 = (uint8_t)(((uint32_t)(uint8_t)(param3 & 0xf) | ((uint32_t)((v0 >>> 4) & 0xfffffff) << 4)) & 0x3f);
        uint8_t v2 = (uint8_t)(((uint32_t)(uint8_t)((param3 >>> 8) & 0xf) | ((uint32_t)((v2 >>> 4) & 0xfffffff) << 4)) & 0x3f);
        return sub_4FA10(param0, 0, param1, v1, v0);
    }
    return -1;
}
