int sub_1AAE4(int param0, int param1, int param2, char* param3, char param4) {
    int v0;
    char* __ptr1_1;
    char __ptr1;
    __int128 v1;
    int v2;
    short v3;
    char v4;
    __int128 v5;
    __int128 v6;
    uint32_t v7 = (uint32_t)param3;
    uint32_t v8 = gvar_7EB9C;
    int64_t v9 = (uint64_t)v1;
    int64_t v10 = (uint64_t)(v1 >>> 0x40X);
    __int128 v11 = (unsigned __int128)(uint64_t)v1 | ((unsigned __int128)(uint32_t)v6 << 64) | ((unsigned __int128)(uint32_t)(v1 >>> 0x60X) << 96);
    if(v8 <= 4) {
        param3 = &__ptr1;
    }
    VCVT.F64.F32((uint64_t)v11, (uint32_t)v6);
    if(v8 <= 4) {
        __ptr1_1 = param3;
    }
    else {
        __ptr1_1 = &__ptr1;
        char* ptr0 = param4 != 0 ? "true": "false";
        *(uint32_t*)&v3 = v7;
        v0 = param2;
        int64_t v12 = (uint64_t)v11;
        snprintf(&__ptr1, 0x800, "fixed step chain = %d, freq_start = %d, freq_end = %d, freq_step = %.2f, is_higher_voltage = %s\n", param0, v0, *(uint32_t*)&v3, v12, ptr0);
        sub_2E584(4, &__ptr1, 0);
    }
    int result = sub_1F0E0(param0, SOCK_STREAM, 0, param1);
    *(int*)&__ptr1_1[-4] = 0;
    int v13 = 0;
    __int128 v14 = (unsigned __int128)(((unsigned __int128)4576918229304087675L | ((unsigned __int128)(uint64_t)(v5 >>> 0x40X) << 64)) & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) | ((unsigned __int128)((uint32_t)param2 >= v7 ? param2 - v7: (int)(v7 - param2)) << 96);
    VCVT.F32.U32((uint32_t)(v14 >>> 0x40X), (uint32_t)(v14 >>> 0x60X));
    __int128 v15 = (unsigned __int128)(uint64_t)v14 | ((unsigned __int128)((uint32_t)(v14 >>> 0x40X) + (uint32_t)(v11 >>> 0x40X)) << 64) | ((unsigned __int128)(uint32_t)(v14 >>> 0x60X) << 96);
    VCVT.F64.F32((uint64_t)(v15 >>> 0x40X), (uint32_t)(v15 >>> 0x40X));
    VDIV.F64((uint64_t)v15, (uint64_t)(v15 >>> 0x40X) + (uint64_t)v15, (uint64_t)v11);
    VCVT.U32.F64((uint32_t)(((uint64_t)(v15 >>> 0x40X) + (uint64_t)v15) >>> 32L), (uint64_t)v15);
    int v16 = (uint32_t)(((uint64_t)(v15 >>> 0x40X) + (uint64_t)v15) >>> 32L);
    if(v16 != 0) {
        __int128 v17 = (unsigned __int128)(((unsigned __int128)(uint64_t)v15 | ((unsigned __int128)((uint64_t)(v15 >>> 0x40X) + (uint64_t)v15) << 64)) & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) | ((unsigned __int128)v7 << 96);
        VCVT.F32.U32((uint32_t)(v11 >>> 0x20X), (uint32_t)(v17 >>> 0x60X));
        __int128 v18 = (unsigned __int128)(v17 & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) | ((unsigned __int128)param2 << 96);
        VCVT.F32.U32((uint32_t)(v11 >>> 0x60X), (uint32_t)(v18 >>> 0x60X));
        char* __format = "chain = %d set freq to %.2f";
        int v19 = SOCK_STREAM;
        do {
            v18 = (unsigned __int128)(v18 & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) | ((unsigned __int128)v19 << 96);
            char v20 = param2 < (int)v7;
            char v21 = param2 == v7;
            uint8_t v22 = (uint8_t)((((param2 - v7) ^ param2) & (param2 ^ v7)) < 0);
            char v23 = (uint32_t)param2 >= v7;
            VCVT.F32.U32((uint32_t)v6, (uint32_t)(v18 >>> 0x60X));
            VMUL.F32((uint32_t)v6, (uint32_t)v6, (uint32_t)(v11 >>> 0x40X));
            if(v23 == 0) {
                v11 = (unsigned __int128)((uint32_t)v6 + (uint32_t)(v11 >>> 0x60X)) | ((unsigned __int128)((v11 >>> 0x20X) & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) << 32);
                VCMP.F32((uint32_t)v11, (uint32_t)(v11 >>> 0x20X));
                VMRS((uint8_t)v22 | ((uint8_t)v21 << 2) | ((uint8_t)v20 << 3), v2);
                if((v21 == 0 && v22 == v20)) {
                    VMOVGT.F32((uint32_t)v11, (uint32_t)(v11 >>> 0x20X));
                }
            }
            else {
                v11 = (unsigned __int128)((uint32_t)(v11 >>> 0x60X) + (uint32_t)v6) | ((unsigned __int128)((v11 >>> 0x20X) & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) << 32);
                VCMP.F32((uint32_t)v11, (uint32_t)(v11 >>> 0x20X));
                VMRS((uint8_t)v22 | ((uint8_t)v23 << SOCK_STREAM) | ((uint8_t)v21 << 2) | ((uint8_t)v20 << 3), v2);
                if(v20 != 0) {
                    VMOVMI.F32((uint32_t)v11, (uint32_t)(v11 >>> 0x20X));
                }
            }
            v6 = (unsigned __int128)(uint32_t)v11 | ((unsigned __int128)((v6 >>> 0x20X) & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) << 32);
            sub_502C0((int)(__ptr1_1 - 8), &v4, 0);
            ++v19;
            uint32_t v24 = *(int*)&__ptr1_1[-4];
            v0 = *(int*)&__ptr1_1[-8];
            *(uint32_t*)&v3 = v24;
            sub_1F164(param0, SOCK_STREAM, 0, (char*)param1, v0, v3);
            if(gvar_7EB9C > 4) {
                VCVT.F64.F32((uint64_t)v6, (uint32_t)v11);
                *(int64_t*)&v0 = (uint64_t)v6;
                snprintf(__ptr1_1, 0x800, __format, param0);
                sub_2E584(4, __ptr1_1, 0);
            }
            result = usleep(&loc_186A0);
        }
        while(v19 <= v16);
    }
    *(uint32_t*)(param0 * 4 + (int)&gvar_7F8C4) = v7;
    *(uint32_t*)(param0 * 4 + (int)&gvar_7F8E0) = v7;
    return result;
}
