int sub_28E74(pthread_rwlock_t* __rwlock, int param1, int param2) {
    char __ptr1;
    int v0 = pthread_rwlock_init(__rwlock, NULL);
    if(v0 == 0) {
        return 0;
    }
    int* ptr0 = __errno_location();
    int v1 = param2;
    int v2 = param1;
    char* ptr1 = "bmminer.c";
    snprintf(&__ptr1, 0x800, "Failed to pthread_rwlock_init errno=%d in %s %s():%d", ptr0[0], "bmminer.c", param1, param2);
    return sub_2E584(3, &__ptr1, SOCK_STREAM);
}
