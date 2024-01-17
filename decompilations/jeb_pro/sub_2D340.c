void* sub_2D340(void* param0, int param1, int param2, int param3) {
    size_t __nmemb;
    char* ptr0;
    size_t v0;
    char* ptr1;
    char __ptr1;
    void* ptr2 = param0;
    param0 = *(char*)((int)param0 + 4);
    if(param0 != 0) {
        int v1 = *(int*)ptr2;
        ptr1 = "k_alloc_items";
        v0 = "k_alloc_items";
        ptr0 = "klist.c";
        int v2 = 19;
        snprintf(&__ptr1, 0x800, "List %s store can\'t %s() - from %s %s() line %d in %s %s():%d", v1, "k_alloc_items", param1, param2, param3, "klist.c", "k_alloc_items", 19);
        sub_2E584(3, &__ptr1, SOCK_STREAM);
        sub_2A574();
    }
    int v3 = *(int*)((int)ptr2 + 40);
    if(v3 > 0) {
        int v4 = *(int*)((int)ptr2 + 24);
        if(v4 < v3) {
            __nmemb = *(size_t*)((int)ptr2 + 36);
            if(v4 + __nmemb > v3) {
                __nmemb = v3 - v4;
            }
            goto loc_2D384;
        }
    }
    else {
        __nmemb = *(size_t*)((int)ptr2 + 36);
    loc_2D384:
        void* __ptr = *(void**)((int)ptr2 + 52);
        int v5 = *(int*)((int)ptr2 + 48) + SOCK_STREAM;
        ++*(int*)((int)ptr2 + 48);
        void* ptr3 = realloc(__ptr, (size_t)(v5 * 4));
        *(void**)((int)ptr2 + 52) = ptr3;
        if(ptr3 == 0) {
            int v6 = *(int*)ptr2;
            v0 = *(size_t*)((int)ptr2 + 48);
            snprintf(&__ptr1, 0x800, "List %s item_memory failed to realloc count=%d in %s %s():%d", v6, v0, "klist.c", "k_alloc_items", 33);
            sub_2E584(3, &__ptr1, SOCK_STREAM);
            sub_2A574();
        }
        void* ptr4 = calloc(__nmemb, 16);
        if(ptr4 == 0) {
            int v7 = *(int*)((int)ptr2 + 40);
            int v8 = *(int*)((int)ptr2 + 24);
            int v9 = *(int*)ptr2;
            ptr0 = "k_alloc_items";
            ptr1 = &g26;
            v0 = __nmemb;
            snprintf(&__ptr1, 0x800, "List %s failed to calloc %d new items - total was %d, limit was %d in %s %s():%d", v9, __nmemb, v8, v7, "klist.c", "k_alloc_items", 38);
            sub_2E584(3, &__ptr1, SOCK_STREAM);
            sub_2A574();
        }
        *(void**)((*(int*)((int)ptr2 + 48) + 0x3fffffff) * 4 + *(int*)((int)ptr2 + 52)) = ptr4;
        int v10 = *(int*)((int)ptr2 + 24);
        int* ptr5 = *(int**)ptr2;
        *(size_t*)((int)ptr2 + 28) = __nmemb;
        *(size_t*)((int)ptr2 + 32) = __nmemb;
        *(int*)((int)ptr2 + 24) = v10 + __nmemb;
        *(int**)ptr4 = ptr5;
        *(int*)((int)ptr4 + 4) = 0;
        *(uint32_t*)((int)ptr4 + 8) = (int*)((int)ptr4 + 16);
        if((int)__nmemb > 2) {
            int* ptr6 = (int*)(__nmemb * 16 + (int)ptr4);
            uint32_t* ptr7 = (uint32_t*)((int)ptr4 + 32);
            do {
                *(ptr7 - 4) = ptr5;
                *(ptr7 - 3) = ptr7 - 8;
                *(ptr7 - 2) = ptr7;
                ptr7 += 4;
            }
            while(ptr6 != ptr7);
        }
        int v11 = (uint32_t)*(char*)((int)ptr2 + 44);
        *(uint32_t*)((__nmemb + 0xfffffff) * 16 + (int)ptr4) = ptr5;
        *(void**)((int)ptr2 + 12) = ptr4;
        uint32_t* ptr8 = (uint32_t*)((__nmemb + 0xfffffff) * 16 + (int)ptr4);
        *(ptr8 + SOCK_STREAM) = (int*)(__nmemb * 16 + (int)ptr4) - 8;
        *(ptr8 + 2) = NULL;
        if(v11 != 0) {
            *(uint32_t*)((int)ptr2 + 16) = ptr8;
        }
        while(SOCK_STREAM) {
            void* __ptr2 = *(void**)((int)ptr2 + 60);
            int v12 = *(int*)((int)ptr2 + 56) + SOCK_STREAM;
            ++*(int*)((int)ptr2 + 56);
            void* ptr9 = realloc(__ptr2, (size_t)(v12 * 4));
            *(void**)((int)ptr2 + 60) = ptr9;
            if(ptr9 == 0) {
                int v13 = *(int*)ptr2;
                v0 = *(size_t*)((int)ptr2 + 56);
                snprintf(&__ptr1, 0x800, "List %s data_memory failed to realloc count=%d in %s %s():%d", v13, v0, "klist.c", "k_alloc_items", 69);
                sub_2E584(3, &__ptr1, SOCK_STREAM);
                sub_2A574();
            }
            param0 = calloc(1, *(size_t*)((int)ptr2 + 20));
            *(void**)((int)ptr4 + 12) = param0;
            if(param0 == 0) {
                int v14 = *(int*)ptr2;
                v0 = "klist.c";
                snprintf(&__ptr1, 0x800, "List %s failed to calloc item data in %s %s():%d", v14, "klist.c", "k_alloc_items", 73);
                sub_2E584(3, &__ptr1, SOCK_STREAM);
                sub_2A574();
                param0 = *(void**)((int)ptr4 + 12);
            }
            *(void**)((*(int*)((int)ptr2 + 56) + 0x3fffffff) * 4 + *(int*)((int)ptr2 + 60)) = param0;
            ptr4 = *(void**)((int)ptr4 + 8);
            if(ptr4 == 0) {
                return param0;
            }
        }
    }
    return param0;
}
