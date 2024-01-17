int sub_52BF0(int* param0, void* __buf, size_t __n, int* param3) {
    char __s;
    if(gvar_5859E8 != 0) {
        pthread_mutex_t* __mutex = *(pthread_mutex_t**)(param0 + 32);
        if(__mutex != 0) {
            int v0 = pthread_mutex_trylock(__mutex);
            if(v0 == 0) {
                ssize_t len = send(__mutex[SOCK_STREAM].__data.__owner, __buf, __n, 0);
                if(len > 0) {
                    int __buf1 = 0;
                    memset(&__s, 0, 252);
                    ssize_t len1 = recv(__mutex[SOCK_STREAM].__data.__owner, &__buf1, 0x100, 0);
                    int v1 = 0;
                    int v2 = 0;
                    int v3 = 0;
                    int v4 = 0;
                    int v5 = 0;
                    int v6 = 0;
                    int v7 = 0;
                    int v8 = 0;
                    int v9 = 0;
                    int v10 = 0;
                    int v11 = 0;
                    int v12 = 0;
                    int v13 = 0;
                    int v14 = 0;
                    int v15 = 0;
                    int v16 = 0;
                    int v17 = 0;
                    int v18 = 0;
                    if(len1 > 0) {
                        __isoc99_sscanf();
                    }
                    if(param3 != 0) {
                        *param3 = 0;
                    }
                    pthread_mutex_unlock(__mutex);
                    return 0;
                }
                pthread_mutex_unlock(__mutex);
                return -4;
            }
            return -3;
        }
        return -2;
    }
    return -1;
}
