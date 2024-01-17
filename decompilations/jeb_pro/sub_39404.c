int sub_39404(int param0) {
    char __ptr1;
    int64_t v0;
    int v1;
    __int128 v2;
    int v3;
    int64_t v4 = v0;
    if(gvar_7EB9C > 4) {
        VCVT.F64.F32((uint64_t)(v2 >>> 0x40X), v1);
        int64_t v5 = (uint64_t)(v2 >>> 0x40X);
        snprintf(&__ptr1, 0x800, "[DEBUG] Check if chain is unqualified happen, chain = %d, nonce_rate_threshold = %.2f\n", param0, (uint64_t)(v2 >>> 0x40X));
        sub_2E584(4, &__ptr1, 0);
    }
    uint32_t v6 = gvar_4FCB3C;
    if(v6 != 0) {
        int v7 = *(int*)(v6 + 4);
        if(v7 != 0) {
            VCMPE.F32(*(int*)(param0 * 4 + v6 + 48), v1);
            VMRS((uint8_t)2 | ((uint8_t)(v7 == 0) << 2) | ((uint8_t)(v7 < 0) << 3), v3);
            if(v7 >= 0) {
                return 0;
            }
            *(char*)(v6 + param0 + 28) = SOCK_STREAM;
            return SOCK_STREAM;
        }
    }
    if(gvar_7EB9C <= 3) {
        return SOCK_STREAM;
    }
    return sub_388F4();
}
