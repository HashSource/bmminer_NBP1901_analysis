int sub_39B60(int param0) {
    int v0;
    int __ptr1;
    int v1;
    __int128 v2;
    __int128 v3;
    __int128 v4;
    int64_t v5 = (uint64_t)v2;
    int64_t v6 = (uint64_t)(v2 >>> 0x40X);
    __int128 v7 = (unsigned __int128)(uint64_t)(v3 >>> 0x20X) | ((unsigned __int128)((uint64_t)(uint32_t)v3 | ((uint64_t)(uint32_t)(v2 >>> 0x60X) << 32)) << 64);
    int v8 = sub_391F4(param0);
    if(gvar_7EB9C > 4) {
        VCVT.F64.F32((uint64_t)(v3 >>> 0x40X), (uint32_t)(v7 >>> 0x20X));
        VCVT.F64.F32((uint64_t)v4, (uint32_t)(v7 >>> 0x40X));
        VCVT.F64.F32((uint64_t)v7, (uint32_t)v7);
        int64_t v9 = (uint64_t)(v3 >>> 0x40X);
        *(double*)&v0 = (double)v4;
        int64_t v10 = (uint64_t)v7;
        snprintf(&__ptr1, 0x800, "[DEBUG] Check if is need stop, chain = %d, hw_threshold = %.4f, nonce_rate_threshold = %.2f, nonce_rate_dec_threshold = %.2f.\n", param0, *(double*)&v0, (uint64_t)v7, (uint64_t)(v3 >>> 0x40X));
        sub_2E584(4, &__ptr1, 0);
    }
    uint32_t v11 = gvar_4FCB3C;
    if(v11 != 0 && *(int*)(v11 + 4) != 0) {
        uint32_t v12 = sub_1E130();
        uint32_t v13 = sub_1E0F0();
        int* ptr0 = (int*)(param0 * 4 + v8 + 0x80a000);
        int v14 = *(ptr0 + 532);
        v4 = (unsigned __int128)(v4 & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) | ((unsigned __int128)(v12 * v13 * 8) << 96);
        VCVT.F32.S32((uint32_t)v3, (uint32_t)(v4 >>> 0x60X));
        VMUL.F32((uint32_t)v3, (uint32_t)v3, (uint32_t)(v7 >>> 0x40X));
        VCVT.U32.F32((uint32_t)(v4 >>> 0x60X), (uint32_t)v3);
        char v15 = (uint32_t)(v4 >>> 0x60X) > v14;
        char v16 = (uint32_t)(v4 >>> 0x60X) == v14;
        char v17 = (((v14 - (uint32_t)(v4 >>> 0x60X)) ^ v14) & ((uint32_t)(v4 >>> 0x60X) ^ v14)) < 0;
        char v18 = (uint32_t)(v4 >>> 0x60X) <= v14;
        if(v18 == 0 || v16 != 0) {
            int v19 = *ptr0;
            uint32_t v20 = sub_1E130();
            VCVT.F32.U32(v19, v19);
            uint32_t v21 = sub_1E0F0();
            int* ptr1 = (int*)(param0 * 4 + gvar_4FCB3C);
            uint32_t v22 = gvar_7EB9C;
            VCVT.F32.S32((uint32_t)(((unsigned __int128)(v4 & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) | ((unsigned __int128)(v21 * v20 * 8) << 96)) >>> 0x60X), (uint32_t)(((unsigned __int128)(v4 & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) | ((unsigned __int128)(v21 * v20 * 8) << 96)) >>> 0x60X));
            v4 = (unsigned __int128)*(ptr1 + 8) | ((unsigned __int128)((unsigned __int128)*(ptr1 + 12) | ((unsigned __int128)(uint64_t)(((unsigned __int128)(v4 & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) | ((unsigned __int128)(v21 * v20 * 8) << 96)) >>> 0x40X) << 32)) << 32);
            VDIV.F32((uint32_t)(v4 >>> 0x40X), v19, (uint32_t)(v4 >>> 0x60X));
            VCMPE.F32((uint32_t)(v4 >>> 0x20X), (uint32_t)(v4 >>> 0x40X));
            VMRS((uint8_t)v17 | ((uint8_t)v18 << SOCK_STREAM) | ((uint8_t)v16 << 2) | ((uint8_t)v15 << 3), v1);
            *(ptr1 + 8) = (uint32_t)(v4 >>> 0x40X);
            if(v15 != 0) {
                *(ptr1 + 12) = (uint32_t)(v4 >>> 0x40X);
            }
            if(v22 <= 3) {
                return 0;
            }
            __int128 v23 = (unsigned __int128)(uint64_t)v23 | ((unsigned __int128)*(ptr1 + 12) << 64) | ((unsigned __int128)(uint32_t)(v23 >>> 0x60X) << 96);
            VCVT.F64.F32((uint64_t)v4, (uint32_t)v4);
            VCVT.F64.F32((uint64_t)(v4 >>> 0x40X), (uint32_t)(v4 >>> 0x40X));
            VCVT.F64.F32((uint64_t)(v23 >>> 0x40X), (uint32_t)(v23 >>> 0x40X));
            *(double*)&v0 = (double)(v4 >>> 0x40X);
            snprintf(&__ptr1, 0x800, "chain = %d, nonce_rate_curr = %.4f, nonce_rate_last = %.4f, nonce_rate_max = %.4f\n", param0, *(double*)&v0, (uint64_t)v4, (uint64_t)(v23 >>> 0x40X));
            sub_2E584(3, &__ptr1, 0);
            return 0;
        }
        if(gvar_7EB9C > 3) {
            snprintf(&__ptr1, 0x800, "chain = %d, hw = %d, hw_threshold = %d, too much hw.\n", param0, v14, (uint32_t)(v4 >>> 0x60X));
            sub_2E584(3, &__ptr1, 0);
            return SOCK_STREAM;
        }
    }
    else if(gvar_7EB9C > 3) {
        __ptr1 = 1684955464;
        int v24 = 0x6920656c;
        int v25 = 0x554e2073;
        int v26 = 0xa2e4c4c;
        char v27 = 0;
        sub_2E584(3, &__ptr1, 0);
    }
    return SOCK_STREAM;
}
