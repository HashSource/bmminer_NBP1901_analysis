int sub_48B7C() {
    int __ptr1;
    char v0;
    short result1;
    if(gvar_505180 == 0) {
        int result = sub_48ABC();
        if(result < 0) {
            snprintf(&__ptr1, 0x800, "%s: auto exec bitmain_power_open, but open power failed\n", "bitmain_get_power_status");
            sub_2E584(0, &__ptr1, 0);
            return result;
        }
    }
    int v1 = (int)gvar_50517C;
    *(short*)&v0 = 0;
    *(int*)&result1 = 0;
    int v2 = 0;
    int v3 = 0xa04aa55;
    v0 = 14;
    int v4 = sub_48520(v1, &v3, 6, &v2, 8);
    if(v4 == 0) {
        return result1;
    }
    __ptr1 = 0x20746567;
    int v5 = 0x65776f70;
    int v6 = 0x74732072;
    int v7 = 1937077345;
    int v8 = 1767990816;
    int v9 = 0xa64656c;
    char v10 = 0;
    sub_2E584(0, &__ptr1, 0);
    __ptr1 = 544104803;
    v5 = 1953394542;
    v6 = 0x74656720;
    v7 = 0x776f7020;
    v8 = 0x73207265;
    v9 = 0x75746174;
    *(short*)&v10 = 2675;
    char v11 = 0;
    sub_2E584(0, &__ptr1, 0);
    return 0x80000300;
}
