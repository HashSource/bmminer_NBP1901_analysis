int sub_16378() {
    void* __ptr3;
    int __ptr1;
    if(gvar_7F814 != 0) {
    loc_16394:
        int v0 = 0;
        while(SOCK_STREAM) {
            int v1 = sub_1E29C(v0);
            if(v1 == 0) {
            loc_163BC:
                ++v0;
                if(v0 != 4) {
                    continue;
                }
                return 0;
            }
            __ptr3 = gvar_7F814;
            if(*(int*)(v0 * 4 + (int)__ptr3) != 0) {
                goto loc_163BC;
            }
            void* ptr0 = calloc(1, 72);
            *(void**)(v0 * 4 + (int)__ptr3) = ptr0;
            if(ptr0 == 0) {
                if(gvar_7EB9C > 3) {
                    snprintf(&__ptr1, 0x800, "No memory for configuraion for chain %d.\n", v0);
                    sub_2E584(3, &__ptr1, 0);
                    __ptr3 = gvar_7F814;
                }
                goto loc_1645C;
            }
            else {
                uint32_t __nmemb = sub_1E0F0();
                __ptr3 = gvar_7F814;
                int* ptr1 = *(uint32_t*)(v0 * 4 + (int)__ptr3);
                void* ptr2 = calloc(__nmemb, 1);
                *(void**)((char*)ptr1 + 63) = ptr2;
                if(*(int*)(*(int*)(v0 * 4 + (int)__ptr3) + 63) != 0) {
                    goto loc_163BC;
                }
            }
            if(gvar_7EB9C > 3) {
                snprintf(&__ptr1, 0x800, "No memory for configuraion for chain %d.\n", v0);
                sub_2E584(3, &__ptr1, 0);
                __ptr3 = gvar_7F814;
            }
            goto loc_1645C;
        }
        return 0;
    }
    void* ptr3 = calloc(1, 32);
    gvar_7F814 = (uint32_t)ptr3;
    if(ptr3 != 0) {
        goto loc_16394;
    }
    else if(gvar_7EB9C > 3) {
        __ptr1 = 1830842190;
        int v2 = 1919905125;
        int v3 = 1868963961;
        int v4 = 1868767346;
        int v5 = 0x6769666e;
        int v6 = 1767993973;
        int v7 = 170815087;
        char v8 = 0;
        sub_2E584(3, &__ptr1, 0);
        __ptr3 = gvar_7F814;
    loc_1645C:
        if(__ptr3 != 0) {
            uint32_t* ptr4 = (uint32_t*)((int)__ptr3 - 4);
            do {
                void* __ptr2 = *(void**)(ptr4 + SOCK_STREAM);
                ++ptr4;
                if(__ptr2 != 0) {
                    void* __ptr = *(void**)((int)__ptr2 + 63);
                    if(__ptr != 0) {
                        free(__ptr);
                        *(int*)(*ptr4 + 63) = 0;
                        __ptr2 = *ptr4;
                    }
                    free(__ptr2);
                    *ptr4 = NULL;
                }
            }
            while((int*)((int)__ptr3 + 12) != ptr4);
            free(__ptr3);
            gvar_7F814 = 0;
        }
    }
    return -1;
}
