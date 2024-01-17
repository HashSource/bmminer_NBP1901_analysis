int sub_26250() {
    int result;
    char __ptr1;
    int v0;
    if(gvar_80F60 == SOCK_STREAM) {
        memset(&gvar_7FA18, 0, 32);
        gvar_80F60 = 0;
    }
    time_t v1 = sub_26104();
    uint32_t v2 = gvar_7FA38;
    gvar_7FA38 = (uint32_t)v1;
    int v3 = (int)(v1 - v2);
    uint32_t* ptr0 = (uint32_t*)&gvar_7FA18;
    int v4 = 0;
    uint32_t* ptr1 = (uint32_t*)&gvar_7F8F0;
    uint32_t v5 = (uint32_t)(v3 * 0x88888889);
    int v6 = (uint32_t)((v3 * 0xffffffff88888889L) >>> 32L);
    int v7 = v3 / 60;
    while(SOCK_STREAM) {
        int v8 = sub_1E29C(v4);
        result = v4 * 8 + &gvar_99ED98;
        if(v8 == 0) {
        loc_263E0:
            ++v4;
            ptr0 += 2;
            if(v4 != 4) {
                continue;
            }
        }
        else {
            uint32_t v9 = *(uint32_t*)(v4 * 8 + (int)&gvar_99ED98);
            uint32_t v10 = *ptr0;
            uint32_t v11 = *(uint32_t*)(result + 4);
            uint32_t v12 = v9 - v10;
            uint32_t v13 = ~*(ptr0 + SOCK_STREAM) + (uint32_t)(v9 >= v10) + v11;
            uint32_t v14 = *ptr1;
            int v15 = sub_60120((int)(v12 * -1), ((v13 * 0x80000000) | (v12 >>> SOCK_STREAM)) * 2 + (uint32_t)(v12 * 0x80000000 >= v12) * 2 + ((uint32_t)__carry__(v12 * 0x80000000 - v12, v12 * 0x80000000 - v12) + (uint32_t)__carry__((v12 * 0x80000000 - v12) * 2, v12)) - v13 - 2, v3, v3 >> 31);
            int v16 = sub_60120(v15, v4 * 8, 1000000000, 0);
            int v17 = sub_600B4((uint32_t)v16, (uint32_t)(v4 * 8));
            __int128 v18 = (unsigned __int128)(uint64_t)v18 | ((unsigned __int128)((uint64_t)v17 | ((uint64_t)(v4 * 8) << 32)) << 64);
            __int128 v19 = (unsigned __int128)(uint64_t)v19 | ((unsigned __int128)0.75 << 64);
            *ptr0 = v9;
            *(ptr0 + SOCK_STREAM) = v11;
            v5 = v14 * 0xaaaaaaab;
            v6 = (uint32_t)((v14 * 0xaaaaaaabL) >>> 32L);
            int v20 = (v14 - SOCK_STREAM) * 0xaaaaaaab;
            int v21 = (uint32_t)(((uint64_t)(v14 - SOCK_STREAM) * 0xaaaaaaabL) >>> 32L);
            int v22 = v14 - SOCK_STREAM - (v21 >>> 4) * 24;
            *(uint64_t*)((v14 - (v6 >>> 4) * 24 + v4 * 24) * 8 + (int)&gvar_58E040) = (uint64_t)(v18 >>> 0x40X);
            result = v4 * 24 + v22;
            int64_t* ptr2 = (int64_t*)((v4 * 24 + v22) * 8 + &gvar_58E040);
            if(v14 <= SOCK_STREAM) {
                goto loc_263E0;
            }
            else {
                v19 = (unsigned __int128)*ptr2 | ((unsigned __int128)(uint64_t)(v19 >>> 0x40X) << 64);
                VMUL.F64((uint64_t)(v19 >>> 0x40X), *ptr2, (uint64_t)(v19 >>> 0x40X));
                VCMPE.F64((uint64_t)(v18 >>> 0x40X), (uint64_t)(v19 >>> 0x40X));
                VMRS((uint8_t)((((v14 - SOCK_STREAM) ^ v14) & (v14 ^ SOCK_STREAM)) < 0) | ((uint8_t)(v14 >= SOCK_STREAM) << SOCK_STREAM) | ((uint8_t)(v14 == SOCK_STREAM) << 2) | ((uint8_t)((int)v14 < SOCK_STREAM) << 3), v0);
                if((int)v14 >= SOCK_STREAM || gvar_7EB9C <= 3) {
                    goto loc_263E0;
                }
                int64_t v23 = (uint64_t)(v18 >>> 0x40X);
                int v24 = v7;
                snprintf(&__ptr1, 0x800, "chain %d hash rate %.2f low in %ld mins", v4, v23, v24);
                ++v4;
                result = sub_2E584(3, &__ptr1, 0);
                ptr0 += 2;
                if(v4 != 4) {
                    continue;
                }
            }
        }
        break;
    }
    ++*ptr1;
    return result;
}
