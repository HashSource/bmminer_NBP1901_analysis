int sub_41EC0(int param0, uint32_t* param1, int* param2, int param3) {
    int __ptr1;
    char v0;
    uint32_t* ptr0;
    int* ptr1;
    pthread_mutex_t* ptr2;
    int v1;
    int v2;
    pthread_mutex_t* ptr3 = ptr2;
    uint32_t* ptr4 = ptr0;
    int v3 = v1;
    int* ptr5 = ptr1;
    int v4 = v2;
    if(param3 != 0) {
        param3 = SOCK_STREAM;
    }
    int v5 = param2 != 0 ? param3: SOCK_STREAM;
    char* ptr6 = &__ptr1;
    if((param2 != 0 ? param3: SOCK_STREAM) == 0) {
        int v6 = 5262568;
        pthread_mutex_t* ptr7 = (pthread_mutex_t*)(param0 * 24 + 5262568);
        uint32_t* ptr8 = param1;
        int* ptr9 = param2;
        pthread_mutex_lock((pthread_mutex_t*)(param0 * 24 + 5262568));
        if(param1 != 0) {
            snprintf(&__ptr1, 0x800, "unknown set config type = %d\n", param1);
            sub_2E584(SOCK_STREAM, &__ptr1, 0);
            pthread_mutex_unlock((pthread_mutex_t*)(param0 * 24 + 5262568));
            return -5;
        }
        int* ptr10 = &v0;
        __ptr1 = NULL;
        int v7 = sub_40314(15, (int*)&__ptr1);
        param3 = (uint8_t)(int*)((int)(int*)((int)__ptr1 >>> 16) & 0x3f);
        *param2 = (uint32_t)(uint8_t)(int*)((int)(int*)((int)__ptr1 >>> 16) & 0x3f);
        *(uint32_t**)0 = NULL;
        UDF(0);
    }
    return -3;
}
