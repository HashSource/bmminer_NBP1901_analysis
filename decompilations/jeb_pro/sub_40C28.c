int sub_40C28(int param0, char* param1) {
    int v0;
    int v1;
    int v2;
    int v3;
    int __ptr1;
    char __file;
    int __buf = 0;
    int v4 = pthread_mutex_lock(&g504CC8);
    if(v4 == 0) {
        snprintf(&__file, 64, "/sys/class/gpio/gpio%d/value", param0);
        int __fd = open64(&__file, 0);
        if(__fd >= 0) {
            ssize_t v5 = read(__fd, &__buf, 4);
            if(v5 >= 0) {
                close(__fd);
                pthread_mutex_unlock(&g504CC8);
                long v6 = strtol((char*)&__buf, NULL, 10);
                *param1 = (uint8_t)v6;
                return 0;
            }
            __ptr1 = 1818845510;
            v3 = 1948279909;
            v2 = 1701978223;
            v1 = 1981834337;
            v0 = 0x65756c61;
            short v7 = 2593;
            char v8 = 0;
            sub_2E584(0, &__ptr1, 0);
            close(__fd);
            pthread_mutex_unlock(&g504CC8);
            return -3;
        }
        snprintf(&__ptr1, 0x800, "Failed to open gpio %d value for reading!\n", param0);
        sub_2E584(0, &__ptr1, 0);
        pthread_mutex_unlock(&g504CC8);
        return -2;
    }
    __ptr1 = 1818845542;
    v3 = 1948279909;
    v2 = 1885413487;
    v1 = 1869357161;
    v0 = 0xa6b63;
    sub_2E584(0, &__ptr1, 0);
    return -1;
}
