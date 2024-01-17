char* sub_58750(char* __mutex) {
    pthread_mutex_t* ptr0;
    if(__mutex != 0) {
        int __fd = (int)*(int*)&__mutex[28];
        if(__fd != 0) {
            int v0 = close(__fd);
            if(v0 != 0) {
                int* ptr1 = __errno_location();
                ptr0 = ptr1[0];
                sub_5DF98(&g2, "src/rotater.c", 68, "close fail, errno[%d]");
            }
        }
        int v1 = pthread_mutex_destroy((pthread_mutex_t*)__mutex);
        if(v1 != 0) {
            __errno_location();
            sub_5DF98(&g2, "src/rotater.c", 73, "pthread_mutex_destroy fail, errno[%d]");
        }
        ptr0 = __mutex;
        sub_5DF98(NULL, "src/rotater.c", 76, "zlog_rotater_del[%p]");
        free(__mutex);
        return __mutex;
    }
    return sub_5DF98(&g2, "src/rotater.c", 64, "a_rotater is null or 0");
}
