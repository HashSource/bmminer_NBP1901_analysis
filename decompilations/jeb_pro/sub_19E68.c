uint32_t sub_19E68() {
    int v0;
    int __ptr1;
    uint32_t __nmemb = sub_1E0F0();
    void* __ptr = calloc(__nmemb, 4);
    if(__ptr == 0) {
        if(gvar_7EB9C <= 3) {
            return 0;
        }
        __ptr1 = 0x6c6c616d;
        int v1 = 0x6220636f;
        int v2 = 0x66206675;
        int v3 = 0x656c6961;
        int v4 = 663908;
        sub_2E584(3, &__ptr1, 0);
        return 0;
    }
    int v5 = 0;
    if(gvar_7EDC8 == 2) {
        int v6 = 0;
        int v7 = sub_1E29C(0);
        if(v7 == 0) {
        loc_19F28:
            do {
                ++v6;
                if(v6 == 4) {
                    goto loc_19EE4;
                }
                else {
                    v0 = sub_1E29C(v6);
                }
            }
            while(v0 == 0);
            uint32_t v8 = *(uint32_t*)(v6 * 4 + (int)&gvar_7F8C4);
            uint32_t v9 = sub_1E0F0();
            uint32_t v10 = sub_1E130();
            v5 += v9 * v10 * v8;
            goto loc_19F28;
        }
        uint32_t v8 = *(uint32_t*)(v6 * 4 + (int)&gvar_7F8C4);
        uint32_t v9 = sub_1E0F0();
        uint32_t v10 = sub_1E130();
        v5 += v9 * v10 * v8;
        goto loc_19F28;
    }
    else {
        int v11 = 0;
        while(SOCK_STREAM) {
            int v12 = sub_1E29C(v11);
            if(v12 != 0) {
                sub_183FC(v11, gvar_80FB4, (uint32_t*)__ptr);
                uint32_t v13 = sub_1E0F0();
                if((int)v13 > 0) {
                    int* ptr0 = (int*)(v13 * 4 + (int)__ptr);
                    void* ptr1 = __ptr;
                    do {
                        int v14 = *(int*)ptr1;
                        ptr1 = (int)ptr1 + 4;
                        uint32_t v15 = sub_1E130();
                        v5 += v15 * v14;
                    }
                    while(ptr1 != ptr0);
                }
            }
            ++v11;
            if(v11 != 4) {
                continue;
            }
            break;
        }
    }
loc_19EE4:
    uint32_t v16 = gvar_7EB9C;
    uint32_t result = (uint32_t)(v5 / 1000);
    gvar_7F8D4 = (uint32_t)(v5 / 1000);
    if(v16 > 4) {
        snprintf(&__ptr1, 0x800, "max_hash_rate = %d\n", result);
        sub_2E584(4, &__ptr1, 0);
        result = gvar_7F8D4;
    }
    free(__ptr);
    return result;
}
