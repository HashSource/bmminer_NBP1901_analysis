// Stale decompilation - Refresh this view to re-decompile this code
int sub_40794(int param0) {
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
        if(v5 != 0) {
            int __fd = open64("/sys/class/gpio/export", O_WRONLY);
            if(__fd >= 0) {
                int __n = snprintf(&__name, 64, "\n");
                ssize_t v6 = write(__fd, &__name, (size_t)__n);
                if(v6 >= 0) {
                    close(__fd);
                    pthread_mutex_unlock(&g504CC8);
                    return 0;
                }
                snprintf(&__ptr1, 0x800, "Failed to export gpio %d!", param0);
                sub_2E584(0, &__ptr1, 0);
                close(__fd);
                pthread_mutex_unlock(&g504CC8);
                return -3;
            }
            __ptr1 = 1818845510;
            v3 = 1948279909;
            v2 = 1886330991;
            v1 = 1696624229;
            v0 = 1919905912;
            int v7 = 1868963956;
            int v8 = 0x72772072;
            int v9 = 1852404841;
            int v10 = 663911;
            sub_2E584(0, &__ptr1, 0);
            pthread_mutex_unlock(&g504CC8);
            return -2;
        }
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
