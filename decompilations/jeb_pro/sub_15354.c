int sub_15354(int param0, int param1) {
    int v0;
    uint32_t v1 = sub_1E170();
    if(v1 == 0) {
        v0 = sub_152F0(param0, param1);
        if(v0 == 0xFF) {
            return 0xFF;
        }
        return (uint32_t)((uint16_t)v0 + 10) | ((uint32_t)(((v0 + 10) >>> 15) & SOCK_STREAM ? 0xffff: 0) << 16);
    }
    return sub_14CC0(param0, SOCK_STREAM, param1);
}
