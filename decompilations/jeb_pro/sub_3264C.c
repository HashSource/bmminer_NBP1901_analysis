int sub_3264C(int param0, int param1) {
    char __ptr1;
    int v0;
    int v1 = 0;
    do {
        int v2 = sub_1E29C(v1);
        if(v2 != 0) {
            sub_1E0F0();
            uint32_t* ptr0 = (uint32_t*)(v1 * 0x800 + &gvar_99CD98);
            int v3 = 0;
            while(SOCK_STREAM) {
                uint32_t v4 = sub_1E0F0();
                int v5 = v1 * 0x3c00 + v3 * 60;
                if(v4 <= v3) {
                    goto loc_32694;
                }
                else {
                    uint32_t v6 = gvar_482A60;
                    uint32_t v7 = gvar_7EB9C;
                    uint32_t v8 = *ptr0;
                    uint32_t v9 = *(ptr0 + SOCK_STREAM);
                    ptr0 += 2;
                    uint32_t v10 = v6 * 0x88888889;
                    int v11 = (uint32_t)(((int64_t)v6 * 0xffffffff88888889L) >>> 32L);
                    int v12 = (v6 - (((v6 + v11) >> 5) - (v6 >> 31)) * 60 + v5) * 8;
                    *(uint32_t*)((int)&gvar_483AA0 + v12) = v8;
                    *(uint32_t*)((int)&gvar_483AA4 + v12) = v9;
                    if(v7 > 4) {
                        uint32_t v13 = v8;
                        uint32_t v14 = v9;
                        int v15 = v3;
                        snprintf(&__ptr1, 0x800, "chain %u asic %u asic_nonce_num %llu\n", v1, v15, v0);
                        sub_2E584(4, &__ptr1, 0);
                    }
                    ++v3;
                }
            }
        loc_32694:
        }
        ++v1;
    }
    while(v1 != 4);
    ++gvar_482A60;
    memset(&g5924F4, 0, 0x2000);
    memset(&g590440, 0, 0x2000);
    memset(&g58E3F8, 0, 0x2000);
    sub_31980(&g5924F4, 10);
    sub_31980(&g590440, 30);
    int v16 = 0x88888889;
    int v17 = 0;
    int* ptr1 = (int*)&gvar_482AA0;
    int v18 = &gvar_99CD98;
    int* ptr2 = (int*)&gvar_483AA0;
    sub_31980(&g58E3F8, 60);
    do {
        int result = sub_1E29C(v17);
        if(result != 0) {
            int v19 = 0;
            int* ptr3 = ptr1;
            int v20 = 0;
            int* ptr4 = (int*)(v17 * 0x800 + v18);
            while(SOCK_STREAM) {
                uint32_t v21 = sub_1E0F0();
                char* ptr5 = (char*)(v20 + v19);
                if(v21 <= (uint32_t)v20) {
                    goto loc_32874;
                }
                else {
                    uint32_t v22 = sub_1E100();
                    sub_5FADC(v20, (int)v22);
                    if(param1 == 0) {
                        ++v19;
                        char* ptr6 = ptr5;
                        ptr5 = v20 + v19;
                        sub_1E820(v17, ptr6, 32);
                    }
                    uint32_t v23 = gvar_482A60;
                    int64_t v24 = (int64_t)v23 * v16;
                    v10 = v24;
                    v11 = (uint32_t)(v24 >>> 32L);
                    uint32_t v25 = v23 - (((v23 + v11) >> 5) - (v23 >> 31)) * 60;
                    if(*(int*)((v20 * 60 + v17 * 0x3c00 + ((int)v25 < SOCK_STREAM ? v25 + 59: v25 - SOCK_STREAM)) * 8 + (int)ptr2) > SOCK_STREAM) {
                        sub_1E820(v17, ptr5, 111);
                    }
                    else {
                        sub_1E820(v17, ptr5, 120);
                        ++*(int*)(v20 * 4 + (int)ptr3);
                    }
                    ++v20;
                    *ptr4 = 0;
                    *(ptr4 + SOCK_STREAM) = 0;
                    ptr4 += 2;
                }
            }
        loc_32874:
            ptr1 = ptr3;
            result = sub_1E820(v17, ptr5, 0);
        }
        ++v17;
        ptr1 += 0x100;
    }
    while(v17 != 4);
    return result;
}
