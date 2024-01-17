uint32_t sub_1A014() {
    int v0;
    int v1;
    char __ptr1;
    int v2;
    if(gvar_7EDC8 == 2) {
        v1 = 0;
        int v3 = 0;
        int v4 = sub_1E29C(0);
        if(v4 == 0) {
        loc_1A158:
            do {
                ++v3;
                if(v3 == 4) {
                    goto loc_1A0A0;
                }
                else {
                    v0 = sub_1E29C(v3);
                }
            }
            while(v0 == 0);
        }
        uint32_t v5 = *(uint32_t*)(v3 * 4 + (int)&gvar_7F8C4);
        uint32_t v6 = sub_1E0F0();
        uint32_t v7 = sub_1E130();
        v1 += v6 * v7 * v5;
        goto loc_1A158;
    }
    else {
        int v8 = 0;
        int v9 = 0;
        do {
            int v10 = sub_1E29C(v9);
            if(v10 != 0) {
                int v11 = sub_183FC(v9, gvar_80FB4, &v2);
                if(v11 == 0) {
                    if(v8 == 0) {
                        v8 = v2;
                    }
                    else if(v8 >= v2) {
                        v8 = v2;
                    }
                }
            }
            ++v9;
        }
        while(v9 != 4);
        v1 = 0;
        int v12 = 0;
        while(SOCK_STREAM) {
            int v13 = v12;
            ++v12;
            int v14 = sub_1E29C(v13);
            if(v14 != 0) {
                uint32_t v15 = sub_1E0F0();
                uint32_t v16 = sub_1E130();
                v1 += v15 * v16 * v8;
            }
            if(v12 != 4) {
                continue;
            }
            break;
        }
    }
loc_1A0A0:
    uint32_t v17 = gvar_7EB9C;
    uint32_t result = (uint32_t)(v1 / 1000);
    gvar_7F8D8 = (uint32_t)(v1 / 1000);
    if(v17 > 4) {
        snprintf(&__ptr1, 0x800, "ideal_hash_rate = %d\n", result);
        sub_2E584(4, &__ptr1, 0);
        result = gvar_7F8D8;
    }
    return result;
}
