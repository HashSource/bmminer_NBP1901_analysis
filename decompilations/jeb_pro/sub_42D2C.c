int sub_42D2C(int param0, uint32_t param1, int param2, size_t param3) {
    int v0;
    int __ptr1;
    size_t v1;
    int v2;
    size_t __n;
    short v3;
    uint32_t v4 = param1;
    if(gvar_505028 != 0) {
        size_t v5 = param3;
        if(gvar_50502C == param0) {
            char v6 = v5 == 64;
            char v7 = v5 >= 64;
            if(v7 == 0 || v6 != 0) {
                v6 = (uint8_t)v4 == 3;
                v7 = (uint8_t)v4 >= 3;
            }
            int v8 = v7 != 0 && v6 == 0;
            if(v7 == 0 || v6 != 0) {
                int v9 = pthread_mutex_lock(&g505030);
                if(v9 == 0) {
                    do {
                        __n = v5 < 16 ? v5: 16;
                        void* __src = (void*)(param2 + v9);
                        v2 = (uint32_t)((uint8_t)v4 + SOCK_STREAM);
                        v9 += __n;
                        memcpy((void*)(v4 * 16 + 5263432), __src, __n);
                        v1 = v5;
                        v5 -= __n;
                        v4 = (uint8_t)v2;
                    }
                    while(v2 <= 3 && __n != v1);
                    write(gvar_50502C, &g505048, 64);
                    pthread_mutex_unlock(&g505030);
                    return 0;
                }
                __ptr1 = 1818845542;
                v0 = 1948279909;
                *(int*)&v3 = 1668030575;
                int v10 = 1869357156;
                int v11 = 0xa6b63;
                sub_2E584(v8, &__ptr1, v8);
                return -4;
            }
        }
        __ptr1 = 543449442;
        v0 = 1634886000;
        v3 = 2669;
        char v12 = 0;
        sub_2E584(SOCK_STREAM, &__ptr1, 0);
        return -3;
    }
    return -2;
}
