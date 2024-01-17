int sub_42E88(int param0) {
    int v0;
    int __ptr1;
    short v1;
    int v2;
    if(gvar_505028 != 0) {
        if(gvar_50502C == param0) {
            int v3 = pthread_mutex_lock(&g505030);
            if(v3 == 0) {
                memset(&g505048, 32, 64);
                int __fd = (int)gvar_50502C;
                (uint64_t)param0 | ((uint64_t)v2 << 32) = lseek64(__fd, 0L, 0);
                write(__fd, &g505048, 64);
                pthread_mutex_unlock(&g505030);
                return 0;
            }
            __ptr1 = 1818845542;
            v0 = 1948279909;
            *(int*)&v1 = 1668030575;
            int v4 = 1869357156;
            int v5 = 0xa6b63;
            sub_2E584(0, &__ptr1, 0);
            return -4;
        }
        __ptr1 = 543449442;
        v0 = 1634886000;
        v1 = 2669;
        char v6 = 0;
        sub_2E584(SOCK_STREAM, &__ptr1, 0);
        return -3;
    }
    return -2;
}
