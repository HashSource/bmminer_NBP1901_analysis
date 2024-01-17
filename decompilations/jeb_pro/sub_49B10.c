int sub_49B10(int param0, char* param1, int param2) {
    char v0;
    short v1;
    int v2;
    int v3;
    int v4;
    int v5;
    int __ptr1;
    int v6;
    char* ptr0 = param1;
    int v7 = pthread_mutex_lock(&g5051A8);
    if(v7 == 0) {
        uint32_t* ptr1 = (uint32_t*)gvar_5051A4;
        void* __ptr = NULL;
        int v8 = sub_433D0(ptr1, &v6, &__ptr);
        if(v8 == SOCK_STREAM) {
            void* __ptr2 = __ptr;
            int v9 = *(int*)((int)__ptr2 + 4);
            int v10 = ((v9 * 0x8000) & 0x70000) | ((v9 >>> 4) * 0x100000) | (*(int*)__ptr2 * 0x4000000) | 0x2000000;
            if(param2 != 0) {
                int* ptr2 = (int*)(param2 + ptr0);
                do {
                    int v11 = sub_49844();
                    if(v11 == 0) {
                        free(__ptr);
                        __ptr1 = 543385961;
                        v5 = 544501614;
                        v4 = 1684104562;
                        v3 = 0x20342079;
                        v2 = 1684104562;
                        v1 = 2609;
                        v0 = 0;
                        sub_2E584(0, &__ptr1, 0);
                        pthread_mutex_unlock(&g5051A8);
                        return -2;
                    }
                    sub_40390(12, v10);
                    char* ptr3 = ptr0;
                    ++ptr0;
                    int v12 = sub_498A0(ptr3);
                    if(v12 == 0) {
                        free(__ptr);
                        __ptr1 = 543385961;
                        v5 = 544501614;
                        v4 = 1684104562;
                        v3 = 0x20342079;
                        v2 = 1684104562;
                        v1 = 2610;
                        v0 = 0;
                        sub_2E584(0, &__ptr1, 0);
                        pthread_mutex_unlock(&g5051A8);
                        return -3;
                    }
                }
                while(ptr0 != ptr2);
                __ptr2 = __ptr;
            }
            free(__ptr2);
            pthread_mutex_unlock(&g5051A8);
            return param2;
        }
        snprintf(&__ptr1, 0x800, "ctx %d not inited\n", param0);
        sub_2E584(0, &__ptr1, 0);
        pthread_mutex_unlock(&g5051A8);
        return -2;
    }
    __ptr1 = 1818845542;
    v5 = 1948279909;
    v4 = 845750383;
    v3 = 1869357155;
    v2 = 0xa6b63;
    sub_2E584(0, &__ptr1, 0);
    return -1;
}
