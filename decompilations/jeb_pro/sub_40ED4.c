int sub_40ED4(int param0, int param1) {
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int __ptr1;
    char __file;
    int v5 = pthread_mutex_lock(&g504CC8);
    if(v5 == 0) {
        snprintf(&__file, 64, "/sys/class/gpio/gpio%d/value", param0);
        int __fd = open64(&__file, O_WRONLY);
        if(__fd >= 0) {
            ssize_t v6 = write(__fd, param1 == 0 ? "01": "\n", 1);
            if(v6 >= 0) {
                close(__fd);
                pthread_mutex_unlock(&g504CC8);
                return 0;
            }
            __ptr1 = 1818845510;
            v4 = 1948279909;
            v3 = 1920409711;
            v2 = 543519849;
            v1 = 1970037110;
            v0 = 663909;
            sub_2E584(0, &__ptr1, 0);
            close(__fd);
            pthread_mutex_unlock(&g504CC8);
            return -3;
        }
        __ptr1 = 1818845510;
        v4 = 1948279909;
        v3 = 1886330991;
        v2 = 1730178661;
        v1 = 544172400;
        v0 = 1970037110;
        int v7 = 1868963941;
        int v8 = 0x72772072;
        int v9 = 1852404841;
        int v10 = 663911;
        sub_2E584(0, &__ptr1, 0);
        pthread_mutex_unlock(&g504CC8);
        return -2;
    }
    __ptr1 = 1818845542;
    v4 = 1948279909;
    v3 = 1885413487;
    v2 = 1869357161;
    v1 = 0xa6b63;
    sub_2E584(0, &__ptr1, 0);
    return -1;
}
