int sub_3FF08(int param0) {
    short v0;
    int v1 = 0;
    int v2 = 6;
    sub_40314(0, &v0);
    v0 = v0;
    do {
        sub_40314(SOCK_STREAM, &v1);
        int v3 = v1;
        if((uint32_t)(uint8_t)((v3 >>> 8) & 0x7) == param0) {
            return v0 != 45093 ? (uint32_t)(uint8_t)v3 * 120: (uint32_t)(uint8_t)v3 * 240;
        }
        usleep(10000);
        --v2;
    }
    while(v2 != 0);
    return -1;
}
