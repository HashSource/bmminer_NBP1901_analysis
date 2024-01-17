int sub_35344() {
    int result;
    int v0;
    uint32_t v1;
    char __ptr1;
    char v2;
    __int128 v3;
    if((gvar_99EDBC & 0x2) == 0) {
    loc_35370:
        int v4 = sub_1572C();
        int v5 = sub_15508();
        int v6 = sub_155C4();
        int v7 = sub_1572C();
        result = v5 - v7;
        uint32_t v8 = gvar_7EDE8;
        if(v8 == 0xFF) {
            v1 = gvar_482A98;
        loc_354B4:
            int v9 = v1 - SOCK_STREAM;
            gvar_482A9C = (int)v1 > SOCK_STREAM;
            gvar_482A98 = (uint32_t)(~(v9 >> 31) & v9);
        }
        else {
            int v10 = v8 - v4;
            if(v10 < 0) {
                v10 = 0 - v10;
            }
            v1 = gvar_482A98;
            if(v10 <= 4) {
                goto loc_354B4;
            }
            else {
                uint32_t v11 = v1 + SOCK_STREAM;
                if((int)v11 >= 2) {
                    v11 = 2;
                }
                gvar_482A98 = v11;
                gvar_482A9C = (int)v1 > 0;
            }
        }
        gvar_7EDE8 = (uint32_t)v4;
        if(v5 <= 72) {
            int v12 = ((result >> 31) ^ result) - (result >> 31);
            char v13 = v12 < 32;
            char v14 = v12 == 32;
            char v15 = (((v12 - 32) ^ v12) & (v12 ^ 0x20)) < 0;
            if(v12 <= 32) {
                v13 = v4 < 50;
                v14 = v4 == 50;
                v15 = (((v4 - 50) ^ v4) & (v4 ^ 0x32)) < 0;
            }
            if((v14 == 0 && v15 == v13)) {
                goto loc_3540C;
            }
            else if(gvar_482A9C != 0) {
                goto loc_3540C;
            }
            else {
                gvar_482A94 = 0;
                if(v12 <= 22) {
                    int v16 = sub_1E4B0();
                    VCVT.F32.S32((uint32_t)(v3 >>> 0x40X), v12);
                    __int128 v17 = (unsigned __int128)10.0 | ((unsigned __int128)((unsigned __int128)25.0 | ((unsigned __int128)(uint64_t)(((unsigned __int128)(v3 & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) | ((unsigned __int128)v12 << 96)) >>> 0x40X) << 32)) << 32);
                    VDIV.F32((uint32_t)(((unsigned __int128)(uint64_t)v17 | ((unsigned __int128)((uint32_t)(v17 >>> 0x20X) + (uint32_t)(v17 >>> 0x40X)) << 64) | ((unsigned __int128)(uint32_t)(v17 >>> 0x60X) << 96)) >>> 0x60X), (uint32_t)(((unsigned __int128)(uint64_t)v17 | ((unsigned __int128)((uint32_t)(v17 >>> 0x20X) + (uint32_t)(v17 >>> 0x40X)) << 64) | ((unsigned __int128)(uint32_t)(v17 >>> 0x60X) << 96)) >>> 0x40X), (uint32_t)(((unsigned __int128)(uint64_t)v17 | ((unsigned __int128)((uint32_t)(v17 >>> 0x20X) + (uint32_t)(v17 >>> 0x40X)) << 64) | ((unsigned __int128)(uint32_t)(v17 >>> 0x60X) << 96)) >>> 0x20X));
                    VMUL.F32((uint32_t)(((unsigned __int128)(uint64_t)v17 | ((unsigned __int128)((uint32_t)(v17 >>> 0x20X) + (uint32_t)(v17 >>> 0x40X)) << 64) | ((unsigned __int128)(uint32_t)(v17 >>> 0x60X) << 96)) >>> 0x60X), (uint32_t)(((unsigned __int128)(uint64_t)v17 | ((unsigned __int128)((uint32_t)(v17 >>> 0x20X) + (uint32_t)(v17 >>> 0x40X)) << 64) | ((unsigned __int128)(uint32_t)(v17 >>> 0x60X) << 96)) >>> 0x60X), (uint32_t)((unsigned __int128)(uint64_t)v17 | ((unsigned __int128)((uint32_t)(v17 >>> 0x20X) + (uint32_t)(v17 >>> 0x40X)) << 64) | ((unsigned __int128)(uint32_t)(v17 >>> 0x60X) << 96)));
                    VCVT.U32.F32((uint32_t)(((unsigned __int128)(uint64_t)v17 | ((unsigned __int128)((uint32_t)(v17 >>> 0x20X) + (uint32_t)(v17 >>> 0x40X)) << 64) | ((unsigned __int128)(uint32_t)(v17 >>> 0x60X) << 96)) >>> 0x60X), (uint32_t)(((unsigned __int128)(uint64_t)v17 | ((unsigned __int128)((uint32_t)(v17 >>> 0x20X) + (uint32_t)(v17 >>> 0x40X)) << 64) | ((unsigned __int128)(uint32_t)(v17 >>> 0x60X) << 96)) >>> 0x60X));
                    *(int*)&v2 = (uint32_t)(((unsigned __int128)(uint64_t)v17 | ((unsigned __int128)((uint32_t)(v17 >>> 0x20X) + (uint32_t)(v17 >>> 0x40X)) << 64) | ((unsigned __int128)(uint32_t)(v17 >>> 0x60X) << 96)) >>> 0x60X);
                    int v18 = v2;
                    result = v16 - v18;
                    if(v16 - v18 <= 39) {
                        v0 = 40;
                    }
                    else {
                        result = sub_1E4B0();
                        v0 = (uint8_t)result - (uint8_t)v18;
                    }
                    if(gvar_7EB9C > 4) {
                        int v19 = sub_1E4B0();
                        snprintf(&__ptr1, 0x800, "max temp = %04d, diff = %04d, - pwm form %04d to %04d\n", v5, v12, v19, v0);
                        result = sub_2E584(4, &__ptr1, 0);
                    }
                    if(v5 > 67) {
                        return result;
                    }
                    return sub_13FB0(v0);
                }
                else if(v12 > 27) {
                    int v20 = sub_1E4B0();
                    VCVT.F32.S32((uint32_t)(v3 >>> 0x40X), v12);
                    __int128 v21 = (unsigned __int128)10.0 | ((unsigned __int128)((unsigned __int128)25.0 | ((unsigned __int128)(uint64_t)(((unsigned __int128)(v3 & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) | ((unsigned __int128)v12 << 96)) >>> 0x40X) << 32)) << 32);
                    VDIV.F32((uint32_t)(((unsigned __int128)(uint64_t)v21 | ((unsigned __int128)((uint32_t)(v21 >>> 0x40X) + (uint32_t)(v21 >>> 0x20X)) << 64) | ((unsigned __int128)(uint32_t)(v21 >>> 0x60X) << 96)) >>> 0x60X), (uint32_t)(((unsigned __int128)(uint64_t)v21 | ((unsigned __int128)((uint32_t)(v21 >>> 0x40X) + (uint32_t)(v21 >>> 0x20X)) << 64) | ((unsigned __int128)(uint32_t)(v21 >>> 0x60X) << 96)) >>> 0x40X), (uint32_t)(((unsigned __int128)(uint64_t)v21 | ((unsigned __int128)((uint32_t)(v21 >>> 0x40X) + (uint32_t)(v21 >>> 0x20X)) << 64) | ((unsigned __int128)(uint32_t)(v21 >>> 0x60X) << 96)) >>> 0x20X));
                    VMUL.F32((uint32_t)(((unsigned __int128)(uint64_t)v21 | ((unsigned __int128)((uint32_t)(v21 >>> 0x40X) + (uint32_t)(v21 >>> 0x20X)) << 64) | ((unsigned __int128)(uint32_t)(v21 >>> 0x60X) << 96)) >>> 0x60X), (uint32_t)(((unsigned __int128)(uint64_t)v21 | ((unsigned __int128)((uint32_t)(v21 >>> 0x40X) + (uint32_t)(v21 >>> 0x20X)) << 64) | ((unsigned __int128)(uint32_t)(v21 >>> 0x60X) << 96)) >>> 0x60X), (uint32_t)((unsigned __int128)(uint64_t)v21 | ((unsigned __int128)((uint32_t)(v21 >>> 0x40X) + (uint32_t)(v21 >>> 0x20X)) << 64) | ((unsigned __int128)(uint32_t)(v21 >>> 0x60X) << 96)));
                    VCVT.U32.F32((uint32_t)(((unsigned __int128)(uint64_t)v21 | ((unsigned __int128)((uint32_t)(v21 >>> 0x40X) + (uint32_t)(v21 >>> 0x20X)) << 64) | ((unsigned __int128)(uint32_t)(v21 >>> 0x60X) << 96)) >>> 0x60X), (uint32_t)(((unsigned __int128)(uint64_t)v21 | ((unsigned __int128)((uint32_t)(v21 >>> 0x40X) + (uint32_t)(v21 >>> 0x20X)) << 64) | ((unsigned __int128)(uint32_t)(v21 >>> 0x60X) << 96)) >>> 0x60X));
                    *(int*)&v2 = (uint32_t)(((unsigned __int128)(uint64_t)v21 | ((unsigned __int128)((uint32_t)(v21 >>> 0x40X) + (uint32_t)(v21 >>> 0x20X)) << 64) | ((unsigned __int128)(uint32_t)(v21 >>> 0x60X) << 96)) >>> 0x60X);
                    int v22 = v2;
                    if(v20 + v22 > 99) {
                        v0 = 100;
                    }
                    else {
                        int v23 = sub_1E4B0();
                        v0 = (uint8_t)v23 + (uint8_t)v22;
                    }
                    if(gvar_7EB9C > 4) {
                        int v24 = sub_1E4B0();
                        snprintf(&__ptr1, 0x800, "max temp = %04d, diff = %04d, + pwm form %04d to %04d\n", v5, v12, v24, v0);
                        sub_2E584(4, &__ptr1, 0);
                    }
                    return sub_13FB0(v0);
                }
                if(gvar_7EB9C > 4) {
                    int v25 = sub_1E4B0();
                    snprintf(&__ptr1, 0x800, "max temp = %04d, diff = %04d, = pwm %04d\n", v5, v12, v25);
                    return sub_2E584(4, &__ptr1, 0);
                }
            }
        }
        else {
        loc_3540C:
            if(gvar_482A94 == 0) {
                if(gvar_7EB9C > 4) {
                    snprintf(&__ptr1, 0x800, "min pic temp = %d max pic temp = %d pic diff = %d, max chip temp = %d, last diff continuous_time = %d", v4, v5, result, v6, gvar_482A98);
                    sub_2E584(4, &__ptr1, 0);
                }
                gvar_482A94 = 1;
            }
            result = sub_13FB0(100);
        }
    }
    else {
        int v26 = gvar_99EDC2;
        if((uint32_t)v26 > 100) {
            goto loc_35370;
        }
        else {
            result = sub_13FB0(v26);
            if(gvar_482A94 == 0) {
                if(gvar_7EB9C > 3) {
                    snprintf(&__ptr1, 0x800, "fan_etf: Set fixed fan speed=%d\n", gvar_99EDC2);
                    result = sub_2E584(3, &__ptr1, 0);
                }
                gvar_482A94 = 1;
                return result;
            }
        }
    }
    return result;
}
