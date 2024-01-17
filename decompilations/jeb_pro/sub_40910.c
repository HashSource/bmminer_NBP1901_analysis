int sub_40910(int param0) {
    int v0;
    int v1;
    int v2;
    int v3;
    char __name;
    int __ptr1;
    int v4 = pthread_mutex_lock(&g504CC8);
    if(v4 == 0) {
        snprintf(&__name, 64, "/sys/class/gpio/gpio%d", param0);
        int v5 = access(&__name, 0);
        if(v5 == 0) {
            int __fd = open64("/sys/class/gpio/unexport", SOCK_STREAM);
            if(__fd >= 0) {
                int __n = snprintf(&__name, 64, "\n");
                ssize_t v6 = write(__fd, &__name, (size_t)__n);
                if(v6 >= 0) {
                    close(__fd);
                    pthread_mutex_unlock(&g504CC8);
                    return 0;
                }
                snprintf(&__ptr1, 0x800, "Failed to unexport gpio %d!", param0);
                sub_2E584(0, &__ptr1, 0);
                close(__fd);
                pthread_mutex_unlock(&g504CC8);
                return -2;
            }
            __ptr1 = 1818845510;
            v3 = 1948279909;
            v2 = 1886330991;
            v1 = 1965059685;
            v0 = 0x7078656e;
            int v7 = 544502383;
            int v8 = 544370534;
            int v9 = 1953067639;
            int v10 = 0x21676e69;
            short v11 = 10;
            sub_2E584(0, &__ptr1, 0);
            pthread_mutex_unlock(&g504CC8);
            return -2;
        }
        snprintf(&__ptr1, 0x800, "port %d already unexported, ret = %d\n", param0, v5);
        sub_2E584(SOCK_STREAM, &__ptr1, 0);
        perror("access error");
        pthread_mutex_unlock(&g504CC8);
        return 0;
    }
    __ptr1 = 1818845542;
    v3 = 1948279909;
    v2 = 1885413487;
    v1 = 1869357161;
    v0 = 0xa6b63;
    sub_2E584(0, &__ptr1, 0);
    return -1;
}
