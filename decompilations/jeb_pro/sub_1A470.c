int sub_1A470(int param0, int param1, uint32_t param2) {
    int v0;
    int v1;
    char* __format;
    char* ptr0;
    short __ptr1;
    char v2;
    char v3;
    short v4;
    int v5;
    char __base;
    int64_t v6;
    char v7;
    int v8;
    uint8_t v9;
    int result;
    __int128 v10;
    int64_t v11 = v6;
    int* ptr1 = (int*)&gvar_7EB9C;
    uint32_t v12 = gvar_7EB9C;
    int v13 = param0;
    int v14 = param1;
    if(v12 > 3) {
        VCVT.F64.F32((uint64_t)(v10 >>> 0x40X), v8);
        ptr0 = param2 != 0 ? "true": "false";
        *(double*)&v5 = (double)(v10 >>> 0x40X);
        snprintf(&__ptr1, 0x800, "chain = %d, freq = %g, is_higher_voltage = %s\n", param0, *(double*)&v5, ptr0);
        sub_2E584(3, &__ptr1, 0);
    }
    sub_1F0E0(v13, SOCK_STREAM, 0, v14);
    *(int*)&v2 = 0;
    *(int*)&v7 = 0;
    memset(&__base, 0, 0x188);
    sub_502C0(&v2, &v3, 0);
    int v15 = v2;
    int v16 = v3;
    uint8_t v17 = v3;
    int v18 = v9;
    if(v15 <= 7) {
        int v19 = v15;
        int v20 = (uint32_t)(uint8_t)v15;
        __format = NULL;
        v1 = *ptr1;
        int v21 = (uint32_t)(SOCK_STREAM - (uint8_t)v16) + SOCK_STREAM;
        while(SOCK_STREAM) {
            if(v20 >= (uint32_t)v18) {
                int v22 = v18;
                do {
                    if((uint32_t)v16 <= SOCK_STREAM) {
                        int v23 = v16;
                        int v24 = v22 * v19;
                        char* ptr2 = (char*)((int)(int*)((int)__format * 8) + (int)&__base);
                        char* ptr3 = (char*)(v24 * v16);
                        do {
                            *ptr2 = (uint8_t)v20;
                            *(ptr2 + SOCK_STREAM) = (uint8_t)v22;
                            *(ptr2 + 2) = (uint8_t)v23;
                            *(char**)(ptr2 + 4) = ptr3;
                            if(v1 > 4) {
                                ptr0 = ptr3;
                                *(int*)&v4 = v23;
                                v5 = v22;
                                snprintf(&__ptr1, 0x800, "post_div1 = %d, post_div2 = %d, user_div = %d, div_ret = %d\n", v19, v5, *(int*)&v4, ptr0);
                                sub_2E584(4, &__ptr1, 0);
                                v1 = *ptr1;
                            }
                            ++v23;
                            ptr2 += 8;
                            ptr3 = &ptr3[v24];
                        }
                        while((uint8_t)v23 <= SOCK_STREAM);
                        __format = &__format[v21];
                    }
                    v22 = (uint8_t)v22 + SOCK_STREAM;
                }
                while((uint32_t)v22 <= v20);
            }
            int v25 = v19 + SOCK_STREAM;
            v20 = (uint32_t)(uint8_t)v25;
            v19 = v25;
            if(v20 <= 7) {
                continue;
            }
            break;
        }
    }
    else {
        __format = NULL;
        v1 = *ptr1;
    }
    if(v1 > 4) {
        __ptr1 = 10;
        sub_2E584(4, &__ptr1, 0);
        if(*ptr1 > 4) {
            *(int*)&__ptr1 = 's';
            int v26 = 681061;
            sub_2E584(4, &__ptr1, 0);
        }
    }
    size_t __nmemb = (size_t)__format;
    qsort(&__base, __nmemb, 8, &sub_19D50);
    if(__nmemb != 0) {
        void* ptr4 = &__base;
        void* ptr5 = &__base;
        int v27 = 0;
        int* ptr6 = ptr1;
        do {
            if(*ptr6 > 4) {
                int v28 = *(int*)((int)ptr5 + 4);
                int v29 = v27;
                char* ptr7 = (char*)*(char*)((int)ptr5 + 2);
                int v30 = (uint32_t)*(char*)((int)ptr5 + SOCK_STREAM);
                ++v27;
                int v31 = (int)*(char*)ptr5;
                ptr5 = (int)ptr5 + 8;
                v0 = v28;
                ptr0 = ptr7;
                *(int*)&v4 = v30;
                v5 = v31;
                snprintf(&__ptr1, 0x800, "[%d] post_div1 = %d, post_div2 = %d, user_div = %d, div_ret = %d\n", v29, v5, *(int*)&v4, ptr0, v0);
                sub_2E584(4, &__ptr1, 0);
                if(v27 != __nmemb) {
                    continue;
                }
                break;
            }
            ++v27;
            ptr5 = (int)ptr5 + 8;
        }
        while(v27 != __nmemb);
        __format = "[%d] _POSTDIV1 = %d, _POSTDIV2 = %d, USER_DIV = %d, freq = %d\n";
        int v32 = 0;
        char* ptr8 = (char*)v14;
        int* ptr9 = ptr1;
        int v33 = v13;
        do {
            uint8_t v34 = *(uint8_t*)((int)ptr4 + 2);
            ptr4 = (int)ptr4 + 8;
            uint8_t v35 = *(uint8_t*)((int)ptr4 - 8);
            uint8_t v36 = *(uint8_t*)((int)ptr4 - 7);
            v17 = v34;
            v2 = v35;
            v9 = v36;
            param0 = sub_1F080(*(int*)&v2, *(int*)&v7);
            int v37 = param0;
            if(gvar_7EDCC < (uint32_t)param0) {
                if(*ptr9 > 3) {
                    v0 = v37;
                    ptr0 = v17;
                    *(int*)&v4 = v9;
                    snprintf(&__ptr1, 0x800, __format, v32, v2, *(int*)&v4, ptr0);
                    sub_2E584(3, &__ptr1, 0);
                }
                int v38 = *(int*)&v7;
                v5 = *(int*)&v2;
                *(int*)&v4 = v38;
                sub_1F164(v33, SOCK_STREAM, 0, ptr8, v5, v4);
                usleep(1000000);
            }
            ++v32;
        }
        while(v27 != v32);
    }
    return result;
}
