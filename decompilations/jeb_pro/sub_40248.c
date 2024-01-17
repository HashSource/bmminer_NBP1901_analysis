void sub_40248() {
    int v0;
    int v1;
    int v2;
    int __ptr1;
    if(gvar_504CA4 == 0) {
        return;
    }
    int v3 = munmap(gvar_504C98, 0x1200);
    if(v3 < 0) {
        __ptr1 = 1835955565;
        v2 = 0x66207061;
        v1 = 0x656c6961;
        v0 = 663908;
        sub_2E584(0, &__ptr1, 0);
    }
    int v4 = munmap(gvar_504CA0, 0x1000000);
    if(v4 < 0) {
        __ptr1 = 1835955565;
        v2 = 0x66207061;
        v1 = 1600218992;
        v0 = 1601004909;
        int v5 = 1919181921;
        int v6 = 1818323039;
        int v7 = 1767990816;
        int v8 = 0x2164656c;
        short v9 = 10;
        sub_2E584(0, &__ptr1, 0);
    }
    int __fd = (int)gvar_504C94;
    gvar_504CA4 = 0;
    close(__fd);
    close(gvar_504C9C);
}
