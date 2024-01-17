int sub_2B05C(void* __dest, void* __src, int param2) {
    int v0;
    int v1;
    int v2;
    int __ptr1;
    uint32_t v3;
    int v4;
    int v5 = param2;
    memcpy(__dest, __src, 1848);
    size_t __size = *(size_t*)((int)__dest + 1572);
    void* __dest1 = calloc(1, __size);
    void* dstbuf = memcpy(__dest1, (void*)((int)__src + 1848), __size);
    int v6 = *(int*)((int)__dest + 1708);
    *(void**)((int)__dest + 1568) = dstbuf;
    void* ptr0 = sub_2F408((size_t)(v6 * 4 + SOCK_STREAM), "bmminer.c", "parse_job_buf", 0x88e);
    int v7 = *(int*)((int)__dest + 1708);
    *(void**)((int)__dest + 676) = ptr0;
    if(v7 <= 0) {
        v3 = __size + 1848;
    }
    else {
        void* ptr1 = ptr0;
        int* ptr2 = (int*)((int)__src + __size) + 462;
        int v8 = 0;
        while(SOCK_STREAM) {
            void* ptr3 = sub_2F408(32, "bmminer.c", "parse_job_buf", 2193);
            *(void**)(v8 * 4 + (int)ptr1) = ptr3;
            v3 = v8 * 32 + __size + 1880;
            int* ptr4 = *(uint32_t*)(v8 * 4 + *(int*)((int)__dest + 676));
            if(ptr4 == 0) {
                __ptr1 = 1818845510;
                v2 = 1948279909;
                v1 = 1634541679;
                v0 = 0x636f6c6c;
                __builtin_strcpy(&v4, " local merkle_bin");
                sub_2E584(3, &__ptr1, SOCK_STREAM);
                ptr4 = *(uint32_t*)(v8 * 4 + *(int*)((int)__dest + 676));
            }
            int v9 = *ptr2;
            ++v8;
            int v10 = *(ptr2 + SOCK_STREAM);
            ptr2 += 8;
            int v11 = *(ptr2 - 6);
            int v12 = *(ptr2 - 5);
            *ptr4 = v9;
            *(ptr4 + SOCK_STREAM) = v10;
            *(ptr4 + 2) = v11;
            *(ptr4 + 3) = v12;
            int v13 = *(ptr2 - 3);
            int v14 = *(ptr2 - 2);
            int v15 = *(ptr2 - SOCK_STREAM);
            *(ptr4 + 4) = *(ptr2 - 4);
            *(ptr4 + 5) = v13;
            *(ptr4 + 6) = v14;
            *(ptr4 + 7) = v15;
            if(*(int*)((int)__dest + 1708) <= v8) {
                break;
            }
            ptr1 = *(void**)((int)__dest + 676);
        }
    }
    __strdup();
    size_t v16 = strlen((char*)__dest);
    *(void**)((int)__dest + 672) = __dest;
    __strdup();
    size_t v17 = strlen((char*)__dest);
    uint32_t v18 = v16 + v17 + (v3 + SOCK_STREAM);
    *(void**)((int)__dest + 612) = __dest;
    uint32_t* ptr5 = (uint32_t*)((char*)((int)__src + v18) + SOCK_STREAM);
    uint32_t v19 = *(ptr5 + SOCK_STREAM);
    param2 = gvar_482A5D;
    int* ptr6 = (int*)((char*)((int)__src + v18) + 9);
    gvar_80F18 = *ptr5;
    gvar_80F1C = v19;
    int result = *ptr6;
    gvar_7EAB0 = *(uint64_t*)ptr6;
    if(param2 != 0 && (gvar_590404 != 0 || gvar_482A5C != 0 || (int)gvar_7EBA0 > 6)) {
        snprintf(&__ptr1, 0x800, "parse job buf len:%d\n", v18 + 17);
        result = sub_2E584(7, &__ptr1, 0);
    }
    if(v18 + 17 != v5) {
        __ptr1 = 0x3a525245;
        v2 = 0x74616420;
        v1 = 1920213089;
        v0 = 796094049;
        __builtin_strcpy(&v4, "recv unmathced!");
        result = sub_2E584(3, &__ptr1, SOCK_STREAM);
    }
    return result;
}
