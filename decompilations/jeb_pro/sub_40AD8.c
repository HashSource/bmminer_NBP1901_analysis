int sub_40AD8(int param0, int param1, size_t __n) {
    char __file;
    int __ptr1;
    int v0 = pthread_mutex_lock(&g504CC8);
    if(v0 == 0) {
        snprintf(&__file, 64, "/sys/class/gpio/gpio%d/direction", param0);
        int __fd = open64(&__file, O_WRONLY);
        if(__fd >= 0) {
            if(param1 == 0) {
                __n = 2;
            }
            void* __buf = "out";
            if(param1 == 0) {
                __buf = "in";
            }
            else {
                __n = 3;
            }
            ssize_t v1 = write(__fd, __buf, __n);
            if(v1 >= 0) {
                close(__fd);
                pthread_mutex_unlock(&g504CC8);
                return 0;
            }
            snprintf(&__ptr1, 0x800, "Failed to set gpio %d direction %s !\n", param0, __buf);
            sub_2E584(0, &__ptr1, 0);
            close(__fd);
            pthread_mutex_unlock(&g504CC8);
            return -3;
        }
        snprintf(&__ptr1, 0x800, "Failed to open gpio %d direction for writing!\n", param0);
        sub_2E584(0, &__ptr1, 0);
        pthread_mutex_unlock(&g504CC8);
        return -2;
    }
    __ptr1 = 1818845542;
    int v2 = 1948279909;
    int v3 = 1885413487;
    int v4 = 1869357161;
    int v5 = 0xa6b63;
    sub_2E584(0, &__ptr1, 0);
    return -1;
}
