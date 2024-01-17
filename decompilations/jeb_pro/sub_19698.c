int sub_19698(int param0, int param1, size_t __n) {
    __int128 v0;
    int result;
    short v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int v6;
    int __ptr1;
    char v7;
    int v8;
    short v9;
    short v10;
    double v11;
    int64_t v12;
    int v13 = param0;
    int v14 = sub_48910();
    if(gvar_7EB9C > 3) {
        snprintf(&__ptr1, 0x800, "power type version: 0x%04x\n", v14);
        sub_2E584(3, &__ptr1, 0);
    }
    int v15 = sub_1E91C((int)(uint16_t)v14);
    int v16 = v15;
    uint32_t v17 = gvar_7EB9C;
    if(v15 == 0) {
        if(v17 > 3) {
            __ptr1 = 0x65776f70;
            v6 = 2037653618;
            v5 = 0x76206570;
            v4 = 1769173605;
            v3 = 1696624239;
            v2 = 0x726f7272;
            v1 = 10;
            sub_2E584(3, &__ptr1, v16);
        }
        return -1;
    }
    if(v17 > 3) {
        __ptr1 = 1702129221;
        v6 = 1819484274;
        v5 = 0x20706565;
        v4 = 1830842228;
        v3 = 543517537;
        v2 = 1701999987;
        *(int*)&v1 = 0x776f7020;
        *(int*)&v9 = 0x72207265;
        *(int*)&v7 = 'e';
        *(int*)&v10 = 1713399155;
        int v18 = 0x73696e69;
        int v19 = 667240;
        v15 = sub_2E584(3, &__ptr1, 0);
    }
    sub_42138(v15, param1, __n);
    sleep(1);
    sub_194F0();
    int v20 = sub_195A8(v13);
    result = v20;
    if(result >= 0) {
        sub_42100(v20, param1, __n);
        int v21 = v14 - 117;
        sleep(1);
        char v22 = v21 < 3;
        char v23 = v21 == 3;
        char v24 = (((v21 - 3) ^ v21) & (v21 ^ 0x3)) < 0;
        char v25 = (uint32_t)v21 >= 3;
        if(v25 != 0 && v23 == 0) {
            v0 = (unsigned __int128)(v0 & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) | ((unsigned __int128)v13 << 96);
            int v26 = 3;
            VCVT.F64.S32(v12, (uint32_t)(v0 >>> 0x60X));
            do {
                sleep(1);
                sub_193F8();
                VMUL.F64((uint64_t)v0, v12, 0x3fe8000000000000L);
                VDIV.F64((uint64_t)(v0 >>> 0x40X), (uint64_t)v0, 0x4059000000000000L);
                VCMPE.F64(v11, (uint64_t)(v0 >>> 0x40X));
                VMRS((uint8_t)v24 | ((uint8_t)v25 << SOCK_STREAM) | ((uint8_t)v23 << 2) | ((uint8_t)v22 << 3), v8);
                if(v22 == 0) {
                    return 0;
                }
                if(gvar_7EB9C > 3) {
                    __ptr1 = 0x65776f70;
                    v6 = 1870012530;
                    v5 = 1734440044;
                    v4 = 1633886309;
                    v3 = 0x6f6e206e;
                    v2 = 0x656d2074;
                    *(int*)&v1 = 1948284005;
                    *(int*)&v9 = 0x74206568;
                    __builtin_strcpy(&v7, "arget");
                    sub_2E584(3, &__ptr1, 0);
                }
                int v27 = v26;
                --v26;
                v22 = v27 < SOCK_STREAM;
                v23 = v27 == SOCK_STREAM;
                v24 = (((v27 - SOCK_STREAM) ^ v27) & (v27 ^ SOCK_STREAM)) < 0;
                v25 = v27 >= SOCK_STREAM;
            }
            while(v26 != 0);
            return -1;
        }
        int v28 = 3;
        while(SOCK_STREAM) {
            sleep(1);
            sub_192C8(0);
            VCMPE.F64(v11, 0);
            VMRS((uint8_t)v24 | ((uint8_t)v25 << SOCK_STREAM) | ((uint8_t)v23 << 2) | ((uint8_t)v22 << 3), v8);
            if(v22 == 0) {
                v0 = (unsigned __int128)(v0 & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) | ((unsigned __int128)v13 << 96);
                VMUL.F64(v11, v11, 0x4059000000000000L);
                VCVT.F64.S32((uint64_t)(v0 >>> 0x40X), (uint32_t)(v0 >>> 0x60X));
                VMUL.F64((uint64_t)v0, (uint64_t)(v0 >>> 0x40X), 0x3ff199999999999aL);
                VCMPE.F64(v11, (uint64_t)v0);
                VMRS((uint8_t)v24 | ((uint8_t)v25 << SOCK_STREAM) | ((uint8_t)v23 << 2) | ((uint8_t)0 << 3), v8);
                if(v23 == 0 && v24 == 0) {
                    uint32_t v29 = gvar_7EB9C;
                    char v30 = (int)v29 < 3;
                    char v31 = v29 == 3;
                    char v32 = (((v29 - 3) ^ v29) & (v29 ^ 0x3)) < 0;
                    char v33 = v29 >= 3;
                    if((v33 != 0 && v31 == 0)) {
                        v0 = (unsigned __int128)(uint64_t)v0 | ((unsigned __int128)(v11 + (uint64_t)(v0 >>> 0x40X)) << 64);
                        VCMPE.F64((uint64_t)(v0 >>> 0x40X), 0);
                        VMRS((uint8_t)v32 | ((uint8_t)v33 << SOCK_STREAM) | ((uint8_t)v31 << 2) | ((uint8_t)v30 << 3), v8);
                        snprintf(&__ptr1, 0x800, "chain avg vol %s from %d to %.2f", v31 == 0 && v32 == v30 ? "rise": "drop", v13);
                        sub_2E584(3, &__ptr1, 0);
                        if(gvar_7EB9C > 3) {
                            __ptr1 = 0x65776f70;
                            v6 = 1870012530;
                            v5 = 1734440044;
                            v4 = 1633886309;
                            v3 = 0x6f6e206e;
                            v2 = 0x656d2074;
                            *(int*)&v1 = 1948284005;
                            *(int*)&v9 = 0x74206568;
                            __builtin_strcpy(&v7, "arget");
                            sub_2E584(3, &__ptr1, 0);
                        }
                    }
                    int v34 = v28;
                    --v28;
                    v22 = v34 < SOCK_STREAM;
                    v23 = v34 == SOCK_STREAM;
                    v24 = (((v34 - SOCK_STREAM) ^ v34) & (v34 ^ SOCK_STREAM)) < 0;
                    v25 = v34 >= SOCK_STREAM;
                    if(v28 != 0) {
                        continue;
                    }
                    break;
                }
                VMUL.F64((uint64_t)v0, (uint64_t)(v0 >>> 0x40X), 0x3feccccccccccccdL);
                VCMPE.F64(v11, (uint64_t)v0);
                VMRS((uint8_t)v24 | ((uint8_t)v25 << SOCK_STREAM) | ((uint8_t)v23 << 2) | ((uint8_t)0 << 3), v8);
                result = 0;
            loc_197DC:
                uint32_t v35 = 0;
                while(SOCK_STREAM) {
                    int v36 = sub_48B7C();
                    ++v35;
                    v17 = (v35 * 0xcccccccdL) >>> 32L;
                    if(v36 != 0) {
                        int v37 = (int)(v35 - (v17 >>> 2) * 5);
                        if(v37 == 0 && gvar_7EB9C > 3) {
                            __ptr1 = 1836345698;
                            v6 = 1601071457;
                            v5 = 0x5f746567;
                            v4 = 0x65776f70;
                            __builtin_strcpy(&v3, "r_status failed!");
                            sub_2E584(3, &__ptr1, v37);
                        }
                        sleep(3);
                        if(v35 == 20) {
                            break;
                        }
                        continue;
                    }
                    return result;
                }
                return -1;
            }
            if(gvar_7EB9C > 3) {
                __builtin_strcpy(&__ptr1, "read_feedback_voltage failed!");
                sub_2E584(3, &__ptr1, 0);
            }
            result = 0;
            sub_31D58(9, "power voltage read failed, pls check!", __n);
            goto loc_197DC;
        }
        result = -1;
        goto loc_197DC;
    }
    if(gvar_7EB9C > 3) {
        snprintf(&__ptr1, 0x800, "%s power iic error.\n", "power_init");
        sub_2E584(3, &__ptr1, 0);
    }
    return result;
}
