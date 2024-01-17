int sub_49168() {
    int result;
    int __ptr1;
    char v0;
    short v1;
    short v2;
    int64_t v3;
    if(gvar_505180 == 0) {
        int v4 = sub_48ABC();
        if(v4 < 0) {
            snprintf(&__ptr1, 0x800, "%s: auto exec bitmain_power_open, but open power failed\n", "bitmain_get_voltage");
            result = sub_2E584(0, &__ptr1, 0);
            VCVT.F64.S32(v3, v4);
            return result;
        }
    }
    int v5 = (int)gvar_50517C;
    *(short*)&v0 = 0;
    *(int*)&v1 = 0;
    int v6 = 0;
    int v7 = 0x304aa55;
    v0 = 7;
    int v8 = sub_48520(v5, &v7, 6, &v6, 8);
    if(v8 == 0) {
        return sub_48F9C(v1);
    }
    __ptr1 = 0x20746567;
    int v9 = 0x63204441;
    int v10 = 0x65766e6f;
    int v11 = 1869181810;
    int v12 = 0x204e206e;
    *(int*)&v2 = 1818845542;
    int v13 = 681061;
    sub_2E584(0, &__ptr1, 0);
    __ptr1 = 544104803;
    v9 = 1953394542;
    v10 = 0x74656720;
    v11 = 1819244064;
    v12 = 0x65676174;
    v2 = 10;
    return sub_2E584(0, &__ptr1, 0);
}
