int sub_1F7C4(int param0) {
    char __ptr1;
    __int128 v0;
    int __src = 0;
    int v1 = 0;
    int v2 = 0;
    int v3 = 0;
    if(param0 == 0) {
        if(gvar_590404 != 0 || gvar_482A5C != 0 || (int)gvar_7EBA0 > 2) {
            snprintf(&__ptr1, 0x800, "%s: input bad json param\n", "api_miner_rate_ideal");
            param0 = sub_2E584(3, &__ptr1, 0);
        }
        return param0;
    }
    int v4 = sub_1A18C();
    VCVT.F64.S32((uint64_t)(((unsigned __int128)(v0 & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) | ((unsigned __int128)v4 << 96)) >>> 0x40X), (uint32_t)(((unsigned __int128)(v0 & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) | ((unsigned __int128)v4 << 96)) >>> 0x60X));
    int64_t v5 = (uint64_t)(((unsigned __int128)(v0 & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) | ((unsigned __int128)v4 << 96)) >>> 0x40X);
    snprintf(&__src, 16, "%.2lf");
    char* ptr0 = sub_4E744(&__src);
    return sub_4EFD4((int*)param0, "rate_ideal", ptr0);
}
