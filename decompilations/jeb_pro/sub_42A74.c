int sub_42A74() {
    char __ptr1;
    int v0 = pthread_mutex_lock(&g504FEC);
    if(v0 == 0) {
        int v1 = sub_4301C();
        sub_40C28(v1, &__ptr1);
        int result = __ptr1;
        if(result != 0) {
            result = SOCK_STREAM;
        }
        pthread_mutex_unlock(&g504FEC);
        return result;
    }
    *(int*)&__ptr1 = 'f';
    int v2 = 1948279909;
    int v3 = 1885413487;
    int v4 = 1869357161;
    int v5 = 0xa6b63;
    sub_2E584(0, &__ptr1, 0);
    return -1;
}
