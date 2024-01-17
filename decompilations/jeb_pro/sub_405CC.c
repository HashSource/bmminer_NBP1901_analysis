int sub_405CC(int param0, int param1) {
    int v0;
    int v1;
    int v2;
    int v3;
    int v4;
    int __ptr1;
    short v5;
    int v6;
    short v7;
    if(param1 != 0) {
        int v8 = pthread_mutex_lock(&g504CAC);
        if(v8 == 0) {
            uint32_t* ptr0 = sub_43338(gvar_504CC4, &v6);
            if(ptr0 == SOCK_STREAM) {
                sub_43358(gvar_504CC4);
            }
            else {
                __ptr1 = 0x6c6c6163;
                v4 = 1801675106;
                *(int*)&v5 = 1853187616;
                v3 = 1869182051;
                v2 = 0x6f6e206e;
                v1 = 1701978228;
                v0 = 0x74736967;
                *(int*)&v7 = 0x64657265;
                int v9 = 0x66656220;
                int v10 = 174420591;
                char v11 = 0;
                sub_2E584(SOCK_STREAM, &__ptr1, 0);
            }
            pthread_mutex_unlock(&g504CAC);
            return 0;
        }
        __ptr1 = 1818845542;
        v4 = 544175136;
        *(int*)&v5 = 1801678700;
        v3 = 1768974112;
        v2 = 1952653423;
        v1 = 1830841458;
        v0 = 0x78657475;
        v7 = 10;
        sub_2E584(0, &__ptr1, 0);
        return -1;
    }
    __ptr1 = 543449442;
    v4 = 1634886000;
    v5 = 2669;
    char v12 = 0;
    sub_2E584(0, &__ptr1, 0);
    return -1;
}
