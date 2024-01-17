int sub_2B330(void* __src, int __size) {
    int v0;
    void* ptr0;
    int v1;
    int __ptr1;
    int v2;
    pthread_mutex_t* __mutex = (pthread_mutex_t*)gvar_592460;
    int v3 = gvar_482A5D;
    void* __ptr = NULL;
    if(v3 != 0 && (gvar_590404 != 0 || gvar_482A5C != 0 || (int)gvar_7EBA0 > 6)) {
        v1 = __size;
        ptr0 = __src;
        snprintf(&__ptr1, 0x800, "%s, rec job data %p size: %d\n", "bitmain_update_job_cb", __src, __size);
        sub_2E584(7, &__ptr1, 0);
    }
    uint32_t v4 = sub_31D38();
    if(v4 > SOCK_STREAM) {
        int v5 = pthread_mutex_lock(__mutex + 28);
        if(v5 != 0) {
            int* ptr1 = __errno_location();
            int v6 = ptr1[0];
            ptr0 = "bmminer.c";
            v1 = "bitmain_update_job_cb";
            v0 = 2250;
            snprintf(&__ptr1, 0x800, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", v6, "bmminer.c", "bitmain_update_job_cb", 2250);
            sub_2E584(3, &__ptr1, SOCK_STREAM);
        }
        void* __dest = calloc(1, 1848);
        sub_2B05C(__dest, __src, __size);
        if(*(char*)((int)__dest + 640) == 0) {
            __ptr1 = 1836345666;
            int v7 = 544106849;
            int v8 = 1746942291;
            int v9 = 1948283745;
            __builtin_strcpy(&v2, "o use stratum pools");
            sub_2E584(3, &__ptr1, SOCK_STREAM);
        }
        int v10 = pthread_mutex_lock(__mutex);
        if(v10 != 0) {
            int* ptr2 = __errno_location();
            int v11 = ptr2[0];
            ptr0 = "bmminer.c";
            v0 = 2261;
            v1 = "bitmain_update_job_cb";
            snprintf(&__ptr1, 0x800, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", v11, "bmminer.c", "bitmain_update_job_cb", 2261);
            sub_2E584(3, &__ptr1, SOCK_STREAM);
        }
        int v12 = pthread_rwlock_wrlock((pthread_rwlock_t*)(__mutex + 6));
        if(v12 != 0) {
            int* ptr3 = __errno_location();
            int v13 = ptr3[0];
            ptr0 = "bmminer.c";
            v0 = 2261;
            v1 = "bitmain_update_job_cb";
            snprintf(&__ptr1, 0x800, "WTF WRLOCK ERROR ON LOCK! errno=%d in %s %s():%d", v13, "bmminer.c", "bitmain_update_job_cb", 2261);
            sub_2E584(3, &__ptr1, SOCK_STREAM);
        }
        __mutex[7].__data.__lock = *(int*)__dest;
        sub_33478((int)(__mutex + 967), (int*)(__mutex + 505));
        __mutex[0xee].__data.__kind = __mutex[0xee].__data.__owner;
        sub_33478((int)(int*)(__mutex + 505), (int*)(__mutex + 43));
        __mutex[0xee].__data.__owner = __mutex[0xee].__data.__count;
        sub_33478((int)(int*)(__mutex + 43), (int*)__dest);
        uint32_t v14 = gvar_7EAB8 + SOCK_STREAM;
        __mutex[0xee].__data.__count = gvar_7EAB8 + SOCK_STREAM;
        gvar_7EAB8 = v14;
        int v15 = pthread_rwlock_unlock((pthread_rwlock_t*)(__mutex + 6));
        if(v15 != 0) {
            int* ptr4 = __errno_location();
            int v16 = ptr4[0];
            ptr0 = "bmminer.c";
            v0 = 2273;
            v1 = "bitmain_update_job_cb";
            snprintf(&__ptr1, 0x800, "WTF RWLOCK ERROR ON UNLOCK! errno=%d in %s %s():%d", v16, "bmminer.c", "bitmain_update_job_cb", 2273);
            sub_2E584(3, &__ptr1, SOCK_STREAM);
        }
        int v17 = pthread_mutex_unlock(__mutex);
        if(v17 != 0) {
            int* ptr5 = __errno_location();
            int v18 = ptr5[0];
            ptr0 = "bmminer.c";
            v0 = 2273;
            v1 = "bitmain_update_job_cb";
            snprintf(&__ptr1, 0x800, "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d", v18, "bmminer.c", "bitmain_update_job_cb", 2273);
            sub_2E584(3, &__ptr1, SOCK_STREAM);
        }
        gvar_7ECC4{sub_2F250}();
        sub_32CC0(&__ptr, (uint8_t*)__dest, __mutex[0xee].__data.__count);
        pthread_mutex_lock(&g4FCAA0);
        sub_32F40(__ptr);
        pthread_mutex_unlock(&g4FCAA0);
        free(__ptr);
        int v19 = pthread_mutex_unlock(__mutex + 28);
        if(v19 != 0) {
            int* ptr6 = __errno_location();
            int v20 = ptr6[0];
            ptr0 = "bmminer.c";
            v0 = 2283;
            v1 = "bitmain_update_job_cb";
            snprintf(&__ptr1, 0x800, "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d", v20, "bmminer.c", "bitmain_update_job_cb", 2283);
            sub_2E584(3, &__ptr1, SOCK_STREAM);
        }
        gvar_7ECC4{sub_2F250}();
        if(*(int*)((int)__dest + 1708) > 0) {
            int v21 = 0;
            do {
                void* __ptr2 = *(void**)(v21 * 4 + *(int*)((int)__dest + 676));
                ++v21;
                free(__ptr2);
            }
            while(*(int*)((int)__dest + 1708) > v21);
        }
        free(*(int*)((int)__dest + 676));
        free(*(int*)((int)__dest + 1568));
        free(*(int*)((int)__dest + 672));
        free(*(int*)((int)__dest + 612));
        free(__dest);
        return 0;
    }
    pthread_mutex_lock(&g80F20);
    void* __dest1 = (void*)gvar_80F3C;
    if(__dest1 == 0 || gvar_80F38 < (uint32_t)__size) {
        __dest1 = realloc(__dest1, (size_t)__size);
        gvar_80F3C = (uint32_t)__dest1;
    }
    memcpy(__dest1, __src, (size_t)__size);
    gvar_80F38 = (uint32_t)__size;
    pthread_mutex_unlock(&g80F20);
    return 0;
}
