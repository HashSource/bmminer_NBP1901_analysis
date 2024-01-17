int sub_49CFC(int param0, int param1, int param2) {
    int v0;
    int v1;
    int v2;
    int v3;
    int __ptr1;
    int v4;
    int v5 = pthread_mutex_lock(&g5051A8);
    if(v5 == 0) {
        uint32_t* ptr0 = (uint32_t*)gvar_5051A4;
        void* __ptr = NULL;
        int v6 = sub_433D0(ptr0, &v4, &__ptr);
        if(v6 == SOCK_STREAM) {
            void* __ptr2 = __ptr;
            if(param2 != 0) {
                char* ptr1 = (char*)(param1 - SOCK_STREAM);
                int v7 = param1 + param2 - SOCK_STREAM;
                do {
                    int v8 = *(int*)((int)__ptr2 + 4);
                    int v9 = (uint32_t)*(ptr1 + SOCK_STREAM);
                    ++ptr1;
                    int v10 = ((v8 * 0x8000) & 0x70000) | (*(int*)__ptr2 * 0x4000000) | ((v8 >>> 4) * 0x100000) | v9;
                    int v11 = sub_49844();
                    if(v11 == 0) {
                        free(__ptr);
                        __ptr1 = 543385961;
                        v3 = 544501614;
                        v2 = 1684104562;
                        v1 = 0x20342079;
                        v0 = 1953067639;
                        short v12 = 2661;
                        char v13 = 0;
                        sub_2E584(0, &__ptr1, 0);
                        pthread_mutex_unlock(&g5051A8);
                        return -2;
                    }
                    sub_40390(12, v10);
                }
                while(ptr1 != v7);
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
    v3 = 1948279909;
    v2 = 845750383;
    v1 = 1869357155;
    v0 = 0xa6b63;
    sub_2E584(0, &__ptr1, 0);
    return -1;
}
