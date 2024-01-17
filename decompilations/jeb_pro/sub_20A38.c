int sub_20A38(int param0) {
    int v0 = gvar_7F8F4;
    gvar_7F8F4 = (uint8_t)((uint32_t)(uint8_t)(v0 & 0x3) | ((uint32_t)(param0 & SOCK_STREAM) << 2) | ((uint32_t)((v0 >>> 3) & 0x1FFFFFFF) << 3));
    return param0;
}
