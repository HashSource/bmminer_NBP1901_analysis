int sub_30C54(sem_t* __sem, int param1, int param2, int param3, int param4) {
    int result;
    int v0;
    int __tp;
    int v1;
    int __abstime;
    int v2;
    clock_gettime(SOCK_STREAM, &__tp);
    int v3 = __tp;
    int v4 = v1 / 1000 * 1000;
    sub_30064((int)&__abstime, v1 / 1000, param1, param1 >> 31);
    do {
        int v5 = v4 + v2;
        int v6 = v3 + __abstime;
        __abstime += v3;
        v2 = v5;
        if(v5 < 0) {
            do {
                v0 = v5;
                v5 += 1000000000;
                --v6;
            }
            while(v0 < -1000000000);
            __abstime = v6;
            v2 = v5;
        }
        else if(v5 > 999999999) {
            int v7 = v5 - 1000000000;
            int v8 = v6 + SOCK_STREAM;
            if(v7 > 999999999) {
                v7 = v5 - 2000000000;
                v8 = v6 + 2;
            }
            __abstime = v8;
            v2 = v7;
        }
        result = sem_timedwait(__sem, &__abstime);
        if(result == 0) {
            return result;
        }
        int* ptr0 = __errno_location();
        result = ptr0[0];
        if(result == 110) {
            return result;
        }
    }
    while(result == 4);
    snprintf((char*)&__tp, 0x800, "Failed to sem_timedwait errno=%d cgsem=0x%p in %s %s():%d", result, __sem, param2, param3, param4);
    sub_2E584(3, (char*)&__tp, SOCK_STREAM);
    sub_2A574();
    return 0;
}
