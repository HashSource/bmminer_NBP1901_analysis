int sub_1A870(char* param0, int param1, uint32_t param2) {
    int result;
    char __ptr1;
    int v0;
    int v1;
    char v2;
    short v3;
    int v4;
    __int128 v5;
    __int128 v6;
    int64_t v7 = (uint64_t)v5;
    int64_t v8 = (uint64_t)(v5 >>> 0x40X);
    __int128 v9 = (unsigned __int128)(uint64_t)v5 | ((unsigned __int128)v4 << 64) | ((unsigned __int128)(uint32_t)(v5 >>> 0x60X) << 96);
    VCVT.F64.F32((uint64_t)v5, v4);
    if(gvar_7EB9C > 4) {
        snprintf(&__ptr1, 0x800, "fixed step freq_start = %d, freq_end = %d, freq_step = %.2f\n", param1, param2, (uint64_t)v9);
        sub_2E584(4, &__ptr1, 0);
    }
    int v10 = 0;
    do {
        int v11 = sub_1E29C(v10);
        if(v11 != 0) {
            sub_1F0E0(v10, SOCK_STREAM, 0, (int)param0);
        }
        ++v10;
    }
    while(v10 != 4);
    char v12 = param1 >= param2;
    int v13 = v12 == 0 ? param2 - param1: param1;
    if(v12 != 0) {
        v13 -= param2;
    }
    __int128 v14 = (unsigned __int128)(((unsigned __int128)4576918229304087675L | ((unsigned __int128)(uint64_t)(v6 >>> 0x40X) << 64)) & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) | ((unsigned __int128)v13 << 96);
    VCVT.F32.U32((uint32_t)(v14 >>> 0x40X), (uint32_t)(v14 >>> 0x60X));
    __int128 v15 = (unsigned __int128)(uint64_t)v14 | ((unsigned __int128)((uint32_t)(v14 >>> 0x40X) + (uint32_t)(v9 >>> 0x40X)) << 64) | ((unsigned __int128)(uint32_t)(v14 >>> 0x60X) << 96);
    VCVT.F64.F32((uint64_t)(v15 >>> 0x40X), (uint32_t)(v15 >>> 0x40X));
    VDIV.F64((uint64_t)v15, (uint64_t)(v15 >>> 0x40X) + (uint64_t)v15, (uint64_t)v9);
    VCVT.U32.F64((uint32_t)(((uint64_t)(v15 >>> 0x40X) + (uint64_t)v15) >>> 32L), (uint64_t)v15);
    int v16 = (uint32_t)(((uint64_t)(v15 >>> 0x40X) + (uint64_t)v15) >>> 32L);
    if(v16 != 0) {
        __int128 v17 = (unsigned __int128)(((unsigned __int128)(uint64_t)v15 | ((unsigned __int128)((uint64_t)(v15 >>> 0x40X) + (uint64_t)v15) << 64)) & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) | ((unsigned __int128)param1 << 96);
        int v18 = SOCK_STREAM;
        VCVT.F32.U32((uint32_t)(v9 >>> 0x60X), (uint32_t)(v17 >>> 0x60X));
        __int128 v19 = (unsigned __int128)(v17 & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) | ((unsigned __int128)param2 << 96);
        VCVT.F32.U32((uint32_t)(v9 >>> 0x20X), (uint32_t)(v19 >>> 0x60X));
        do {
            v19 = (unsigned __int128)(v19 & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) | ((unsigned __int128)v18 << 96);
            v9 = (unsigned __int128)(uint32_t)(v9 >>> 0x60X) | ((unsigned __int128)((v9 >>> 0x20X) & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) << 32);
            char v20 = param1 < (int)param2;
            char v21 = param1 == param2;
            uint8_t v22 = (uint8_t)((((param1 - param2) ^ param1) & (param1 ^ param2)) < 0);
            v12 = param1 >= param2;
            VCVT.F32.U32((uint32_t)(v19 >>> 0x60X), (uint32_t)(v19 >>> 0x60X));
            int v23 = 0;
            int v24 = 0;
            if(v12 == 0) {
                VMLA.F32((uint32_t)v9, (uint32_t)(v19 >>> 0x60X), (uint32_t)(v9 >>> 0x40X));
                VCMPE.F32((uint32_t)(v9 >>> 0x20X), (uint32_t)v9);
                VMRS((uint8_t)v22 | ((uint8_t)v21 << 2) | ((uint8_t)v20 << 3), v1);
                if(v20 != 0) {
                    VMOVMI.F32((uint32_t)v9, (uint32_t)(v9 >>> 0x20X));
                }
            }
            else {
                VMLS.F32((uint32_t)v9, (uint32_t)(v19 >>> 0x60X), (uint32_t)(v9 >>> 0x40X));
                VCMPE.F32((uint32_t)(v9 >>> 0x20X), (uint32_t)v9);
                VMRS((uint8_t)v22 | ((uint8_t)v12 << SOCK_STREAM) | ((uint8_t)v21 << 2) | ((uint8_t)v20 << 3), v1);
                if((v21 == 0 && v22 == v20)) {
                    VMOVGT.F32((uint32_t)v9, (uint32_t)(v9 >>> 0x20X));
                }
            }
            int v25 = 0;
            do {
                int v26 = sub_1E29C(v25);
                if(v26 != 0) {
                    sub_502C0(&v23, &v2, 0);
                    v24 = (uint32_t)(uint16_t)v24 | ((uint32_t)v2 << 16) | ((uint32_t)(uint8_t)(v24 >>> 24) << 24);
                    *(int*)&v3 = v24;
                    sub_1F164(v25, SOCK_STREAM, 0, param0, v23, v3);
                    if(gvar_7EB9C > 4) {
                        VCVT.F64.F32((uint64_t)(v19 >>> 0x40X), (uint32_t)v9);
                        *(int64_t*)&v0 = (uint64_t)(v19 >>> 0x40X);
                        snprintf(&__ptr1, 0x800, "chain = %d set freq to %.2f", v25);
                        sub_2E584(4, &__ptr1, 0);
                    }
                    VCVT.S32.F32((uint32_t)(v19 >>> 0x60X), (uint32_t)v9);
                    *(uint32_t*)(v25 * 4 + (int)&gvar_7F8C4) = (uint32_t)(v19 >>> 0x60X);
                    *(uint32_t*)(v25 * 4 + (int)&gvar_7F8E0) = (uint32_t)(v19 >>> 0x60X);
                }
                ++v25;
            }
            while(v25 != 4);
            ++v18;
            usleep(&loc_186A0);
        }
        while(v18 <= v16);
    }
    int v27 = 0;
    do {
        result = sub_1E29C(v27);
        if(result != 0) {
            *(uint32_t*)(v27 * 4 + (int)&gvar_7F8C4) = param2;
            *(uint32_t*)(v27 * 4 + (int)&gvar_7F8E0) = param2;
        }
        ++v27;
    }
    while(v27 != 4);
    return result;
}
