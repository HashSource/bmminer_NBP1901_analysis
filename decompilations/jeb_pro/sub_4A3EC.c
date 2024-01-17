int sub_4A3EC(int param0, int param1) {
    int v0;
    int __ptr1_1;
    int v1 = pthread_mutex_lock(&g5051A8);
    if(v1 == 0) {
        void* __ptr = sub_43440(gvar_5051A4);
        int v2 = *(int*)__ptr((int)__ptr);
        if(v2 != 0) {
            while(***(uint32_t*)(*(int*)((int)__ptr + 20) + 16) != param0) {
                v2 = *(int*)__ptr((int)__ptr);
                if(v2 == 0) {
                    free(__ptr);
                    pthread_mutex_unlock(&g5051A8);
                    return 0;
                }
            }
            void* __ptr1 = (void*)*(int*)((int)__ptr + 8)(v2);
            int v3 = *(int*)((int)__ptr + 4);
            int v4 = *(int*)((int)__ptr1 + 4);
            __ptr1_1 = param1;
            v0 = v4;
            v3((int)__ptr, (int)&__ptr1_1, 8);
            free(__ptr1);
        }
        free(__ptr);
        pthread_mutex_unlock(&g5051A8);
        return 0;
    }
    __ptr1_1 = 1818845542;
    v0 = 1948279909;
    int v5 = 845750383;
    int v6 = 1869357155;
    int v7 = 0xa6b63;
    sub_2E584(0, &__ptr1_1, 0);
    return -4;
}
