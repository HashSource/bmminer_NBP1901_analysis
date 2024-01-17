int sub_40D90() {
    int v0 = 0;
    prctl(PR_SET_NAME, "gpio");
    if(gvar_504CE0 != 0) {
        do {
            int v1 = pthread_mutex_lock(&g504CAC);
            if(v1 == 0) {
                void* __ptr1 = sub_43440(gvar_504CC4);
                int v2 = *(int*)__ptr1((int)__ptr1);
                if(v2 != 0) {
                    do {
                        uint32_t* ptr0 = *(uint32_t*)((int)__ptr1 + 20);
                        void* __ptr = (void*)*(int*)((int)__ptr1 + 8)(v2);
                        int v3 = ***(int***)(ptr0 + 4);
                        uint8_t v4 = 0;
                        int v5 = sub_40C28(v3, &v4);
                        if(v5 == 0) {
                            int v6 = *(int*)((int)__ptr + 4);
                            if(v4 != v6) {
                                *(int*)__ptr(v3, v4, v6);
                                int v7 = *(int*)((int)__ptr1 + 4);
                                int v8 = *(int*)__ptr;
                                int v9 = v4;
                                v7((int)__ptr1, (int)&v8, 8);
                            }
                            free(__ptr);
                            v2 = *(int*)__ptr1((int)__ptr1);
                            if(v2 == 0) {
                                goto loc_40EB8;
                            }
                        }
                        else {
                            free(__ptr);
                            goto loc_40EB8;
                        }
                    }
                    while(SOCK_STREAM);
                loc_40EB8:
                }
                free(__ptr1);
                pthread_mutex_unlock(&g504CAC);
            }
            usleep(&loc_30D40);
        }
        while(gvar_504CE0 != 0);
    }
    return 0;
}
