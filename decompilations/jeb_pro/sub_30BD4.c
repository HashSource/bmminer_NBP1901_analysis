int sub_30BD4(int param0, int param1, int param2, int param3) {
    int v0;
    char __ptr1;
    sem_t* __sem = (sem_t*)param0;
    do {
        param0 = sem_wait(__sem);
        if(param0 == 0) {
            return 0;
        }
        int* ptr0 = __errno_location();
        v0 = ptr0[0];
    }
    while(v0 == 4);
    snprintf(&__ptr1, 0x800, "Failed to sem_wait errno=%d cgsem=0x%p in %s %s():%d", v0, __sem, param1, param2, param3);
    sub_2E584(3, &__ptr1, SOCK_STREAM);
    sub_2A574();
    return param0;
}
