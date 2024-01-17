char sub_20A20(char param0) {
    int v0 = gvar_7F8F4;
    gvar_7F8F4 = (uint8_t)((uint32_t)(v0 & SOCK_STREAM) | ((uint32_t)param0 << SOCK_STREAM) | ((uint32_t)((v0 >>> 2) & 0x3fffffff) << 2));
    return param0;
}
