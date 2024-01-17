void* sub_58834(char* __file) {
    int v0;
    if(__file != 0) {
        void* __mutex = calloc(1, 0x444);
        if(__mutex != 0) {
            int v1 = pthread_mutex_init((pthread_mutex_t*)__mutex, NULL);
            if(v1 == 0) {
                int v2 = open64(__file, O_RDWR|O_CREAT, S_IWOTH|S_IROTH|S_IWGRP|S_IRGRP|S_IWUSR|S_IRUSR);
                if(v2 >= 0) {
                    *(int*)((int)__mutex + 28) = v2;
                    *(char**)((int)__mutex + 24) = __file;
                    return __mutex;
                }
                int* ptr0 = __errno_location();
                int v3 = ptr0[0];
                v0 = __file;
                int v4 = v3;
                sub_5DF98(&g2, "src/rotater.c", 108, "open file[%s] fail, errno[%d]");
                sub_58750((char*)__mutex);
                return NULL;
            }
            int* ptr1 = __errno_location();
            v0 = ptr1[0];
            sub_5DF98(&g2, "src/rotater.c", 95, "pthread_mutex_init fail, errno[%d]");
            free(__mutex);
            return NULL;
        }
        int* ptr2 = __errno_location();
        v0 = ptr2[0];
        sub_5DF98(&g2, "src/rotater.c", 90, "calloc fail, errno[%d]");
        return 0;
    }
    sub_5DF98(&g2, "src/rotater.c", 86, "lock_file is null or 0");
    return NULL;
}
