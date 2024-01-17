void* sub_2D724(int param0, int param1, char* param2, char* param3, char param4, int param5, int param6, int param7) {
    char* ptr0;
    char* ptr1;
    char* ptr2;
    char __ptr1;
    char v0 = param4;
    if((int)param2 <= 0) {
        ptr2 = "klist.c";
        ptr1 = "_k_new_list";
        int v1 = 100;
        ptr0 = param2;
        snprintf(&__ptr1, 0x800, "Invalid new list %s with allocate %d must be > 0 in %s %s():%d", param0, param2, "klist.c", "_k_new_list", 100);
        sub_2E584(3, &__ptr1, SOCK_STREAM);
        sub_2A574();
        if((int)param3 < 0) {
        loc_2D84C:
            ptr2 = "klist.c";
            ptr1 = "_k_new_list";
            v1 = 103;
            ptr0 = param3;
            snprintf(&__ptr1, 0x800, "Invalid new list %s with limit %d must be >= 0 in %s %s():%d", param0, param3, "klist.c", "_k_new_list", 103);
            sub_2E584(3, &__ptr1, SOCK_STREAM);
            sub_2A574();
        }
    }
    else if((int)param3 < 0) {
        goto loc_2D84C;
    }
    void* result = calloc(1, 64);
    if(result == 0) {
        ptr0 = "klist.c";
        ptr2 = "_k_new_list";
        ptr1 = &g6B;
        snprintf(&__ptr1, 0x800, "Failed to calloc list %s in %s %s():%d", param0, "klist.c", "_k_new_list", 107);
        sub_2E584(3, &__ptr1, SOCK_STREAM);
        sub_2A574();
    }
    *(char*)((int)result + 4) = 0;
    void* ptr3 = calloc(1, 56);
    pthread_mutex_t* __mutex = (pthread_mutex_t*)ptr3;
    *(void**)((int)result + 8) = ptr3;
    if(ptr3 == 0) {
        ptr0 = "klist.c";
        ptr2 = "_k_new_list";
        ptr1 = &g71;
        snprintf(&__ptr1, 0x800, "Failed to calloc lock for list %s in %s %s():%d", param0, "klist.c", "_k_new_list", 113);
        sub_2E584(3, &__ptr1, SOCK_STREAM);
        sub_2A574();
        __mutex = *(pthread_mutex_t**)((int)result + 8);
    }
    int v2 = pthread_mutex_init(__mutex, NULL);
    if(v2 != 0) {
        int* ptr4 = __errno_location();
        int v3 = ptr4[0];
        ptr0 = "klist.c";
        ptr2 = "_k_new_list";
        ptr1 = &g73;
        snprintf(&__ptr1, 0x800, "Failed to pthread_mutex_init errno=%d in %s %s():%d", v3, "klist.c", "_k_new_list", 115);
        sub_2E584(3, &__ptr1, SOCK_STREAM);
        sub_2A574();
    }
    int v4 = pthread_rwlock_init((pthread_rwlock_t*)(__mutex + 6), NULL);
    if(v4 != 0) {
        int* ptr5 = __errno_location();
        int v5 = ptr5[0];
        ptr0 = "klist.c";
        ptr2 = "_k_new_list";
        ptr1 = &g73;
        snprintf(&__ptr1, 0x800, "Failed to pthread_rwlock_init errno=%d in %s %s():%d", v5, "klist.c", "_k_new_list", 115);
        sub_2E584(3, &__ptr1, SOCK_STREAM);
        sub_2A574();
    }
    *(int*)result = param0;
    int v6 = param7;
    *(int*)((int)result + 20) = param1;
    int v7 = param6;
    *(char**)((int)result + 36) = param2;
    int v8 = param5;
    *(char**)((int)result + 40) = param3;
    *(char*)((int)result + 44) = v0;
    sub_2D340(result, v8, v7, v6);
    return result;
}
