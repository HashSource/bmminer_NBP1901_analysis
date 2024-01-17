int sub_42BE0() {
    int v0 = pthread_mutex_lock(&g504FEC);
    if(v0 == 0) {
        int v1 = (int)gvar_7F418;
        if(v1 > 0) {
            sub_42E88(v1);
        }
        return pthread_mutex_unlock(&g504FEC);
    }
    int __ptr1 = 1818845542;
    int v2 = 1948279909;
    int v3 = 1885413487;
    int v4 = 1869357161;
    int v5 = 0xa6b63;
    return sub_2E584(0, &__ptr1, 0);
}
