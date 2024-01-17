int sub_499E8(int param0) {
    int result;
    int v0;
    int v1;
    int __ptr1;
    int v2 = pthread_mutex_lock(&g5051A8);
    if(v2 == 0) {
        uint32_t* ptr0 = sub_43338(gvar_5051A4, &v1);
        if(ptr0 == SOCK_STREAM) {
            sub_43358(gvar_5051A4);
        }
        else {
            snprintf(&__ptr1, 0x800, "ctx(%d) is not inited\n", param0);
            sub_2E584(SOCK_STREAM, &__ptr1, 0);
        }
        void* __ptr = sub_43440(gvar_5051A4);
        uint32_t v3 = (uint32_t)*(int*)__ptr((int)__ptr);
        if(v3 != 0) {
            do {
                v0 = *(int*)__ptr((int)__ptr);
            }
            while(v0 != 0);
            free(__ptr);
            return pthread_mutex_unlock(&g5051A8);
        }
        free(__ptr);
        pthread_mutex_unlock(&g5051A8);
        void* __ptr2 = (void*)gvar_5051A4;
        gvar_5051A0 = 0;
        result = sub_43414(__ptr2);
        gvar_5051A4 = 0;
        return result;
    }
    __ptr1 = 1818845542;
    int v4 = 1948279909;
    int v5 = 845750383;
    int v6 = 1869357155;
    int v7 = 0xa6b63;
    return sub_2E584(0, &__ptr1, 0);
}
