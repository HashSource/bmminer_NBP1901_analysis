int sub_28EE8(pthread_rwlock_t* __rwlock, int param1, int param2) {
    char __ptr1;
    int v0 = pthread_rwlock_wrlock(__rwlock);
    if(v0 == 0) {
        return 0;
    }
    int* ptr0 = __errno_location();
    snprintf(&__ptr1, 0x800, "WTF WRLOCK ERROR ON LOCK! errno=%d in %s %s():%d", ptr0[0], "bmminer.c", param1, param2);
    return sub_2E584(3, &__ptr1, SOCK_STREAM);
}
