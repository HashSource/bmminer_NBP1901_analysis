int sub_40458(int param0, int param1) {
    int v0;
    int __attr;
    short v1;
    int v2;
    if(param1 != 0) {
        if(gvar_504CA8 == 0) {
            pthread_mutex_init(&g504CAC, NULL);
            void* ptr0 = sub_432D0(&sub_4043C, 0, 0);
            gvar_504CC4 = (uint32_t)ptr0;
            pthread_mutex_init(&g504CC8, NULL);
            gvar_504CE0 = 1;
            pthread_attr_init(&__attr);
            pthread_attr_setstacksize(&__attr, 0x200000);
            pthread_create(&g504CE4, &__attr, &sub_40D90, NULL);
            gvar_504CA8 = 1;
        }
        int v3 = pthread_mutex_lock(&g504CAC);
        if(v3 == 0) {
            uint32_t* ptr1 = sub_43338(gvar_504CC4, &v2);
            if(ptr1 == 0) {
                int* ptr2 = (int*)gvar_504CC4;
                __attr = param1;
                v0 = -1;
                sub_43320(ptr2, &v2, 4, (int)&__attr, 8);
            }
            pthread_mutex_unlock(&g504CAC);
            return 0;
        }
        __attr = 1818845542;
        v0 = 544175136;
        *(int*)&v1 = 1801678700;
        int v4 = 1768974112;
        int v5 = 1952653423;
        int v6 = 1830841458;
        int v7 = 0x78657475;
        short v8 = 10;
        sub_2E584(0, (char*)&__attr, 0);
        return -1;
    }
    __attr = 543449442;
    v0 = 1634886000;
    v1 = 2669;
    char v9 = 0;
    sub_2E584(0, (char*)&__attr, 0);
    return -1;
}
