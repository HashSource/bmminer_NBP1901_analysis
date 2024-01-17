int sub_2E3D4(void* __ptr3, int param1, int param2, int param3) {
    char __ptr1;
    if(*(char*)((int)__ptr3 + 4) != 0) {
        int v0 = *(int*)__ptr3;
        char* ptr0 = "klist.c";
        char* ptr1 = "_k_free_list";
        char* ptr2 = "_k_free_list";
        int v1 = 400;
        snprintf(&__ptr1, 0x800, "List %s can\'t %s() a store - from %s %s() line %d in %s %s():%d", v0, "_k_free_list", param1, param2, param3, "klist.c", "_k_free_list", 400);
        sub_2E584(3, &__ptr1, SOCK_STREAM);
        sub_2A574();
    }
    if(*(int*)((int)__ptr3 + 48) > 0) {
        int v2 = 0;
        do {
            void* __ptr = *(void**)(v2 * 4 + *(int*)((int)__ptr3 + 52));
            ++v2;
            free(__ptr);
        }
        while(*(int*)((int)__ptr3 + 48) > v2);
    }
    free(*(void**)((int)__ptr3 + 52));
    if(*(int*)((int)__ptr3 + 56) > 0) {
        int v3 = 0;
        do {
            void* __ptr2 = *(void**)(v3 * 4 + *(int*)((int)__ptr3 + 60));
            ++v3;
            free(__ptr2);
        }
        while(*(int*)((int)__ptr3 + 56) > v3);
    }
    free(*(void**)((int)__ptr3 + 60));
    pthread_mutex_t* __mutex = *(pthread_mutex_t**)((int)__ptr3 + 8);
    pthread_rwlock_destroy((pthread_rwlock_t*)(__mutex + 6));
    pthread_mutex_destroy(__mutex);
    free(*(void**)((int)__ptr3 + 8));
    free(__ptr3);
    return 0;
}
