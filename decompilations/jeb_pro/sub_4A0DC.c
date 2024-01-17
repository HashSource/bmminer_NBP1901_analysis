int sub_4A0DC(int param0, char* param1, int param2, int param3, int param4) {
    short v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int __ptr1;
    int v5;
    if(param2 == SOCK_STREAM) {
        int v6 = pthread_mutex_lock(&g5051A8);
        if(v6 == 0) {
            uint32_t* ptr0 = (uint32_t*)gvar_5051A4;
            void* __ptr = NULL;
            int v7 = sub_433D0(ptr0, &v5, &__ptr);
            if(v7 == SOCK_STREAM) {
                void* __ptr2 = __ptr;
                if(param4 != 0) {
                    char* ptr1 = (char*)(param3 - SOCK_STREAM);
                    do {
                        int v8 = *(int*)((int)__ptr2 + 4);
                        int v9 = (uint32_t)*(ptr1 + SOCK_STREAM);
                        ++ptr1;
                        int v10 = (uint32_t)*param1 + v6;
                        ++v6;
                        int v11 = (v10 * 0x100) | ((v8 * 0x8000) & 0x70000) | ((v8 >>> 4) * 0x100000) | (*(int*)__ptr2 * 0x4000000) | 0x1000000 | v9;
                        int v12 = sub_49844();
                        if(v12 == 0) {
                            __ptr1 = 543385961;
                            v4 = 544501614;
                            v3 = 1684104562;
                            v2 = 0x20342079;
                            v1 = 1953067639;
                            v0 = 2661;
                            char v13 = 0;
                            sub_2E584(0, &__ptr1, 0);
                            free(__ptr);
                            pthread_mutex_unlock(&g5051A8);
                            return -2;
                        }
                        sub_40390(12, v11);
                    }
                    while(v6 != param4);
                    __ptr2 = __ptr;
                }
                free(__ptr2);
                pthread_mutex_unlock(&g5051A8);
                return param4;
            }
            snprintf(&__ptr1, 0x800, "ctx %d not inited\n", param0);
            sub_2E584(0, &__ptr1, 0);
            pthread_mutex_unlock(&g5051A8);
            return -2;
        }
        __ptr1 = 1818845542;
        v4 = 1948279909;
        v3 = 845750383;
        v2 = 1869357155;
        v1 = 0xa6b63;
        sub_2E584(0, &__ptr1, 0);
        return -1;
    }
    __ptr1 = 1701998445;
    v4 = 1634235424;
    v3 = 1852776558;
    v2 = 0x79622065;
    v1 = 1914725748;
    *(int*)&v0 = 0x61206765;
    int v14 = 0x65726464;
    int v15 = 1763734387;
    int v16 = 1869488243;
    int v17 = 1970479220;
    int v18 = 1919905904;
    int v19 = 174351732;
    char v20 = 0;
    sub_2E584(0, &__ptr1, 0);
    return -3;
}
