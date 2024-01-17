int sub_3FD74(int param0, int param1, size_t __n) {
    short v0;
    int v1;
    int v2;
    int v3;
    int __ptr1;
    if(gvar_504C90 != 0) {
        return 0;
    }
    int v4 = sub_40228();
    if(v4 == 0) {
        int v5 = sub_4044C();
        if(v5 == 0) {
            memset(&gvar_504B68, 0, 292);
            sub_3FB58();
            gvar_504C90 = 1;
            int v6 = sub_3FEFC();
            sub_42694(v6, param1, __n);
            sub_419D8();
            return 0;
        }
        __ptr1 = 1869181031;
        v3 = 0x696e6920;
        v2 = 0x61662074;
        v1 = 0x64656c69;
        v0 = 10;
        sub_2E584(0, &__ptr1, 0);
        return -2;
    }
    __ptr1 = 0x61677066;
    v3 = 0x696e6920;
    v2 = 0x61662074;
    v1 = 0x64656c69;
    v0 = 10;
    sub_2E584(0, &__ptr1, 0);
    return -1;
}
