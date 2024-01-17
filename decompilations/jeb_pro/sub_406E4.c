int sub_406E4(int param0) {
    int __name;
    int v0 = pthread_mutex_lock(&g504CC8);
    if(v0 == 0) {
        snprintf(&__name, 64, "/sys/class/gpio/gpio%d", param0);
        int v1 = access(&__name, 0);
        if(v1 != 0) {
            pthread_mutex_unlock(&g504CC8);
            return 0;
        }
        pthread_mutex_unlock(&g504CC8);
        return SOCK_STREAM;
    }
    __name = 1818845542;
    int v2 = 1948279909;
    int v3 = 1885413487;
    int v4 = 1869357161;
    int v5 = 0xa6b63;
    sub_2E584(0, &__name, 0);
    return -1;
}
