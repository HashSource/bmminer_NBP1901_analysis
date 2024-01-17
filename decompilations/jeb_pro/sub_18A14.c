int sub_18A14() {
    char __dest;
    uint8_t v0;
    char __src;
    int result;
    char v1;
    uint8_t __n;
    void* buf = memset(&__dest, 0, 0x100);
    int v2 = (int)((__n + 5) & 0xfffffff8);
    if(59 - __n + ((__n + v0 - 50) & 0xfffffff8) + v2 > 0x100) {
        if(gvar_7EB9C <= 3) {
            return (int)buf;
        }
        int __ptr1 = 0x52504545;
        int v3 = 1679838543;
        int v4 = 544433519;
        int v5 = 544501614;
        int v6 = 1702257000;
        int v7 = 0x6f6e6520;
        int v8 = 543713141;
        int v9 = 1667330163;
        short v10 = 2661;
        char v11 = 0;
        buf = sub_2E584(3, &__ptr1, 0);
        return (int)buf;
    }
    memcpy(&__dest, &__src, __n);
    int v12 = 0;
    sub_18E48(&v1, v2, SOCK_STREAM);
    do {
        int v13 = sub_1E29C(v12);
        if(v13 != 0) {
            sub_44200(v12, 0, (int)&__dest, v2 + 2);
        }
        ++v12;
    }
    while(v12 != 4);
    sub_17EF8();
    return result;
}
