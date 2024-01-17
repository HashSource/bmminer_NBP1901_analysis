int sub_502C0(int param0, int param1, int param2) {
    __int128 v0;
    __int128 v1;
    int v2;
    __int128 v3;
    __int128 v4;
    __int128 v5;
    int v6 = 2;
    __int128 v7 = (unsigned __int128)(uint32_t)v3 | ((unsigned __int128)(uint32_t)v4 << 32) | ((unsigned __int128)(uint64_t)(v3 >>> 0x40X) << 64);
    int v8 = 2;
    __int128 v9 = (unsigned __int128)25.0 | ((unsigned __int128)((v0 >>> 0x20X) & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) << 32);
    __int128 v10 = (unsigned __int128)0.5 | ((unsigned __int128)(uint64_t)(((unsigned __int128)(v1 & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) | ((unsigned __int128)10.0 << 96)) >>> 0x40X) << 64);
    while(SOCK_STREAM) {
        v9 = (unsigned __int128)(v9 & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) | ((unsigned __int128)v8 << 96);
        int v11 = SOCK_STREAM;
        VCVT.F32.S32((uint32_t)(v9 >>> 0x20X), (uint32_t)(v9 >>> 0x60X));
        VDIV.F32((uint32_t)(v5 >>> 0x40X), (uint32_t)v9, (uint32_t)(v9 >>> 0x20X));
        do {
            v9 = (unsigned __int128)(v9 & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) | ((unsigned __int128)v11 << 96);
            VCVT.F32.S32((uint32_t)(v5 >>> 0x60X), (uint32_t)(v9 >>> 0x60X));
            int v12 = v11 * v11;
            int v13 = v11;
            VMUL.F32((uint32_t)(v5 >>> 0x60X), (uint32_t)(v5 >>> 0x60X), (uint32_t)(v7 >>> 0x20X));
            do {
                __int128 v14 = (unsigned __int128)(v9 & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) | ((unsigned __int128)v13 << 96);
                VCVT.F32.S32((uint32_t)(v14 >>> 0x60X), (uint32_t)(v14 >>> 0x60X));
                VMUL.F32((uint32_t)(v14 >>> 0x60X), (uint32_t)(v14 >>> 0x60X), (uint32_t)(v5 >>> 0x60X));
                VMUL.F32((uint32_t)(v14 >>> 0x60X), (uint32_t)(v14 >>> 0x60X), (uint32_t)(v14 >>> 0x20X));
                VDIV.F32((uint32_t)(v14 >>> 0x40X), (uint32_t)(v14 >>> 0x60X), (uint32_t)v14);
                VCVT.F64.F32((uint64_t)(v14 >>> 0x40X), (uint32_t)(v14 >>> 0x40X));
                v9 = (unsigned __int128)(uint64_t)v14 | ((unsigned __int128)((uint64_t)(v14 >>> 0x40X) + (uint64_t)v10) << 64);
                VCVT.S32.F64((uint32_t)(v9 >>> 0x40X), (uint64_t)(v9 >>> 0x40X));
                if((uint32_t)(v9 >>> 0x40X) - 16 <= 234) {
                    VCVT.F32.S32((uint32_t)(v9 >>> 0x60X), (uint32_t)(v9 >>> 0x40X));
                    VMUL.F32((uint32_t)(v9 >>> 0x60X), (uint32_t)(v9 >>> 0x60X), (uint32_t)(v5 >>> 0x40X));
                    if(v8 == SOCK_STREAM) {
                        VCMPE.F32((uint32_t)(v9 >>> 0x60X), 0x45435000);
                        VMRS(6, v2);
                    }
                    VCMPE.F32((uint32_t)(v9 >>> 0x60X), 0x45480000);
                    VMRS((uint8_t)((((v8 - SOCK_STREAM) ^ v8) & (v8 ^ SOCK_STREAM)) < 0) | ((uint8_t)(v8 >= SOCK_STREAM) << SOCK_STREAM) | ((uint8_t)(v8 == SOCK_STREAM) << 2) | ((uint8_t)(v8 < SOCK_STREAM) << 3), v2);
                    if(v8 <= SOCK_STREAM) {
                        VCMPE.F32((uint32_t)(v9 >>> 0x60X), 0x44fa0000);
                        VMRS((uint8_t)((((v8 - SOCK_STREAM) ^ v8) & (v8 ^ SOCK_STREAM)) < 0) | ((uint8_t)(v8 >= SOCK_STREAM) << SOCK_STREAM) | ((uint8_t)(v8 == SOCK_STREAM) << 2) | ((uint8_t)(v8 < SOCK_STREAM) << 3), v2);
                        v10 = (unsigned __int128)(uint64_t)v10 | ((unsigned __int128)v12 << 64) | ((unsigned __int128)(uint32_t)(v10 >>> 0x60X) << 96);
                        VCVT.F32.S32((uint32_t)(v4 >>> 0x60X), (uint32_t)(v10 >>> 0x40X));
                        VDIV.F32((uint32_t)(v10 >>> 0x40X), (uint32_t)(v9 >>> 0x60X), (uint32_t)(v4 >>> 0x60X));
                        v9 = (unsigned __int128)(v9 & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) | ((unsigned __int128)((uint32_t)(v7 >>> 0x20X) + (uint32_t)(v10 >>> 0x40X)) << 96);
                        VABS.F32((uint32_t)(v9 >>> 0x60X), (uint32_t)(v9 >>> 0x60X));
                        VCMPE.F32((uint32_t)(v9 >>> 0x60X), (uint32_t)(v10 >>> 0x60X));
                        VMRS((uint8_t)((((v8 - SOCK_STREAM) ^ v8) & (v8 ^ SOCK_STREAM)) < 0) | ((uint8_t)(v8 >= SOCK_STREAM) << SOCK_STREAM) | ((uint8_t)(v8 == SOCK_STREAM) << 2) | ((uint8_t)0 << 3), v2);
                    }
                }
                ++v13;
                v12 += v11;
            }
            while((uint8_t)v13 != 8);
            ++v11;
        }
        while(v11 != 8);
        v8 = SOCK_STREAM;
        if(v6 == SOCK_STREAM) {
            break;
        }
        v6 = SOCK_STREAM;
    }
    puts("\n");
    return -1;
}
