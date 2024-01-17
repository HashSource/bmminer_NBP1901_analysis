int sub_35D24(uint32_t* param0, int param1, size_t __n, int param3) {
    int v0;
    short __ptr1;
    int v1 = param1;
    uint32_t* ptr0 = param0;
    int v2 = (int)gvar_7EB9C;
    if((uint32_t)v2 > 3) {
        size_t v3 = __n;
        __ptr1 = 10;
        sub_2EA54(3, &__ptr1, 0);
        param3 = gvar_7EB9C;
        if((uint32_t)param3 > 3) {
            snprintf(&__ptr1, 0x800, ">>>> Get ideal hash rate, round %d.\n", v3);
            sub_2E584(3, &__ptr1, 0);
        }
    }
    int result1 = sub_39FB4(v1, v2, __n, param3);
    if(result1 == 0) {
        sub_39A7C();
        uint32_t* ptr1 = *ptr0;
        uint32_t v4 = *ptr1;
        uint32_t v5 = *(ptr1 + 4);
        uint32_t v6 = v4;
        uint32_t v7 = v5;
        if((int)v5 < (int)v4) {
            *ptr1 = v5;
        }
        if((int)v6 > (int)v7) {
            ptr1 = *ptr0;
        }
        uint32_t v8 = gvar_4FCB28;
        if((int)v6 > (int)v7) {
            v4 = *ptr1;
        }
        uint32_t v9 = gvar_7EDD0;
        char* ptr2 = gvar_482A70;
        int v10 = (int)(v8 + 12);
        char* ptr3 = *(uint32_t*)(v10 - 4);
        gvar_4FCB2C = v4;
        VCVT.F32.S32(v9, v9);
        sub_1AD08(v10, ptr2, (uint32_t)*(ptr3 + 8));
        uint32_t v11 = sub_19AB4();
        int v12 = (int)gvar_4FCB2C;
        if(v11 != v12) {
            int result = sub_195A8(v12);
            if(result != 0) {
                return result;
            }
        }
        int v13 = 0xffffff;
        int v14 = 0;
        do {
            int v15 = sub_1E29C(v14);
            if(v15 != 0) {
                uint32_t v16 = sub_1E0F0();
                if(v16 != 0) {
                    uint32_t v17 = gvar_4FCB28;
                    int v18 = (v14 * 0x100 + v16) * 4 + v17 + 8;
                    int* ptr4 = (int*)(v14 * 0x400 + v17 + 8);
                    while(SOCK_STREAM) {
                        int v19 = *(ptr4 + SOCK_STREAM);
                        ++ptr4;
                        if((uint32_t)v19 <= (uint32_t)v13) {
                            v13 = v19;
                        }
                        if(v18 != ptr4) {
                            continue;
                        }
                        break;
                    }
                }
            }
            ++v14;
        }
        while(v14 != 4);
        if(gvar_7EB9C > 3) {
            v0 = v13;
            snprintf(&__ptr1, 0x800, "chain = %d, freq_min = %d\n", 0xFF, v0);
            sub_2E584(3, &__ptr1, 0);
        }
        int v20 = 0;
        int v21 = 0;
        do {
            int v22 = sub_1E29C(v21);
            if(v22 != 0) {
                uint32_t v23 = sub_1E0F0();
                if(v23 != 0) {
                    uint32_t v24 = gvar_4FCB28;
                    int v25 = (v21 * 0x100 + v23) * 4 + v24 + 8;
                    int* ptr5 = (int*)(v21 * 0x400 + v24 + 8);
                    while(SOCK_STREAM) {
                        int v26 = *(ptr5 + SOCK_STREAM);
                        ++ptr5;
                        if((uint32_t)v26 > (uint32_t)v20) {
                            v20 = v26;
                        }
                        if(v25 != ptr5) {
                            continue;
                        }
                        break;
                    }
                }
            }
            ++v21;
        }
        while(v21 != 4);
        if(gvar_7EB9C > 3) {
            v0 = v20;
            snprintf(&__ptr1, 0x800, "chain = %d, freq_max = %d\n", 0xFF, v0);
            sub_2E584(3, &__ptr1, 0);
        }
        int v27 = (int)gvar_7EB58;
        int v28 = 0;
        int v29 = v20;
        sub_321B8(v13, v27, 20);
        do {
            int v30 = sub_1E29C(v28);
            if(v30 != 0) {
                sub_3962C(v28, SOCK_STREAM);
            }
            ++v28;
        }
        while(v28 != 4);
        int v31 = 0;
        int v32 = sub_3A86C(&v29);
        int v33 = sub_391F4(v32);
        do {
            int v34 = sub_1E29C(v31);
            if(v34 != 0) {
                sub_3A054((uint32_t)v31, v33);
            }
            ++v31;
        }
        while(v31 != 4);
        int v35 = v33 + 0x808ffc;
        int v36 = 0;
        uint32_t v37 = 0;
        do {
            int v38 = sub_1E29C(v36);
            if(v38 != 0) {
                uint32_t v39 = sub_1E0F0();
                uint32_t v40 = gvar_4FCB28;
                if(v39 != 0) {
                    int v41 = v36 * 0x400;
                    int v42 = (v36 * 0x100 + v39) * 4 + v40 + 8;
                    v39 = 0;
                    param1 = v40 + v41 + 8;
                    v4 = v35 + v41;
                    do {
                        int v43 = *(int*)(param1 + 4);
                        param1 += 4;
                        int v44 = *(int*)(v4 + 4);
                        v4 += 4;
                        v39 += (uint32_t)(((uint64_t)(v44 * v43) * 274877907L) >>> 32L) >>> 9;
                    }
                    while(param1 != v42);
                    v37 += v39;
                }
                __n = gvar_7EB9C;
                *(uint32_t*)(v36 * 4 + v40 + 0x100c) = v39;
                if(__n > 3) {
                    v0 = v39;
                    snprintf(&__ptr1, 0x800, "chain = %d, ideal_hash_rate_GH = %d\n", v36, v0);
                    sub_2E584(3, &__ptr1, 0);
                }
            }
            ++v36;
        }
        while(v36 != 4);
        if(gvar_7EB9C > 3) {
            snprintf(&__ptr1, 0x800, "hash_rate_total_GH = %d\n", v37);
            sub_2E584(3, &__ptr1, 0);
            return 0;
        }
    }
    else if(gvar_7EB9C > 3) {
        *(int*)&__ptr1 = 'B';
        int v45 = 1852383332;
        int v46 = 0x66207469;
        int v47 = 0x656c6961;
        int v48 = 667236;
        sub_2E584(3, &__ptr1, 0);
    }
    return result1;
}
