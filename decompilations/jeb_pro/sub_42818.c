int sub_42818(uint32_t param0) {
    int v0;
    int v1;
    int v2;
    int v3;
    int __ptr1;
    int result = pthread_mutex_lock(&g504FEC);
    if(result == 0) {
        if(gvar_505024 == 0) {
            int v4 = sub_42388(0x100);
            sub_40458(v4, &sub_424C8);
            int v5 = sub_42388(0x101);
            sub_40458(v5, &sub_424C8);
            gvar_505024 = 1;
        }
        int* ptr0 = (int*)&gvar_505008;
        int v6 = 0;
        do {
            int v7 = *ptr0;
            ++ptr0;
            if(v7 == 0) {
                *(uint32_t*)(v6 * 4 + (int)&gvar_505008) = param0;
                pthread_mutex_unlock(&g504FEC);
                return result;
            }
            ++v6;
        }
        while(v6 != 5);
        result = -2;
        __ptr1 = 1830842222;
        v3 = 543519343;
        v2 = 0x7473696c;
        v1 = 0x72656e65;
        v0 = 0x61766120;
        int v8 = 1650551913;
        int v9 = 0xa656c;
        sub_2E584(0, &__ptr1, 0);
        pthread_mutex_unlock(&g504FEC);
        return result;
    }
    __ptr1 = 1818845542;
    v3 = 1948279909;
    v2 = 1885413487;
    v1 = 1869357161;
    v0 = 0xa6b63;
    sub_2E584(0, &__ptr1, 0);
    return -1;
}
