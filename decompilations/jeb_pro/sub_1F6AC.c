int sub_1F6AC(int param0) {
    char __ptr1;
    __int128 v0;
    int __src = 0;
    int v1 = 0;
    int v2 = 0;
    int v3 = 0;
    if(param0 == 0) {
        if(gvar_590404 != 0 || gvar_482A5C != 0 || (int)gvar_7EBA0 > 2) {
            snprintf(&__ptr1, 0x800, "%s: input bad json param\n", "api_miner_rate_avg");
            param0 = sub_2E584(3, &__ptr1, 0);
        }
        return param0;
    }
    VCVT.F64.S32((uint64_t)v0, gvar_5903F8);
    VCVT.F64.S32((uint64_t)(((unsigned __int128)((unsigned __int128)(uint64_t)v0 | ((unsigned __int128)gvar_5903F8 << 64)) | ((unsigned __int128)gvar_58E344 << 96)) >>> 0x40X), gvar_58E344);
    VDIV.F64((uint64_t)((unsigned __int128)(uint64_t)v0 | ((unsigned __int128)((uint64_t)v0 + (uint64_t)(((unsigned __int128)((unsigned __int128)(uint64_t)v0 | ((unsigned __int128)gvar_5903F8 << 64)) | ((unsigned __int128)gvar_58E344 << 96)) >>> 0x40X)) << 64)), gvar_80F50, (uint64_t)(((unsigned __int128)(uint64_t)v0 | ((unsigned __int128)((uint64_t)v0 + (uint64_t)(((unsigned __int128)((unsigned __int128)(uint64_t)v0 | ((unsigned __int128)gvar_5903F8 << 64)) | ((unsigned __int128)gvar_58E344 << 96)) >>> 0x40X)) << 64)) >>> 0x40X));
    int64_t v4 = (uint64_t)((unsigned __int128)(uint64_t)v0 | ((unsigned __int128)((uint64_t)v0 + (uint64_t)(((unsigned __int128)((unsigned __int128)(uint64_t)v0 | ((unsigned __int128)gvar_5903F8 << 64)) | ((unsigned __int128)gvar_58E344 << 96)) >>> 0x40X)) << 64));
    snprintf(&__src, 16, "%.2lf");
    char* ptr0 = sub_4E744(&__src);
    return sub_4EFD4((int*)param0, "rate_avg", ptr0);
}
