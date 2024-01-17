int sub_35B1C() {
    char __ptr1;
    __int128 v0;
    int v1;
    int result = 0;
    int v2 = 0;
    do {
        int v3 = sub_1E29C(v2);
        if(v3 != 0) {
            uint32_t v4 = gvar_4FCB28;
            uint32_t v5 = gvar_7EB9C;
            __int128 v6 = (unsigned __int128)*(int*)((v2 + 1032) * 4 + v4) | ((unsigned __int128)((v0 >>> 0x20X) & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) << 32);
            v0 = (unsigned __int128)(uint64_t)v6 | ((unsigned __int128)*(int*)(*(int*)(v4 + 8) + 20) << 64) | ((unsigned __int128)(uint32_t)(v6 >>> 0x60X) << 96);
            if(v5 > 3) {
                VCVT.F64.F32((uint64_t)v0, (uint32_t)v0);
                VCVT.F64.F32((uint64_t)(v0 >>> 0x40X), (uint32_t)(v0 >>> 0x40X));
                int64_t v7 = (uint64_t)v0;
                int64_t v8 = (uint64_t)(v0 >>> 0x40X);
                snprintf(&__ptr1, 0x800, "chain = %d, nonce_rate_max = %.4f, nonce_rate_threshold = %.4f\n", v2, v7, v8);
                sub_2E584(3, &__ptr1, 0);
                v4 = gvar_4FCB28;
                __int128 v9 = (unsigned __int128)*(int*)((v2 + 1032) * 4 + v4) | ((unsigned __int128)((v0 >>> 0x20X) & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) << 32);
                v0 = (unsigned __int128)(uint64_t)v9 | ((unsigned __int128)*(int*)(*(int*)(v4 + 8) + 20) << 64) | ((unsigned __int128)(uint32_t)(v9 >>> 0x60X) << 96);
            }
            VCMPE.F32((uint32_t)v0, (uint32_t)(v0 >>> 0x40X));
            VMRS((uint8_t)((((v5 - 3) ^ v5) & (v5 ^ 0x3)) < 0) | ((uint8_t)(v5 >= 3) << SOCK_STREAM) | ((uint8_t)(v5 == 3) << 2) | ((uint8_t)((int)v5 < 3) << 3), v1);
            if((int)v5 < 3) {
                result = SOCK_STREAM;
                *(int*)((v2 + 1040) * 4 + v4) = SOCK_STREAM;
            }
        }
        ++v2;
    }
    while(v2 != 4);
    return result;
}
