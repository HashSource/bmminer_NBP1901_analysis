int sub_42928(int param0) {
    int v0;
    int v1;
    int v2;
    int v3;
    int __ptr1;
    int v4 = pthread_mutex_lock(&g504FEC);
    if(v4 == 0) {
        int* ptr0 = (int*)&gvar_505008;
        do {
            int v5 = *ptr0;
            ++ptr0;
            if(param0 == v5) {
                *(uint32_t*)(v4 * 4 + (int)&gvar_505008) = 0;
                pthread_mutex_unlock(&g504FEC);
                return 0;
            }
            ++v4;
        }
        while(v4 != 5);
        __ptr1 = 0x7473696c;
        v3 = 0x72656e65;
        v2 = 1953459744;
        v1 = 0x67657220;
        v0 = 1702130537;
        int v6 = 543450482;
        int v7 = 0x6f666562;
        int v8 = 681330;
        sub_2E584(SOCK_STREAM, &__ptr1, 0);
        pthread_mutex_unlock(&g504FEC);
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
