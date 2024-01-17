void* sub_2FC58(void* __ptr1) {
    int* ptr0;
    if(__ptr1 == 0) {
        return 0;
    }
    uint32_t* ptr1 = *(uint32_t**)__ptr1;
    uint32_t* ptr2 = *ptr1;
    void* __ptr = (void*)(ptr1 - SOCK_STREAM);
    void* ptr3 = (void*)(ptr2 - SOCK_STREAM);
    if(ptr1 != __ptr1) {
        do {
            uint32_t* ptr4 = *(uint32_t*)((int)__ptr + 8);
            *(ptr2 + SOCK_STREAM) = *(uint32_t*)((int)__ptr + 8);
            *ptr4 = ptr2;
            free(__ptr);
            __ptr = ptr3;
            ptr2 = *(uint32_t*)((int)ptr3 + 4);
            ptr0 = (int)ptr3 + 4;
            ptr3 = ptr2 - SOCK_STREAM;
        }
        while(__ptr1 != ptr0);
    }
    pthread_cond_destroy((pthread_cond_t*)((int)__ptr1 + 40));
    pthread_mutex_destroy((pthread_mutex_t*)((int)__ptr1 + 12));
    free(__ptr1);
    return __ptr1;
}
