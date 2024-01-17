sem_t* sub_30A94(sem_t* __sem, int param1, int param2, int param3) {
    char __ptr1;
    __sem = sem_init(__sem, 0, 0);
    if(__sem != 0) {
        int* ptr0 = __errno_location();
        int v0 = param2;
        int v1 = param3;
        int v2 = param1;
        snprintf(&__ptr1, 0x800, "Failed to sem_init ret=%d errno=%d in %s %s():%d", __sem, ptr0[0], param1, param2, param3);
        sub_2E584(3, &__ptr1, SOCK_STREAM);
        sub_2A574();
    }
    return __sem;
}
