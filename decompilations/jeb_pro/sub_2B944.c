int sub_2B944(char* __s1, size_t param1) {
    short v0;
    int v1;
    int v2;
    int v3;
    int __ptr1;
    if(param1 != SOCK_STREAM) {
        if(param1 == 2) {
            int v4 = strncmp(__s1, "go", 2);
            if(v4 == 0) {
                if(gvar_7EB9C > 3) {
                    __ptr1 = 1918989427;
                    v3 = 1869881460;
                    v2 = 0x696e6920;
                    v1 = 774778484;
                    v0 = 10;
                    sub_2E584(3, &__ptr1, 0);
                }
                sem_post(&g80F40);
            }
            int v5 = strncmp(__s1, "\n", 2);
            if(v5 != 0) {
                return 0;
            }
            if(gvar_7EB9C > 3) {
                __ptr1 = 1869374834;
                v3 = 1881171041;
                v2 = 0x2c6c6f6f;
                v1 = 0x65656e20;
                *(int*)&v0 = 1701978212;
                int v6 = 0x636c6163;
                int v7 = 1952541813;
                short v8 = 2661;
                char v9 = 0;
                sub_2E584(3, &__ptr1, 0);
            }
            sub_265F4();
            gvar_80F50 = 0L;
            gvar_99ED98 = 0;
            gvar_99ED9C = 0;
            gvar_99EDA0 = 0;
            gvar_99EDA4 = 0;
            gvar_99EDA8 = 0;
            gvar_99EDAC = 0;
            gvar_99EDB0 = 0;
            gvar_99EDB4 = 0;
            gvar_99EE08 = 0;
            gvar_99EE0C = 0;
            sub_32CA8();
            gvar_80F58 = 1;
            gvar_80F5C = 1;
            gvar_80F60 = 1;
            return 0;
        }
        else if(param1 != 4) {
            return 0;
        }
        char v10 = *(int*)&__s1[0];
        param1 = gvar_7EB9C;
        gvar_7EABC = (uint32_t)v10;
        if(param1 <= 3) {
            return 0;
        }
        snprintf(&__ptr1, 0x800, "freq_level = %d\n", v10);
        sub_2E584(3, &__ptr1, 0);
        return 0;
    }
    pthread_mutex_lock(&g80A74);
    pthread_cond_signal(&g80A90);
    pthread_mutex_unlock(&g80A74);
    return 0;
}
