int sub_2E8A4() {
    char __ptr1;
    int result;
    int v0 = pthread_mutex_lock(&g59450C);
    if(v0 == 0) {
        return 0;
    }
    int* ptr0 = __errno_location();
    snprintf(&__ptr1, 0x800, "WTF MUTEX ERROR ON LOCK! errno=%d in %s %s():%d", ptr0[0], "logging.c", "my_log_curses", 53);
    sub_2E584(3, &__ptr1, SOCK_STREAM);
    sub_2A574();
    return result;
}
