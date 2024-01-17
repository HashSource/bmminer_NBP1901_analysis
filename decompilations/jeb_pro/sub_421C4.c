int sub_421C4() {
    int v0;
    int v1;
    int v2 = 0;
    prctl(PR_SET_NAME, "ui");
    while(gvar_504FE8 != 0) {
        int v3 = pthread_mutex_lock(&g504FEC);
        if(v3 == 0) {
            void* __ptr1 = sub_43440(gvar_505004);
            int v4 = *(int*)__ptr1((int)__ptr1);
            while(v4 != 0) {
                void* __ptr = (void*)*(int*)((int)__ptr1 + 8)(v4);
                int v5 = *(int*)((int)__ptr + 4);
                if(v5 == 0) {
                    sub_40ED4(***(int***)(*(int*)((int)__ptr1 + 20) + 16), (int)*(char*)((int)__ptr + 8));
                    v5 = *(int*)__ptr;
                    v1 = *(int*)((int)__ptr + 8) - SOCK_STREAM;
                    if(v1 != 0) {
                        v1 = SOCK_STREAM;
                    }
                    v0 = v5;
                    *(int*)((int)__ptr + 8) = v1;
                }
                else {
                    v0 = *(int*)__ptr;
                    v1 = *(int*)((int)__ptr + 8);
                }
                int v6 = v0;
                *(int*)((int)__ptr + 4) = v5 - 200;
                int v7 = v5 - 200;
                int v8 = v1;
                *(int*)((int)__ptr1 + 4)((int)__ptr1, (int)&v6, 12);
                free(__ptr);
                v4 = *(int*)__ptr1((int)__ptr1);
            }
            free(__ptr1);
            pthread_mutex_unlock(&g504FEC);
        }
        usleep(&loc_30D40);
    }
    return 0;
}
