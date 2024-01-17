int sub_36908() {
    int result;
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int __s;
    if(gvar_7EB9C > 4) {
        __s = 0x4245445b;
        v4 = 0x205d4755;
        v3 = 0x646e6553;
        v2 = 1831678240;
        v1 = 0x74736469;
        v0 = 543519841;
        int v5 = 0x6b726f77;
        int v6 = (uint32_t)2606 | ((uint32_t)(uint8_t)(v6 >>> 24) << 24);
        sub_2E584(4, (char*)&__s, 0);
    }
    int v7 = 0;
    memset(&__s, 0, 52);
    __s = (uint32_t)SOCK_STREAM | ((uint32_t)((__s >>> 8) & 0xffffff) << 8);
    do {
        result = sub_1E29C(v7);
        if(result != 0) {
            int v8 = sub_44ED4();
            while(((SOCK_STREAM << v7) & v8) == 0) {
                sub_304D4(SOCK_STREAM);
                v8 = sub_44ED4();
            }
            __s = (uint32_t)(uint8_t)__s | ((uint32_t)((uint8_t)v7 | 0x80) << 8) | ((uint32_t)(uint16_t)(__s >>> 16) << 16);
            sub_1EDF0(__s, v4, v3, v2, v1, v0);
            result = sub_304D4(10);
        }
        ++v7;
    }
    while(v7 != 4);
    return result;
}
