int sub_41D80(int param0, int param1, int* param2, int param3) {
    int __ptr1;
    char v0;
    int v1;
    int* ptr0;
    pthread_mutex_t* ptr1;
    int v2;
    int v3;
    pthread_mutex_t* ptr2 = ptr1;
    int v4 = v1;
    int v5 = v2;
    int* ptr3 = ptr0;
    int v6 = v3;
    if(param3 != 0) {
        param3 = SOCK_STREAM;
    }
    int v7 = param2 != 0 ? param3: SOCK_STREAM;
    char* ptr4 = &__ptr1;
    if((param2 != 0 ? param3: SOCK_STREAM) == 0) {
        int v8 = 5262568;
        pthread_mutex_t* ptr5 = (pthread_mutex_t*)(param0 * 24 + 5262568);
        int v9 = param1;
        int* ptr6 = param2;
        pthread_mutex_lock((pthread_mutex_t*)(param0 * 24 + 5262568));
        if(param1 != 0) {
            snprintf(&__ptr1, 0x800, "unknown set config type = %d\n", param1);
            sub_2E584(SOCK_STREAM, &__ptr1, 0);
            pthread_mutex_unlock((pthread_mutex_t*)(param0 * 24 + 5262568));
            return -5;
        }
        int* ptr7 = &v0;
        __ptr1 = 0;
        int v10 = sub_40314(15, (int*)&__ptr1);
        param3 = __ptr1;
        *param2 = __ptr1;
        *NULL = 0;
        UDF(0);
    }
    return -3;
}
