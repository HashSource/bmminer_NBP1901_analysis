int sub_2ACEC(int param0, void* __src, int param2, uint32_t param3) {
    int __n;
    void* __buf = sub_2AB48(&__n, __src, param2, param3);
    int v0 = sub_281D4(__buf, __n);
    if(v0 != 0 && (gvar_590404 != 0 || gvar_482A5C != 0 || (int)gvar_7EBA0 > 2)) {
        int __ptr1 = 1768777571;
        int v1 = 544367982;
        int v2 = 0x75746572;
        int v3 = 1696624242;
        int v4 = 0x66207272;
        int v5 = 0x7420726f;
        int v6 = 544434536;
        int v7 = 1668181870;
        int v8 = 663909;
        sub_2E584(3, &__ptr1, 0);
    }
    free(__buf);
    return SOCK_STREAM;
}
