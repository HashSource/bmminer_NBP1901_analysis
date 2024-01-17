int sub_33478(int param0, int* param1) {
    int v0;
    char* ptr0;
    char* ptr1;
    int __ptr1;
    int v1;
    int v2;
    if(*(param1 + 168) == 0) {
        return param0;
    }
    int v3 = *(param1 + 427);
    size_t __nmemb = *(size_t*)(param1 + 393);
    int v4 = pthread_mutex_lock((pthread_mutex_t*)(v2 + 212));
    if(v4 != 0) {
        int* ptr2 = __errno_location();
        int v5 = ptr2[0];
        ptr1 = "driver-btm-api.c";
        ptr0 = "copy_pool_stratum";
        v0 = 0x474;
        snprintf(&__ptr1, 0x800, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", v5, "driver-btm-api.c", "copy_pool_stratum", 0x474);
        sub_2E584(3, &__ptr1, SOCK_STREAM);
        sub_2A574();
    }
    int v6 = pthread_rwlock_wrlock((pthread_rwlock_t*)(v2 + 236));
    if(v6 != 0) {
        int* ptr3 = __errno_location();
        int v7 = ptr3[0];
        ptr1 = "driver-btm-api.c";
        ptr0 = "copy_pool_stratum";
        v0 = 0x474;
        snprintf(&__ptr1, 0x800, "WTF WRLOCK ERROR ON LOCK! errno=%d in %s %s():%d", v7, "driver-btm-api.c", "copy_pool_stratum", 0x474);
        sub_2E584(3, &__ptr1, SOCK_STREAM);
        sub_2A574();
    }
    free(*(void**)(v2 + 672));
    free(*(void**)(v2 + 612));
    free(*(void**)(v2 + 1568));
    if((__nmemb & 0x3) != 0) {
        __nmemb = (__nmemb & 0xfffffffc) + 4;
    }
    void* __dest = calloc(__nmemb, 1);
    *(void**)(v2 + 1568) = __dest;
    if(__dest == 0) {
        __ptr1 = 1818845510;
        int v8 = 1948279909;
        int v9 = 1633886319;
        int v10 = 0x636f6c6c;
        int v11 = 0x6f6f7020;
        int v12 = 1953718124;
        int v13 = 0x75746172;
        int v14 = 1868767341;
        __builtin_strcpy(&v1, "inbase in c5");
        sub_2E584(3, &__ptr1, SOCK_STREAM);
        sub_2A574();
        __dest = *(void**)(v2 + 1568);
    }
    memcpy(__dest, *(void**)(param1 + 0x188), __nmemb);
    if(*(int*)(v2 + 1708) > 0) {
        int v15 = 0;
        do {
            void* __ptr = *(void**)(v15 * 4 + *(int*)(v2 + 676));
            ++v15;
            free(__ptr);
        }
        while(*(int*)(v2 + 1708) > v15);
    }
    if(v3 != 0) {
        void* ptr4 = realloc(*(void**)(v2 + 676), (size_t)(v3 * 4 + SOCK_STREAM));
        void* ptr5 = ptr4;
        *(void**)(v2 + 676) = ptr4;
        if(v3 > 0) {
            int v16 = 0;
            while(SOCK_STREAM) {
                uint32_t* ptr6 = (uint32_t*)(v16 * 4);
                void* ptr7 = malloc(32);
                *(void**)(v16 * 4 + (int)ptr5) = ptr7;
                int* ptr8 = *(uint32_t*)(v16 * 4 + *(int*)(v2 + 676));
                if(ptr8 == 0) {
                    __builtin_strcpy(&__ptr1, "Failed to malloc pool_stratum swork merkle_bin");
                    sub_2E584(3, &__ptr1, SOCK_STREAM);
                    sub_2A574();
                    ptr8 = *(uint32_t*)(v16 * 4 + *(int*)(v2 + 676));
                }
                ++v16;
                int* ptr9 = *(uint32_t*)(*(param1 + 169) + (int)ptr6);
                int v17 = *(ptr9 + SOCK_STREAM);
                int v18 = *(ptr9 + 2);
                int v19 = *(ptr9 + 3);
                *ptr8 = *ptr9;
                *(ptr8 + SOCK_STREAM) = v17;
                *(ptr8 + 2) = v18;
                *(ptr8 + 3) = v19;
                int v20 = *(ptr9 + 5);
                int v21 = *(ptr9 + 6);
                int v22 = *(ptr9 + 7);
                *(ptr8 + 4) = *(ptr9 + 4);
                *(ptr8 + 5) = v20;
                *(ptr8 + 6) = v21;
                *(ptr8 + 7) = v22;
                if(v16 == v3) {
                    break;
                }
                ptr5 = *(void**)(v2 + 676);
            }
        }
    }
    *(int*)v2 = *param1;
    int v23 = *(param1 + 457);
    *(int*)(v2 + 1824) = *(param1 + 456);
    *(int*)(v2 + 1828) = v23;
    *(int*)(v2 + 1572) = *(param1 + 393);
    *(int*)(v2 + 1576) = *(param1 + 394);
    *(int*)(v2 + 632) = *(param1 + 158);
    *(int*)(v2 + 1708) = *(param1 + 427);
    __strdup();
    *(int*)(v2 + 672) = param0;
    __strdup();
    *(int*)(v2 + 612) = param0;
    int v24 = *(param1 + 452);
    int v25 = *(param1 + 453);
    *(int*)(v2 + 1804) = *(param1 + 451);
    *(int*)(v2 + 1808) = v24;
    *(int*)(v2 + 1812) = v25;
    memcpy((void*)(v2 + 1580), (void*)(param1 + 395), 128);
    int v26 = pthread_rwlock_unlock((pthread_rwlock_t*)(v2 + 236));
    if(v26 != 0) {
        int* ptr10 = __errno_location();
        int v27 = ptr10[0];
        ptr1 = "driver-btm-api.c";
        ptr0 = "copy_pool_stratum";
        v0 = 1178;
        snprintf(&__ptr1, 0x800, "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d", v27, "driver-btm-api.c", "copy_pool_stratum", 1178);
        sub_2E584(3, &__ptr1, SOCK_STREAM);
        sub_2A574();
    }
    int v28 = pthread_mutex_unlock((pthread_mutex_t*)(v2 + 212));
    if(v28 != 0) {
        int* ptr11 = __errno_location();
        snprintf(&__ptr1, 0x800, "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d", ptr11[0], "driver-btm-api.c", "copy_pool_stratum", 1178);
        sub_2E584(3, &__ptr1, SOCK_STREAM);
        sub_2A574();
    }
    return gvar_7ECC4{sub_2F250}();
}
