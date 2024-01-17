int sub_2F2C0(pthread_mutex_t* __mutex, int param1, int param2) {
    char __ptr1;
    int result;
    __mutex = pthread_mutex_unlock(__mutex);
    if(__mutex == 0) {
        return 0;
    }
    int* ptr0 = __errno_location();
    snprintf(&__ptr1, 0x800, "WTF MUTEX ERROR ON UNLOCK! errno=%d in %s %s():%d", ptr0[0], "util.c", param1, param2);
    sub_2E584(3, &__ptr1, SOCK_STREAM);
    sub_2A574();
    return result;
}
