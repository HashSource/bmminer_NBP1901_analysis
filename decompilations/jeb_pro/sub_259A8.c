void sub_259A8() {
    __int128 v0;
    char __ptr1;
    double v1;
    int64_t v2;
    int v3;
    int v4 = 0;
    int v5 = 0;
    int v6 = 0;
    int v7 = 0;
    int v8 = 0;
    __int128 v9 = (unsigned __int128)v2 | ((unsigned __int128)-1.0 << 64);
    prctl(PR_SET_NAME, "heart_beat");
    while(SOCK_STREAM) {
        int v10 = 0;
        __int128 v11 = v9 & 0xFFFFFFFFFFFFFFFF0000000000000000X;
        pthread_setcancelstate(SOCK_STREAM, NULL);
        do {
            int v12 = sub_1E29C(v10);
            if(v12 != 0) {
                sub_304D4(10);
                int v13 = sub_191FC((int)(uint8_t)v10);
                if(v13 == 0) {
                    uint32_t v14 = gvar_7EB9C;
                    int v15 = *(int*)(v10 * 4 + (int)&v5) + SOCK_STREAM;
                    ++*(int*)(v10 * 4 + (int)&v5);
                    if(v14 > SOCK_STREAM) {
                        v4 = v15;
                        snprintf(&__ptr1, 0x800, "chain[%d] heart beat fail %d times.\n", v10, v4);
                        sub_2E584(SOCK_STREAM, &__ptr1, 0);
                    }
                }
                else {
                    *(int*)(v10 * 4 + (int)&v5) = 0;
                }
                sub_304D4(10);
                sub_192C8(v10);
                v11 = (unsigned __int128)((uint64_t)v11 + v1) | ((unsigned __int128)(uint64_t)(v11 >>> 0x40X) << 64);
            }
            ++v10;
        }
        while(v10 != 4);
        int v16 = sub_1E28C();
        if(v16 != 0) {
            int v17 = sub_1E28C();
            v0 = (unsigned __int128)(v0 & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) | ((unsigned __int128)v17 << 96);
            VCVT.F64.S32((uint64_t)(v0 >>> 0x40X), (uint32_t)(v0 >>> 0x60X));
            VDIV.F64((uint64_t)v11, (uint64_t)v11, (uint64_t)(v0 >>> 0x40X));
        }
        uint32_t v18 = gvar_7EB9C;
        VCMP.F64((uint64_t)(v11 >>> 0x40X), 0xbfb999999999999aL);
        VMRS((uint8_t)2 | ((uint8_t)(v16 == 0) << 2) | ((uint8_t)(v16 < 0) << 3), v3);
        if(v16 < 0) {
            VMOVMI.F64((uint64_t)(v11 >>> 0x40X), (uint64_t)v11);
        }
        if(v18 > 4) {
            int64_t v19 = (uint64_t)v11;
            *(double*)&v4 = (double)(v11 >>> 0x40X);
            snprintf(&__ptr1, 0x800, "last avg = %.2f, current voltage = %.2f", *(double*)&v4);
            sub_2E584(4, &__ptr1, 0);
        }
        v0 = (unsigned __int128)(((unsigned __int128)0.75 | ((unsigned __int128)(uint64_t)(v0 >>> 0x40X) << 64)) & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) | ((unsigned __int128)((int)gvar_482A8C / 100) << 96);
        VCVT.F64.S32((uint64_t)(v0 >>> 0x40X), (uint32_t)(v0 >>> 0x60X));
        VMUL.F64((uint64_t)(v0 >>> 0x40X), (uint64_t)(v0 >>> 0x40X), (uint64_t)v0);
        VCMPE.F64((uint64_t)(v0 >>> 0x40X), (uint64_t)(v11 >>> 0x40X));
        VMRS((uint8_t)((((v18 - 4) ^ v18) & (v18 ^ 0x4)) < 0) | ((uint8_t)(v18 >= 4) << SOCK_STREAM) | ((uint8_t)(v18 == 4) << 2) | ((uint8_t)((int)v18 < 4) << 3), v3);
        if((int)v18 < 4) {
            VMUL.F64((uint64_t)v0, (uint64_t)(v11 >>> 0x40X), (uint64_t)v0);
            VCMPE.F64((uint64_t)v0, (uint64_t)v11);
            VMRS((uint8_t)((((v18 - 4) ^ v18) & (v18 ^ 0x4)) < 0) | ((uint8_t)(v18 >= 4) << SOCK_STREAM) | ((uint8_t)(v18 == 4) << 2) | ((uint8_t)((int)v18 < 4) << 3), v3);
        }
        VCMPE.F64((uint64_t)(v0 >>> 0x40X), (uint64_t)v11);
        VMRS((uint8_t)((((v18 - 4) ^ v18) & (v18 ^ 0x4)) < 0) | ((uint8_t)(v18 >= 4) << SOCK_STREAM) | ((uint8_t)(v18 == 4) << 2) | ((uint8_t)((int)v18 < 4) << 3), v3);
        if((int)v18 < 4) {
            v0 = (unsigned __int128)(uint64_t)v0 | ((unsigned __int128)0.75 << 64);
            VMUL.F64((uint64_t)(v0 >>> 0x40X), (uint64_t)v11, (uint64_t)(v0 >>> 0x40X));
            VCMPE.F64((uint64_t)(v0 >>> 0x40X), (uint64_t)(v11 >>> 0x40X));
            VMRS((uint8_t)((((v18 - 4) ^ v18) & (v18 ^ 0x4)) < 0) | ((uint8_t)(v18 >= 4) << SOCK_STREAM) | ((uint8_t)(v18 == 4) << 2) | ((uint8_t)((int)v18 < 4) << 3), v3);
        }
        v9 = (unsigned __int128)(uint64_t)v11 | ((unsigned __int128)(uint64_t)v11 << 64);
        pthread_setcancelstate(0, NULL);
        pthread_testcancel();
        sleep(10);
    }
}
