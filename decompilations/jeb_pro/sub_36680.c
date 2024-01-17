uint32_t sub_36680(int param0) {
    char __ptr1;
    int64_t v0;
    int v1;
    if(gvar_7EB9C > 4) {
        snprintf(&__ptr1, 0x800, "[DEBUG] Check if is unbalanche happen, chain = %d\n", param0);
        sub_2E584(4, &__ptr1, 0);
    }
    uint32_t v2 = sub_1E0F0();
    if(v2 == 0) {
        return 0;
    }
    int v3 = 0;
    uint32_t result = 0;
    __int128 v4 = (unsigned __int128)v0 | ((unsigned __int128)0.75 << 64);
    char* __format = "Unbalance happened: chain = %d, asic = %d\n";
    int v5 = param0 * 0x100;
    while(SOCK_STREAM) {
        int v6 = v3 + v5 + 2106370;
        int v7 = *(int*)(v6 * 4 + gvar_4FCB34);
        uint32_t v8 = sub_1E130();
        char v9 = (int)(v8 * 8) > v7;
        char v10 = v8 * 8 == v7;
        char v11 = (((v7 - v8 * 8) ^ v7) & ((v8 * 8) ^ v7)) < 0;
        char v12 = v8 * 8 <= v7;
        if(v12 != 0 && v10 == 0) {
            result = 1;
            if(gvar_7EB9C > 3) {
            loc_3676C:
                int v13 = v3;
                ++v3;
                snprintf(&__ptr1, 0x800, __format, param0, v13);
                result = 1;
                sub_2E584(3, &__ptr1, 0);
                if(v3 != v2) {
                    continue;
                }
                return result;
            }
        loc_36700:
            ++v3;
            if(v3 != v2) {
                continue;
            }
            return result;
        }
        v4 = (unsigned __int128)*(int*)(v6 * 4 + gvar_4FCB34) | ((unsigned __int128)((v4 >>> 0x20X) & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) << 32);
        uint32_t v14 = sub_1E130();
        VCVT.F64.U32((uint64_t)v4, (uint32_t)v4);
        __int128 v15 = (unsigned __int128)(v15 & 0xFFFFFFFFFFFFFFFFFFFFFFFFX) | ((unsigned __int128)(v14 * 8) << 96);
        VCVT.F64.S32((uint64_t)(v15 >>> 0x40X), (uint32_t)(v15 >>> 0x60X));
        VMUL.F64((uint64_t)(v15 >>> 0x40X), (uint64_t)(v15 >>> 0x40X), (uint64_t)(v4 >>> 0x40X));
        VCMPE.F64((uint64_t)v4, (uint64_t)(v15 >>> 0x40X));
        VMRS((uint8_t)v11 | ((uint8_t)v12 << SOCK_STREAM) | ((uint8_t)v10 << 2) | ((uint8_t)v9 << 3), v1);
        if(v9 == 0) {
            goto loc_36700;
        }
        else {
            result = 1;
            if(gvar_7EB9C <= 3) {
                goto loc_36700;
            }
            goto loc_3676C;
        }
    }
    return result;
}
