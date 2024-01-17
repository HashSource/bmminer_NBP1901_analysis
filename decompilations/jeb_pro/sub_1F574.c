int sub_1F574(int param0) {
    char __ptr1;
    int64_t v0;
    int v1;
    int __src = 0;
    int v2 = 0;
    int v3 = 0;
    int v4 = 0;
    if(param0 != 0) {
        sub_1E2EC();
        __int128 v5 = (unsigned __int128)(uint64_t)v5 | ((unsigned __int128)4576918229304087675L << 64);
        VCMPE.F64(v0, (uint64_t)(v5 >>> 0x40X));
        VMRS((uint8_t)2 | ((uint8_t)(param0 == 0) << 2) | ((uint8_t)(param0 < 0) << 3), v1);
        if(param0 < 0) {
            VCVT.F64.S32((uint64_t)v5, gvar_5903F8);
            VCVT.F64.S32((uint64_t)(((unsigned __int128)((unsigned __int128)(uint64_t)v5 | ((unsigned __int128)gvar_5903F8 << 64)) | ((unsigned __int128)gvar_58E344 << 96)) >>> 0x40X), gvar_58E344);
            VDIV.F64(v0, gvar_80F50, (uint64_t)v5 + (uint64_t)(((unsigned __int128)((unsigned __int128)(uint64_t)v5 | ((unsigned __int128)gvar_5903F8 << 64)) | ((unsigned __int128)gvar_58E344 << 96)) >>> 0x40X));
        }
        snprintf(&__src, 16, "%.2lf");
        char* ptr0 = sub_4E744(&__src);
        param0 = sub_4EFD4((int*)param0, "rate_30m", ptr0);
    }
    else if(gvar_590404 != 0 || gvar_482A5C != 0 || (int)gvar_7EBA0 > 2) {
        snprintf(&__ptr1, 0x800, "%s: input bad json param\n", "api_miner_rate_30m");
        param0 = sub_2E584(3, &__ptr1, 0);
    }
    return param0;
}
